// JSInterface_Selection.h
//
// The JavaScript wrapper around collections of entities
// (notably the selection and groups objects)

#include "scripting/ScriptingHost.h"

#ifndef JSI_SELECTION_INCLUDED
#define JSI_SELECTION_INCLUDED

namespace JSI_Selection
{
	void init();
	void finalize( JSContext* cx, JSObject* obj );

	JSBool getSelection( JSContext* context, JSObject* obj, jsval id, jsval* vp );
	JSBool setSelection( JSContext* context, JSObject* obj, jsval id, jsval* vp );
	JSBool getGroups( JSContext* context, JSObject* obj, jsval id, jsval* vp );
	JSBool setGroups( JSContext* context, JSObject* obj, jsval id, jsval* vp );

	JSBool isValidContextOrder( JSContext* context, JSObject* obj, unsigned int argc, jsval* argv, jsval* rval );
	JSBool getContextOrder( JSContext* context, JSObject* obj, jsval id, jsval* vp );
	JSBool setContextOrder( JSContext* context, JSObject* obj, jsval id, jsval* vp );
};

#endif
