// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_geom_PathIterator__
#define __java_awt_geom_PathIterator__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace geom
      {
        class PathIterator;
      }
    }
  }
}

class java::awt::geom::PathIterator : public ::java::lang::Object
{
public:
  virtual jint getWindingRule () = 0;
  virtual jboolean isDone () = 0;
  virtual void next () = 0;
  virtual jint currentSegment (jfloatArray) = 0;
  virtual jint currentSegment (jdoubleArray) = 0;
  static const jint WIND_EVEN_ODD = 0L;
  static const jint WIND_NON_ZERO = 1L;
  static const jint SEG_MOVETO = 0L;
  static const jint SEG_LINETO = 1L;
  static const jint SEG_QUADTO = 2L;
  static const jint SEG_CUBICTO = 3L;
  static const jint SEG_CLOSE = 4L;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __java_awt_geom_PathIterator__ */
