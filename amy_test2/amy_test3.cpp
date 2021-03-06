/*
使用 mutable_XXX 方式获取对象指针，然后设置对象属性，
或者，
使用 copyFrom 直接拷贝，也可以使用Swap进行交换。

syntax = "proto2";
package video_stream;

message Test {
  optional Obj obj = 1;
}
 
message Obj {
  optional int64 id = 1;
  optional string name = 2;
}
*/

#include <iostream>
#include <string.h>
#include "my_test3.pb.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include "google/protobuf/text_format.h"
 
using namespace video_stream;
using namespace std;
using ::google::protobuf::RepeatedPtrField;
using ::google::protobuf::int64;
 
 
void init(Test& test) {
  Obj* o = test.mutable_obj();
  o->set_id(1);
  o->set_name("o1");
}
void printLog(Test& test) {
  std::string str;
  google::protobuf::TextFormat::PrintToString(test, &str);
  std::cout<< str <<std::endl;
}
int main() {
  Test test;
 
  //init
  init(test);
 
  cout << "----------print------------" << endl;
  printLog(test);
 
  //copy from
  Obj o1;
  o1.set_id(2);
  o1.set_name("o2");
  
  test.mutable_obj()->CopyFrom(o1);
  cout << "----------copyfrom-print------------" << endl;
  printLog(test);
 
  //swap
  Obj o2;
  o2.set_id(99);
  o2.set_name("o99");
  test.mutable_obj()->Swap(&o2);
  cout << "----------swap-print------------" << endl;
  printLog(test);
  cout << "----------obj-print------------" << endl;
  std::string str;
  google::protobuf::TextFormat::PrintToString(o2, &str);
  std::cout<< str <<std::endl;
 
  return 0;
}
