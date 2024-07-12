// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_Keymap__
#define __javax_swing_text_Keymap__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        class Keymap;
      }
      class Action;
      class KeyStroke;
    }
  }
}

class javax::swing::text::Keymap : public ::java::lang::Object
{
public:
  virtual void addActionForKeyStroke (::javax::swing::KeyStroke *, ::javax::swing::Action *) = 0;
  virtual ::javax::swing::Action *getAction (::javax::swing::KeyStroke *) = 0;
  virtual JArray< ::javax::swing::Action *> *getBoundActions () = 0;
  virtual JArray< ::javax::swing::KeyStroke *> *getBoundKeyStrokes () = 0;
  virtual ::javax::swing::Action *getDefaultAction () = 0;
  virtual JArray< ::javax::swing::KeyStroke *> *getKeyStrokesForAction (::javax::swing::Action *) = 0;
  virtual ::java::lang::String *getName () = 0;
  virtual ::javax::swing::text::Keymap *getResolveParent () = 0;
  virtual jboolean isLocallyDefined (::javax::swing::KeyStroke *) = 0;
  virtual void removeBindings () = 0;
  virtual void removeKeyStrokeBinding (::javax::swing::KeyStroke *) = 0;
  virtual void setDefaultAction (::javax::swing::Action *) = 0;
  virtual void setResolveParent (::javax::swing::text::Keymap *) = 0;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_swing_text_Keymap__ */
