/******************************************************************************* 
 *  @file      util.cpp 2017\5\11 17:01:27 $
 *  @author    df
 *  @brief     
 ******************************************************************************/

#include "util.h"
#include <fstream>
#include <cstdlib>

/******************************************************************************/


/******************************************************************************/

std::string util::itoa(int i, int rdx)
{
    char _rs[100] = {0};
    assert(rdx == 8 || rdx == 10 || rdx == 16);
    if (rdx == 8) {
        snprintf(_rs, 99, "%o", i);
    } else if (rdx == 10) {
        snprintf(_rs, 99, "%d", i);
    } else if (rdx == 16) {
        snprintf(_rs, 99, "%x", i);
    }
    return std::string(_rs);
}

std::string util::read_file(const std::string& file)
{
    std::string file_content;

    char *file_content_buf = nullptr;
    try{
        std::ifstream file_;
        file_.open(file, std::ios_base::binary);
        if (!file_.is_open())
        {
            return file_content;
        }
        file_.seekg(0, std::ios::end);
        std::streamoff file_size = file_.tellg();
        file_.seekg(0);
        file_content_buf = new char[(unsigned int)file_size];
        file_.read(file_content_buf, file_size);
        file_content = std::string(file_content_buf, (unsigned int)file_size);
        file_.close();
        delete[]file_content_buf;
        file_content_buf = nullptr;
    }
    catch (...){
        if (!file_content_buf){
            delete[]file_content_buf;
        }
    }
    return file_content;
}
