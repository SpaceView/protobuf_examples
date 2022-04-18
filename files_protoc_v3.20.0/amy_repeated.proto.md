![](https://assets.vlitag.com/widget/2020/06/22/1592801729.jpg)![](https://assets.vlitag.com/widget/2019/11/05/1572962870.jpg)![](https://assets.vlitag.com/widget/2019/11/05/1572962830.jpg)![](https://assets.vlitag.com/widget/2020/07/30/1596163502.jpg)![](https://assets.vlitag.com/widget/2022/03/31/1648753746.png)![](https://assets.vlitag.com/widget/2022/03/31/1648753124.png)![](https://assets.vlitag.com/widget/2019/11/05/1572962830.jpg)![](https://assets.vlitag.com/widget/2020/06/22/1592801729.jpg)![](https://assets.vlitag.com/widget/2019/11/05/1572962870.jpg)

![](https://assets.vlitag.com/widget/2019/11/05/1572962830.jpg)

# [Programmer Group](https://programmer.group/)

A programming skills sharing group

- [Home](https://programmer.group/)
   - [Articles](https://programmer.group/articles/)
   - [Keywords](https://programmer.group/keywords/)

# Explanation of Google Protocol Buffer (protobuf)

Keywords: [Google](https://programmer.group/keywords/google) [iOS](https://programmer.group/keywords/ios) [encoding](https://programmer.group/keywords/encoding) [Java](https://programmer.group/keywords/java)

Code Walkthrough: Detailed Use of protobuf in caffe

#### [1] Proto file, take BlobShape in caffe.proto as an example

> syntax = "proto2";    //Specify the protobuf version, default is v2, other versions: "proto3"
> package caffe;     // Finally generate c + + code: namespace caffe 
> message BlobShape {    // Finally generate c++ code: class BlobShape: public:: google:: protobuf:: Message{
>   //The following statement finally generates c++ code: google:: protobuf:: Repeated Field <: google:: protobuf:: Int64 > dim_;
>   repeated int64 dim = 1 [packed = true];    //repeated list field, number after equal sign denotes identifier, [packed=true] guarantees more efficient encoding
> }

#### [2] Compile command protoc-I=. --cpp_out=. caffe. proto

#### [3] generated caffe.pb.h

> ......
> namespace caffe {    //Corresponding to package caffe in caffe.proto;
> // Implementation details inside protobuf -- don't call these interfaces
> void  protobuf_AddDesc_caffe_2eproto();
> void protobuf_AssignDesc_caffe_2eproto();
> void protobuf_ShutdownFile_caffe_2eproto();
> class BlobShape;
> // ===================================================================
> class BlobShape : public ::google::protobuf::Message {    //Corresponding to message BlobShape in caffe.proto
>  public:
>   BlobShape(); // Constructor
>   virtual ~BlobShape(); //Destructive function
>   BlobShape(const BlobShape& from); // copy constructor
>   inline BlobShape& operator=(const BlobShape& from) { //Assignment constructor
>     CopyFrom(from);
>     return *this;
>   }
> 
> // ** UnknownField Set is used to track the fields seen when parsing protocol messages but their field numbers or types cannot be recognized.
> // This situation most often occurs when new fields are added to message types, and then messages containing these fields are read by old software compiled before adding new types.
> // Most users never need to use this class. For example, it's not used in caffe
> // Reference Web Site: https://developers.google.com/protocol-buffers/docs/reference/java/com/google/protobuf/UnknownField Set
>   inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
>     return _unknown_fields_;
>   }
>   inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
>     return &_unknown_fields_;
>   }
> 
> // ** Describing metadata, mainly in reflection, not in caffe
> // Reference Web site: http://www.blogjava.net/DLevin/archive/2015/04/01/424012.html
>   static const ::google::protobuf::Descriptor* descriptor();
>   static const BlobShape& default_instance();
>   void Swap(BlobShape* other);    // exchange
>   // Implementing Message Message Message
>   BlobShape* New() const;    // Newly build
>   void CopyFrom(const ::google::protobuf::Message& from);    // copy
>   void MergeFrom(const ::google::protobuf::Message& from);    // Merge: Single digit segments will be overwritten, Repeated (similar to linked list) fields will be linked together
>   void CopyFrom(const BlobShape& from);
>   void MergeFrom(const BlobShape& from);
>   void Clear();    // Clear all fields of the message and set them to default values.
>   bool IsInitialized() const;    // Quickly check whether all required fields have values set.
>   int ByteSize() const;    // Serialization size of messages
>   bool MergePartialFromCodedStream(::google::protobuf::io::CodedInputStream* input);    //Read the protocol buffer from the stream and merge it into this message.
>   void SerializeWithCachedSizes(::google::protobuf::io::CodedOutputStream* output) const;    //Serialize the message without recalculating the size.
>   ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;    //Serialize to output
>   int GetCachedSize() const { return _cached_size_; }    //Returns the result of the last call to ByteSize()
>   private:
>   void SharedCtor();
>   void SharedDtor();
>   void SetCachedSize(int size) const;
>   public:
>   ::google::protobuf::Metadata GetMetadata() const;    // Get buffer size
>   // Types embedded in nested types message
>   // If defined in proto's mesage
>   /* 
>   enum SnapshotFormat {
>     HDF5 = 0;
>     BINARYPROTO = 1;
>   }
>   */
>   // Generate the following code:
>   /*
>   enum SolverParameter_SnapshotFormat {
>     SolverParameter_SnapshotFormat_HDF5 = 0,
>     SolverParameter_SnapshotFormat_BINARYPROTO = 1
>   };
>   bool SolverParameter_SnapshotFormat_IsValid(int value);
>   const SolverParameter_SnapshotFormat SolverParameter_SnapshotFormat_SnapshotFormat_MIN = SolverParameter_SnapshotFormat_HDF5;
>   const SolverParameter_SnapshotFormat SolverParameter_SnapshotFormat_SnapshotFormat_MAX = SolverParameter_SnapshotFormat_BINARYPROTO;
>   const int SolverParameter_SnapshotFormat_SnapshotFormat_ARRAYSIZE = SolverParameter_SnapshotFormat_SnapshotFormat_MAX + 1;
> 
>   typedef SolverParameter_SnapshotFormat SnapshotFormat;
>   static const SnapshotFormat HDF5 = SolverParameter_SnapshotFormat_HDF5;
>   static const SnapshotFormat BINARYPROTO = SolverParameter_SnapshotFormat_BINARYPROTO;
>   static inline bool SnapshotFormat_IsValid(int value) {
>     return SolverParameter_SnapshotFormat_IsValid(value);
>   }
>   static const SnapshotFormat SnapshotFormat_MIN = SolverParameter_SnapshotFormat_SnapshotFormat_MIN;
>   static const SnapshotFormat SnapshotFormat_MAX = SolverParameter_SnapshotFormat_SnapshotFormat_MAX;
>   static const int SnapshotFormat_ARRAYSIZE = SolverParameter_SnapshotFormat_SnapshotFormat_ARRAYSIZE;
>   static inline const ::google::protobuf::EnumDescriptor*
>   SnapshotFormat_descriptor() {
>     return SolverParameter_SnapshotFormat_descriptor();
>   }
>   static inline const ::std::string& SnapshotFormat_Name(SnapshotFormat value) {
>     return SolverParameter_SnapshotFormat_Name(value);
>   }
>   static inline bool SnapshotFormat_Parse(const ::std::string& name, SnapshotFormat* value) {
>     return SolverParameter_SnapshotFormat_Parse(name, value);
>   }
>   */
> 
>   // accessors -------------------------------------------------------
>   // repeated int64 dim = 1 [packed = true]; // operations on dim members
>   inline int dim_size() const;    // Returns the dim list size
>   inline void clear_dim();    // empty
>   static const int kDimFieldNumber = 1;    // * The value of FieldNumber corresponds to dim = 1 identifier 1
>   inline ::google::protobuf::int64 dim(int index) const;    // Gets the value of the specified index in the list dim
>   inline void set_dim(int index, ::google::protobuf::int64 value); // Set the list dim to specify the value of the index
>   inline void add_dim(::google::protobuf::int64 value);    // Add new elements to list dim
>   inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >& dim() const; // Returns the const reference of dim, not modifiable
>   inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*  mutable_dim();    // Return the dim pointer, which can be modified
>   // @@protoc_insertion_point(class_scope:caffe.BlobShape)
>  private:
>   ::google::protobuf::UnknownFieldSet _unknown_fields_;
>   ::google::protobuf::RepeatedField< ::google::protobuf::int64 > dim_;
>   mutable int _dim_cached_byte_size_;
>   mutable int _cached_size_;
>   ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];    // 1 denotes that the number of members defined in message BlobShape is 1
>   friend void  protobuf_AddDesc_caffe_2eproto();
>   friend void protobuf_AssignDesc_caffe_2eproto();
>   friend void protobuf_ShutdownFile_caffe_2eproto();
>   void InitAsDefaultInstance();
>   static BlobShape* default_instance_;
> };
> // ===================================================================
> // BlobShape Corresponding Operations
> // repeated int64 dim = 1 [packed = true];
> inline int BlobShape::dim_size() const { //dim is in the form of a list, so it provides an interface for returning sizes
>   return dim_.size();
> }
> inline void BlobShape::clear_dim() { // empty
>   dim_.Clear();
> }
> inline ::google::protobuf::int64 BlobShape::dim(int index) const { //Gets the value of the specified index
>   return dim_.Get(index);
> }
> inline void BlobShape::set_dim(int index, ::google::protobuf::int64 value) { //Sets the value of the specified index
>   dim_.Set(index, value);
> }
> inline void BlobShape::add_dim(::google::protobuf::int64 value) { //Incrementally add values to list dim
>   dim_.Add(value);
> }
> inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
> BlobShape::dim() const { //Return read-only dim
>   return dim_;
> }
> inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
> BlobShape::mutable_dim() { //Returns readable and writable dim
>   return &dim_;
> }
> ......

#### [4] [Generated caffe.pb.cc](http://xn--caffe-vl6jv51iwlc.pb.cc/)

slightly

#### [5] Notes on the official website

Google's official website notes: [Protocol Buffers &nbsp;|&nbsp; Google Developers](https://developers.google.com/protocol-buffers/)  
c++API Manual: [C++ API &nbsp;|&nbsp; Protocol Buffers &nbsp;|&nbsp; Google Developers](https://developers.google.com/protocol-buffers/docs/reference/cpp/#google.protobuf)

#### [6] Use

##### 1. Read protobuf in text format into Message

###### 1.1 Take ReadProtoFromTextFile in caffe as an example

Call steps for ReadProtoFromTextFile:  
train() --> caffe::ReadSolverParamsFromTextFileOrDie(FLAGS_solver, &solver_param); --> ReadProtoFromTextFile(param_file, param)

###### 1.2. ReadProtoFromTextFile Source Details

> bool ReadProtoFromTextFile(const char* filename, Message* proto) {
>   int fd = open(filename, O_RDONLY);
>   CHECK_NE(fd, -1) << "File not found: " << filename;
>   FileInputStream* input = new FileInputStream(fd);
>   bool success = google::protobuf::TextFormat::Parse(input, proto);
>   delete input;
>   close(fd);
>   return success;
> }

1.2.1 FileInputStream Details  
Official note:

FileInputStream inherits from ZeroCopyInputStream (read stream from file descriptor)

Usage: (Reference to Builder Function)

> explicit FileInputStream(int file_descriptor, int block_size = -1);

Parameters:

    file_descriptor: Unix file descriptor
    block_size: The size read and returned when Next() is specified, and a reasonable default value is used when not specified.

1.2.2 google::protobuf::TextFormat::Parse  
TextFormat class:

This class implements protobuf text format. Printing and parsing protocol messages in text format is very useful for debugging and editing messages manually.
This class is actually a namespace containing only static methods.

Static function Parse:

Parse text format protocol messages from a given input stream to a given message object. This function parses the format written by Print().
static bool Parse(io::ZeroCopyInputStream* input, Message* output);

Other similar static functions:

> static bool ParseFromString(const string& input, Message* output);  // Resolve directly from strings
> static bool Merge(io::ZeroCopyInputStream* input, Message* output); // Resolve from the stream and merge into Message, see Message::MergeFrom()
> static bool MergeFromString(const string& input, Message* output);  // Ibid., but parsed directly from strings
> //Resolve a single field value into the specified field field field field of the specified message
> static bool ParseFieldValueFromString(const string& input, const FieldDescriptor* field, Message* message); 

Corresponding Back Operation: Print Message to Stream or Text

> static bool Print(const Message& message, io::ZeroCopyOutputStream* output); // Print message to the output stream
> static bool PrintToString(const Message& message, string* output);    // Print message to a string
> // The field field field specified by message is output to the string. When a field is in list format, specify a reference index; when not in list format, index must be - 1
> static void PrintFieldValueToString(const Message& message, const FieldDescriptor* field, int index, string* output); 
> // Print the fields in the Unknown Field Set. They are printed only by label number. By trying to parse embedded messages, they can be recognized intuitively.
> static bool PrintUnknownFields(const UnknownFieldSet& unknown_fields, io::ZeroCopyOutputStream* output); 

##### 2. Serializing message into binary files

###### 2.1 Take WriteProtoToBinaryFile function in caffe as an example

> void WriteProtoToBinaryFile(const Message& proto, const char* filename) {
>   fstream output(filename, ios::out | ios::trunc | ios::binary);
>   CHECK(proto.SerializeToOstream(&output));    
>   // The prototype bool Message::SerializeToOstream(ostream* output) const; to serialize the message into the c++ standard output stream, all required fields must be set.
> }

###### 2.2 Summary of serialization functions:

> // To serialize Message into a file descriptor, all required fields must be set.
> bool SerializeToFileDescriptor(int file_descriptor) const;    
> // Ibid., but allow for the absence of required fields.    
> bool SerializePartialToFileDescriptor(int file_descriptor) const;
> // To serialize Message into the c++ standard output stream, all required fields must be set.
> bool SerializeToOstream(ostream* output) const;    
> // Ibid., but allow for the absence of required fields.        
> bool SerializePartialToOstream(ostream* output) const;     

##### 3. Deserialize from binary file to message

###### 3.1 Take ReadProtoFromBinaryFile in caffe as an example

> bool ReadProtoFromBinaryFile(const char* filename, Message* proto) {
>   int fd = open(filename, O_RDONLY);
>   CHECK_NE(fd, -1) << "File not found: " << filename;
>   ZeroCopyInputStream* raw_input = new FileInputStream(fd);
>   CodedInputStream* coded_input = new CodedInputStream(raw_input);
>   coded_input->SetTotalBytesLimit(kProtoReadBytesLimit, 536870912);
>   bool success = proto->ParseFromCodedStream(coded_input);    
>   // Prototype bool ParseFromCodedStream(io::CodedInputStream* input);
>   delete coded_input;
>   delete raw_input;
>   close(fd);
>   return success;
> }

###### 3.2 Other deserialization functions:

> bool ParsePartialFromCodedStream(io::CodedInputStream* input);    // Like ParseFromCodedStream, but accepts messages that lack the required fields.
> bool ParseFromZeroCopyStream(io::ZeroCopyInputStream* input);        // Get from io::ZeroCopyInputStream stream
> bool ParsePartialFromZeroCopyStream(io::ZeroCopyInputStream* input); // Ibid., but accept messages that lack the required fields.
> bool ParseFromBoundedZeroCopyStream(io::ZeroCopyInputStream* input, int size); // Ibid., specifying message size must be size
> bool ParsePartialFromBoundedZeroCopyStream(io::ZeroCopyInputStream* input, , int size); // Ibid., but accept messages that lack the required fields.

Posted by **Ekate** on *Fri, 09 Aug 2019 00:47:41 -0700*

### Hot Keywords

- [Java](https://programmer.group/keywords/java) - 6961
- [Database](https://programmer.group/keywords/database) - 2683
- [Python](https://programmer.group/keywords/python) - 2616
- [Programming](https://programmer.group/keywords/programming) - 2419
- [Attribute](https://programmer.group/keywords/attribute) - 2418
- [Javascript](https://programmer.group/keywords/javascript) - 2383
- [Spring](https://programmer.group/keywords/spring) - 2111
- [Android](https://programmer.group/keywords/android) - 2077
- [xml](https://programmer.group/keywords/xml) - 1972
- [Linux](https://programmer.group/keywords/linux) - 1818
- [JSON](https://programmer.group/keywords/json) - 1764
- [network](https://programmer.group/keywords/network) - 1748
- [github](https://programmer.group/keywords/github) - 1720
- [less](https://programmer.group/keywords/less) - 1676
- [MySQL](https://programmer.group/keywords/mysql) - 1538
- [SQL](https://programmer.group/keywords/sql) - 1332
- [PHP](https://programmer.group/keywords/php) - 1318
- [encoding](https://programmer.group/keywords/encoding) - 1179
- [Mobile](https://programmer.group/keywords/mobile) - 1029
- [Apache](https://programmer.group/keywords/apache) - 925

©2022 [Programmer Group](https://programmer.group/) [Contact Us](https://programmer.group/contact-us/)

We use cookies and other data collection technologies to provide the best experience for our customers. You may request that your data not be shared with third parties here: [Do Not Sell My Data](https://programmer.group/explanation-of-google-protocol-buffer-protobuf.html#).
