/**************************************************************************\
 *
 *  Copyright (C) 1998-1999 by Systems in Motion.  All rights reserved.
 *
 *  This file is part of the Coin library.
 *
 *  This file may be distributed under the terms of the Q Public License
 *  as defined by Troll Tech AS of Norway and appearing in the file
 *  LICENSE.QPL included in the packaging of this file.
 *
 *  If you want to use Coin in applications not covered by licenses
 *  compatible with the QPL, you can contact SIM to aquire a
 *  Professional Edition license for Coin.
 *
 *  Systems in Motion AS, Prof. Brochs gate 6, N-7030 Trondheim, NORWAY
 *  http://www.sim.no/ sales@sim.no Voice: +47 22114160 Fax: +47 67172912
 *
\**************************************************************************/

#ifndef __SOHANDLEEVENTACTION_H__
#define __SOHANDLEEVENTACTION_H__

#include <Inventor/actions/SoAction.h>
#include <Inventor/SbViewportRegion.h>

class SoEvent;
class SoPickedPoint;
class SoPickedPointList;
class SoRayPickAction;

class SoHandleEventAction : public SoAction {
  typedef SoAction inherited;

//$ BEGIN TEMPLATE ActionHeader(SoHandleEventAction)
private:
  static SoType classTypeId;

public:
  virtual SoType getTypeId(void) const;
  static SoType getClassTypeId(void);

protected:
  virtual const SoEnabledElementsList & getEnabledElements(void) const;
  static SoEnabledElementsList * enabledElements;
  static SoActionMethodList * methods;

public:
  static void addMethod(const SoType type, SoActionMethod method);
  static void enableElement(const SoType type, const int stackIndex);

  static void initClass(void);

  virtual ~SoHandleEventAction();
//$ END TEMPLATE ActionHeader

public:
  SoHandleEventAction(const SbViewportRegion & viewportRegion);

  void setViewportRegion(const SbViewportRegion & newRegion);
  const SbViewportRegion & getViewportRegion(void) const;
  void setEvent(const SoEvent * ev);
  const SoEvent * getEvent(void) const;
  void setHandled(void);
  SbBool isHandled(void) const;
  void setGrabber(SoNode * node);
  void releaseGrabber(void);
  SoNode * getGrabber(void) const;
  void setPickRoot(SoNode * node);
  SoNode * getPickRoot(void) const;
  void setPickRadius(const float radiusInPixels);
  const SoPickedPoint * getPickedPoint(void);
  const SoPickedPointList & getPickedPointList(void);

protected:
  virtual void beginTraversal(SoNode * node);

private:

  SoRayPickAction *getPickAction();

  SbViewportRegion viewport;
  const SoEvent *event;
  SoNode *grabber;
  SoNode *pickRoot;
  SbBool pickValid;
  SbBool didPickAll;
  SoRayPickAction *pickAction;
  SoNode *applyNode;
};

#endif // !__SOHANDLEEVENTACTION_H__
