//
// Created by daniil on 1/11/17.
//

//#ifndef CLBLAST_ANDROID_PATCH_H
//#define CLBLAST_ANDROID_PATCH_H

//#include <string>
//#include <sstream>
//
//
//    template < typename T > std::string to_string( const T& n )
//    {
//        std::ostringstream stm ;
//        stm << n ;
//        return stm.str() ;
//    }
//
#include <string>
#include <sstream>
template <typename T>
std::string to_string(T value) {
    //create an output string stream
    std::ostringstream os ;

    //throw the value into the string stream
    os << value ;

    //convert the string stream into a string and return
    return os.str() ;
}

//#endif //CLBLAST_ANDROID_PATCH_H


