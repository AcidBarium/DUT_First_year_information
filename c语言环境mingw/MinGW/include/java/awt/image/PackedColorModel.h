// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_PackedColorModel__
#define __java_awt_image_PackedColorModel__

#pragma interface

#include <java/awt/image/ColorModel.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
        class PackedColorModel;
        class WritableRaster;
        class SampleModel;
      }
      namespace color
      {
        class ColorSpace;
      }
    }
  }
}

class java::awt::image::PackedColorModel : public ::java::awt::image::ColorModel
{
public:
  PackedColorModel (::java::awt::color::ColorSpace *, jint, jintArray, jint, jboolean, jint, jint);
private:
  static jintArray calcBitsPerComponent (jintArray, jint);
  void initMasks (jintArray, jint);
public:
  PackedColorModel (::java::awt::color::ColorSpace *, jint, jint, jint, jint, jint, jboolean, jint, jint);
private:
  static jintArray makeColorMaskArray (jint, jint, jint);
public:
  jint getMask (jint);
  jintArray getMasks () { return masks; }
  virtual ::java::awt::image::SampleModel *createCompatibleSampleModel (jint, jint);
  virtual jboolean isCompatibleSampleModel (::java::awt::image::SampleModel *);
  virtual ::java::awt::image::WritableRaster *getAlphaRaster (::java::awt::image::WritableRaster *);
  virtual jboolean equals (::java::lang::Object *);
private:
  jintArray __attribute__((aligned(__alignof__( ::java::awt::image::ColorModel ))))  masks;
public: // actually package-private
  jintArray shifts;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_image_PackedColorModel__ */
