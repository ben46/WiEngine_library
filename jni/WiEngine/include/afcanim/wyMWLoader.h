/*
 * Copyright (c) 2010 WiYun Inc.

 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef __wyMWLoader_h__
#define __wyMWLoader_h__

#include "wyMWFileData.h"

/**
 * @class wyMWLoader
 *
 * \if English
 * Loader of Motion Welder file
 * \else
 * 负责解析, 载入Motion Welder的导出文件
 * \endif
 */
class wyMWLoader {
private:
	/**
	 * \if English
	 * Load a Motion Welder file and return file data object
	 *
	 * @param data Motion Welder file raw data
	 * @param length length of \c data
	 * @param resScale resource scale of Motion Welder file data
	 * @return \link wyMWFileData wyMWFileData\endlink, or NULL if loading failed
	 * \else
	 * 解析一个Motion Welder文件，返回文件数据对象
	 *
	 * @param data Motion Welder文件的原始数据
	 * @param length \c data的长度
	 * @param resScale 大小，位置相关的数值需要进行缩放的比率, 缺省是1, 即不缩放
	 * @return \link wyMWFileData wyMWFileData\endlink, 如果载入失败, 返回NULL
	 * \endif
	 */
	static wyMWFileData* load(const char* data, size_t length, float resScale = 1.f);

public:
	/**
	 * \if English
	 * Load a Motion Welder file and return file data object
	 *
	 * @param mwResId resource id of Motion Welder file
	 * @return \link wyMWFileData wyMWFileData\endlink
	 * \else
	 * 解析一个Motion Welder文件，返回文件数据对象
	 *
	 * @param mwResId Motion Welder文件的资源id
	 * @return \link wyMWFileData wyMWFileData\endlink
	 * \endif
	 */
	static wyMWFileData* load(int mwResId);

	/**
	 * \if English
	 * Load a Motion Welder file and return file data object
	 *
	 * @param path path of Motion Welder file
	 * @param isFile true if \c path is an absolute path in file system, false if \c path
	 * 		is relative path under assets
	 * @return \link wyMWFileData wyMWFileData\endlink
	 * \else
	 * 解析一个Motion Welder文件，返回文件数据对象
	 *
	 * @param path Motion Welder文件的路径
	 * @param isFile true表示\c path是一个文件系统的绝对路径， false表示\c path是一个assets
	 * 		下的相对路径
	 * @return \link wyMWFileData wyMWFileData\endlink
	 * \endif
	 */
	static wyMWFileData* load(const char* path, bool isFile = false);

	/**
	 * \if English
	 * Load a Motion Welder file and return file data object
	 *
	 * @param mfsName name of memory file
	 * @return \link wyMWFileData wyMWFileData\endlink
	 * \else
	 * 解析一个Motion Welder内存文件，返回文件数据对象
	 *
	 * @param mfsName 内存文件名称
	 * @return \link wyMWFileData wyMWFileData\endlink
	 * \endif
	 */
	static wyMWFileData* loadMemory(const char* mfsName);
};

#endif // __wyMWLoader_h__