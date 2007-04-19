#ifndef COIN_COINOFFSCREENGLCANVAS_H
#define COIN_COINOFFSCREENGLCANVAS_H

/**************************************************************************\
 *
 *  This file is part of the Coin 3D visualization library.
 *  Copyright (C) 1998-2007 by Systems in Motion.  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  ("GPL") version 2 as published by the Free Software Foundation.
 *  See the file LICENSE.GPL at the root directory of this source
 *  distribution for additional information about the GNU GPL.
 *
 *  For using Coin with software that can not be combined with the GNU
 *  GPL, and for taking advantage of the additional benefits of our
 *  support services, please contact Systems in Motion about acquiring
 *  a Coin Professional Edition License.
 *
 *  See http://www.coin3d.org/ for more information.
 *
 *  Systems in Motion, Postboks 1283, Pirsenteret, 7462 Trondheim, NORWAY.
 *  http://www.sim.no/  sales@sim.no  coin-support@coin3d.org
 *
\**************************************************************************/

#ifndef COIN_INTERNAL
#error this is a private header file
#endif /* ! COIN_INTERNAL */

// *************************************************************************

#include <Inventor/SbVec2s.h>

// *************************************************************************

class CoinOffscreenGLCanvas {
public:
  CoinOffscreenGLCanvas(void);
  virtual ~CoinOffscreenGLCanvas();

  uint32_t activateGLContext(void);
  void deactivateGLContext(void);

  void setWantedSize(SbVec2s size);
  const SbVec2s & getActualSize(void) const;

  void readPixels(uint8_t * dst, const SbVec2s & vpdims,
                  unsigned int dstrowsize,
                  unsigned int nrcomponents) const;

  static SbBool debug(void);

private:
  static SbBool clampSize(SbVec2s & s);
  static void clampToPixelSizeRoof(SbVec2s & s);
  static SbVec2s getMaxTileSize(void);
  static unsigned int tilesizeroof;
  uint32_t tryActivateGLContext(void);
  void destructContext(void);

  SbVec2s size;

  void * context;
  uint32_t renderid;
};

// *************************************************************************

#endif // !COIN_COINOFFSCREENGLCANVAS_H
