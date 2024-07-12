// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_color_ICC_ProfileRGB__
#define __java_awt_color_ICC_ProfileRGB__

#pragma interface

#include <java/awt/color/ICC_Profile.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace color
      {
        class ICC_ProfileRGB;
      }
    }
  }
}

class java::awt::color::ICC_ProfileRGB : public ::java::awt::color::ICC_Profile
{
public: // actually package-private
  ICC_ProfileRGB ();
public:
  virtual jfloatArray getMediaWhitePoint () { return 0; }
  virtual JArray<jfloatArray> * getMatrix () { return 0; }
  virtual jfloat getGamma (jint);
  virtual jshortArray getTRC (jint) { return 0; }
private:
  static const jlong serialVersionUID = 8505067385152579334LL;
public:
  static const jint REDCOMPONENT = 0L;
  static const jint GREENCOMPONENT = 1L;
  static const jint BLUECOMPONENT = 2L;

  static ::java::lang::Class class$;
};

#endif /* __java_awt_color_ICC_ProfileRGB__ */
