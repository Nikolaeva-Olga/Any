// MathLibrary.cpp : Defines the exported functions for the DLL.
//#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "S.h"

void writeTo(const std::vector<char>& data)
{
    std::ofstream filestream("new.txt", std::ios::app);
    copy(data.begin(), data.end(), std::ostream_iterator<char>(filestream, " "));
    filestream << "\n";
    filestream.close();
}