// Copyright (c) 2015 Egor Tensin <Egor.Tensin@gmail.com>
// This file is part of the "Windows 7 drivers" project.
// For details, see https://github.com/egor-tensin/windows7-drivers.
// Distributed under the MIT License.

#include "nt_namespace/all.hpp"

#include <exception>
#include <iostream>

int wmain(int argc, wchar_t* argv[])
{
    try
    {
        nt_namespace::Device dev;
        for (int i = 1; i < argc; ++i)
            std::wcout << dev.convert_nt_path(argv[i]) << L"\n";
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << "\n";
        return 1;
    }

    return 0;
}
