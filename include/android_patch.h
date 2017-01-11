//
// Created by daniil on 1/11/17.
//

#ifndef CLBLAST_ANDROID_PATCH_H
#define CLBLAST_ANDROID_PATCH_H


#include <string>
#include <sstream>

namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

#endif //CLBLAST_ANDROID_PATCH_H

