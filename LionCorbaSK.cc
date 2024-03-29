// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.

#include "LionCorba.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_2;



void
LionCobra::Student::operator>>= (cdrStream &_n) const
{
  studID >>= _n;
  _n.marshalString(name,0);
  _n.marshalString(ssn,0);
  _n.marshalString(emailAddress,0);
  _n.marshalString(homePhone,0);
  _n.marshalString(localAddr,0);
  _n.marshalString(emergencyContact,0);
  programID >>= _n;
  _n.marshalString(paymentID,0);
  academicStatus >>= _n;

}

void
LionCobra::Student::operator<<= (cdrStream &_n)
{
  (::CORBA::Long&)studID <<= _n;
  name = _n.unmarshalString(0);
  ssn = _n.unmarshalString(0);
  emailAddress = _n.unmarshalString(0);
  homePhone = _n.unmarshalString(0);
  localAddr = _n.unmarshalString(0);
  emergencyContact = _n.unmarshalString(0);
  (::CORBA::Long&)programID <<= _n;
  paymentID = _n.unmarshalString(0);
  (::CORBA::Long&)academicStatus <<= _n;

}

LionCobra::StudentDB_ptr LionCobra::StudentDB_Helper::_nil() {
  return ::LionCobra::StudentDB::_nil();
}

::CORBA::Boolean LionCobra::StudentDB_Helper::is_nil(::LionCobra::StudentDB_ptr p) {
  return ::CORBA::is_nil(p);

}

void LionCobra::StudentDB_Helper::release(::LionCobra::StudentDB_ptr p) {
  ::CORBA::release(p);
}

void LionCobra::StudentDB_Helper::marshalObjRef(::LionCobra::StudentDB_ptr obj, cdrStream& s) {
  ::LionCobra::StudentDB::_marshalObjRef(obj, s);
}

LionCobra::StudentDB_ptr LionCobra::StudentDB_Helper::unmarshalObjRef(cdrStream& s) {
  return ::LionCobra::StudentDB::_unmarshalObjRef(s);
}

void LionCobra::StudentDB_Helper::duplicate(::LionCobra::StudentDB_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

LionCobra::StudentDB_ptr
LionCobra::StudentDB::_duplicate(::LionCobra::StudentDB_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

LionCobra::StudentDB_ptr
LionCobra::StudentDB::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


LionCobra::StudentDB_ptr
LionCobra::StudentDB::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

LionCobra::StudentDB_ptr
LionCobra::StudentDB::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_StudentDB _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_StudentDB* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_StudentDB;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* LionCobra::StudentDB::_PD_repoId = "IDL:LionCobra/StudentDB:1.0";


LionCobra::_objref_StudentDB::~_objref_StudentDB() {
  
}


LionCobra::_objref_StudentDB::_objref_StudentDB(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::LionCobra::StudentDB::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
LionCobra::_objref_StudentDB::_ptrToObjRef(const char* id)
{
  if (id == ::LionCobra::StudentDB::_PD_repoId)
    return (::LionCobra::StudentDB_ptr) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::LionCobra::StudentDB::_PD_repoId))
    return (::LionCobra::StudentDB_ptr) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for LionCobra::StudentDB::addToDB

// Proxy call descriptor class. Mangled signature:
//  _cLionCobra_mStudent_i_cLionCobra_mStudent
class _0RL_cd_a6f28dd055c63efe_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_a6f28dd055c63efe_00000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  LionCobra::Student_var arg_0_;
  const LionCobra::Student* arg_0;
  LionCobra::Student_var result;
};

void _0RL_cd_a6f28dd055c63efe_00000000::marshalArguments(cdrStream& _n)
{
  (const LionCobra::Student&) *arg_0 >>= _n;

}

void _0RL_cd_a6f28dd055c63efe_00000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = new LionCobra::Student;
  (LionCobra::Student&)arg_0_ <<= _n;
  arg_0 = &arg_0_.in();

}

void _0RL_cd_a6f28dd055c63efe_00000000::marshalReturnedValues(cdrStream& _n)
{
  (const LionCobra::Student&) result >>= _n;

}

void _0RL_cd_a6f28dd055c63efe_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = new LionCobra::Student;
  (LionCobra::Student&)result <<= _n;

}

const char* const _0RL_cd_a6f28dd055c63efe_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_a6f28dd055c63efe_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_a6f28dd055c63efe_00000000* tcd = (_0RL_cd_a6f28dd055c63efe_00000000*)cd;
  LionCobra::_impl_StudentDB* impl = (LionCobra::_impl_StudentDB*) svnt->_ptrToInterface(LionCobra::StudentDB::_PD_repoId);
  tcd->result = impl->addToDB(*tcd->arg_0);


}

LionCobra::Student* LionCobra::_objref_StudentDB::addToDB(const ::LionCobra::Student& stu)
{
  _0RL_cd_a6f28dd055c63efe_00000000 _call_desc(_0RL_lcfn_a6f28dd055c63efe_10000000, "addToDB", 8);
  _call_desc.arg_0 = &(::LionCobra::Student&) stu;

  _invoke(_call_desc);
  return _call_desc.result._retn();


}

LionCobra::_pof_StudentDB::~_pof_StudentDB() {}


omniObjRef*
LionCobra::_pof_StudentDB::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::LionCobra::_objref_StudentDB(ior, id);
}


::CORBA::Boolean
LionCobra::_pof_StudentDB::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::LionCobra::StudentDB::_PD_repoId))
    return 1;
  
  return 0;
}

const LionCobra::_pof_StudentDB _the_pof_LionCobra_mStudentDB;

LionCobra::_impl_StudentDB::~_impl_StudentDB() {}


::CORBA::Boolean
LionCobra::_impl_StudentDB::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "addToDB")) {

    _0RL_cd_a6f28dd055c63efe_00000000 _call_desc(_0RL_lcfn_a6f28dd055c63efe_10000000, "addToDB", 8, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
LionCobra::_impl_StudentDB::_ptrToInterface(const char* id)
{
  if (id == ::LionCobra::StudentDB::_PD_repoId)
    return (::LionCobra::_impl_StudentDB*) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::LionCobra::StudentDB::_PD_repoId))
    return (::LionCobra::_impl_StudentDB*) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
LionCobra::_impl_StudentDB::_mostDerivedRepoId()
{
  return ::LionCobra::StudentDB::_PD_repoId;
}

POA_LionCobra::StudentDB::~StudentDB() {}

