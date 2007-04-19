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

/*!
  \class SoShapeSimplifyAction Inventor/include/SoShapeSimplifyAction.h
  \brief The SoShapeSimplifyAction class replaces complex primitives
  with simplified polygon representations.
*/

#include <Inventor/SbName.h>
#include <Inventor/actions/SoShapeSimplifyAction.h>
#include <coindefs.h> // COIN_STUB()


SO_ACTION_SOURCE(SoShapeSimplifyAction);

// Overridden from parent class.
void
SoShapeSimplifyAction::initClass(void)
{
  SO_ACTION_INTERNAL_INIT_CLASS(SoShapeSimplifyAction, SoSimplifyAction);
}


/*!
  A constructor.
*/

SoShapeSimplifyAction::SoShapeSimplifyAction(void)
{
  COIN_STUB();
}

/*!
  The destructor.
*/

SoShapeSimplifyAction::~SoShapeSimplifyAction(void)
{
  COIN_STUB();
}

// Documented in superclass.
void
SoShapeSimplifyAction::beginTraversal(SoNode * /* node */)
{
  COIN_STUB();
}
