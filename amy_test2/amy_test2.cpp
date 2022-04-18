/*
syntax = "proto2";
package video_stream;
 
message Test {
  repeated Obj objs = 1;
}

message Obj {
  optional int64 id = 1;
  optional string name = 2;
}
*/
#include <iostream>
#include <string.h>
#include "amy_test2.pb.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include "google/protobuf/text_format.h"

using namespace video_stream;
using namespace std;
using ::google::protobuf::RepeatedPtrField;
using ::google::protobuf::int64;
using video_stream::Obj;


void init(Test& test) {
    Obj* o;
    o = test.add_objs();
    o->set_id(1);
    o->set_name("o1");

    o = test.add_objs();
    o->set_id(2);
    o->set_name("o2");
}

int main() {
    Test test;

    //init
    init(test);

    cout << "size:" << test.objs_size() << endl;
    cout << "get:" << test.objs(1).name() << endl;

    //itera
    const RepeatedPtrField<Obj>& obj_vec = test.objs();
    for (auto itr = obj_vec.begin(); itr != obj_vec.end(); ++itr) {
        //itr->id() = 1000;
        //itr->set_id(itr->id() + 1000);
        cout << "id:" << itr->id() << ",name:" << itr->name() << endl;
    }
    cout << "----------print------------" << endl;
    std::string str;
    google::protobuf::TextFormat::PrintToString(test, &str);
    std::cout << str << std::endl;

    //mutable itera
    RepeatedPtrField<Obj>* obj_vec1 = test.mutable_objs();
    for (auto itr = obj_vec1->begin(); itr != obj_vec1->end(); ++itr) {
        itr->set_id(itr->id() + 100);
        cout << "id:" << itr->id() << ",name:" << itr->name() << endl;
    }
    cout << "----------print------------" << endl;
    std::string new_str;
    google::protobuf::TextFormat::PrintToString(test, &new_str);
    std::cout << new_str << std::endl;


    return 0;
}