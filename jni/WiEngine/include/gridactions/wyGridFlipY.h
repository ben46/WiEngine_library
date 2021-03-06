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
#ifndef __wyGridFlipY_h__
#define __wyGridFlipY_h__

#include "wyGrid3DAction.h"

/**
 * @class wyGridFlipY
 *
 * \if English
 * rotate around x axis by 180 degrees
 * \else
 * 旋转y轴180度
 * \endif
 */
class WIENGINE_API wyGridFlipY : public wyGrid3DAction {
public:
	/**
	 * \if English
	 * factory function, used to create a new instance with autoRlease enabled
	 *
	 * @param duration time, in seconds
	 * \else
	 * 静态构造函数
	 *
	 * @param duration 动作持续时间
	 * \endif
	 */
	static wyGridFlipY* make(float duration);

	/**
	 * \if English
	 * constructor
	 *
	 * @param duration time, in seconds
	 * \else
	 * 构造函数
	 *
	 * @param duration 动作持续时间
	 * \endif
	 */
	wyGridFlipY(float duration);

	/**
	 * \if English
	 * destructor
	 * \else
	 * 析构函数
	 * \endif
	 */
	virtual ~wyGridFlipY();

	/// @see wyAction::copy
	virtual wyAction* copy();

	/// @see wyAction::update
	virtual void update(float t);
};

#endif // __wyGridFlipY_h__
