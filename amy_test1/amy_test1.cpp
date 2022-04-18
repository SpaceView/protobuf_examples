/*
syntax = "proto2";
package video_stream;

message Test {
  repeated int64 id = 1;
}

my_test1.cpp
原文链接：https ://blog.csdn.net/liuxiao723846/article/details/105564742
*/

#include <iostream>
#include <string.h>
#include <unordered_map>
#include <vector>
#include "amy_test1.pb.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include "google/protobuf/text_format.h"

using namespace video_stream;
using namespace std;
using ::google::protobuf::RepeatedField;
using ::google::protobuf::int64;

int main() {
    Test test;

    //init
    test.add_id(12);
    test.add_id(13);
    test.add_id(14);

    cout << "size:" << test.id_size() << endl;
    cout << "get:" << test.id(1) << endl;

    test.set_id(1, 1000);
    //itera
    const RepeatedField<int64>& id_vec = test.id();
    for (auto itr = id_vec.begin(); itr != id_vec.end(); ++itr) {
        //(*itr) += 1000; //*itr += 1000;
        //itr[0] += 1000;        
        cout << "id:" << *itr << endl;
    }
    cout << "----------print------------" << endl;
    std::string str;
    google::protobuf::TextFormat::PrintToString(test, &str);
    std::cout << str << std::endl;

    //mutable itera
    RepeatedField<int64>* id_vec1 = test.mutable_id();
    for (auto itr = id_vec1->begin(); itr != id_vec1->end(); ++itr) {
        *itr += 100;
        cout << "id:" << *itr << endl;
    }
    cout << "----------print------------" << endl;
    std::string new_str;
    google::protobuf::TextFormat::PrintToString(test, &new_str);
    std::cout << new_str << std::endl;


    return 0;
}
