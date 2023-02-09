// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __PCLType_hh__
#define __PCLType_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_PCLType
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_PCLType
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_PCLType
#endif



#ifndef __BasicDataType_hh_EXTERNAL_GUARD__
#define __BasicDataType_hh_EXTERNAL_GUARD__
#include "BasicDataType.hh"
#endif
#ifndef __ExtendedDataTypes_hh_EXTERNAL_GUARD__
#define __ExtendedDataTypes_hh_EXTERNAL_GUARD__
#include "ExtendedDataTypes.hh"
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif



_CORBA_MODULE PCLType

_CORBA_MODULE_BEG

  struct Color {
    typedef _CORBA_ConstrType_Fix_Var<Color> _var_type;

    
    ::CORBA::UShort r;

    ::CORBA::UShort g;

    ::CORBA::UShort b;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef Color::_var_type Color_var;

  typedef Color& Color_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_Color;

  struct PointXYZRGB {
    typedef _CORBA_ConstrType_Fix_Var<PointXYZRGB> _var_type;

    
    RTC::Point3D point;

    Color colour;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef PointXYZRGB::_var_type PointXYZRGB_var;

  typedef PointXYZRGB& PointXYZRGB_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_PointXYZRGB;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_PointXYZRGBList;

  class PointXYZRGBList_var;

  class PointXYZRGBList : public _CORBA_Unbounded_Sequence< PointXYZRGB >  {
  public:
    typedef PointXYZRGBList_var _var_type;
    inline PointXYZRGBList() {}
    inline PointXYZRGBList(const PointXYZRGBList& _s)
      : _CORBA_Unbounded_Sequence< PointXYZRGB > (_s) {}

    inline PointXYZRGBList(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence< PointXYZRGB > (_max) {}
    inline PointXYZRGBList(_CORBA_ULong _max, _CORBA_ULong _len, PointXYZRGB* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence< PointXYZRGB > (_max, _len, _val, _rel) {}

  

    inline PointXYZRGBList& operator = (const PointXYZRGBList& _s) {
      _CORBA_Unbounded_Sequence< PointXYZRGB > ::operator=(_s);
      return *this;
    }
  };

  class PointXYZRGBList_out;

  class PointXYZRGBList_var {
  public:
    inline PointXYZRGBList_var() : _pd_seq(0) {}
    inline PointXYZRGBList_var(PointXYZRGBList* _s) : _pd_seq(_s) {}
    inline PointXYZRGBList_var(const PointXYZRGBList_var& _s) {
      if (_s._pd_seq)  _pd_seq = new PointXYZRGBList(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~PointXYZRGBList_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline PointXYZRGBList_var& operator = (PointXYZRGBList* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline PointXYZRGBList_var& operator = (const PointXYZRGBList_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new PointXYZRGBList;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline PointXYZRGB& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline PointXYZRGBList* operator -> () { return _pd_seq; }
    inline const PointXYZRGBList* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator PointXYZRGBList& () const { return *_pd_seq; }
#else
    inline operator const PointXYZRGBList& () const { return *_pd_seq; }
    inline operator PointXYZRGBList& () { return *_pd_seq; }
#endif
      
    inline const PointXYZRGBList& in() const { return *_pd_seq; }
    inline PointXYZRGBList&       inout()    { return *_pd_seq; }
    inline PointXYZRGBList*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline PointXYZRGBList* _retn() { PointXYZRGBList* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class PointXYZRGBList_out;
    
  private:
    PointXYZRGBList* _pd_seq;
  };

  class PointXYZRGBList_out {
  public:
    inline PointXYZRGBList_out(PointXYZRGBList*& _s) : _data(_s) { _data = 0; }
    inline PointXYZRGBList_out(PointXYZRGBList_var& _s)
      : _data(_s._pd_seq) { _s = (PointXYZRGBList*) 0; }
    inline PointXYZRGBList_out(const PointXYZRGBList_out& _s) : _data(_s._data) {}
    inline PointXYZRGBList_out& operator = (const PointXYZRGBList_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline PointXYZRGBList_out& operator = (PointXYZRGBList* _s) {
      _data = _s;
      return *this;
    }
    inline operator PointXYZRGBList*&()  { return _data; }
    inline PointXYZRGBList*& ptr()       { return _data; }
    inline PointXYZRGBList* operator->() { return _data; }

    inline PointXYZRGB& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    PointXYZRGBList*& _data;

  private:
    PointXYZRGBList_out();
    PointXYZRGBList_out& operator=(const PointXYZRGBList_var&);
  };

  struct PointCloud {
    typedef _CORBA_ConstrType_Variable_Var<PointCloud> _var_type;

    
    RTC::Time tm;

    PointXYZRGBList pc;

    ::CORBA::ULong height;

    ::CORBA::ULong width;

    ::CORBA::Boolean is_dense;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef PointCloud::_var_type PointCloud_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< PointCloud,PointCloud_var > PointCloud_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_PointCloud;

_CORBA_MODULE_END



_CORBA_MODULE POA_PCLType
_CORBA_MODULE_BEG

_CORBA_MODULE_END



_CORBA_MODULE OBV_PCLType
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

extern void operator<<=(::CORBA::Any& _a, const PCLType::Color& _s);
extern void operator<<=(::CORBA::Any& _a, PCLType::Color* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, PCLType::Color*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const PCLType::Color*& _sp);

extern void operator<<=(::CORBA::Any& _a, const PCLType::PointXYZRGB& _s);
extern void operator<<=(::CORBA::Any& _a, PCLType::PointXYZRGB* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, PCLType::PointXYZRGB*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const PCLType::PointXYZRGB*& _sp);

void operator<<=(::CORBA::Any& _a, const PCLType::PointXYZRGBList& _s);
void operator<<=(::CORBA::Any& _a, PCLType::PointXYZRGBList* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, PCLType::PointXYZRGBList*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const PCLType::PointXYZRGBList*& _sp);

extern void operator<<=(::CORBA::Any& _a, const PCLType::PointCloud& _s);
extern void operator<<=(::CORBA::Any& _a, PCLType::PointCloud* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, PCLType::PointCloud*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const PCLType::PointCloud*& _sp);





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_PCLType
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_PCLType
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_PCLType
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_PCLType
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_PCLType
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_PCLType
#endif

#endif  // __PCLType_hh__

