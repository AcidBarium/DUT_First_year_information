// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_Byte__
#define __java_lang_Byte__

#pragma interface

#include <java/lang/Number.h>

class java::lang::Byte : public ::java::lang::Number
{
public:
  Byte (jbyte);
  Byte (::java::lang::String *);
  static ::java::lang::String *toString (jbyte);
  static jbyte parseByte (::java::lang::String *);
  static jbyte parseByte (::java::lang::String *, jint);
  static ::java::lang::Byte *valueOf (::java::lang::String *, jint);
  static ::java::lang::Byte *valueOf (::java::lang::String *);
  static ::java::lang::Byte *decode (::java::lang::String *);
  jbyte byteValue () { return value; }
  jshort shortValue () { return value; }
  jint intValue () { return value; }
  jlong longValue ();
  jfloat floatValue ();
  jdouble doubleValue ();
  ::java::lang::String *toString ();
  jint hashCode () { return value; }
  jboolean equals (::java::lang::Object *);
  jint compareTo (::java::lang::Byte *);
  jint compareTo (::java::lang::Object *);
private:
  static const jlong serialVersionUID = -7183698231559129828LL;
public:
  static const jint MIN_VALUE = -128L;
  static const jint MAX_VALUE = 127L;
  static ::java::lang::Class *TYPE;
private:
  jbyte __attribute__((aligned(__alignof__( ::java::lang::Number ))))  value;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_Byte__ */
