/*******************************************************************************
 *  @file      util.h 2017\5\11 17:00:57 $
 *  @author    df
 *  @brief     
 ******************************************************************************/

#ifndef UTIL_795B7F31_9DAF_41E1_9DE4_37B5C1D81364_H__
#define UTIL_795B7F31_9DAF_41E1_9DE4_37B5C1D81364_H__

#include <string>
/******************************************************************************/

/**
 * The class <code>util</code> 
 *
 */
class util
{
public:
    static std::string itoa(int i, int rdx = 10);
    static std::string read_file(const std::string& file);
};
/******************************************************************************/
#endif// UTIL_795B7F31_9DAF_41E1_9DE4_37B5C1D81364_H__
