/*
*******************************************************************************
\file info.h
\brief Common info
\project gf2 [GF(2) algebra library]
\author (С) Sergey Agievich [agievich@{bsu.by|gmail.com}]
\created 2016.05.01
\version 2016.07.07
\license This program is released under the MIT License. See Copyright Notices 
at the end of this file.
*******************************************************************************
*/

/*!
*******************************************************************************
\file info.h
\brief Общая информация
*******************************************************************************
*/


#ifndef __GF2_INFO
#define __GF2_INFO

#define GF2_NAME				"GF2"
#define GF2_VERSION_MAJOR		"0"
#define GF2_VERSION_MINOR 		"9"
#define GF2_VERSION_PATCH		"0"

#define GF2_VERSION\
		GF2_VERSION_MAJOR "." GF2_VERSION_MINOR "." GF2_VERSION_PATCH

#define GF2_VERSION_NUM\
		0, 9, 0

/*!
*******************************************************************************
\mainpage Библиотека GF2

\version 0.9.0

\section toc Содержание

-#	\ref descr
-#	\ref make
-#	\ref license

\section descr Описание

Библиотека GF2 реализует операции в GF(2).

\section make Сборка

Подготовка конфигурационных файлов:

\verbatim
mkdir build
cd build
cmake  ..
\endverbatim

Конфигурация отладочной версии:

\verbatim
cmake -DCMAKE_BUILD_TYPE=Debug ..
\endverbatim

Конфигурация со средствами мониторинга покрытия:

\verbatim
cmake -DCMAKE_BUILD_TYPE=Coverage ..
\endverbatim

Конфигурация со средствами проверки адресов (AddressSanitizer):

\verbatim
cmake -DCMAKE_BUILD_TYPE=ASan ..
cmake -DCMAKE_BUILD_TYPE=ASanDbg ..
\endverbatim

Конфигурация со средствами проверки памяти (MemorySanitizer):

\verbatim
cmake -DCMAKE_BUILD_TYPE=MemSan ..
cmake -DCMAKE_BUILD_TYPE=MemSanDbg ..
\endverbatim

Конфигурация со строгой компиляцией:

\verbatim
cmake -DCMAKE_BUILD_TYPE=Check ..
\endverbatim

Компиляция и линковка:

\verbatim
make
\endverbatim

Тестирование:

\verbatim
make test
\endverbatim

Установка:

\verbatim
make install
\endverbatim

\section license Лицензия

Библиотека распространяется на условиях лицензии MIT. 

\verbatim

GF2: a GF(2) algebra library
Copyright (c) 2004-2015, GF2 authors

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

\endverbatim
*******************************************************************************
*/

#endif // __GF2_INFO
