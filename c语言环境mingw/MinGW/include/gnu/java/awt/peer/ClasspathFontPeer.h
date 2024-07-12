// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_ClasspathFontPeer__
#define __gnu_java_awt_peer_ClasspathFontPeer__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          class ClasspathFontPeer;
        }
        class ClasspathToolkit;
      }
    }
  }
  namespace java
  {
    namespace text
    {
      class CharacterIterator;
      class AttributedCharacterIterator$Attribute;
    }
    namespace awt
    {
      class FontMetrics;
      namespace font
      {
        class LineMetrics;
        class GlyphVector;
        class FontRenderContext;
      }
      class Font;
      namespace geom
      {
        class Rectangle2D;
        class AffineTransform;
      }
    }
  }
}

class gnu::java::awt::peer::ClasspathFontPeer : public ::java::lang::Object
{
public:  // actually protected
  static ::gnu::java::awt::ClasspathToolkit *tk ();
  static jboolean isLogicalFontName (::java::lang::String *);
  static ::java::lang::String *logicalFontNameToFaceName (::java::lang::String *);
  static ::java::lang::String *faceNameToFamilyName (::java::lang::String *);
  static void copyStyleToAttrs (jint, ::java::util::Map *);
  static void copyFamilyToAttrs (::java::lang::String *, ::java::util::Map *);
  static void copySizeToAttrs (jfloat, ::java::util::Map *);
  static void copyTransformToAttrs (::java::awt::geom::AffineTransform *, ::java::util::Map *);
  virtual void setStandardAttributes (::java::lang::String *, ::java::lang::String *, jint, jfloat, ::java::awt::geom::AffineTransform *);
  virtual void setStandardAttributes (::java::lang::String *, ::java::util::Map *);
  virtual void getStandardAttributes (::java::util::Map *);
public:
  ClasspathFontPeer (::java::lang::String *, ::java::util::Map *);
  ClasspathFontPeer (::java::lang::String *, jint, jint);
  virtual ::java::lang::String *getName (::java::awt::Font *) { return logicalName; }
  virtual ::java::lang::String *getFamily (::java::awt::Font *) { return familyName; }
  virtual ::java::lang::String *getFamily (::java::awt::Font *, ::java::util::Locale *) { return familyName; }
  virtual ::java::lang::String *getFontName (::java::awt::Font *) { return faceName; }
  virtual ::java::lang::String *getFontName (::java::awt::Font *, ::java::util::Locale *) { return faceName; }
  virtual jfloat getSize (::java::awt::Font *) { return size; }
  virtual jboolean isPlain (::java::awt::Font *);
  virtual jboolean isBold (::java::awt::Font *);
  virtual jboolean isItalic (::java::awt::Font *);
  virtual ::java::awt::Font *deriveFont (::java::awt::Font *, jfloat);
  virtual ::java::awt::Font *deriveFont (::java::awt::Font *, jint);
  virtual ::java::awt::Font *deriveFont (::java::awt::Font *, jint, ::java::awt::geom::AffineTransform *);
  virtual ::java::awt::Font *deriveFont (::java::awt::Font *, ::java::util::Map *);
  virtual ::java::util::Map *getAttributes (::java::awt::Font *);
  virtual JArray< ::java::text::AttributedCharacterIterator$Attribute *> *getAvailableAttributes (::java::awt::Font *);
  virtual ::java::awt::geom::AffineTransform *getTransform (::java::awt::Font *) { return transform; }
  virtual jboolean isTransformed (::java::awt::Font *);
  virtual jfloat getItalicAngle (::java::awt::Font *);
  virtual jint getStyle (::java::awt::Font *) { return style; }
  virtual jboolean canDisplay (::java::awt::Font *, jchar) = 0;
  virtual jint canDisplayUpTo (::java::awt::Font *, ::java::text::CharacterIterator *, jint, jint) = 0;
  virtual ::java::lang::String *getSubFamilyName (::java::awt::Font *, ::java::util::Locale *) = 0;
  virtual ::java::lang::String *getPostScriptName (::java::awt::Font *) = 0;
  virtual jint getNumGlyphs (::java::awt::Font *) = 0;
  virtual jint getMissingGlyphCode (::java::awt::Font *) = 0;
  virtual jbyte getBaselineFor (::java::awt::Font *, jchar) = 0;
  virtual ::java::lang::String *getGlyphName (::java::awt::Font *, jint) = 0;
  virtual ::java::awt::font::GlyphVector *createGlyphVector (::java::awt::Font *, ::java::awt::font::FontRenderContext *, ::java::text::CharacterIterator *) = 0;
  virtual ::java::awt::font::GlyphVector *createGlyphVector (::java::awt::Font *, ::java::awt::font::FontRenderContext *, jintArray) = 0;
  virtual ::java::awt::font::GlyphVector *layoutGlyphVector (::java::awt::Font *, ::java::awt::font::FontRenderContext *, jcharArray, jint, jint, jint) = 0;
  virtual ::java::awt::FontMetrics *getFontMetrics (::java::awt::Font *) = 0;
  virtual jboolean hasUniformLineMetrics (::java::awt::Font *) = 0;
  virtual ::java::awt::font::LineMetrics *getLineMetrics (::java::awt::Font *, ::java::text::CharacterIterator *, jint, jint, ::java::awt::font::FontRenderContext *) = 0;
  virtual ::java::awt::geom::Rectangle2D *getMaxCharBounds (::java::awt::Font *, ::java::awt::font::FontRenderContext *) = 0;
  virtual ::java::awt::geom::Rectangle2D *getStringBounds (::java::awt::Font *, ::java::text::CharacterIterator *, jint, jint, ::java::awt::font::FontRenderContext *) = 0;
public:  // actually protected
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object )))) logicalName;
  ::java::lang::String *familyName;
  ::java::lang::String *faceName;
  jint style;
  jfloat size;
  ::java::awt::geom::AffineTransform *transform;
public:

  static ::java::lang::Class class$;
};

#endif /* __gnu_java_awt_peer_ClasspathFontPeer__ */
