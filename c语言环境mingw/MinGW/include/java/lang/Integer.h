// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_Integer__
#define __java_lang_Integer__

#pragma interface

#include <java/lang/Number.h>

class java::lang::Integer : public ::java::lang::Number
{
public:
  Integer (jint);
  Integer (::java::lang::String *);
  static ::java::lang::String *toString (jint, jint);
  static ::java::lang::String *toHexString (jint);
  static ::java::lang::String *toOctalString (jint);
  static ::java::lang::String *toBinaryString (jint);
  static ::java::lang::String *toString (jint);
  static jint parseInt (::java::lang::String *, jint);
  static jint parseInt (::java::lang::String *);
  static ::java::lang::Integer *valueOf (::java::lang::String *, jint);
  static ::java::lang::Integer *valueOf (::java::lang::String *);
  jbyte byteValue ();
  jshort shortValue ();
  jint intValue () { return value; }
  jlong longValue ();
  jfloat floatValue ();
  jdouble doubleValue ();
  ::java::lang::String *toString ();
  jint hashCode () { return value; }
  jboolean equals (::java::lang::Object *);
  static ::java::lang::Integer *getInteger (::java::lang::String *);
  static ::java::lang::Integer *getInteger (::java::lang::String *, jint);
  static ::java::lang::Integer *getInteger (::java::lang::String *, ::java::lang::Integer *);
  static ::java::lang::Integer *decode (::java::lang::String *);
  jint compareTo (::java::lang::Integer *);
  jint compareTo (::java::lang::Object *);
public: // actually package-private
  static ::java::lang::String *toUnsignedString (jint, jint);
  static jint parseInt (::java::lang::String *, jint, jboolean);
private:
  static const jlong serialVersionUID = 1360826667806852920LL;
public:
  static const jint MIN_VALUE = -2147483647L - 1;
  static const jint MAX_VALUE = 2147483647L;
  static ::java::lang::Class *TYPE;
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Number ))))  value;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_Integer__ */
