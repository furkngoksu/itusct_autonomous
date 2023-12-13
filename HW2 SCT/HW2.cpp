#include <iostream>
#include <limits>


int main(){

    wchar_t myWchar_t;
    char8_t myChar8_t;
    char16_t myChar16_t;
    char32_t myChar32_t;

    std::cout << "Min value of char8_t: " << std::numeric_limits<std::int8_t>::min() << std::endl;
    std::cout << "Max value of char8_t: " << std::numeric_limits<std::int8_t>::max() << std::endl;

    std::cout << "Min value of uint8_t: " << std::numeric_limits<std::uint8_t>::min() << std::endl;
    std::cout << "Max value of uint8_t: " << std::numeric_limits<std::uint8_t>::max() << std::endl;

    std::cout << "Min value of int16_t: " << std::numeric_limits<std::int16_t>::min() << std::endl;
    std::cout << "Max value of int16_t: " << std::numeric_limits<std::int16_t>::max() << std::endl;

    std::cout << "Min value of uint16_t: " << std::numeric_limits<std::uint16_t>::min() << std::endl;
    std::cout << "Max value of uint16_t: " << std::numeric_limits<std::uint16_t>::max() << std::endl;

    std::cout << "Min value of int32_t: " << std::numeric_limits<std::int32_t>::min() << std::endl;
    std::cout << "Max value of int32_t: " << std::numeric_limits<std::int32_t>::max() << std::endl;

    std::cout << "Min value of uint32_t: " << std::numeric_limits<std::uint32_t>::min() << std::endl;
    std::cout << "Max value of uint32_t: " << std::numeric_limits<std::uint32_t>::max() << std::endl;

    std::cout << "Min value of int64_t: " << std::numeric_limits<std::int64_t>::min() << std::endl;
    std::cout << "Max value of int64_t: " << std::numeric_limits<std::int64_t>::max() << std::endl;

    std::cout << "Min value of uint64_t: " << std::numeric_limits<std::uint64_t>::min() << std::endl;
    std::cout << "Max value of uint64_t: " << std::numeric_limits<std::uint64_t>::max() << std::endl;
    
    std::cout<<"Size wchar_t:"<<sizeof(myWchar_t)<<std::endl;
    std::cout<<"Size of char8_t:"<<sizeof(myChar8_t)<<std::endl;
    std::cout<<"Size of char16_t:"<<sizeof(myChar16_t)<<std::endl;
    std::cout<<"Size of char32_t:"<<sizeof(myChar32_t)<<std::endl;

    signed mySigned;
    unsigned myUnsigned;
    short int myShortInt;
    char myChar;
    long int myLongInt;

    std::cout<<"Size of signed:"<<sizeof(mySigned)<<std::endl;
    std::cout<<"Size of unsigned:"<<sizeof(myUnsigned)<<std::endl;
    std::cout<<"Size of short int:"<<sizeof(myShortInt)<<std::endl;
    std::cout<<"Size of long int:"<<sizeof(myLongInt)<<std::endl;
    
    signed short int mySignedShortInt;
    signed int mySignedInt;
    signed long int mySignedLongInt;
    signed long long int mySignedLongLongInt;
    unsigned short int myUnsignedShort;
    unsigned int myUnsignedInt;
    unsigned long int  myUnsignedLongInt;
    unsigned long long int myUnsignedLongLongInt;

    std::cout<<"Size of signed short int:"<<sizeof(mySignedShortInt)<<std::endl;
    std::cout<<"Size of signed int:"<<sizeof(mySignedInt)<<std::endl;
    std::cout<<"Size of signed long int:"<<sizeof(mySignedLongInt)<<std::endl;
    std::cout<<"Size of signed long long int:"<<sizeof(mySignedLongLongInt)<<std::endl;
    std::cout<<"Size of unsigned short int:"<<sizeof(myUnsignedShort)<<std::endl;
    std::cout<<"Size of unsigned int:"<<sizeof(myUnsignedInt)<<std::endl;
    std::cout<<"Size of unsigned long int:"<<sizeof(myUnsignedLongInt)<<std::endl;
    std::cout<<"Size of unsigned long long int:"<<sizeof(myUnsignedLongLongInt)<<std::endl;

    std::int8_t myInt_8;
    std::uint8_t myInt_8u;
    std::int16_t myInt_16;
    std::uint16_t myInt_16u;
    std::int32_t myInt_32;
    std::uint32_t myInt_32u;
    std::int64_t myInt_64;
    std::uint64_t myInt_64u;

    std::cout<<"Size of int_8t :"<<sizeof(myInt_8)<<std::endl;
    std::cout<<"Size of uint_8t:"<<sizeof(myInt_8u)<<std::endl;
    std::cout<<"Size of int_16t:"<<sizeof(myInt_16)<<std::endl;
    std::cout<<"Size of uint_16t:"<<sizeof(myInt_16u)<<std::endl;
    std::cout<<"Size of int_32t:"<<sizeof(myInt_32)<<std::endl;
    std::cout<<"Size of uint_32t:"<<sizeof(myInt_32u)<<std::endl;
    std::cout<<"Size of uint_64t:"<<sizeof(myInt_64u)<<std::endl;
    std::cout<<"Size of int_64t:"<<sizeof(myInt_64)<<std::endl;

    std::cout << "Min value of int8_t: " << static_cast<int>(std::numeric_limits<std::int8_t>::min()) << std::endl;
    std::cout << "Max value of int8_t: " << static_cast<int>(std::numeric_limits<std::int8_t>::max()) << std::endl;

    std::cout << "Min value of uint8_t: " << static_cast<unsigned int>(std::numeric_limits<std::uint8_t>::min()) << std::endl;
    std::cout << "Max value of uint8_t: " << static_cast<unsigned int>(std::numeric_limits<std::uint8_t>::max()) << std::endl;

    std::cout << "Min value of int16_t: " << std::numeric_limits<std::int16_t>::min() << std::endl;
    std::cout << "Max value of int16_t: " << std::numeric_limits<std::int16_t>::max() << std::endl;

    std::cout << "Min value of uint16_t: " << std::numeric_limits<std::uint16_t>::min() << std::endl;
    std::cout << "Max value of uint16_t: " << std::numeric_limits<std::uint16_t>::max() << std::endl;

    std::cout << "Min value of int32_t: " << std::numeric_limits<std::int32_t>::min() << std::endl;
    std::cout << "Max value of int32_t: " << std::numeric_limits<std::int32_t>::max() << std::endl;

    std::cout << "Min value of uint32_t: " << std::numeric_limits<std::uint32_t>::min() << std::endl;
    std::cout << "Max value of uint32_t: " << std::numeric_limits<std::uint32_t>::max() << std::endl;

    std::cout << "Min value of int64_t: " << std::numeric_limits<std::int64_t>::min() << std::endl;
    std::cout << "Max value of int64_t: " << std::numeric_limits<std::int64_t>::max() << std::endl;

    std::cout << "Min value of uint64_t: " << std::numeric_limits<std::uint64_t>::min() << std::endl;
    std::cout << "Max value of uint64_t: " << std::numeric_limits<std::uint64_t>::max() << std::endl;

    bool myBoolean;
    std::cout<<"Size of bool :"<<sizeof(myBoolean)<<std::endl;

    unsigned char myUnsignedChar;
    signed char mySignedChar;
    int myInt;
    short myShort;
    long myLong;
    unsigned long myUnsignedLong;
    float myFloat;
    double myDouble;

    std::cout<<"Size of unsigned char:"<<sizeof(myUnsignedChar)<<std::endl;
    std::cout<<"Size of signed Char:"<<sizeof(mySignedChar)<<std::endl;
    std::cout<<"Size of Char:"<<sizeof(myChar)<<std::endl;
    std::cout<<"Size of int:"<<sizeof(myInt)<<std::endl;
    std::cout<<"Size of unsigned int:"<<sizeof(myUnsignedInt)<<std::endl;
    std::cout<<"Size of short:"<<sizeof(myShort)<<std::endl;
    std::cout<<"Size of unsigned short:"<<sizeof(myUnsignedShort)<<std::endl;
    std::cout<<"Size of long:"<<sizeof(myLong)<<std::endl;
    std::cout<<"Size of unsigned long:"<<sizeof(myUnsignedLong)<<std::endl;
    std::cout<<"Size of float:"<<sizeof(myFloat)<< std::endl;
    std::cout<<"Size of double:"<<sizeof(myDouble)<<std::endl;
    
    std::cout << "Min value of Char: " << std::numeric_limits<char>::min() << std::endl;
    std::cout << "Max value of Char: " << std::numeric_limits<char>::max() << std::endl;

    std::cout << "Min value of Signed Char: " << std::numeric_limits<signed char>::min() << std::endl;
    std::cout << "Max value of Signed Char: " << std::numeric_limits<signed char>::max() << std::endl;

    std::cout << "Min value of Unsigned Char: " << std::numeric_limits<unsigned char>::min() << std::endl;
    std::cout << "Max value of Unsigned Char: " << std::numeric_limits<unsigned char>::max() << std::endl;

    std::cout << "Min value of Long Long: " << std::numeric_limits<long long>::min() << std::endl;
    std::cout << "Max value of Long Long: " << std::numeric_limits<long long>::max() << std::endl;

    std::cout << "Min value of Unsigned Long Long: " << std::numeric_limits<unsigned long long>::min() << std::endl;
    std::cout << "Max value of Unsigned Long Long: " << std::numeric_limits<unsigned long long>::max() << std::endl;

    //////////////////////////////////////////////////////////////////


    wchar_t* ptrWchar_t;
    char8_t* ptrChar8_t;
    char16_t* ptrChar16_t;
    char32_t* ptrChar32_t;

    std::cout << "Size of *wchar_t: " << sizeof(ptrWchar_t) << std::endl;
    std::cout << "Size of *char8_t: " << sizeof(ptrChar8_t) << std::endl;
    std::cout << "Size of *char16_t: " << sizeof(ptrChar16_t) << std::endl;
    std::cout << "Size of *char32_t: " << sizeof(ptrChar32_t) << std::endl;

    signed int* ptrSignedInt;
    unsigned int* ptrUnsignedInt;
    short int* ptrShortInt;
    char* ptrChar;
    long int* ptrLongInt;

    std::cout << "Size of *signed int: " << sizeof(ptrSignedInt) << std::endl;
    std::cout << "Size of *unsigned int: " << sizeof(ptrUnsignedInt) << std::endl;
    std::cout << "Size of *short int: " << sizeof(ptrShortInt) << std::endl;
    std::cout << "Size of *long int: " << sizeof(ptrLongInt) << std::endl;

    signed short int* ptrSignedShortInt;
    signed int* ptrSignedInt_2;
    signed long int* ptrSignedLongInt;
    signed long long int* ptrSignedLongLongInt;
    unsigned short int* ptrUnsignedShort;
    unsigned int* ptrUnsignedInt_2;
    unsigned long int* ptrUnsignedLongInt;
    unsigned long long int* ptrUnsignedLongLongInt;

    std::cout << "Size of *signed short int: " << sizeof(ptrSignedShortInt) << std::endl;
    std::cout << "Size of *signed int: " << sizeof(ptrSignedInt_2) << std::endl;
    std::cout << "Size of *signed long int: " << sizeof(ptrSignedLongInt) << std::endl;
    std::cout << "Size of *signed long long int: " << sizeof(ptrSignedLongLongInt) << std::endl;
    std::cout << "Size of *unsigned short int: " << sizeof(ptrUnsignedShort) << std::endl;
    std::cout << "Size of *unsigned int: " << sizeof(ptrUnsignedInt_2) << std::endl;
    std::cout << "Size of *unsigned long int: " << sizeof(ptrUnsignedLongInt) << std::endl;
    std::cout << "Size of *unsigned long long int: " << sizeof(ptrUnsignedLongLongInt) << std::endl;

    std::int8_t* ptrInt8_t;
    std::uint8_t* ptrUint8_t;
    std::int16_t* ptrInt16_t;
    std::uint16_t* ptrUint16_t;
    std::int32_t* ptrInt32_t;
    std::uint32_t* ptrUint32_t;
    std::int64_t* ptrInt64_t;
    std::uint64_t* ptrUint64_t;

    std::cout << "Size of *int8_t: " << sizeof(ptrInt8_t) << std::endl;
    std::cout << "Size of *uint8_t: " << sizeof(ptrUint8_t) << std::endl;
    std::cout << "Size of *int16_t: " << sizeof(ptrInt16_t) << std::endl;
    std::cout << "Size of *uint16_t: " << sizeof(ptrUint16_t) << std::endl;
    std::cout << "Size of *int32_t: " << sizeof(ptrInt32_t) << std::endl;
    std::cout << "Size of *uint32_t: " << sizeof(ptrUint32_t) << std::endl;
    std::cout << "Size of *int64_t: " << sizeof(ptrInt64_t) << std::endl;
    std::cout << "Size of *uint64_t: " << sizeof(ptrUint64_t) << std::endl;

    bool* ptrBool;
    std::cout << "Size of *bool: " << sizeof(ptrBool) << std::endl;

    char *p;
    int* myIntP;
    unsigned int* myUnsignedIntP;
    short* myShortP;
    unsigned short* myUnsignedShortP;
    long* myLongP;
    unsigned long* myUnsignedLongP;
    float* myFloatP;
    double* myDoubleP;

    std::cout<<"Size of int P:"<<sizeof(myIntP)<<std::endl;
    std::cout<<"Size of unsigned int P:"<<sizeof(myUnsignedIntP)<<std::endl;
    std::cout<<"Size of short P:"<<sizeof(myShortP)<<std::endl;
    std::cout<<"Size of unsigned short P:"<<sizeof(myUnsignedShortP)<<std::endl;
    std::cout<<"Size of long P:"<<sizeof(myLongP)<<std::endl;
    std::cout<<"Size of unsigned long P:"<<sizeof(myUnsignedLongP)<<std::endl;
    std::cout<<"Size of float P:"<<sizeof(myFloatP)<< std::endl;
    std::cout<<"Size of double P:"<<sizeof(myDoubleP)<<std::endl;

    std::cout<<"Min value of Int is : "<<std::numeric_limits<int>::min()<<std::endl;
    std::cout<<"Min value of UnsignedInt is : "<<std::numeric_limits<unsigned int>::min()<<std::endl;
    std::cout<<"Min value of Short is : "<<std::numeric_limits<short>::min()<<std::endl;
    std::cout<<"Min value of UnsignedShort is : "<<std::numeric_limits<unsigned short>::min()<<std::endl;
    std::cout<<"Min value of Long is : "<<std::numeric_limits<long>::min()<<std::endl;
    std::cout<<"Min value of UnsignedLong is : "<<std::numeric_limits<unsigned long>::min()<<std::endl;
    std::cout<<"Min value of Float is : "<<std::numeric_limits<float>::min()<<std::endl;
    std::cout<<"Min value of Double is : "<<std::numeric_limits<double>::min()<<std::endl;
    
    std::cout<<"Max value of Int is : "<<std::numeric_limits<int>::max()<<std::endl;
    std::cout<<"Max value of UnsignedInt is : "<<std::numeric_limits<unsigned int>::max()<<std::endl;
    std::cout<<"Max value of Short is : "<<std::numeric_limits<short>::max()<<std::endl;
    std::cout<<"Max value of UnsignedShort is : "<<std::numeric_limits<unsigned short>::max()<<std::endl;
    std::cout<<"Max value of Long is : "<<std::numeric_limits<long>::max()<<std::endl;
    std::cout<<"Max value of UnsignedLong is : "<<std::numeric_limits<unsigned long>::max()<<std::endl;
    std::cout<<"Max value of Float is : "<<std::numeric_limits<float>::max()<<std::endl;
    std::cout<<"Max value of Double is : "<<std::numeric_limits<double>::max()<<std::endl;
    
    return 0;

}









Min value of char8_t: Ç
Max value of char8_t: ⌂
Min value of uint8_t:
Max value of uint8_t:  
Min value of int16_t: -32768
Max value of int16_t: 32767
Min value of uint16_t: 0
Max value of uint16_t: 65535
Min value of int32_t: -2147483648
Max value of int32_t: 2147483647
Min value of uint32_t: 0
Max value of uint32_t: 4294967295
Min value of int64_t: -9223372036854775808
Max value of int64_t: 9223372036854775807 
Min value of uint64_t: 0
Max value of uint64_t: 18446744073709551615
Size wchar_t:2
Size of char8_t:1
Size of char16_t:2
Size of char32_t:4
Size of signed:4
Size of unsigned:4
Size of short int:2
Size of long int:4
Size of signed short int:2
Size of signed int:4
Size of signed long int:4
Size of signed long long int:8
Size of unsigned short int:2
Size of unsigned int:4
Size of unsigned long int:4
Size of unsigned long long int:8
Size of int_8t :1
Size of uint_8t:1
Size of int_16t:2
Size of uint_16t:2
Size of int_32t:4
Size of uint_32t:4
Size of uint_64t:8
Size of int_64t:8
Min value of int8_t: -128
Max value of int8_t: 127
Min value of uint8_t: 0
Max value of uint8_t: 255
Min value of int16_t: -32768
Max value of int16_t: 32767
Min value of uint16_t: 0
Max value of uint16_t: 65535
Min value of int32_t: -2147483648
Max value of int32_t: 2147483647
Min value of uint32_t: 0
Max value of uint32_t: 4294967295
Min value of int64_t: -9223372036854775808
Max value of int64_t: 9223372036854775807
Min value of uint64_t: 0
Max value of uint64_t: 18446744073709551615
Size of bool :1
Size of unsigned char:1
Size of signed Char:1
Size of Char:1
Size of int:4
Size of unsigned int:4
Size of short:2
Size of unsigned short:2
Size of long:4
Size of unsigned long:4
Size of float:4
Size of double:8
Min value of Char: Ç
Max value of Char: ⌂
Min value of Signed Char: Ç
Max value of Signed Char: ⌂
Min value of Unsigned Char:
Max value of Unsigned Char:  
Min value of Long Long: -9223372036854775808
Max value of Long Long: 9223372036854775807
Min value of Unsigned Long Long: 0
Max value of Unsigned Long Long: 18446744073709551615
Size of *wchar_t: 8
Size of *char8_t: 8
Size of *char16_t: 8
Size of *char32_t: 8
Size of *signed int: 8
Size of *unsigned int: 8
Size of *short int: 8
Size of *long int: 8
Size of *signed short int: 8
Size of *signed int: 8
Size of *signed long int: 8
Size of *signed long long int: 8
Size of *unsigned short int: 8
Size of *unsigned int: 8
Size of *unsigned long int: 8
Size of *unsigned long long int: 8
Size of *int8_t: 8
Size of *uint8_t: 8
Size of *int16_t: 8
Size of *uint16_t: 8
Size of *int32_t: 8
Size of *uint32_t: 8
Size of *int64_t: 8
Size of *uint64_t: 8
Size of *bool: 8
Size of int P:8
Size of unsigned int P:8
Size of short P:8
Size of unsigned short P:8
Size of long P:8
Size of unsigned long P:8
Size of float P:8
Size of double P:8
Min value of Int is : -2147483648
Min value of UnsignedInt is : 0
Min value of Short is : -32768
Min value of UnsignedShort is : 0
Min value of Long is : -2147483648
Min value of UnsignedLong is : 0
Min value of Float is : 1.17549e-38
Min value of Double is : 2.22507e-308
Max value of Int is : 2147483647
Max value of UnsignedInt is : 4294967295
Max value of Short is : 32767
Max value of UnsignedShort is : 65535
Max value of Long is : 2147483647
Max value of UnsignedLong is : 4294967295
Max value of Float is : 3.40282e+38
Max value of Double is : 1.79769e+308