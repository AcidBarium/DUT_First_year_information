// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_URLStreamHandler__
#define __java_net_URLStreamHandler__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
      class URLStreamHandler;
      class InetAddress;
      class URLConnection;
      class URL;
    }
  }
}

class java::net::URLStreamHandler : public ::java::lang::Object
{
public:
  URLStreamHandler ();
public:  // actually protected
  virtual ::java::net::URLConnection *openConnection (::java::net::URL *) = 0;
  virtual void parseURL (::java::net::URL *, ::java::lang::String *, jint, jint);
private:
  static ::java::lang::String *canonicalizeFilename (::java::lang::String *);
public:  // actually protected
  virtual jboolean sameFile (::java::net::URL *, ::java::net::URL *);
  virtual void setURL (::java::net::URL *, ::java::lang::String *, ::java::lang::String *, jint, ::java::lang::String *, ::java::lang::String *);
  virtual void setURL (::java::net::URL *, ::java::lang::String *, ::java::lang::String *, jint, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual jboolean equals (::java::net::URL *, ::java::net::URL *);
  virtual jboolean hostsEqual (::java::net::URL *, ::java::net::URL *);
  virtual ::java::net::InetAddress *getHostAddress (::java::net::URL *);
  virtual jint getDefaultPort ();
  virtual jint hashCode (::java::net::URL *);
  virtual ::java::lang::String *toExternalForm (::java::net::URL *);
public:

  static ::java::lang::Class class$;
};

#endif /* __java_net_URLStreamHandler__ */
