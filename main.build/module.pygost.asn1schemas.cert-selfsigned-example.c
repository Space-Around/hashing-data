/* Generated code for Python module 'pygost.asn1schemas.cert-selfsigned-example'
 * created by Nuitka version 1.1
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pygost$asn1schemas$cert$$45$selfsigned$$45$example" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
PyDictObject *moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[309];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[309];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pygost.asn1schemas.cert-selfsigned-example"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 309; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pygost$asn1schemas$cert$$45$selfsigned$$45$example(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 309; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_163896f671496051be468a83dea1529b;
static PyCodeObject *codeobj_0e6c15dc00852e95c8787e19022d7146;
static PyCodeObject *codeobj_aad468fdc22415983a81ec3bf09dbe31;
static PyCodeObject *codeobj_0d88b90d67b941cc93ca458b9b25590b;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[8]; CHECK_OBJECT(module_filename_obj);
    codeobj_163896f671496051be468a83dea1529b = MAKE_CODEOBJECT(module_filename_obj, 301, CO_NEWLOCALS | CO_NOFREE, mod_consts[303], mod_consts[304], NULL, 1, 0, 0);
    codeobj_0e6c15dc00852e95c8787e19022d7146 = MAKE_CODEOBJECT(module_filename_obj, 207, CO_NEWLOCALS | CO_NOFREE, mod_consts[303], mod_consts[305], NULL, 1, 0, 0);
    codeobj_aad468fdc22415983a81ec3bf09dbe31 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[306], NULL, NULL, 0, 0, 0);
    codeobj_0d88b90d67b941cc93ca458b9b25590b = MAKE_CODEOBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[240], mod_consts[307], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pygost$asn1schemas$cert$$45$selfsigned$$45$example$$$function__1_pem();


// The module function definitions.
static PyObject *impl_pygost$asn1schemas$cert$$45$selfsigned$$45$example$$$function__1_pem(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_FrameObject *frame_0d88b90d67b941cc93ca458b9b25590b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0d88b90d67b941cc93ca458b9b25590b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0d88b90d67b941cc93ca458b9b25590b)) {
        Py_XDECREF(cache_frame_0d88b90d67b941cc93ca458b9b25590b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d88b90d67b941cc93ca458b9b25590b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d88b90d67b941cc93ca458b9b25590b = MAKE_FUNCTION_FRAME(codeobj_0d88b90d67b941cc93ca458b9b25590b, module_pygost$asn1schemas$cert$$45$selfsigned$$45$example, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0d88b90d67b941cc93ca458b9b25590b->m_type_description == NULL);
    frame_0d88b90d67b941cc93ca458b9b25590b = cache_frame_0d88b90d67b941cc93ca458b9b25590b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0d88b90d67b941cc93ca458b9b25590b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0d88b90d67b941cc93ca458b9b25590b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_expression_value_2 = par_obj;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0d88b90d67b941cc93ca458b9b25590b->m_frame.f_lineno = 218;
        tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0d88b90d67b941cc93ca458b9b25590b->m_frame.f_lineno = 218;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0d88b90d67b941cc93ca458b9b25590b->m_frame.f_lineno = 218;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[4]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[5];
        frame_0d88b90d67b941cc93ca458b9b25590b->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0d88b90d67b941cc93ca458b9b25590b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0d88b90d67b941cc93ca458b9b25590b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0d88b90d67b941cc93ca458b9b25590b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d88b90d67b941cc93ca458b9b25590b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d88b90d67b941cc93ca458b9b25590b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d88b90d67b941cc93ca458b9b25590b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d88b90d67b941cc93ca458b9b25590b,
        type_description_1,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_0d88b90d67b941cc93ca458b9b25590b == cache_frame_0d88b90d67b941cc93ca458b9b25590b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0d88b90d67b941cc93ca458b9b25590b);
        cache_frame_0d88b90d67b941cc93ca458b9b25590b = NULL;
    }

    assertFrameObject(frame_0d88b90d67b941cc93ca458b9b25590b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pygost$asn1schemas$cert$$45$selfsigned$$45$example$$$function__1_pem() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygost$asn1schemas$cert$$45$selfsigned$$45$example$$$function__1_pem,
        mod_consts[240],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0d88b90d67b941cc93ca458b9b25590b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_pygost$asn1schemas$cert$$45$selfsigned$$45$example[] = {
    impl_pygost$asn1schemas$cert$$45$selfsigned$$45$example$$$function__1_pem,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_pygost$asn1schemas$cert$$45$selfsigned$$45$example) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pygost$asn1schemas$cert$$45$selfsigned$$45$example[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pygost$asn1schemas$cert$$45$selfsigned$$45$example(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pygost.asn1schemas.cert-selfsigned-example");

    // Store the module for future use.
    module_pygost$asn1schemas$cert$$45$selfsigned$$45$example = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pygost.asn1schemas.cert-selfsigned-example: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pygost.asn1schemas.cert-selfsigned-example: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pygost.asn1schemas.cert-selfsigned-example: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpygost$asn1schemas$cert$$45$selfsigned$$45$example\n");

    moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example = MODULE_DICT(module_pygost$asn1schemas$cert$$45$selfsigned$$45$example);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[308]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pygost$asn1schemas$cert$$45$selfsigned$$45$example);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pygost$asn1schemas$cert$$45$selfsigned$$45$example);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_params = NULL;
    PyObject *outline_1_var_ext = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_aad468fdc22415983a81ec3bf09dbe31;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_0e6c15dc00852e95c8787e19022d7146_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_0e6c15dc00852e95c8787e19022d7146_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_FrameObject *frame_163896f671496051be468a83dea1529b_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_163896f671496051be468a83dea1529b_3 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_aad468fdc22415983a81ec3bf09dbe31 = MAKE_MODULE_FRAME(codeobj_aad468fdc22415983a81ec3bf09dbe31, module_pygost$asn1schemas$cert$$45$selfsigned$$45$example);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_aad468fdc22415983a81ec3bf09dbe31);
    assert(Py_REFCNT(frame_aad468fdc22415983a81ec3bf09dbe31) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[8];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[14];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[15];
        tmp_level_value_1 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 5;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[17],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[18];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[19];
        tmp_level_value_2 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[20],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[18];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[21];
        tmp_level_value_3 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 7;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[1],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[1]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[22];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[23];
        tmp_level_value_4 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[22],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[22];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[24];
        tmp_level_value_5 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 9;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[25],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[25]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        tmp_import_name_from_6 = IMPORT_HARD_OS();
        assert(!(tmp_import_name_from_6 == NULL));
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[26],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[26]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_7;
        tmp_import_name_from_7 = IMPORT_HARD_SYS();
        assert(!(tmp_import_name_from_7 == NULL));
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[27],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[27]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT0(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[30];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[31];
        tmp_level_value_6 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 13;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[0],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[32];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[33];
        tmp_level_value_7 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 15;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[34],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[32];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[35];
        tmp_level_value_8 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 16;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[36],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[36]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[32];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[37];
        tmp_level_value_9 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 17;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[38],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[38]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[32];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[39];
        tmp_level_value_10 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 18;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[40],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[32];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[41];
        tmp_level_value_11 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 19;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[42],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[42]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[32];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[43];
        tmp_level_value_12 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 20;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[44],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[44]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[32];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[45];
        tmp_level_value_13 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 21;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[46],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[32];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[47];
        tmp_level_value_14 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 22;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[48],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[49];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[50];
        tmp_level_value_15 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 24;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[51],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[51]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[49];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[52];
        tmp_level_value_16 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 25;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[53],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[53]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[49];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[54];
        tmp_level_value_17 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 26;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[55],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[49];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[56];
        tmp_level_value_18 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 27;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[57],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[57]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[49];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[58];
        tmp_level_value_19 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 28;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[59],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[49];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[60];
        tmp_level_value_20 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 29;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[61],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[49];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[62];
        tmp_level_value_21 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 30;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[63],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[63]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[49];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[64];
        tmp_level_value_22 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 31;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[65],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[49];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[66];
        tmp_level_value_23 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 32;
        tmp_import_name_from_25 = IMPORT_MODULE5(tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[67],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[67]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[49];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[68];
        tmp_level_value_24 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 33;
        tmp_import_name_from_26 = IMPORT_MODULE5(tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_import_name_from_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[69],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[69]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[49];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[70];
        tmp_level_value_25 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 34;
        tmp_import_name_from_27 = IMPORT_MODULE5(tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_import_name_from_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[71],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[71]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[49];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[72];
        tmp_level_value_26 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 35;
        tmp_import_name_from_28 = IMPORT_MODULE5(tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[73],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[49];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = mod_consts[74];
        tmp_level_value_27 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 36;
        tmp_import_name_from_29 = IMPORT_MODULE5(tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_import_name_from_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[75],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[75]);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_value_28;
        PyObject *tmp_globals_arg_value_28;
        PyObject *tmp_locals_arg_value_28;
        PyObject *tmp_fromlist_value_28;
        PyObject *tmp_level_value_28;
        tmp_name_value_28 = mod_consts[49];
        tmp_globals_arg_value_28 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_28 = Py_None;
        tmp_fromlist_value_28 = mod_consts[76];
        tmp_level_value_28 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 37;
        tmp_import_name_from_30 = IMPORT_MODULE5(tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
        if (tmp_import_name_from_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[77],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[77]);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_value_29;
        PyObject *tmp_globals_arg_value_29;
        PyObject *tmp_locals_arg_value_29;
        PyObject *tmp_fromlist_value_29;
        PyObject *tmp_level_value_29;
        tmp_name_value_29 = mod_consts[49];
        tmp_globals_arg_value_29 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_29 = Py_None;
        tmp_fromlist_value_29 = mod_consts[78];
        tmp_level_value_29 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 38;
        tmp_import_name_from_31 = IMPORT_MODULE5(tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
        if (tmp_import_name_from_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[79],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_value_30;
        PyObject *tmp_globals_arg_value_30;
        PyObject *tmp_locals_arg_value_30;
        PyObject *tmp_fromlist_value_30;
        PyObject *tmp_level_value_30;
        tmp_name_value_30 = mod_consts[49];
        tmp_globals_arg_value_30 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_30 = Py_None;
        tmp_fromlist_value_30 = mod_consts[80];
        tmp_level_value_30 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 39;
        tmp_import_name_from_32 = IMPORT_MODULE5(tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
        if (tmp_import_name_from_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[81],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[81]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_33;
        PyObject *tmp_name_value_31;
        PyObject *tmp_globals_arg_value_31;
        PyObject *tmp_locals_arg_value_31;
        PyObject *tmp_fromlist_value_31;
        PyObject *tmp_level_value_31;
        tmp_name_value_31 = mod_consts[49];
        tmp_globals_arg_value_31 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_31 = Py_None;
        tmp_fromlist_value_31 = mod_consts[82];
        tmp_level_value_31 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 40;
        tmp_import_name_from_33 = IMPORT_MODULE5(tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
        if (tmp_import_name_from_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[83],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[83]);
        }

        Py_DECREF(tmp_import_name_from_33);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_34;
        PyObject *tmp_name_value_32;
        PyObject *tmp_globals_arg_value_32;
        PyObject *tmp_locals_arg_value_32;
        PyObject *tmp_fromlist_value_32;
        PyObject *tmp_level_value_32;
        tmp_name_value_32 = mod_consts[49];
        tmp_globals_arg_value_32 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_32 = Py_None;
        tmp_fromlist_value_32 = mod_consts[84];
        tmp_level_value_32 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 41;
        tmp_import_name_from_34 = IMPORT_MODULE5(tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
        if (tmp_import_name_from_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[85],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[85]);
        }

        Py_DECREF(tmp_import_name_from_34);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_value_33;
        PyObject *tmp_globals_arg_value_33;
        PyObject *tmp_locals_arg_value_33;
        PyObject *tmp_fromlist_value_33;
        PyObject *tmp_level_value_33;
        tmp_name_value_33 = mod_consts[86];
        tmp_globals_arg_value_33 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_33 = Py_None;
        tmp_fromlist_value_33 = mod_consts[87];
        tmp_level_value_33 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 42;
        tmp_import_name_from_35 = IMPORT_MODULE5(tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
        if (tmp_import_name_from_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[88],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[88]);
        }

        Py_DECREF(tmp_import_name_from_35);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_value_34;
        PyObject *tmp_globals_arg_value_34;
        PyObject *tmp_locals_arg_value_34;
        PyObject *tmp_fromlist_value_34;
        PyObject *tmp_level_value_34;
        tmp_name_value_34 = mod_consts[86];
        tmp_globals_arg_value_34 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_34 = Py_None;
        tmp_fromlist_value_34 = mod_consts[89];
        tmp_level_value_34 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 43;
        tmp_import_name_from_36 = IMPORT_MODULE5(tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
        if (tmp_import_name_from_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[90],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_36, mod_consts[90]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_37;
        PyObject *tmp_name_value_35;
        PyObject *tmp_globals_arg_value_35;
        PyObject *tmp_locals_arg_value_35;
        PyObject *tmp_fromlist_value_35;
        PyObject *tmp_level_value_35;
        tmp_name_value_35 = mod_consts[86];
        tmp_globals_arg_value_35 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_35 = Py_None;
        tmp_fromlist_value_35 = mod_consts[91];
        tmp_level_value_35 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 44;
        tmp_import_name_from_37 = IMPORT_MODULE5(tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
        if (tmp_import_name_from_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[92],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_37, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_37);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_38;
        PyObject *tmp_name_value_36;
        PyObject *tmp_globals_arg_value_36;
        PyObject *tmp_locals_arg_value_36;
        PyObject *tmp_fromlist_value_36;
        PyObject *tmp_level_value_36;
        tmp_name_value_36 = mod_consts[93];
        tmp_globals_arg_value_36 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_36 = Py_None;
        tmp_fromlist_value_36 = mod_consts[94];
        tmp_level_value_36 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 45;
        tmp_import_name_from_38 = IMPORT_MODULE5(tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
        if (tmp_import_name_from_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[95],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_38, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_38);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_39;
        PyObject *tmp_name_value_37;
        PyObject *tmp_globals_arg_value_37;
        PyObject *tmp_locals_arg_value_37;
        PyObject *tmp_fromlist_value_37;
        PyObject *tmp_level_value_37;
        tmp_name_value_37 = mod_consts[93];
        tmp_globals_arg_value_37 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_37 = Py_None;
        tmp_fromlist_value_37 = mod_consts[96];
        tmp_level_value_37 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 46;
        tmp_import_name_from_39 = IMPORT_MODULE5(tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
        if (tmp_import_name_from_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[97],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_39, mod_consts[97]);
        }

        Py_DECREF(tmp_import_name_from_39);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_40;
        PyObject *tmp_name_value_38;
        PyObject *tmp_globals_arg_value_38;
        PyObject *tmp_locals_arg_value_38;
        PyObject *tmp_fromlist_value_38;
        PyObject *tmp_level_value_38;
        tmp_name_value_38 = mod_consts[93];
        tmp_globals_arg_value_38 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_38 = Py_None;
        tmp_fromlist_value_38 = mod_consts[98];
        tmp_level_value_38 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 47;
        tmp_import_name_from_40 = IMPORT_MODULE5(tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
        if (tmp_import_name_from_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[99],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_40, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_40);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_41;
        PyObject *tmp_name_value_39;
        PyObject *tmp_globals_arg_value_39;
        PyObject *tmp_locals_arg_value_39;
        PyObject *tmp_fromlist_value_39;
        PyObject *tmp_level_value_39;
        tmp_name_value_39 = mod_consts[93];
        tmp_globals_arg_value_39 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_39 = Py_None;
        tmp_fromlist_value_39 = mod_consts[100];
        tmp_level_value_39 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 48;
        tmp_import_name_from_41 = IMPORT_MODULE5(tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
        if (tmp_import_name_from_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[101],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_41, mod_consts[101]);
        }

        Py_DECREF(tmp_import_name_from_41);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_42;
        PyObject *tmp_name_value_40;
        PyObject *tmp_globals_arg_value_40;
        PyObject *tmp_locals_arg_value_40;
        PyObject *tmp_fromlist_value_40;
        PyObject *tmp_level_value_40;
        tmp_name_value_40 = mod_consts[93];
        tmp_globals_arg_value_40 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_40 = Py_None;
        tmp_fromlist_value_40 = mod_consts[102];
        tmp_level_value_40 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 49;
        tmp_import_name_from_42 = IMPORT_MODULE5(tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
        if (tmp_import_name_from_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_42,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[103],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_42, mod_consts[103]);
        }

        Py_DECREF(tmp_import_name_from_42);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_43;
        PyObject *tmp_name_value_41;
        PyObject *tmp_globals_arg_value_41;
        PyObject *tmp_locals_arg_value_41;
        PyObject *tmp_fromlist_value_41;
        PyObject *tmp_level_value_41;
        tmp_name_value_41 = mod_consts[93];
        tmp_globals_arg_value_41 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_41 = Py_None;
        tmp_fromlist_value_41 = mod_consts[104];
        tmp_level_value_41 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 50;
        tmp_import_name_from_43 = IMPORT_MODULE5(tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
        if (tmp_import_name_from_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_43,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[105],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_43, mod_consts[105]);
        }

        Py_DECREF(tmp_import_name_from_43);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_44;
        PyObject *tmp_name_value_42;
        PyObject *tmp_globals_arg_value_42;
        PyObject *tmp_locals_arg_value_42;
        PyObject *tmp_fromlist_value_42;
        PyObject *tmp_level_value_42;
        tmp_name_value_42 = mod_consts[93];
        tmp_globals_arg_value_42 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_42 = Py_None;
        tmp_fromlist_value_42 = mod_consts[106];
        tmp_level_value_42 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 51;
        tmp_import_name_from_44 = IMPORT_MODULE5(tmp_name_value_42, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
        if (tmp_import_name_from_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_44,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[107],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_44, mod_consts[107]);
        }

        Py_DECREF(tmp_import_name_from_44);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_45;
        PyObject *tmp_name_value_43;
        PyObject *tmp_globals_arg_value_43;
        PyObject *tmp_locals_arg_value_43;
        PyObject *tmp_fromlist_value_43;
        PyObject *tmp_level_value_43;
        tmp_name_value_43 = mod_consts[93];
        tmp_globals_arg_value_43 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_43 = Py_None;
        tmp_fromlist_value_43 = mod_consts[108];
        tmp_level_value_43 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 52;
        tmp_import_name_from_45 = IMPORT_MODULE5(tmp_name_value_43, tmp_globals_arg_value_43, tmp_locals_arg_value_43, tmp_fromlist_value_43, tmp_level_value_43);
        if (tmp_import_name_from_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_45,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[109],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_45, mod_consts[109]);
        }

        Py_DECREF(tmp_import_name_from_45);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_46;
        PyObject *tmp_name_value_44;
        PyObject *tmp_globals_arg_value_44;
        PyObject *tmp_locals_arg_value_44;
        PyObject *tmp_fromlist_value_44;
        PyObject *tmp_level_value_44;
        tmp_name_value_44 = mod_consts[93];
        tmp_globals_arg_value_44 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_44 = Py_None;
        tmp_fromlist_value_44 = mod_consts[110];
        tmp_level_value_44 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 53;
        tmp_import_name_from_46 = IMPORT_MODULE5(tmp_name_value_44, tmp_globals_arg_value_44, tmp_locals_arg_value_44, tmp_fromlist_value_44, tmp_level_value_44);
        if (tmp_import_name_from_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_46,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[111],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_46, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_46);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_47;
        PyObject *tmp_name_value_45;
        PyObject *tmp_globals_arg_value_45;
        PyObject *tmp_locals_arg_value_45;
        PyObject *tmp_fromlist_value_45;
        PyObject *tmp_level_value_45;
        tmp_name_value_45 = mod_consts[93];
        tmp_globals_arg_value_45 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_45 = Py_None;
        tmp_fromlist_value_45 = mod_consts[112];
        tmp_level_value_45 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 54;
        tmp_import_name_from_47 = IMPORT_MODULE5(tmp_name_value_45, tmp_globals_arg_value_45, tmp_locals_arg_value_45, tmp_fromlist_value_45, tmp_level_value_45);
        if (tmp_import_name_from_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_47,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[113],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME(tmp_import_name_from_47, mod_consts[113]);
        }

        Py_DECREF(tmp_import_name_from_47);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_48;
        PyObject *tmp_name_value_46;
        PyObject *tmp_globals_arg_value_46;
        PyObject *tmp_locals_arg_value_46;
        PyObject *tmp_fromlist_value_46;
        PyObject *tmp_level_value_46;
        tmp_name_value_46 = mod_consts[93];
        tmp_globals_arg_value_46 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_46 = Py_None;
        tmp_fromlist_value_46 = mod_consts[114];
        tmp_level_value_46 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 55;
        tmp_import_name_from_48 = IMPORT_MODULE5(tmp_name_value_46, tmp_globals_arg_value_46, tmp_locals_arg_value_46, tmp_fromlist_value_46, tmp_level_value_46);
        if (tmp_import_name_from_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_48,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[115],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_48, mod_consts[115]);
        }

        Py_DECREF(tmp_import_name_from_48);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_49;
        PyObject *tmp_name_value_47;
        PyObject *tmp_globals_arg_value_47;
        PyObject *tmp_locals_arg_value_47;
        PyObject *tmp_fromlist_value_47;
        PyObject *tmp_level_value_47;
        tmp_name_value_47 = mod_consts[93];
        tmp_globals_arg_value_47 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_47 = Py_None;
        tmp_fromlist_value_47 = mod_consts[116];
        tmp_level_value_47 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 56;
        tmp_import_name_from_49 = IMPORT_MODULE5(tmp_name_value_47, tmp_globals_arg_value_47, tmp_locals_arg_value_47, tmp_fromlist_value_47, tmp_level_value_47);
        if (tmp_import_name_from_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_49,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[117],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME(tmp_import_name_from_49, mod_consts[117]);
        }

        Py_DECREF(tmp_import_name_from_49);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_50;
        PyObject *tmp_name_value_48;
        PyObject *tmp_globals_arg_value_48;
        PyObject *tmp_locals_arg_value_48;
        PyObject *tmp_fromlist_value_48;
        PyObject *tmp_level_value_48;
        tmp_name_value_48 = mod_consts[93];
        tmp_globals_arg_value_48 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_48 = Py_None;
        tmp_fromlist_value_48 = mod_consts[118];
        tmp_level_value_48 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 57;
        tmp_import_name_from_50 = IMPORT_MODULE5(tmp_name_value_48, tmp_globals_arg_value_48, tmp_locals_arg_value_48, tmp_fromlist_value_48, tmp_level_value_48);
        if (tmp_import_name_from_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_50,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[119],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME(tmp_import_name_from_50, mod_consts[119]);
        }

        Py_DECREF(tmp_import_name_from_50);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_51;
        PyObject *tmp_name_value_49;
        PyObject *tmp_globals_arg_value_49;
        PyObject *tmp_locals_arg_value_49;
        PyObject *tmp_fromlist_value_49;
        PyObject *tmp_level_value_49;
        tmp_name_value_49 = mod_consts[93];
        tmp_globals_arg_value_49 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_49 = Py_None;
        tmp_fromlist_value_49 = mod_consts[120];
        tmp_level_value_49 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 58;
        tmp_import_name_from_51 = IMPORT_MODULE5(tmp_name_value_49, tmp_globals_arg_value_49, tmp_locals_arg_value_49, tmp_fromlist_value_49, tmp_level_value_49);
        if (tmp_import_name_from_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_51,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[121],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME(tmp_import_name_from_51, mod_consts[121]);
        }

        Py_DECREF(tmp_import_name_from_51);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_52;
        PyObject *tmp_name_value_50;
        PyObject *tmp_globals_arg_value_50;
        PyObject *tmp_locals_arg_value_50;
        PyObject *tmp_fromlist_value_50;
        PyObject *tmp_level_value_50;
        tmp_name_value_50 = mod_consts[93];
        tmp_globals_arg_value_50 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_50 = Py_None;
        tmp_fromlist_value_50 = mod_consts[122];
        tmp_level_value_50 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 59;
        tmp_import_name_from_52 = IMPORT_MODULE5(tmp_name_value_50, tmp_globals_arg_value_50, tmp_locals_arg_value_50, tmp_fromlist_value_50, tmp_level_value_50);
        if (tmp_import_name_from_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_52,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[123],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_52, mod_consts[123]);
        }

        Py_DECREF(tmp_import_name_from_52);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_53;
        PyObject *tmp_name_value_51;
        PyObject *tmp_globals_arg_value_51;
        PyObject *tmp_locals_arg_value_51;
        PyObject *tmp_fromlist_value_51;
        PyObject *tmp_level_value_51;
        tmp_name_value_51 = mod_consts[93];
        tmp_globals_arg_value_51 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_51 = Py_None;
        tmp_fromlist_value_51 = mod_consts[124];
        tmp_level_value_51 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 60;
        tmp_import_name_from_53 = IMPORT_MODULE5(tmp_name_value_51, tmp_globals_arg_value_51, tmp_locals_arg_value_51, tmp_fromlist_value_51, tmp_level_value_51);
        if (tmp_import_name_from_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_53,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[125],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_53, mod_consts[125]);
        }

        Py_DECREF(tmp_import_name_from_53);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_54;
        PyObject *tmp_name_value_52;
        PyObject *tmp_globals_arg_value_52;
        PyObject *tmp_locals_arg_value_52;
        PyObject *tmp_fromlist_value_52;
        PyObject *tmp_level_value_52;
        tmp_name_value_52 = mod_consts[93];
        tmp_globals_arg_value_52 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_52 = Py_None;
        tmp_fromlist_value_52 = mod_consts[126];
        tmp_level_value_52 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 61;
        tmp_import_name_from_54 = IMPORT_MODULE5(tmp_name_value_52, tmp_globals_arg_value_52, tmp_locals_arg_value_52, tmp_fromlist_value_52, tmp_level_value_52);
        if (tmp_import_name_from_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_54,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[127],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME(tmp_import_name_from_54, mod_consts[127]);
        }

        Py_DECREF(tmp_import_name_from_54);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_55;
        PyObject *tmp_name_value_53;
        PyObject *tmp_globals_arg_value_53;
        PyObject *tmp_locals_arg_value_53;
        PyObject *tmp_fromlist_value_53;
        PyObject *tmp_level_value_53;
        tmp_name_value_53 = mod_consts[93];
        tmp_globals_arg_value_53 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_53 = Py_None;
        tmp_fromlist_value_53 = mod_consts[128];
        tmp_level_value_53 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 62;
        tmp_import_name_from_55 = IMPORT_MODULE5(tmp_name_value_53, tmp_globals_arg_value_53, tmp_locals_arg_value_53, tmp_fromlist_value_53, tmp_level_value_53);
        if (tmp_import_name_from_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_55,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[129],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME(tmp_import_name_from_55, mod_consts[129]);
        }

        Py_DECREF(tmp_import_name_from_55);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_56;
        PyObject *tmp_name_value_54;
        PyObject *tmp_globals_arg_value_54;
        PyObject *tmp_locals_arg_value_54;
        PyObject *tmp_fromlist_value_54;
        PyObject *tmp_level_value_54;
        tmp_name_value_54 = mod_consts[93];
        tmp_globals_arg_value_54 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_54 = Py_None;
        tmp_fromlist_value_54 = mod_consts[130];
        tmp_level_value_54 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 63;
        tmp_import_name_from_56 = IMPORT_MODULE5(tmp_name_value_54, tmp_globals_arg_value_54, tmp_locals_arg_value_54, tmp_fromlist_value_54, tmp_level_value_54);
        if (tmp_import_name_from_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_56,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[131],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME(tmp_import_name_from_56, mod_consts[131]);
        }

        Py_DECREF(tmp_import_name_from_56);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_57;
        PyObject *tmp_name_value_55;
        PyObject *tmp_globals_arg_value_55;
        PyObject *tmp_locals_arg_value_55;
        PyObject *tmp_fromlist_value_55;
        PyObject *tmp_level_value_55;
        tmp_name_value_55 = mod_consts[93];
        tmp_globals_arg_value_55 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_55 = Py_None;
        tmp_fromlist_value_55 = mod_consts[132];
        tmp_level_value_55 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 64;
        tmp_import_name_from_57 = IMPORT_MODULE5(tmp_name_value_55, tmp_globals_arg_value_55, tmp_locals_arg_value_55, tmp_fromlist_value_55, tmp_level_value_55);
        if (tmp_import_name_from_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_57,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[133],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME(tmp_import_name_from_57, mod_consts[133]);
        }

        Py_DECREF(tmp_import_name_from_57);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_58;
        PyObject *tmp_name_value_56;
        PyObject *tmp_globals_arg_value_56;
        PyObject *tmp_locals_arg_value_56;
        PyObject *tmp_fromlist_value_56;
        PyObject *tmp_level_value_56;
        tmp_name_value_56 = mod_consts[93];
        tmp_globals_arg_value_56 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_56 = Py_None;
        tmp_fromlist_value_56 = mod_consts[134];
        tmp_level_value_56 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 65;
        tmp_import_name_from_58 = IMPORT_MODULE5(tmp_name_value_56, tmp_globals_arg_value_56, tmp_locals_arg_value_56, tmp_fromlist_value_56, tmp_level_value_56);
        if (tmp_import_name_from_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_58,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[135],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME(tmp_import_name_from_58, mod_consts[135]);
        }

        Py_DECREF(tmp_import_name_from_58);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_59;
        PyObject *tmp_name_value_57;
        PyObject *tmp_globals_arg_value_57;
        PyObject *tmp_locals_arg_value_57;
        PyObject *tmp_fromlist_value_57;
        PyObject *tmp_level_value_57;
        tmp_name_value_57 = mod_consts[93];
        tmp_globals_arg_value_57 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_57 = Py_None;
        tmp_fromlist_value_57 = mod_consts[136];
        tmp_level_value_57 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 66;
        tmp_import_name_from_59 = IMPORT_MODULE5(tmp_name_value_57, tmp_globals_arg_value_57, tmp_locals_arg_value_57, tmp_fromlist_value_57, tmp_level_value_57);
        if (tmp_import_name_from_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_59,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[137],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME(tmp_import_name_from_59, mod_consts[137]);
        }

        Py_DECREF(tmp_import_name_from_59);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_60;
        PyObject *tmp_name_value_58;
        PyObject *tmp_globals_arg_value_58;
        PyObject *tmp_locals_arg_value_58;
        PyObject *tmp_fromlist_value_58;
        PyObject *tmp_level_value_58;
        tmp_name_value_58 = mod_consts[93];
        tmp_globals_arg_value_58 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_58 = Py_None;
        tmp_fromlist_value_58 = mod_consts[138];
        tmp_level_value_58 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 67;
        tmp_import_name_from_60 = IMPORT_MODULE5(tmp_name_value_58, tmp_globals_arg_value_58, tmp_locals_arg_value_58, tmp_fromlist_value_58, tmp_level_value_58);
        if (tmp_import_name_from_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_60,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[139],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME(tmp_import_name_from_60, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_60);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_61;
        PyObject *tmp_name_value_59;
        PyObject *tmp_globals_arg_value_59;
        PyObject *tmp_locals_arg_value_59;
        PyObject *tmp_fromlist_value_59;
        PyObject *tmp_level_value_59;
        tmp_name_value_59 = mod_consts[93];
        tmp_globals_arg_value_59 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_59 = Py_None;
        tmp_fromlist_value_59 = mod_consts[140];
        tmp_level_value_59 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 68;
        tmp_import_name_from_61 = IMPORT_MODULE5(tmp_name_value_59, tmp_globals_arg_value_59, tmp_locals_arg_value_59, tmp_fromlist_value_59, tmp_level_value_59);
        if (tmp_import_name_from_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_61,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[141],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME(tmp_import_name_from_61, mod_consts[141]);
        }

        Py_DECREF(tmp_import_name_from_61);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_62;
        PyObject *tmp_name_value_60;
        PyObject *tmp_globals_arg_value_60;
        PyObject *tmp_locals_arg_value_60;
        PyObject *tmp_fromlist_value_60;
        PyObject *tmp_level_value_60;
        tmp_name_value_60 = mod_consts[142];
        tmp_globals_arg_value_60 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_60 = Py_None;
        tmp_fromlist_value_60 = mod_consts[143];
        tmp_level_value_60 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 69;
        tmp_import_name_from_62 = IMPORT_MODULE5(tmp_name_value_60, tmp_globals_arg_value_60, tmp_locals_arg_value_60, tmp_fromlist_value_60, tmp_level_value_60);
        if (tmp_import_name_from_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_62,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[144],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME(tmp_import_name_from_62, mod_consts[144]);
        }

        Py_DECREF(tmp_import_name_from_62);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_63;
        PyObject *tmp_name_value_61;
        PyObject *tmp_globals_arg_value_61;
        PyObject *tmp_locals_arg_value_61;
        PyObject *tmp_fromlist_value_61;
        PyObject *tmp_level_value_61;
        tmp_name_value_61 = mod_consts[142];
        tmp_globals_arg_value_61 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_61 = Py_None;
        tmp_fromlist_value_61 = mod_consts[145];
        tmp_level_value_61 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 70;
        tmp_import_name_from_63 = IMPORT_MODULE5(tmp_name_value_61, tmp_globals_arg_value_61, tmp_locals_arg_value_61, tmp_fromlist_value_61, tmp_level_value_61);
        if (tmp_import_name_from_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_63,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[146],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME(tmp_import_name_from_63, mod_consts[146]);
        }

        Py_DECREF(tmp_import_name_from_63);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_64;
        PyObject *tmp_name_value_62;
        PyObject *tmp_globals_arg_value_62;
        PyObject *tmp_locals_arg_value_62;
        PyObject *tmp_fromlist_value_62;
        PyObject *tmp_level_value_62;
        tmp_name_value_62 = mod_consts[142];
        tmp_globals_arg_value_62 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_62 = Py_None;
        tmp_fromlist_value_62 = mod_consts[147];
        tmp_level_value_62 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 71;
        tmp_import_name_from_64 = IMPORT_MODULE5(tmp_name_value_62, tmp_globals_arg_value_62, tmp_locals_arg_value_62, tmp_fromlist_value_62, tmp_level_value_62);
        if (tmp_import_name_from_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_64,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[148],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_68 = IMPORT_NAME(tmp_import_name_from_64, mod_consts[148]);
        }

        Py_DECREF(tmp_import_name_from_64);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_65;
        PyObject *tmp_name_value_63;
        PyObject *tmp_globals_arg_value_63;
        PyObject *tmp_locals_arg_value_63;
        PyObject *tmp_fromlist_value_63;
        PyObject *tmp_level_value_63;
        tmp_name_value_63 = mod_consts[142];
        tmp_globals_arg_value_63 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_63 = Py_None;
        tmp_fromlist_value_63 = mod_consts[149];
        tmp_level_value_63 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 72;
        tmp_import_name_from_65 = IMPORT_MODULE5(tmp_name_value_63, tmp_globals_arg_value_63, tmp_locals_arg_value_63, tmp_fromlist_value_63, tmp_level_value_63);
        if (tmp_import_name_from_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_65,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[150],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME(tmp_import_name_from_65, mod_consts[150]);
        }

        Py_DECREF(tmp_import_name_from_65);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_66;
        PyObject *tmp_name_value_64;
        PyObject *tmp_globals_arg_value_64;
        PyObject *tmp_locals_arg_value_64;
        PyObject *tmp_fromlist_value_64;
        PyObject *tmp_level_value_64;
        tmp_name_value_64 = mod_consts[142];
        tmp_globals_arg_value_64 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_64 = Py_None;
        tmp_fromlist_value_64 = mod_consts[151];
        tmp_level_value_64 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 73;
        tmp_import_name_from_66 = IMPORT_MODULE5(tmp_name_value_64, tmp_globals_arg_value_64, tmp_locals_arg_value_64, tmp_fromlist_value_64, tmp_level_value_64);
        if (tmp_import_name_from_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_66,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[152],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME(tmp_import_name_from_66, mod_consts[152]);
        }

        Py_DECREF(tmp_import_name_from_66);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_67;
        PyObject *tmp_name_value_65;
        PyObject *tmp_globals_arg_value_65;
        PyObject *tmp_locals_arg_value_65;
        PyObject *tmp_fromlist_value_65;
        PyObject *tmp_level_value_65;
        tmp_name_value_65 = mod_consts[153];
        tmp_globals_arg_value_65 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_65 = Py_None;
        tmp_fromlist_value_65 = mod_consts[154];
        tmp_level_value_65 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 74;
        tmp_import_name_from_67 = IMPORT_MODULE5(tmp_name_value_65, tmp_globals_arg_value_65, tmp_locals_arg_value_65, tmp_fromlist_value_65, tmp_level_value_65);
        if (tmp_import_name_from_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_67)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_67,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[155],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME(tmp_import_name_from_67, mod_consts[155]);
        }

        Py_DECREF(tmp_import_name_from_67);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_68;
        PyObject *tmp_name_value_66;
        PyObject *tmp_globals_arg_value_66;
        PyObject *tmp_locals_arg_value_66;
        PyObject *tmp_fromlist_value_66;
        PyObject *tmp_level_value_66;
        tmp_name_value_66 = mod_consts[156];
        tmp_globals_arg_value_66 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_66 = Py_None;
        tmp_fromlist_value_66 = mod_consts[157];
        tmp_level_value_66 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 75;
        tmp_import_name_from_68 = IMPORT_MODULE5(tmp_name_value_66, tmp_globals_arg_value_66, tmp_locals_arg_value_66, tmp_fromlist_value_66, tmp_level_value_66);
        if (tmp_import_name_from_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_68)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_68,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[158],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME(tmp_import_name_from_68, mod_consts[158]);
        }

        Py_DECREF(tmp_import_name_from_68);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_69;
        PyObject *tmp_name_value_67;
        PyObject *tmp_globals_arg_value_67;
        PyObject *tmp_locals_arg_value_67;
        PyObject *tmp_fromlist_value_67;
        PyObject *tmp_level_value_67;
        tmp_name_value_67 = mod_consts[159];
        tmp_globals_arg_value_67 = (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
        tmp_locals_arg_value_67 = Py_None;
        tmp_fromlist_value_67 = mod_consts[160];
        tmp_level_value_67 = mod_consts[16];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 76;
        tmp_import_name_from_69 = IMPORT_MODULE5(tmp_name_value_67, tmp_globals_arg_value_67, tmp_locals_arg_value_67, tmp_fromlist_value_67, tmp_level_value_67);
        if (tmp_import_name_from_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_69)) {
            tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_69,
                (PyObject *)moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example,
                mod_consts[161],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_73 = IMPORT_NAME(tmp_import_name_from_69, mod_consts[161]);
        }

        Py_DECREF(tmp_import_name_from_69);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 78;
        tmp_assign_source_74 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[162], 0), mod_consts[163]);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_74);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[165]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 79;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[166], 0), mod_consts[167]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[165]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 84;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[168], 0), mod_consts[169]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[165]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 89;
        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[170], 0), mod_consts[171]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[165]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 93;
        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[172], 0), mod_consts[171]);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[165]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 97;
        tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[173], 0), mod_consts[169]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[165]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 102;
        tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[174], 0), mod_consts[171]);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_7;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[165]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 106;
        tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[175], 0), mod_consts[171]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[165]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 110;
        tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[176], 0), mod_consts[171]);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[165]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 114;
        tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[177], 0), mod_consts[167]);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[165]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 119;
        tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[178], 0), mod_consts[171]);
        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 123;
        tmp_assign_source_75 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[179]);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_1 = mod_consts[181];
        tmp_dict_key_2 = mod_consts[182];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_1;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[183];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[184];
            tmp_dict_value_2 = mod_consts[185];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[186];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = mod_consts[187];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_1);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[188];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[189];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[155]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_dict_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_assign_source_76 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[190];
            tmp_dict_key_3 = mod_consts[182];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto dict_build_exception_2;
            }
            tmp_dict_value_1 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_2;
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[183];
                tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[65]);

                if (unlikely(tmp_dict_value_3 == NULL)) {
                    tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                }

                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 135;

                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[184];
                tmp_dict_value_3 = mod_consts[185];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[186];
                tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[144]);

                if (unlikely(tmp_expression_value_12 == NULL)) {
                    tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                }

                if (tmp_expression_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 137;

                    goto dict_build_exception_3;
                }
                tmp_subscript_value_2 = mod_consts[191];
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_2);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 137;

                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[188];
                tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_dict_value_3 == NULL)) {
                    tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                }

                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;

                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[189];
                tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[155]);

                if (unlikely(tmp_dict_value_3 == NULL)) {
                    tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
                }

                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 139;

                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[192];
            tmp_dict_key_4 = mod_consts[182];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_2;
            }
            tmp_dict_value_1 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_3;
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[183];
                tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[65]);

                if (unlikely(tmp_dict_value_4 == NULL)) {
                    tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                }

                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;

                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[184];
                tmp_dict_value_4 = mod_consts[185];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[186];
                tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[144]);

                if (unlikely(tmp_expression_value_13 == NULL)) {
                    tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                }

                if (tmp_expression_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;

                    goto dict_build_exception_4;
                }
                tmp_subscript_value_3 = mod_consts[193];
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_3);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;

                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[188];
                tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_dict_value_4 == NULL)) {
                    tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                }

                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 146;

                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[189];
                tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[155]);

                if (unlikely(tmp_dict_value_4 == NULL)) {
                    tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
                }

                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;

                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[194];
            tmp_dict_key_5 = mod_consts[182];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_2;
            }
            tmp_dict_value_1 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_4;
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[183];
                tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[65]);

                if (unlikely(tmp_dict_value_5 == NULL)) {
                    tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                }

                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 151;

                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[184];
                tmp_dict_value_5 = mod_consts[185];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[186];
                tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[144]);

                if (unlikely(tmp_expression_value_14 == NULL)) {
                    tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                }

                if (tmp_expression_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 153;

                    goto dict_build_exception_5;
                }
                tmp_subscript_value_4 = mod_consts[195];
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_4);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 153;

                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[188];
                tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_dict_value_5 == NULL)) {
                    tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                }

                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 154;

                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[189];
                tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[155]);

                if (unlikely(tmp_dict_value_5 == NULL)) {
                    tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
                }

                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 155;

                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[196];
            tmp_dict_key_6 = mod_consts[182];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[77]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto dict_build_exception_2;
            }
            tmp_dict_value_1 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_5;
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[183];
                tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_dict_value_6 == NULL)) {
                    tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                }

                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 159;

                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[184];
                tmp_dict_value_6 = mod_consts[5];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[186];
                tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[144]);

                if (unlikely(tmp_expression_value_15 == NULL)) {
                    tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                }

                if (tmp_expression_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;

                    goto dict_build_exception_6;
                }
                tmp_subscript_value_5 = mod_consts[197];
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_5);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;

                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[188];
                tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[85]);

                if (unlikely(tmp_dict_value_6 == NULL)) {
                    tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                }

                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 162;

                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[189];
                tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[158]);

                if (unlikely(tmp_dict_value_6 == NULL)) {
                    tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
                }

                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 163;

                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[198];
            tmp_dict_key_7 = mod_consts[182];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[79]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_2;
            }
            tmp_dict_value_1 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_6;
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[183];
                tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_dict_value_7 == NULL)) {
                    tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                }

                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;

                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[184];
                tmp_dict_value_7 = mod_consts[5];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[186];
                tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[144]);

                if (unlikely(tmp_expression_value_16 == NULL)) {
                    tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                }

                if (tmp_expression_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;

                    goto dict_build_exception_7;
                }
                tmp_subscript_value_6 = mod_consts[199];
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_6);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;

                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[188];
                tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[85]);

                if (unlikely(tmp_dict_value_7 == NULL)) {
                    tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                }

                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 170;

                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[189];
                tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[158]);

                if (unlikely(tmp_dict_value_7 == NULL)) {
                    tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
                }

                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;

                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[200];
            tmp_dict_key_8 = mod_consts[182];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[81]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_2;
            }
            tmp_dict_value_1 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_7;
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_8, tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[183];
                tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_dict_value_8 == NULL)) {
                    tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                }

                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 175;

                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_8, tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[184];
                tmp_dict_value_8 = mod_consts[5];
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_8, tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[186];
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[144]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                }

                if (tmp_expression_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;

                    goto dict_build_exception_8;
                }
                tmp_subscript_value_7 = mod_consts[201];
                tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_7);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;

                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[188];
                tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[85]);

                if (unlikely(tmp_dict_value_8 == NULL)) {
                    tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                }

                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 178;

                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_8, tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[189];
                tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[158]);

                if (unlikely(tmp_dict_value_8 == NULL)) {
                    tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
                }

                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 179;

                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_8, tmp_dict_value_8);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_76);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_expression_value_18;
        tmp_dict_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[202]);

        if (unlikely(tmp_dict_arg_value_1 == NULL)) {
            tmp_dict_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[202]);
        }

        assert(!(tmp_dict_arg_value_1 == NULL));
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_key_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[203]);
        if (tmp_key_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_77 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_1, tmp_key_value_1);
        Py_DECREF(tmp_key_value_1);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_81);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[208]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_open_mode_1;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_1;
        }
        tmp_open_filename_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[208]);
        if (tmp_open_filename_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_1;
        }
        tmp_open_mode_1 = mod_consts[209];
        tmp_assign_source_82 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_1);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_1;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_21 = tmp_with_1__source;
        tmp_called_value_12 = LOOKUP_SPECIAL(tmp_expression_value_21, mod_consts[210]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 189;
        tmp_assign_source_83 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        Py_DECREF(tmp_called_value_12);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_1;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_22 = tmp_with_1__source;
        tmp_assign_source_84 = LOOKUP_SPECIAL(tmp_expression_value_22, mod_consts[211]);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_1;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_84;
    }
    {
        nuitka_bool tmp_assign_source_85;
        tmp_assign_source_85 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_86 = tmp_with_1__enter;
        UPDATE_STRING_DICT0(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_86);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        assert(!(tmp_called_instance_2 == NULL));
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 190;
        tmp_expression_value_24 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[213]);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_3;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[3]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_3;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 190;
        tmp_expression_value_23 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[4]);

        Py_DECREF(tmp_called_value_14);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_3;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[214]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_3;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 190;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[215]);

        Py_DECREF(tmp_called_value_13);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_87);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_aad468fdc22415983a81ec3bf09dbe31, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_aad468fdc22415983a81ec3bf09dbe31, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_88;
        tmp_assign_source_88 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_88;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_15 = tmp_with_1__exit;
        tmp_args_element_value_1 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_2 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_3 = EXC_TRACEBACK(PyThreadState_GET());
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_15, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_4;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 190;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_aad468fdc22415983a81ec3bf09dbe31->m_frame) frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 189;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_aad468fdc22415983a81ec3bf09dbe31->m_frame) frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_16 = tmp_with_1__exit;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 190;
        tmp_call_result_11 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_16, mod_consts[217]);

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 190;

            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_1;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_17 = tmp_with_1__exit;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 190;
        tmp_call_result_12 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_17, mod_consts[217]);

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    branch_no_5:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_25;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[218]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 191;
        tmp_assign_source_89 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[219]);

        Py_DECREF(tmp_called_value_18);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_89);
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_cmp_expr_left_5 == NULL)) {
            tmp_cmp_expr_left_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
        }

        assert(!(tmp_cmp_expr_left_5 == NULL));
        tmp_cmp_expr_right_5 = mod_consts[221];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[222];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 193;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 193;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_add_expr_left_1 == NULL)) {
            tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
        }

        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[223];
        tmp_subscript_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_subscript_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 194;
        tmp_assign_source_90 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_27;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[218]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 195;
        tmp_assign_source_91 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_20, mod_consts[225]);

        Py_DECREF(tmp_called_value_20);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_91);
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        tmp_cmp_expr_left_6 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_cmp_expr_left_6 == NULL)) {
            tmp_cmp_expr_left_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
        }

        assert(!(tmp_cmp_expr_left_6 == NULL));
        tmp_cmp_expr_right_6 = mod_consts[221];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[226];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 197;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 197;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_add_expr_left_2 == NULL)) {
            tmp_add_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
        }

        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[223];
        tmp_subscript_value_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_subscript_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 198;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 199;
        tmp_expression_value_29 = CALL_FUNCTION_NO_ARGS(tmp_called_value_23);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[228]);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 199;
        tmp_assign_source_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_22);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_bytes_arg_1;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_bytes_arg_2;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_10;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 200;
        tmp_expression_value_30 = CALL_FUNCTION_NO_ARGS(tmp_called_value_26);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[228]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[229]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = mod_consts[230];
        tmp_bytes_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_10);
        if (tmp_bytes_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = BUILTIN_BYTES1(tmp_bytes_arg_2);
        Py_DECREF(tmp_bytes_arg_2);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 200;
        tmp_bytes_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_bytes_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = BUILTIN_BYTES1(tmp_bytes_arg_1);
        Py_DECREF(tmp_bytes_arg_1);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 200;
        tmp_assign_source_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 201;
        tmp_expression_value_32 = CALL_FUNCTION_NO_ARGS(tmp_called_value_28);
        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[228]);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[227]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[227]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 201;
        tmp_assign_source_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_27);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_11;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[205]);
        }

        assert(!(tmp_expression_value_33 == NULL));
        tmp_subscript_value_11 = mod_consts[231];
        tmp_assign_source_96 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_11);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_12;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
        }

        assert(!(tmp_expression_value_34 == NULL));
        tmp_subscript_value_12 = mod_consts[233];
        tmp_assign_source_97 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_12);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_bytes_arg_3;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_subscript_value_16;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 204;
        tmp_expression_value_36 = CALL_FUNCTION_NO_ARGS(tmp_called_value_30);
        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[228]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = mod_consts[234];
        tmp_expression_value_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_13);
        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = mod_consts[235];
        tmp_expression_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_14);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = mod_consts[236];
        tmp_bytes_arg_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_15);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_bytes_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = BUILTIN_BYTES1(tmp_bytes_arg_3);
        Py_DECREF(tmp_bytes_arg_3);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 204;
        tmp_expression_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = mod_consts[182];
        tmp_assign_source_98 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_16);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_value_value_1;
        PyObject *tmp_iter_arg_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_100;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_40;
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[202]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[202]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto try_except_handler_5;
            }
            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[238]);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto try_except_handler_5;
            }
            frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 208;
            tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_31);
            Py_DECREF(tmp_called_value_31);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto try_except_handler_5;
            }
            tmp_assign_source_100 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto try_except_handler_5;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_100;
        }
        {
            PyObject *tmp_assign_source_101;
            tmp_assign_source_101 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_101;
        }
        if (isFrameUnusable(cache_frame_0e6c15dc00852e95c8787e19022d7146_2)) {
            Py_XDECREF(cache_frame_0e6c15dc00852e95c8787e19022d7146_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0e6c15dc00852e95c8787e19022d7146_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0e6c15dc00852e95c8787e19022d7146_2 = MAKE_FUNCTION_FRAME(codeobj_0e6c15dc00852e95c8787e19022d7146, module_pygost$asn1schemas$cert$$45$selfsigned$$45$example, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0e6c15dc00852e95c8787e19022d7146_2->m_type_description == NULL);
        frame_0e6c15dc00852e95c8787e19022d7146_2 = cache_frame_0e6c15dc00852e95c8787e19022d7146_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0e6c15dc00852e95c8787e19022d7146_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0e6c15dc00852e95c8787e19022d7146_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_102;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_102 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_102 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 207;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_102;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_103;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_103 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_params;
                outline_0_var_params = tmp_assign_source_103;
                Py_INCREF(outline_0_var_params);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_17;
            CHECK_OBJECT(outline_0_var_params);
            tmp_expression_value_41 = outline_0_var_params;
            tmp_subscript_value_17 = mod_consts[182];
            tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_17);
            if (tmp_cmp_expr_left_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_cmp_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[237]);

            if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
                tmp_cmp_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[237]);
            }

            if (tmp_cmp_expr_right_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_cmp_expr_left_7);

                exception_lineno = 209;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            Py_DECREF(tmp_cmp_expr_left_7);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_params);
            tmp_append_value_1 = outline_0_var_params;
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        branch_no_8:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iter_arg_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iter_arg_1);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0e6c15dc00852e95c8787e19022d7146_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_0e6c15dc00852e95c8787e19022d7146_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0e6c15dc00852e95c8787e19022d7146_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0e6c15dc00852e95c8787e19022d7146_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0e6c15dc00852e95c8787e19022d7146_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0e6c15dc00852e95c8787e19022d7146_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0e6c15dc00852e95c8787e19022d7146_2,
            type_description_2,
            outline_0_var_params
        );


        // Release cached frame if used for exception.
        if (frame_0e6c15dc00852e95c8787e19022d7146_2 == cache_frame_0e6c15dc00852e95c8787e19022d7146_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0e6c15dc00852e95c8787e19022d7146_2);
            cache_frame_0e6c15dc00852e95c8787e19022d7146_2 = NULL;
        }

        assertFrameObject(frame_0e6c15dc00852e95c8787e19022d7146_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_0_var_params);
        outline_0_var_params = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_params);
        outline_0_var_params = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 207;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_value_value_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_99 = ITERATOR_NEXT(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_assign_source_99 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 207;
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_99);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[182];
        tmp_tuple_element_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_18;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[203]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_18 = mod_consts[182];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_18);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_11 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_element_value_11, 0, tmp_tuple_element_1);
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 212;
        tmp_assign_source_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;


        tmp_assign_source_105 = MAKE_FUNCTION_pygost$asn1schemas$cert$$45$selfsigned$$45$example$$$function__1_pem();

        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_105);
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_43;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[241]);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    // Tried code:
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_open_filename_2;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_open_mode_2;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto try_except_handler_7;
        }
        tmp_open_filename_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[241]);
        if (tmp_open_filename_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto try_except_handler_7;
        }
        tmp_open_mode_2 = mod_consts[209];
        tmp_assign_source_106 = BUILTIN_OPEN(tmp_open_filename_2, tmp_open_mode_2, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_2);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto try_except_handler_7;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_45 = tmp_with_2__source;
        tmp_called_value_33 = LOOKUP_SPECIAL(tmp_expression_value_45, mod_consts[210]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto try_except_handler_7;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 222;
        tmp_assign_source_107 = CALL_FUNCTION_NO_ARGS(tmp_called_value_33);
        Py_DECREF(tmp_called_value_33);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto try_except_handler_7;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_46 = tmp_with_2__source;
        tmp_assign_source_108 = LOOKUP_SPECIAL(tmp_expression_value_46, mod_consts[211]);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto try_except_handler_7;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_108;
    }
    {
        nuitka_bool tmp_assign_source_109;
        tmp_assign_source_109 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        CHECK_OBJECT(tmp_with_2__enter);
        tmp_assign_source_110 = tmp_with_2__enter;
        UPDATE_STRING_DICT0(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_110);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        assert(!(tmp_called_instance_3 == NULL));
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 223;
        tmp_expression_value_48 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[213]);
        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_9;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[3]);
        Py_DECREF(tmp_expression_value_48);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_9;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 223;
        tmp_expression_value_47 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_35, mod_consts[4]);

        Py_DECREF(tmp_called_value_35);
        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_9;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[214]);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_9;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 223;
        tmp_assign_source_111 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_34, mod_consts[215]);

        Py_DECREF(tmp_called_value_34);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_111);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_aad468fdc22415983a81ec3bf09dbe31, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_aad468fdc22415983a81ec3bf09dbe31, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_9 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        nuitka_bool tmp_assign_source_112;
        tmp_assign_source_112 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_112;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_36 = tmp_with_2__exit;
        tmp_args_element_value_12 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_13 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_14 = EXC_TRACEBACK(PyThreadState_GET());
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_36, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_10;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_10;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 223;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_aad468fdc22415983a81ec3bf09dbe31->m_frame) frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_10;
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 222;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_aad468fdc22415983a81ec3bf09dbe31->m_frame) frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_10;
    branch_end_10:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_12;
        nuitka_bool tmp_cmp_expr_left_10;
        nuitka_bool tmp_cmp_expr_right_10;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_10 = tmp_with_2__indicator;
        tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
        tmp_condition_result_12 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_call_result_13;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_37 = tmp_with_2__exit;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 223;
        tmp_call_result_13 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_37, mod_consts[217]);

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_9);
            Py_XDECREF(exception_keeper_value_9);
            Py_XDECREF(exception_keeper_tb_9);

            exception_lineno = 223;

            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_13);
    }
    branch_no_12:;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    {
        bool tmp_condition_result_13;
        nuitka_bool tmp_cmp_expr_left_11;
        nuitka_bool tmp_cmp_expr_right_11;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_11 = tmp_with_2__indicator;
        tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
        tmp_condition_result_13 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_38 = tmp_with_2__exit;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 223;
        tmp_call_result_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_38, mod_consts[217]);

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_no_13:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_49;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[218]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 224;
        tmp_assign_source_113 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_39, mod_consts[219]);

        Py_DECREF(tmp_called_value_39);
        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_113);
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        tmp_cmp_expr_left_12 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_cmp_expr_left_12 == NULL)) {
            tmp_cmp_expr_left_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
        }

        assert(!(tmp_cmp_expr_left_12 == NULL));
        tmp_cmp_expr_right_12 = mod_consts[221];
        tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[222];
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 226;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 226;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_14:;
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_add_expr_left_3 == NULL)) {
            tmp_add_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
        }

        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[223];
        tmp_subscript_value_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_subscript_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_19);
        Py_DECREF(tmp_subscript_value_19);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 227;
        tmp_assign_source_114 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 228;
        tmp_expression_value_51 = CALL_FUNCTION_NO_ARGS(tmp_called_value_42);
        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[228]);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 228;
        tmp_assign_source_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_41);
        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_bytes_arg_4;
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_bytes_arg_5;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_20;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 229;
        tmp_expression_value_52 = CALL_FUNCTION_NO_ARGS(tmp_called_value_45);
        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[228]);
        Py_DECREF(tmp_expression_value_52);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[229]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_20 = mod_consts[230];
        tmp_bytes_arg_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_20);
        if (tmp_bytes_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = BUILTIN_BYTES1(tmp_bytes_arg_5);
        Py_DECREF(tmp_bytes_arg_5);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 229;
        tmp_bytes_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_bytes_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = BUILTIN_BYTES1(tmp_bytes_arg_4);
        Py_DECREF(tmp_bytes_arg_4);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 229;
        tmp_assign_source_116 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_116);
    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_21;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_21 = mod_consts[184];
        tmp_args_element_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_21);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 231;
        tmp_assign_source_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_open_filename_3;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_open_mode_3;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[243]);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_13 = Py_None;
        tmp_condition_result_15 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_13);
        if (tmp_condition_result_15 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_118 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assign_source_118 == NULL)) {
            tmp_assign_source_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        assert(!(tmp_assign_source_118 == NULL));
        Py_INCREF(tmp_assign_source_118);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_open_filename_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[243]);
        if (tmp_open_filename_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_3 = mod_consts[244];
        tmp_assign_source_118 = BUILTIN_OPEN(tmp_open_filename_3, tmp_open_mode_3, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_3);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_118);
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_call_result_15;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_47 = LOOKUP_BUILTIN(mod_consts[246]);
        assert(tmp_called_value_47 != NULL);
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        assert(!(tmp_kw_call_value_0_1 == NULL));
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 233;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_15 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_47, mod_consts[247], kw_values, mod_consts[248]);
        }

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_call_result_16;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_49;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_48 = LOOKUP_BUILTIN(mod_consts[246]);
        assert(tmp_called_value_48 != NULL);
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[240]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[240]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = mod_consts[249];
        tmp_tuple_element_3 = PyTuple_New(2);
        {
            PyObject *tmp_called_value_51;
            PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_4);
            tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_called_value_51 == NULL)) {
                tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_called_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto tuple_build_exception_2;
            }
            frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 235;
            tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_51, mod_consts[250]);

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_tuple_element_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_21 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_9;
            PyTuple_SET_ITEM(tmp_args_element_value_21, 0, tmp_tuple_element_3);
            tmp_tuple_element_5 = mod_consts[251];
            tmp_tuple_element_3 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_52;
                PyObject *tmp_args_element_value_22;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_tuple_element_7;
                PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_5);
                tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[90]);

                if (unlikely(tmp_called_value_52 == NULL)) {
                    tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
                }

                if (tmp_called_value_52 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 236;

                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_7 = mod_consts[235];
                tmp_tuple_element_6 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_57;
                    PyObject *tmp_subscript_value_22;
                    PyTuple_SET_ITEM0(tmp_tuple_element_6, 0, tmp_tuple_element_7);
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[203]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
                    }

                    if (tmp_expression_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 237;

                        goto tuple_build_exception_5;
                    }
                    tmp_subscript_value_22 = mod_consts[183];
                    tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_22);
                    if (tmp_tuple_element_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 237;

                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_6, 1, tmp_tuple_element_7);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_tuple_element_6);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_args_element_value_22 = PyTuple_New(2);
                {
                    PyObject *tmp_tuple_element_8;
                    PyTuple_SET_ITEM(tmp_args_element_value_22, 0, tmp_tuple_element_6);
                    tmp_tuple_element_8 = mod_consts[236];
                    tmp_tuple_element_6 = PyTuple_New(2);
                    {
                        PyObject *tmp_called_value_53;
                        PyObject *tmp_args_element_value_23;
                        PyTuple_SET_ITEM0(tmp_tuple_element_6, 0, tmp_tuple_element_8);
                        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_called_value_53 == NULL)) {
                            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_called_value_53 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 238;

                            goto tuple_build_exception_7;
                        }
                        tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[239]);

                        if (unlikely(tmp_args_element_value_23 == NULL)) {
                            tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[239]);
                        }

                        if (tmp_args_element_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 238;

                            goto tuple_build_exception_7;
                        }
                        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 238;
                        tmp_tuple_element_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_23);
                        if (tmp_tuple_element_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 238;

                            goto tuple_build_exception_7;
                        }
                        PyTuple_SET_ITEM(tmp_tuple_element_6, 1, tmp_tuple_element_8);
                    }
                    goto tuple_build_noexception_4;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_7:;
                    Py_DECREF(tmp_tuple_element_6);
                    goto tuple_build_exception_6;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_4:;
                    PyTuple_SET_ITEM(tmp_args_element_value_22, 1, tmp_tuple_element_6);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_args_element_value_22);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 236;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_22);
                Py_DECREF(tmp_args_element_value_22);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 236;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_tuple_element_3);
            goto tuple_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            PyTuple_SET_ITEM(tmp_args_element_value_21, 1, tmp_tuple_element_3);
            tmp_tuple_element_9 = mod_consts[230];
            tmp_tuple_element_3 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_54;
                PyObject *tmp_args_element_value_24;
                PyObject *tmp_called_value_55;
                PyObject *tmp_expression_value_58;
                PyObject *tmp_called_value_56;
                PyObject *tmp_args_element_value_25;
                PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_9);
                tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[88]);

                if (unlikely(tmp_called_value_54 == NULL)) {
                    tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                }

                if (tmp_called_value_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 240;

                    goto tuple_build_exception_8;
                }
                tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[44]);

                if (unlikely(tmp_called_value_56 == NULL)) {
                    tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                }

                if (tmp_called_value_56 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 240;

                    goto tuple_build_exception_8;
                }
                tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[224]);

                if (unlikely(tmp_args_element_value_25 == NULL)) {
                    tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
                }

                if (tmp_args_element_value_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 240;

                    goto tuple_build_exception_8;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 240;
                tmp_expression_value_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_25);
                if (tmp_expression_value_58 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 240;

                    goto tuple_build_exception_8;
                }
                tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[2]);
                Py_DECREF(tmp_expression_value_58);
                if (tmp_called_value_55 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 240;

                    goto tuple_build_exception_8;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 240;
                tmp_args_element_value_24 = CALL_FUNCTION_NO_ARGS(tmp_called_value_55);
                Py_DECREF(tmp_called_value_55);
                if (tmp_args_element_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 240;

                    goto tuple_build_exception_8;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 240;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_24);
                Py_DECREF(tmp_args_element_value_24);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 240;

                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_tuple_element_3);
            goto tuple_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            PyTuple_SET_ITEM(tmp_args_element_value_21, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_args_element_value_21);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 234;
        tmp_args_element_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 234;
        tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 234;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_48, args, kw_values, mod_consts[248]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_call_result_17;
        PyObject *tmp_kw_call_value_0_2;
        tmp_called_value_57 = LOOKUP_BUILTIN(mod_consts[246]);
        assert(tmp_called_value_57 != NULL);
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 242;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_call_result_17 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_57, mod_consts[252], kw_values, mod_consts[248]);
        }

        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[253]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_call_result_18;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 244;
        tmp_call_result_18 = CALL_FUNCTION_NO_ARGS(tmp_called_value_58);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    branch_no_15:;
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_59;
        PyObject *tmp_args_element_value_26;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_args_element_value_26 == NULL)) {
            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 245;
        tmp_assign_source_119 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_59, tmp_args_element_value_26);
        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_119);
    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_23;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_23 = mod_consts[186];
        tmp_assign_source_120 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_23);
        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_called_value_60;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_61;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_args_element_value_28 == NULL)) {
            tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        assert(!(tmp_args_element_value_28 == NULL));
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[242]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_args_element_value_27 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_61, call_args);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 248;
        tmp_assign_source_121 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_62;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_called_value_63;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_tuple_element_12;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_12 = mod_consts[255];
        tmp_tuple_element_11 = PyTuple_New(2);
        {
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_element_value_32;
            PyTuple_SET_ITEM0(tmp_tuple_element_11, 0, tmp_tuple_element_12);
            tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_called_value_64 == NULL)) {
                tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
            }

            if (tmp_called_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto tuple_build_exception_9;
            }
            tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_args_element_value_32 == NULL)) {
                tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
            }

            if (tmp_args_element_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto tuple_build_exception_9;
            }
            frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 251;
            tmp_tuple_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_32);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_11, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_tuple_element_11);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_args_element_value_31 = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_13;
            PyTuple_SET_ITEM(tmp_args_element_value_31, 0, tmp_tuple_element_11);
            tmp_tuple_element_13 = mod_consts[256];
            tmp_tuple_element_11 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_65;
                PyObject *tmp_args_element_value_33;
                PyObject *tmp_called_value_66;
                PyObject *tmp_args_element_value_34;
                PyObject *tmp_expression_value_61;
                PyTuple_SET_ITEM0(tmp_tuple_element_11, 0, tmp_tuple_element_13);
                tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[101]);

                if (unlikely(tmp_called_value_65 == NULL)) {
                    tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
                }

                if (tmp_called_value_65 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;

                    goto tuple_build_exception_11;
                }
                tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[46]);

                if (unlikely(tmp_called_value_66 == NULL)) {
                    tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
                }

                if (tmp_called_value_66 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;

                    goto tuple_build_exception_11;
                }
                tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

                if (unlikely(tmp_expression_value_61 == NULL)) {
                    tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
                }

                if (tmp_expression_value_61 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;

                    goto tuple_build_exception_11;
                }
                tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[257]);
                if (tmp_args_element_value_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;

                    goto tuple_build_exception_11;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 252;
                tmp_args_element_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_34);
                if (tmp_args_element_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;

                    goto tuple_build_exception_11;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 252;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_33);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;

                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_11, 1, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_tuple_element_11);
            goto tuple_build_exception_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            PyTuple_SET_ITEM(tmp_args_element_value_31, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_args_element_value_31);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 250;
        tmp_tuple_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_element_value_30, 0, tmp_tuple_element_10);
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 249;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_30);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_122 = PyList_New(1);
        PyList_SET_ITEM(tmp_assign_source_122, 0, tmp_list_element_1);
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_122);
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[259]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_called_value_68;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_called_value_69;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_tuple_element_16;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[258]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[260]);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_16 = mod_consts[255];
        tmp_tuple_element_15 = PyTuple_New(2);
        {
            PyObject *tmp_called_value_70;
            PyObject *tmp_args_element_value_38;
            PyTuple_SET_ITEM0(tmp_tuple_element_15, 0, tmp_tuple_element_16);
            tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_called_value_70 == NULL)) {
                tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
            }

            if (tmp_called_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto tuple_build_exception_12;
            }
            tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_args_element_value_38 == NULL)) {
                tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_args_element_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto tuple_build_exception_12;
            }
            frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 258;
            tmp_tuple_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_70, tmp_args_element_value_38);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_15, 1, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_tuple_element_15);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_args_element_value_37 = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_17;
            PyTuple_SET_ITEM(tmp_args_element_value_37, 0, tmp_tuple_element_15);
            tmp_tuple_element_17 = mod_consts[256];
            tmp_tuple_element_15 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_71;
                PyObject *tmp_args_element_value_39;
                PyObject *tmp_called_value_72;
                PyObject *tmp_args_element_value_40;
                PyObject *tmp_expression_value_64;
                PyTuple_SET_ITEM0(tmp_tuple_element_15, 0, tmp_tuple_element_17);
                tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[101]);

                if (unlikely(tmp_called_value_71 == NULL)) {
                    tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
                }

                if (tmp_called_value_71 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;

                    goto tuple_build_exception_14;
                }
                tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[46]);

                if (unlikely(tmp_called_value_72 == NULL)) {
                    tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
                }

                if (tmp_called_value_72 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;

                    goto tuple_build_exception_14;
                }
                tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

                if (unlikely(tmp_expression_value_64 == NULL)) {
                    tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
                }

                if (tmp_expression_value_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;

                    goto tuple_build_exception_14;
                }
                tmp_args_element_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[259]);
                if (tmp_args_element_value_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;

                    goto tuple_build_exception_14;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 259;
                tmp_args_element_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_72, tmp_args_element_value_40);
                Py_DECREF(tmp_args_element_value_40);
                if (tmp_args_element_value_39 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;

                    goto tuple_build_exception_14;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 259;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_71, tmp_args_element_value_39);
                Py_DECREF(tmp_args_element_value_39);
                if (tmp_tuple_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 259;

                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_15, 1, tmp_tuple_element_17);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_tuple_element_15);
            goto tuple_build_exception_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            PyTuple_SET_ITEM(tmp_args_element_value_37, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_element_value_37);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 257;
        tmp_tuple_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_69, tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_element_value_36, 0, tmp_tuple_element_14);
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 256;
        tmp_args_element_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_68, tmp_args_element_value_36);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 256;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_67, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    branch_no_16:;
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_value_73;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_tuple_element_18;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_18 = mod_consts[261];
        tmp_args_element_value_41 = PyTuple_New(2);
        {
            PyObject *tmp_called_value_74;
            PyObject *tmp_args_element_value_42;
            PyTuple_SET_ITEM0(tmp_args_element_value_41, 0, tmp_tuple_element_18);
            tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[125]);

            if (unlikely(tmp_called_value_74 == NULL)) {
                tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
            }

            if (tmp_called_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[258]);

            if (unlikely(tmp_args_element_value_42 == NULL)) {
                tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[258]);
            }

            if (tmp_args_element_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_15;
            }
            frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 262;
            tmp_tuple_element_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_74, tmp_args_element_value_42);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_41, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_args_element_value_41);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 262;
        tmp_assign_source_123 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_73, tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 263;
        tmp_assign_source_124 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[263]);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_called_value_75;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        tmp_add_expr_left_4 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[264]);

        if (unlikely(tmp_add_expr_left_4 == NULL)) {
            tmp_add_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[264]);
        }

        assert(!(tmp_add_expr_left_4 == NULL));
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = mod_consts[265];
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[266]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_mult_expr_right_1 = mod_consts[267];
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_mult_expr_right_1 = mod_consts[223];
        condexpr_end_2:;
        tmp_kw_call_value_0_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_right_1, tmp_mult_expr_left_1);
        assert(!(tmp_kw_call_value_0_3 == NULL));
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 264;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

            tmp_add_expr_right_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_75, kw_values, mod_consts[268]);
        }

        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_add_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_125 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_called_value_76;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_tuple_element_20;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_20 = mod_consts[235];
        tmp_tuple_element_19 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_66;
            bool tmp_condition_result_19;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            PyObject *tmp_subscript_value_24;
            PyTuple_SET_ITEM0(tmp_tuple_element_19, 0, tmp_tuple_element_20);
            tmp_cmp_expr_left_14 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[207]);

            if (unlikely(tmp_cmp_expr_left_14 == NULL)) {
                tmp_cmp_expr_left_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
            }

            if (tmp_cmp_expr_left_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_16;
            }
            tmp_cmp_expr_right_14 = Py_None;
            tmp_condition_result_19 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
            if (tmp_condition_result_19 != false) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[203]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_16;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[207]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_16;
            }
            condexpr_end_3:;
            tmp_subscript_value_24 = mod_consts[188];
            tmp_tuple_element_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_24);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_19, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_tuple_element_19);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_args_element_value_43 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_element_value_43, 0, tmp_tuple_element_19);
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 265;
        tmp_assign_source_126 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_76, tmp_args_element_value_43);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_77;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_tuple_element_22;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_22 = mod_consts[271];
        tmp_tuple_element_21 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_21, 0, tmp_tuple_element_22);
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_tuple_element_22 == NULL)) {
            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_tuple_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto tuple_build_exception_17;
        }
        PyTuple_SET_ITEM0(tmp_tuple_element_21, 1, tmp_tuple_element_22);
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_tuple_element_21);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_args_element_value_44 = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_23;
            PyTuple_SET_ITEM(tmp_args_element_value_44, 0, tmp_tuple_element_21);
            tmp_tuple_element_23 = mod_consts[272];
            tmp_tuple_element_21 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_78;
                PyObject *tmp_args_element_value_45;
                PyObject *tmp_called_value_79;
                PyObject *tmp_expression_value_67;
                PyObject *tmp_called_value_80;
                PyObject *tmp_args_element_value_46;
                PyObject *tmp_expression_value_68;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_called_value_81;
                PyObject *tmp_args_element_value_47;
                PyObject *tmp_subscript_value_25;
                PyTuple_SET_ITEM0(tmp_tuple_element_21, 0, tmp_tuple_element_23);
                tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[44]);

                if (unlikely(tmp_called_value_78 == NULL)) {
                    tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                }

                if (tmp_called_value_78 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 271;

                    goto tuple_build_exception_19;
                }
                tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[131]);

                if (unlikely(tmp_called_value_80 == NULL)) {
                    tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
                }

                if (tmp_called_value_80 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;

                    goto tuple_build_exception_19;
                }
                tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[155]);

                if (unlikely(tmp_called_value_81 == NULL)) {
                    tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
                }

                if (tmp_called_value_81 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;

                    goto tuple_build_exception_19;
                }
                tmp_args_element_value_47 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[254]);

                if (unlikely(tmp_args_element_value_47 == NULL)) {
                    tmp_args_element_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[254]);
                }

                if (tmp_args_element_value_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;

                    goto tuple_build_exception_19;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 272;
                tmp_called_instance_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_81, tmp_args_element_value_47);
                if (tmp_called_instance_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;

                    goto tuple_build_exception_19;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 272;
                tmp_expression_value_68 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[273]);
                Py_DECREF(tmp_called_instance_5);
                if (tmp_expression_value_68 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;

                    goto tuple_build_exception_19;
                }
                tmp_subscript_value_25 = mod_consts[274];
                tmp_args_element_value_46 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_68);
                if (tmp_args_element_value_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;

                    goto tuple_build_exception_19;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 272;
                tmp_expression_value_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_80, tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_46);
                if (tmp_expression_value_67 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;

                    goto tuple_build_exception_19;
                }
                tmp_called_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[2]);
                Py_DECREF(tmp_expression_value_67);
                if (tmp_called_value_79 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;

                    goto tuple_build_exception_19;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 272;
                tmp_args_element_value_45 = CALL_FUNCTION_NO_ARGS(tmp_called_value_79);
                Py_DECREF(tmp_called_value_79);
                if (tmp_args_element_value_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;

                    goto tuple_build_exception_19;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 271;
                tmp_tuple_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_78, tmp_args_element_value_45);
                Py_DECREF(tmp_args_element_value_45);
                if (tmp_tuple_element_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 271;

                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_21, 1, tmp_tuple_element_23);
            }
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_tuple_element_21);
            goto tuple_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            PyTuple_SET_ITEM(tmp_args_element_value_44, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_args_element_value_44);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 269;
        tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_77, tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_127 = PyList_New(2);
        {
            PyObject *tmp_called_value_82;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_tuple_element_25;
            PyList_SET_ITEM(tmp_assign_source_127, 0, tmp_list_element_2);
            tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_called_value_82 == NULL)) {
                tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
            }

            if (tmp_called_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto list_build_exception_1;
            }
            tmp_tuple_element_25 = mod_consts[271];
            tmp_tuple_element_24 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_24, 0, tmp_tuple_element_25);
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_tuple_element_24, 1, tmp_tuple_element_25);
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_tuple_element_24);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_args_element_value_48 = PyTuple_New(3);
            {
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_tuple_element_27;
                PyTuple_SET_ITEM(tmp_args_element_value_48, 0, tmp_tuple_element_24);
                tmp_tuple_element_26 = mod_consts[275];
                tmp_tuple_element_24 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_83;
                    PyTuple_SET_ITEM0(tmp_tuple_element_24, 0, tmp_tuple_element_26);
                    tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_called_value_83 == NULL)) {
                        tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_called_value_83 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;

                        goto tuple_build_exception_22;
                    }
                    frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 277;
                    tmp_tuple_element_26 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_83, mod_consts[276]);

                    if (tmp_tuple_element_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;

                        goto tuple_build_exception_22;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_24, 1, tmp_tuple_element_26);
                }
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_tuple_element_24);
                goto tuple_build_exception_21;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyTuple_SET_ITEM(tmp_args_element_value_48, 1, tmp_tuple_element_24);
                tmp_tuple_element_27 = mod_consts[272];
                tmp_tuple_element_24 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_84;
                    PyObject *tmp_args_element_value_49;
                    PyObject *tmp_called_value_85;
                    PyObject *tmp_expression_value_69;
                    PyObject *tmp_called_value_86;
                    PyObject *tmp_args_element_value_50;
                    PyObject *tmp_tuple_element_28;
                    nuitka_bool tmp_condition_result_20;
                    PyObject *tmp_expression_value_70;
                    PyObject *tmp_attribute_value_4;
                    int tmp_truth_name_4;
                    PyTuple_SET_ITEM0(tmp_tuple_element_24, 0, tmp_tuple_element_27);
                    tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_called_value_84 == NULL)) {
                        tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_called_value_84 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 278;

                        goto tuple_build_exception_23;
                    }
                    tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[121]);

                    if (unlikely(tmp_called_value_86 == NULL)) {
                        tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
                    }

                    if (tmp_called_value_86 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 278;

                        goto tuple_build_exception_23;
                    }
                    tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

                    if (unlikely(tmp_expression_value_70 == NULL)) {
                        tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
                    }

                    if (tmp_expression_value_70 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 279;

                        goto tuple_build_exception_23;
                    }
                    tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[266]);
                    if (tmp_attribute_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 279;

                        goto tuple_build_exception_23;
                    }
                    tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
                    if (tmp_truth_name_4 == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_attribute_value_4);

                        exception_lineno = 279;

                        goto tuple_build_exception_23;
                    }
                    tmp_condition_result_20 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
                    Py_DECREF(tmp_attribute_value_4);
                    if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                        goto condexpr_true_4;
                    } else {
                        goto condexpr_false_4;
                    }
                    condexpr_true_4:;
                    tmp_tuple_element_28 = mod_consts[277];
                    goto condexpr_end_4;
                    condexpr_false_4:;
                    tmp_tuple_element_28 = mod_consts[278];
                    condexpr_end_4:;
                    tmp_args_element_value_50 = PyTuple_New(1);
                    PyTuple_SET_ITEM0(tmp_args_element_value_50, 0, tmp_tuple_element_28);
                    frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 278;
                    tmp_expression_value_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_86, tmp_args_element_value_50);
                    Py_DECREF(tmp_args_element_value_50);
                    if (tmp_expression_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 278;

                        goto tuple_build_exception_23;
                    }
                    tmp_called_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[2]);
                    Py_DECREF(tmp_expression_value_69);
                    if (tmp_called_value_85 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 278;

                        goto tuple_build_exception_23;
                    }
                    frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 278;
                    tmp_args_element_value_49 = CALL_FUNCTION_NO_ARGS(tmp_called_value_85);
                    Py_DECREF(tmp_called_value_85);
                    if (tmp_args_element_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 278;

                        goto tuple_build_exception_23;
                    }
                    frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 278;
                    tmp_tuple_element_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_84, tmp_args_element_value_49);
                    Py_DECREF(tmp_args_element_value_49);
                    if (tmp_tuple_element_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 278;

                        goto tuple_build_exception_23;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_24, 1, tmp_tuple_element_27);
                }
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_23:;
                Py_DECREF(tmp_tuple_element_24);
                goto tuple_build_exception_21;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                PyTuple_SET_ITEM(tmp_args_element_value_48, 2, tmp_tuple_element_24);
            }
            goto tuple_build_noexception_23;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_args_element_value_48);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_23:;
            frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 275;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_82, tmp_args_element_value_48);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_127, 1, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_127);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_127);
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_attribute_value_5;
        int tmp_truth_name_5;
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_attribute_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[266]);
        if (tmp_attribute_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_5);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_5);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_21 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_5);
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_called_value_88;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_tuple_element_30;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[279]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[279]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[260]);
        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);

            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_30 = mod_consts[271];
        tmp_tuple_element_29 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_29, 0, tmp_tuple_element_30);
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_tuple_element_30 == NULL)) {
            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_tuple_element_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto tuple_build_exception_24;
        }
        PyTuple_SET_ITEM0(tmp_tuple_element_29, 1, tmp_tuple_element_30);
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_called_value_87);
        Py_DECREF(tmp_tuple_element_29);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_args_element_value_52 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_tuple_element_32;
            PyTuple_SET_ITEM(tmp_args_element_value_52, 0, tmp_tuple_element_29);
            tmp_tuple_element_31 = mod_consts[275];
            tmp_tuple_element_29 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_89;
                PyTuple_SET_ITEM0(tmp_tuple_element_29, 0, tmp_tuple_element_31);
                tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[38]);

                if (unlikely(tmp_called_value_89 == NULL)) {
                    tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                }

                if (tmp_called_value_89 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;

                    goto tuple_build_exception_26;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 286;
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_89, mod_consts[276]);

                if (tmp_tuple_element_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;

                    goto tuple_build_exception_26;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_29, 1, tmp_tuple_element_31);
            }
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_tuple_element_29);
            goto tuple_build_exception_25;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            PyTuple_SET_ITEM(tmp_args_element_value_52, 1, tmp_tuple_element_29);
            tmp_tuple_element_32 = mod_consts[272];
            tmp_tuple_element_29 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_90;
                PyObject *tmp_args_element_value_53;
                PyObject *tmp_called_value_91;
                PyObject *tmp_expression_value_73;
                PyObject *tmp_called_value_92;
                PyObject *tmp_args_element_value_54;
                PyObject *tmp_tuple_element_33;
                PyObject *tmp_tuple_element_34;
                PyTuple_SET_ITEM0(tmp_tuple_element_29, 0, tmp_tuple_element_32);
                tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[44]);

                if (unlikely(tmp_called_value_90 == NULL)) {
                    tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                }

                if (tmp_called_value_90 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;

                    goto tuple_build_exception_27;
                }
                tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[105]);

                if (unlikely(tmp_called_value_92 == NULL)) {
                    tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
                }

                if (tmp_called_value_92 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;

                    goto tuple_build_exception_27;
                }
                tmp_tuple_element_34 = mod_consts[280];
                tmp_tuple_element_33 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_93;
                    PyTuple_SET_ITEM0(tmp_tuple_element_33, 0, tmp_tuple_element_34);
                    tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_called_value_93 == NULL)) {
                        tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_called_value_93 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 288;

                        goto tuple_build_exception_28;
                    }
                    frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 288;
                    tmp_tuple_element_34 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_93, mod_consts[276]);

                    if (tmp_tuple_element_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 288;

                        goto tuple_build_exception_28;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_33, 1, tmp_tuple_element_34);
                }
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_tuple_element_33);
                goto tuple_build_exception_27;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                tmp_args_element_value_54 = PyTuple_New(1);
                PyTuple_SET_ITEM(tmp_args_element_value_54, 0, tmp_tuple_element_33);
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 287;
                tmp_expression_value_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_92, tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_54);
                if (tmp_expression_value_73 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;

                    goto tuple_build_exception_27;
                }
                tmp_called_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[2]);
                Py_DECREF(tmp_expression_value_73);
                if (tmp_called_value_91 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;

                    goto tuple_build_exception_27;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 287;
                tmp_args_element_value_53 = CALL_FUNCTION_NO_ARGS(tmp_called_value_91);
                Py_DECREF(tmp_called_value_91);
                if (tmp_args_element_value_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;

                    goto tuple_build_exception_27;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 287;
                tmp_tuple_element_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_90, tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_53);
                if (tmp_tuple_element_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;

                    goto tuple_build_exception_27;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_29, 1, tmp_tuple_element_32);
            }
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_tuple_element_29);
            goto tuple_build_exception_25;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            PyTuple_SET_ITEM(tmp_args_element_value_52, 2, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_called_value_87);
        Py_DECREF(tmp_args_element_value_52);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 284;
        tmp_args_element_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_88, tmp_args_element_value_52);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);

            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 284;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_87, tmp_args_element_value_51);
        Py_DECREF(tmp_called_value_87);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_called_value_95;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_tuple_element_36;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[279]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[279]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_called_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[260]);
        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_36 = mod_consts[271];
        tmp_tuple_element_35 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_35, 0, tmp_tuple_element_36);
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_tuple_element_36 == NULL)) {
            tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_tuple_element_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto tuple_build_exception_29;
        }
        PyTuple_SET_ITEM0(tmp_tuple_element_35, 1, tmp_tuple_element_36);
        goto tuple_build_noexception_29;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_29:;
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_tuple_element_35);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_29:;
        tmp_args_element_value_56 = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_37;
            PyTuple_SET_ITEM(tmp_args_element_value_56, 0, tmp_tuple_element_35);
            tmp_tuple_element_37 = mod_consts[272];
            tmp_tuple_element_35 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_96;
                PyObject *tmp_args_element_value_57;
                PyObject *tmp_called_value_97;
                PyObject *tmp_expression_value_75;
                PyObject *tmp_called_value_98;
                PyObject *tmp_args_element_value_58;
                PyObject *tmp_tuple_element_38;
                PyObject *tmp_called_value_99;
                PyObject *tmp_args_element_value_59;
                PyObject *tmp_tuple_element_39;
                PyTuple_SET_ITEM0(tmp_tuple_element_35, 0, tmp_tuple_element_37);
                tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[44]);

                if (unlikely(tmp_called_value_96 == NULL)) {
                    tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                }

                if (tmp_called_value_96 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 294;

                    goto tuple_build_exception_31;
                }
                tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[129]);

                if (unlikely(tmp_called_value_98 == NULL)) {
                    tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                }

                if (tmp_called_value_98 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;

                    goto tuple_build_exception_31;
                }
                tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[115]);

                if (unlikely(tmp_called_value_99 == NULL)) {
                    tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
                }

                if (tmp_called_value_99 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;

                    goto tuple_build_exception_31;
                }
                tmp_tuple_element_39 = mod_consts[281];
                tmp_args_element_value_59 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_100;
                    PyObject *tmp_args_element_value_60;
                    PyObject *tmp_expression_value_76;
                    PyTuple_SET_ITEM0(tmp_args_element_value_59, 0, tmp_tuple_element_39);
                    tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[40]);

                    if (unlikely(tmp_called_value_100 == NULL)) {
                        tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                    }

                    if (tmp_called_value_100 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 296;

                        goto tuple_build_exception_32;
                    }
                    tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

                    if (unlikely(tmp_expression_value_76 == NULL)) {
                        tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
                    }

                    if (tmp_expression_value_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 296;

                        goto tuple_build_exception_32;
                    }
                    tmp_args_element_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[257]);
                    if (tmp_args_element_value_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 296;

                        goto tuple_build_exception_32;
                    }
                    frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 296;
                    tmp_tuple_element_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_100, tmp_args_element_value_60);
                    Py_DECREF(tmp_args_element_value_60);
                    if (tmp_tuple_element_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 296;

                        goto tuple_build_exception_32;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_59, 1, tmp_tuple_element_39);
                }
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_args_element_value_59);
                goto tuple_build_exception_31;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 296;
                tmp_tuple_element_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_99, tmp_args_element_value_59);
                Py_DECREF(tmp_args_element_value_59);
                if (tmp_tuple_element_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;

                    goto tuple_build_exception_31;
                }
                tmp_args_element_value_58 = PyTuple_New(1);
                PyTuple_SET_ITEM(tmp_args_element_value_58, 0, tmp_tuple_element_38);
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 295;
                tmp_expression_value_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_98, tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_58);
                if (tmp_expression_value_75 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;

                    goto tuple_build_exception_31;
                }
                tmp_called_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[2]);
                Py_DECREF(tmp_expression_value_75);
                if (tmp_called_value_97 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;

                    goto tuple_build_exception_31;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 295;
                tmp_args_element_value_57 = CALL_FUNCTION_NO_ARGS(tmp_called_value_97);
                Py_DECREF(tmp_called_value_97);
                if (tmp_args_element_value_57 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;

                    goto tuple_build_exception_31;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 294;
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_96, tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_57);
                if (tmp_tuple_element_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 294;

                    goto tuple_build_exception_31;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_35, 1, tmp_tuple_element_37);
            }
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_tuple_element_35);
            goto tuple_build_exception_30;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            PyTuple_SET_ITEM(tmp_args_element_value_56, 1, tmp_tuple_element_35);
        }
        goto tuple_build_noexception_32;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_30:;
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_args_element_value_56);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_32:;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 292;
        tmp_args_element_value_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_95, tmp_args_element_value_56);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 292;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_94, tmp_args_element_value_55);
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    branch_end_17:;
    {
        bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        tmp_cmp_expr_left_15 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_cmp_expr_left_15 == NULL)) {
            tmp_cmp_expr_left_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
        }

        if (tmp_cmp_expr_left_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_15 = Py_None;
        tmp_condition_result_22 = (tmp_cmp_expr_left_15 != tmp_cmp_expr_right_15) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_subscript_value_30;
        // Tried code:
        {
            PyObject *tmp_assign_source_129;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_subscript_value_27;
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[205]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[205]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto try_except_handler_11;
            }
            tmp_subscript_value_26 = mod_consts[231];
            tmp_expression_value_78 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_26);
            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto try_except_handler_11;
            }
            tmp_subscript_value_27 = mod_consts[282];
            tmp_iter_arg_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_78, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto try_except_handler_11;
            }
            tmp_assign_source_129 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_129 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;

                goto try_except_handler_11;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_129;
        }
        {
            PyObject *tmp_assign_source_130;
            tmp_assign_source_130 = PyList_New(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_130;
        }
        if (isFrameUnusable(cache_frame_163896f671496051be468a83dea1529b_3)) {
            Py_XDECREF(cache_frame_163896f671496051be468a83dea1529b_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_163896f671496051be468a83dea1529b_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_163896f671496051be468a83dea1529b_3 = MAKE_FUNCTION_FRAME(codeobj_163896f671496051be468a83dea1529b, module_pygost$asn1schemas$cert$$45$selfsigned$$45$example, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_163896f671496051be468a83dea1529b_3->m_type_description == NULL);
        frame_163896f671496051be468a83dea1529b_3 = cache_frame_163896f671496051be468a83dea1529b_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_163896f671496051be468a83dea1529b_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_163896f671496051be468a83dea1529b_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_131;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_131 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_131 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 301;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_131;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_132;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_132 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_ext;
                outline_1_var_ext = tmp_assign_source_132;
                Py_INCREF(outline_1_var_ext);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_cmp_expr_left_16;
            PyObject *tmp_cmp_expr_right_16;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_28;
            CHECK_OBJECT(outline_1_var_ext);
            tmp_expression_value_80 = outline_1_var_ext;
            tmp_subscript_value_28 = mod_consts[271];
            tmp_cmp_expr_left_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_80, tmp_subscript_value_28);
            if (tmp_cmp_expr_left_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_cmp_expr_right_16 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_cmp_expr_right_16 == NULL)) {
                tmp_cmp_expr_right_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
            }

            if (tmp_cmp_expr_right_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_cmp_expr_left_16);

                exception_lineno = 304;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_condition_result_23 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
            Py_DECREF(tmp_cmp_expr_left_16);
            if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
        }
        branch_yes_19:;
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_bytes_arg_6;
            PyObject *tmp_called_value_101;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_called_value_102;
            PyObject *tmp_args_element_value_61;
            PyObject *tmp_bytes_arg_7;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_29;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[131]);

            if (unlikely(tmp_called_value_102 == NULL)) {
                tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
            }

            if (tmp_called_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            frame_163896f671496051be468a83dea1529b_3->m_frame.f_lineno = 302;
            tmp_expression_value_81 = CALL_FUNCTION_NO_ARGS(tmp_called_value_102);
            if (tmp_expression_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_called_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[228]);
            Py_DECREF(tmp_expression_value_81);
            if (tmp_called_value_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            CHECK_OBJECT(outline_1_var_ext);
            tmp_expression_value_82 = outline_1_var_ext;
            tmp_subscript_value_29 = mod_consts[272];
            tmp_bytes_arg_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_29);
            if (tmp_bytes_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_101);

                exception_lineno = 302;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_args_element_value_61 = BUILTIN_BYTES1(tmp_bytes_arg_7);
            Py_DECREF(tmp_bytes_arg_7);
            if (tmp_args_element_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_101);

                exception_lineno = 302;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            frame_163896f671496051be468a83dea1529b_3->m_frame.f_lineno = 302;
            tmp_bytes_arg_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_101, tmp_args_element_value_61);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_61);
            if (tmp_bytes_arg_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_append_value_2 = BUILTIN_BYTES1(tmp_bytes_arg_6);
            Py_DECREF(tmp_bytes_arg_6);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            assert(PyList_Check(tmp_append_list_2));
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
        }
        branch_no_19:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_expression_value_77 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_expression_value_77);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_163896f671496051be468a83dea1529b_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_163896f671496051be468a83dea1529b_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_11;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_163896f671496051be468a83dea1529b_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_163896f671496051be468a83dea1529b_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_163896f671496051be468a83dea1529b_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_163896f671496051be468a83dea1529b_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_163896f671496051be468a83dea1529b_3,
            type_description_2,
            outline_1_var_ext
        );


        // Release cached frame if used for exception.
        if (frame_163896f671496051be468a83dea1529b_3 == cache_frame_163896f671496051be468a83dea1529b_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_163896f671496051be468a83dea1529b_3);
            cache_frame_163896f671496051be468a83dea1529b_3 = NULL;
        }

        assertFrameObject(frame_163896f671496051be468a83dea1529b_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_11;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_XDECREF(outline_1_var_ext);
        outline_1_var_ext = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_ext);
        outline_1_var_ext = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 301;
        goto frame_exception_exit_1;
        outline_result_2:;
        tmp_subscript_value_30 = mod_consts[16];
        tmp_assign_source_128 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_77, tmp_subscript_value_30, 0);
        Py_DECREF(tmp_expression_value_77);
        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_128);
    }
    {
        PyObject *tmp_called_value_103;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_called_value_104;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_tuple_element_41;
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[279]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[279]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_called_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[260]);
        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_41 = mod_consts[271];
        tmp_tuple_element_40 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_40, 0, tmp_tuple_element_41);
        tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_tuple_element_41 == NULL)) {
            tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_tuple_element_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto tuple_build_exception_33;
        }
        PyTuple_SET_ITEM0(tmp_tuple_element_40, 1, tmp_tuple_element_41);
        goto tuple_build_noexception_33;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_33:;
        Py_DECREF(tmp_called_value_103);
        Py_DECREF(tmp_tuple_element_40);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_33:;
        tmp_args_element_value_63 = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_42;
            PyTuple_SET_ITEM(tmp_args_element_value_63, 0, tmp_tuple_element_40);
            tmp_tuple_element_42 = mod_consts[272];
            tmp_tuple_element_40 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_105;
                PyObject *tmp_args_element_value_64;
                PyObject *tmp_called_value_106;
                PyObject *tmp_expression_value_84;
                PyObject *tmp_called_value_107;
                PyObject *tmp_args_element_value_65;
                PyObject *tmp_tuple_element_43;
                PyObject *tmp_tuple_element_44;
                PyTuple_SET_ITEM0(tmp_tuple_element_40, 0, tmp_tuple_element_42);
                tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[44]);

                if (unlikely(tmp_called_value_105 == NULL)) {
                    tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                }

                if (tmp_called_value_105 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 308;

                    goto tuple_build_exception_35;
                }
                tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[103]);

                if (unlikely(tmp_called_value_107 == NULL)) {
                    tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                }

                if (tmp_called_value_107 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 308;

                    goto tuple_build_exception_35;
                }
                tmp_tuple_element_44 = mod_consts[284];
                tmp_tuple_element_43 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_108;
                    PyObject *tmp_args_element_value_66;
                    PyTuple_SET_ITEM0(tmp_tuple_element_43, 0, tmp_tuple_element_44);
                    tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[119]);

                    if (unlikely(tmp_called_value_108 == NULL)) {
                        tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                    }

                    if (tmp_called_value_108 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 309;

                        goto tuple_build_exception_36;
                    }
                    tmp_args_element_value_66 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[283]);

                    if (unlikely(tmp_args_element_value_66 == NULL)) {
                        tmp_args_element_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[283]);
                    }

                    if (tmp_args_element_value_66 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 309;

                        goto tuple_build_exception_36;
                    }
                    frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 309;
                    tmp_tuple_element_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_108, tmp_args_element_value_66);
                    if (tmp_tuple_element_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 309;

                        goto tuple_build_exception_36;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_43, 1, tmp_tuple_element_44);
                }
                goto tuple_build_noexception_34;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_36:;
                Py_DECREF(tmp_tuple_element_43);
                goto tuple_build_exception_35;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_34:;
                tmp_args_element_value_65 = PyTuple_New(1);
                PyTuple_SET_ITEM(tmp_args_element_value_65, 0, tmp_tuple_element_43);
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 308;
                tmp_expression_value_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_107, tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_65);
                if (tmp_expression_value_84 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 308;

                    goto tuple_build_exception_35;
                }
                tmp_called_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[2]);
                Py_DECREF(tmp_expression_value_84);
                if (tmp_called_value_106 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 308;

                    goto tuple_build_exception_35;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 308;
                tmp_args_element_value_64 = CALL_FUNCTION_NO_ARGS(tmp_called_value_106);
                Py_DECREF(tmp_called_value_106);
                if (tmp_args_element_value_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 308;

                    goto tuple_build_exception_35;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 308;
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_105, tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_64);
                if (tmp_tuple_element_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 308;

                    goto tuple_build_exception_35;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_40, 1, tmp_tuple_element_42);
            }
            goto tuple_build_noexception_35;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_35:;
            Py_DECREF(tmp_tuple_element_40);
            goto tuple_build_exception_34;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_35:;
            PyTuple_SET_ITEM(tmp_args_element_value_63, 1, tmp_tuple_element_40);
        }
        goto tuple_build_noexception_36;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_34:;
        Py_DECREF(tmp_called_value_103);
        Py_DECREF(tmp_args_element_value_63);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_36:;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 306;
        tmp_args_element_value_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_104, tmp_args_element_value_63);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 306;
        tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_103, tmp_args_element_value_62);
        Py_DECREF(tmp_called_value_103);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    branch_no_18:;
    {
        PyObject *tmp_assign_source_133;
        bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_called_value_109;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_value_110;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_called_value_111;
        PyObject *tmp_subscript_value_31;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_87;
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[285]);
        if (tmp_cmp_expr_left_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_17 = Py_None;
        tmp_condition_result_24 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_17);
        if (tmp_condition_result_24 != false) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 314;
        tmp_args_element_value_68 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_111, mod_consts[286]);

        if (tmp_args_element_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 314;
        tmp_called_instance_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_110, tmp_args_element_value_68);
        Py_DECREF(tmp_args_element_value_68);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 314;
        tmp_expression_value_86 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[273]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_31 = mod_consts[274];
        tmp_args_element_value_67 = LOOKUP_SUBSCRIPT(tmp_expression_value_86, tmp_subscript_value_31);
        Py_DECREF(tmp_expression_value_86);
        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 314;
        tmp_assign_source_133 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_109, tmp_args_element_value_67);
        Py_DECREF(tmp_args_element_value_67);
        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_int_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[285]);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_133 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        condexpr_end_5:;
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_value_112;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_tuple_element_46;
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_46 = mod_consts[249];
        tmp_tuple_element_45 = PyTuple_New(2);
        {
            PyObject *tmp_called_value_113;
            PyTuple_SET_ITEM0(tmp_tuple_element_45, 0, tmp_tuple_element_46);
            tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_called_value_113 == NULL)) {
                tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_called_value_113 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_37;
            }
            frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 318;
            tmp_tuple_element_46 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_113, mod_consts[287]);

            if (tmp_tuple_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_45, 1, tmp_tuple_element_46);
        }
        goto tuple_build_noexception_37;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_37:;
        Py_DECREF(tmp_tuple_element_45);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_37:;
        tmp_args_element_value_69 = PyTuple_New(8);
        {
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_tuple_element_56;
            PyObject *tmp_tuple_element_57;
            PyObject *tmp_tuple_element_64;
            PyTuple_SET_ITEM(tmp_args_element_value_69, 0, tmp_tuple_element_45);
            tmp_tuple_element_47 = mod_consts[288];
            tmp_tuple_element_45 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_114;
                PyObject *tmp_args_element_value_70;
                PyTuple_SET_ITEM0(tmp_tuple_element_45, 0, tmp_tuple_element_47);
                tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_called_value_114 == NULL)) {
                    tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
                }

                if (tmp_called_value_114 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 319;

                    goto tuple_build_exception_39;
                }
                tmp_args_element_value_70 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[285]);

                if (unlikely(tmp_args_element_value_70 == NULL)) {
                    tmp_args_element_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[285]);
                }

                if (tmp_args_element_value_70 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 319;

                    goto tuple_build_exception_39;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 319;
                tmp_tuple_element_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_114, tmp_args_element_value_70);
                if (tmp_tuple_element_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 319;

                    goto tuple_build_exception_39;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_45, 1, tmp_tuple_element_47);
            }
            goto tuple_build_noexception_38;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_tuple_element_45);
            goto tuple_build_exception_38;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_38:;
            PyTuple_SET_ITEM(tmp_args_element_value_69, 1, tmp_tuple_element_45);
            tmp_tuple_element_48 = mod_consts[289];
            tmp_tuple_element_45 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_45, 0, tmp_tuple_element_48);
            tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[270]);

            if (unlikely(tmp_tuple_element_48 == NULL)) {
                tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[270]);
            }

            if (tmp_tuple_element_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM0(tmp_tuple_element_45, 1, tmp_tuple_element_48);
            goto tuple_build_noexception_39;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_tuple_element_45);
            goto tuple_build_exception_38;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_39:;
            PyTuple_SET_ITEM(tmp_args_element_value_69, 2, tmp_tuple_element_45);
            tmp_tuple_element_49 = mod_consts[290];
            tmp_tuple_element_45 = PyTuple_New(2);
            {
                bool tmp_condition_result_25;
                PyObject *tmp_cmp_expr_left_18;
                PyObject *tmp_cmp_expr_right_18;
                PyTuple_SET_ITEM0(tmp_tuple_element_45, 0, tmp_tuple_element_49);
                tmp_cmp_expr_left_18 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[207]);

                if (unlikely(tmp_cmp_expr_left_18 == NULL)) {
                    tmp_cmp_expr_left_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
                }

                if (tmp_cmp_expr_left_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 321;

                    goto tuple_build_exception_41;
                }
                tmp_cmp_expr_right_18 = Py_None;
                tmp_condition_result_25 = (tmp_cmp_expr_left_18 == tmp_cmp_expr_right_18) ? true : false;
                if (tmp_condition_result_25 != false) {
                    goto condexpr_true_6;
                } else {
                    goto condexpr_false_6;
                }
                condexpr_true_6:;
                tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[262]);

                if (unlikely(tmp_tuple_element_49 == NULL)) {
                    tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[262]);
                }

                if (tmp_tuple_element_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 321;

                    goto tuple_build_exception_41;
                }
                goto condexpr_end_6;
                condexpr_false_6:;
                tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[206]);

                if (unlikely(tmp_tuple_element_49 == NULL)) {
                    tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
                }

                if (tmp_tuple_element_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 321;

                    goto tuple_build_exception_41;
                }
                condexpr_end_6:;
                PyTuple_SET_ITEM0(tmp_tuple_element_45, 1, tmp_tuple_element_49);
            }
            goto tuple_build_noexception_40;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_41:;
            Py_DECREF(tmp_tuple_element_45);
            goto tuple_build_exception_38;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_40:;
            PyTuple_SET_ITEM(tmp_args_element_value_69, 3, tmp_tuple_element_45);
            tmp_tuple_element_50 = mod_consts[291];
            tmp_tuple_element_45 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_115;
                PyObject *tmp_args_element_value_71;
                PyObject *tmp_tuple_element_51;
                PyObject *tmp_tuple_element_52;
                PyTuple_SET_ITEM0(tmp_tuple_element_45, 0, tmp_tuple_element_50);
                tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[139]);

                if (unlikely(tmp_called_value_115 == NULL)) {
                    tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
                }

                if (tmp_called_value_115 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 322;

                    goto tuple_build_exception_42;
                }
                tmp_tuple_element_52 = mod_consts[292];
                tmp_tuple_element_51 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_116;
                    PyObject *tmp_args_element_value_72;
                    PyObject *tmp_tuple_element_53;
                    PyTuple_SET_ITEM0(tmp_tuple_element_51, 0, tmp_tuple_element_52);
                    tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[137]);

                    if (unlikely(tmp_called_value_116 == NULL)) {
                        tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                    }

                    if (tmp_called_value_116 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 323;

                        goto tuple_build_exception_43;
                    }
                    tmp_tuple_element_53 = mod_consts[293];
                    tmp_args_element_value_72 = PyTuple_New(2);
                    {
                        PyObject *tmp_called_value_117;
                        PyObject *tmp_args_element_value_73;
                        PyTuple_SET_ITEM0(tmp_args_element_value_72, 0, tmp_tuple_element_53);
                        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[48]);

                        if (unlikely(tmp_called_value_117 == NULL)) {
                            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                        }

                        if (tmp_called_value_117 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 323;

                            goto tuple_build_exception_44;
                        }
                        tmp_args_element_value_73 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[264]);

                        if (unlikely(tmp_args_element_value_73 == NULL)) {
                            tmp_args_element_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[264]);
                        }

                        if (tmp_args_element_value_73 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 323;

                            goto tuple_build_exception_44;
                        }
                        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 323;
                        tmp_tuple_element_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_117, tmp_args_element_value_73);
                        if (tmp_tuple_element_53 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 323;

                            goto tuple_build_exception_44;
                        }
                        PyTuple_SET_ITEM(tmp_args_element_value_72, 1, tmp_tuple_element_53);
                    }
                    goto tuple_build_noexception_41;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_44:;
                    Py_DECREF(tmp_args_element_value_72);
                    goto tuple_build_exception_43;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_41:;
                    frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 323;
                    tmp_tuple_element_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_116, tmp_args_element_value_72);
                    Py_DECREF(tmp_args_element_value_72);
                    if (tmp_tuple_element_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 323;

                        goto tuple_build_exception_43;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_51, 1, tmp_tuple_element_52);
                }
                goto tuple_build_noexception_42;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_43:;
                Py_DECREF(tmp_tuple_element_51);
                goto tuple_build_exception_42;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_42:;
                tmp_args_element_value_71 = PyTuple_New(2);
                {
                    PyObject *tmp_tuple_element_54;
                    PyTuple_SET_ITEM(tmp_args_element_value_71, 0, tmp_tuple_element_51);
                    tmp_tuple_element_54 = mod_consts[294];
                    tmp_tuple_element_51 = PyTuple_New(2);
                    {
                        PyObject *tmp_called_value_118;
                        PyObject *tmp_args_element_value_74;
                        PyObject *tmp_tuple_element_55;
                        PyTuple_SET_ITEM0(tmp_tuple_element_51, 0, tmp_tuple_element_54);
                        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[137]);

                        if (unlikely(tmp_called_value_118 == NULL)) {
                            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                        }

                        if (tmp_called_value_118 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 324;

                            goto tuple_build_exception_46;
                        }
                        tmp_tuple_element_55 = mod_consts[293];
                        tmp_args_element_value_74 = PyTuple_New(2);
                        {
                            PyObject *tmp_called_value_119;
                            PyObject *tmp_args_element_value_75;
                            PyTuple_SET_ITEM0(tmp_args_element_value_74, 0, tmp_tuple_element_55);
                            tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[48]);

                            if (unlikely(tmp_called_value_119 == NULL)) {
                                tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                            }

                            if (tmp_called_value_119 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 324;

                                goto tuple_build_exception_47;
                            }
                            tmp_args_element_value_75 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[269]);

                            if (unlikely(tmp_args_element_value_75 == NULL)) {
                                tmp_args_element_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[269]);
                            }

                            if (tmp_args_element_value_75 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 324;

                                goto tuple_build_exception_47;
                            }
                            frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 324;
                            tmp_tuple_element_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_119, tmp_args_element_value_75);
                            if (tmp_tuple_element_55 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 324;

                                goto tuple_build_exception_47;
                            }
                            PyTuple_SET_ITEM(tmp_args_element_value_74, 1, tmp_tuple_element_55);
                        }
                        goto tuple_build_noexception_43;
                        // Exception handling pass through code for tuple_build:
                        tuple_build_exception_47:;
                        Py_DECREF(tmp_args_element_value_74);
                        goto tuple_build_exception_46;
                        // Finished with no exception for tuple_build:
                        tuple_build_noexception_43:;
                        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 324;
                        tmp_tuple_element_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_118, tmp_args_element_value_74);
                        Py_DECREF(tmp_args_element_value_74);
                        if (tmp_tuple_element_54 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 324;

                            goto tuple_build_exception_46;
                        }
                        PyTuple_SET_ITEM(tmp_tuple_element_51, 1, tmp_tuple_element_54);
                    }
                    goto tuple_build_noexception_44;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_46:;
                    Py_DECREF(tmp_tuple_element_51);
                    goto tuple_build_exception_45;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_44:;
                    PyTuple_SET_ITEM(tmp_args_element_value_71, 1, tmp_tuple_element_51);
                }
                goto tuple_build_noexception_45;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_45:;
                Py_DECREF(tmp_args_element_value_71);
                goto tuple_build_exception_42;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_45:;
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 322;
                tmp_tuple_element_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_115, tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_71);
                if (tmp_tuple_element_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 322;

                    goto tuple_build_exception_42;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_45, 1, tmp_tuple_element_50);
            }
            goto tuple_build_noexception_46;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_42:;
            Py_DECREF(tmp_tuple_element_45);
            goto tuple_build_exception_38;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_46:;
            PyTuple_SET_ITEM(tmp_args_element_value_69, 4, tmp_tuple_element_45);
            tmp_tuple_element_56 = mod_consts[233];
            tmp_tuple_element_45 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_45, 0, tmp_tuple_element_56);
            tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[262]);

            if (unlikely(tmp_tuple_element_56 == NULL)) {
                tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[262]);
            }

            if (tmp_tuple_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;

                goto tuple_build_exception_48;
            }
            PyTuple_SET_ITEM0(tmp_tuple_element_45, 1, tmp_tuple_element_56);
            goto tuple_build_noexception_47;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_48:;
            Py_DECREF(tmp_tuple_element_45);
            goto tuple_build_exception_38;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_47:;
            PyTuple_SET_ITEM(tmp_args_element_value_69, 5, tmp_tuple_element_45);
            tmp_tuple_element_57 = mod_consts[234];
            tmp_tuple_element_45 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_120;
                PyObject *tmp_args_element_value_76;
                PyObject *tmp_tuple_element_58;
                PyObject *tmp_tuple_element_59;
                PyTuple_SET_ITEM0(tmp_tuple_element_45, 0, tmp_tuple_element_57);
                tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[133]);

                if (unlikely(tmp_called_value_120 == NULL)) {
                    tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
                }

                if (tmp_called_value_120 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 327;

                    goto tuple_build_exception_49;
                }
                tmp_tuple_element_59 = mod_consts[235];
                tmp_tuple_element_58 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_121;
                    PyObject *tmp_args_element_value_77;
                    PyObject *tmp_tuple_element_60;
                    PyObject *tmp_tuple_element_61;
                    PyTuple_SET_ITEM0(tmp_tuple_element_58, 0, tmp_tuple_element_59);
                    tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_called_value_121 == NULL)) {
                        tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_called_value_121 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 328;

                        goto tuple_build_exception_50;
                    }
                    tmp_tuple_element_61 = mod_consts[235];
                    tmp_tuple_element_60 = PyTuple_New(2);
                    {
                        PyObject *tmp_expression_value_88;
                        PyObject *tmp_subscript_value_32;
                        PyTuple_SET_ITEM0(tmp_tuple_element_60, 0, tmp_tuple_element_61);
                        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[203]);

                        if (unlikely(tmp_expression_value_88 == NULL)) {
                            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
                        }

                        if (tmp_expression_value_88 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 329;

                            goto tuple_build_exception_51;
                        }
                        tmp_subscript_value_32 = mod_consts[183];
                        tmp_tuple_element_61 = LOOKUP_SUBSCRIPT(tmp_expression_value_88, tmp_subscript_value_32);
                        if (tmp_tuple_element_61 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 329;

                            goto tuple_build_exception_51;
                        }
                        PyTuple_SET_ITEM(tmp_tuple_element_60, 1, tmp_tuple_element_61);
                    }
                    goto tuple_build_noexception_48;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_51:;
                    Py_DECREF(tmp_tuple_element_60);
                    goto tuple_build_exception_50;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_48:;
                    tmp_args_element_value_77 = PyTuple_New(2);
                    {
                        PyObject *tmp_tuple_element_62;
                        PyTuple_SET_ITEM(tmp_args_element_value_77, 0, tmp_tuple_element_60);
                        tmp_tuple_element_62 = mod_consts[236];
                        tmp_tuple_element_60 = PyTuple_New(2);
                        {
                            PyObject *tmp_called_value_122;
                            PyObject *tmp_args_element_value_78;
                            PyTuple_SET_ITEM0(tmp_tuple_element_60, 0, tmp_tuple_element_62);
                            tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[34]);

                            if (unlikely(tmp_called_value_122 == NULL)) {
                                tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                            }

                            if (tmp_called_value_122 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 330;

                                goto tuple_build_exception_53;
                            }
                            tmp_args_element_value_78 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[239]);

                            if (unlikely(tmp_args_element_value_78 == NULL)) {
                                tmp_args_element_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[239]);
                            }

                            if (tmp_args_element_value_78 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 330;

                                goto tuple_build_exception_53;
                            }
                            frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 330;
                            tmp_tuple_element_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_122, tmp_args_element_value_78);
                            if (tmp_tuple_element_62 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 330;

                                goto tuple_build_exception_53;
                            }
                            PyTuple_SET_ITEM(tmp_tuple_element_60, 1, tmp_tuple_element_62);
                        }
                        goto tuple_build_noexception_49;
                        // Exception handling pass through code for tuple_build:
                        tuple_build_exception_53:;
                        Py_DECREF(tmp_tuple_element_60);
                        goto tuple_build_exception_52;
                        // Finished with no exception for tuple_build:
                        tuple_build_noexception_49:;
                        PyTuple_SET_ITEM(tmp_args_element_value_77, 1, tmp_tuple_element_60);
                    }
                    goto tuple_build_noexception_50;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_52:;
                    Py_DECREF(tmp_args_element_value_77);
                    goto tuple_build_exception_50;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_50:;
                    frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 328;
                    tmp_tuple_element_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_121, tmp_args_element_value_77);
                    Py_DECREF(tmp_args_element_value_77);
                    if (tmp_tuple_element_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 328;

                        goto tuple_build_exception_50;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_58, 1, tmp_tuple_element_59);
                }
                goto tuple_build_noexception_51;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_50:;
                Py_DECREF(tmp_tuple_element_58);
                goto tuple_build_exception_49;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_51:;
                tmp_args_element_value_76 = PyTuple_New(2);
                {
                    PyObject *tmp_tuple_element_63;
                    PyTuple_SET_ITEM(tmp_args_element_value_76, 0, tmp_tuple_element_58);
                    tmp_tuple_element_63 = mod_consts[295];
                    tmp_tuple_element_58 = PyTuple_New(2);
                    {
                        PyObject *tmp_called_value_123;
                        PyObject *tmp_args_element_value_79;
                        PyObject *tmp_called_value_124;
                        PyObject *tmp_expression_value_89;
                        PyObject *tmp_called_value_125;
                        PyObject *tmp_args_element_value_80;
                        PyTuple_SET_ITEM0(tmp_tuple_element_58, 0, tmp_tuple_element_63);
                        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_called_value_123 == NULL)) {
                            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                        }

                        if (tmp_called_value_123 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 332;

                            goto tuple_build_exception_55;
                        }
                        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_called_value_125 == NULL)) {
                            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_called_value_125 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 332;

                            goto tuple_build_exception_55;
                        }
                        tmp_args_element_value_80 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[254]);

                        if (unlikely(tmp_args_element_value_80 == NULL)) {
                            tmp_args_element_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[254]);
                        }

                        if (tmp_args_element_value_80 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 332;

                            goto tuple_build_exception_55;
                        }
                        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 332;
                        tmp_expression_value_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_125, tmp_args_element_value_80);
                        if (tmp_expression_value_89 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 332;

                            goto tuple_build_exception_55;
                        }
                        tmp_called_value_124 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[2]);
                        Py_DECREF(tmp_expression_value_89);
                        if (tmp_called_value_124 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 332;

                            goto tuple_build_exception_55;
                        }
                        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 332;
                        tmp_args_element_value_79 = CALL_FUNCTION_NO_ARGS(tmp_called_value_124);
                        Py_DECREF(tmp_called_value_124);
                        if (tmp_args_element_value_79 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 332;

                            goto tuple_build_exception_55;
                        }
                        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 332;
                        tmp_tuple_element_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_123, tmp_args_element_value_79);
                        Py_DECREF(tmp_args_element_value_79);
                        if (tmp_tuple_element_63 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 332;

                            goto tuple_build_exception_55;
                        }
                        PyTuple_SET_ITEM(tmp_tuple_element_58, 1, tmp_tuple_element_63);
                    }
                    goto tuple_build_noexception_52;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_55:;
                    Py_DECREF(tmp_tuple_element_58);
                    goto tuple_build_exception_54;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_52:;
                    PyTuple_SET_ITEM(tmp_args_element_value_76, 1, tmp_tuple_element_58);
                }
                goto tuple_build_noexception_53;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_54:;
                Py_DECREF(tmp_args_element_value_76);
                goto tuple_build_exception_49;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_53:;
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 327;
                tmp_tuple_element_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_120, tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_76);
                if (tmp_tuple_element_57 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 327;

                    goto tuple_build_exception_49;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_45, 1, tmp_tuple_element_57);
            }
            goto tuple_build_noexception_54;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_49:;
            Py_DECREF(tmp_tuple_element_45);
            goto tuple_build_exception_38;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_54:;
            PyTuple_SET_ITEM(tmp_args_element_value_69, 6, tmp_tuple_element_45);
            tmp_tuple_element_64 = mod_consts[282];
            tmp_tuple_element_45 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_126;
                PyObject *tmp_args_element_value_81;
                PyTuple_SET_ITEM0(tmp_tuple_element_45, 0, tmp_tuple_element_64);
                tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[113]);

                if (unlikely(tmp_called_value_126 == NULL)) {
                    tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
                }

                if (tmp_called_value_126 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 334;

                    goto tuple_build_exception_56;
                }
                tmp_args_element_value_81 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[279]);

                if (unlikely(tmp_args_element_value_81 == NULL)) {
                    tmp_args_element_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[279]);
                }

                if (tmp_args_element_value_81 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 334;

                    goto tuple_build_exception_56;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 334;
                tmp_tuple_element_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_126, tmp_args_element_value_81);
                if (tmp_tuple_element_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 334;

                    goto tuple_build_exception_56;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_45, 1, tmp_tuple_element_64);
            }
            goto tuple_build_noexception_55;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_56:;
            Py_DECREF(tmp_tuple_element_45);
            goto tuple_build_exception_38;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_55:;
            PyTuple_SET_ITEM(tmp_args_element_value_69, 7, tmp_tuple_element_45);
        }
        goto tuple_build_noexception_56;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_38:;
        Py_DECREF(tmp_args_element_value_69);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_56:;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 317;
        tmp_assign_source_134 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_112, tmp_args_element_value_69);
        Py_DECREF(tmp_args_element_value_69);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_127;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_tuple_element_66;
        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_called_value_127 == NULL)) {
            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_66 = mod_consts[231];
        tmp_tuple_element_65 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_65, 0, tmp_tuple_element_66);
        tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_tuple_element_66 == NULL)) {
            tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
        }

        assert(!(tmp_tuple_element_66 == NULL));
        PyTuple_SET_ITEM0(tmp_tuple_element_65, 1, tmp_tuple_element_66);
        tmp_args_element_value_82 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_tuple_element_68;
            PyTuple_SET_ITEM(tmp_args_element_value_82, 0, tmp_tuple_element_65);
            tmp_tuple_element_67 = mod_consts[296];
            tmp_tuple_element_65 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_65, 0, tmp_tuple_element_67);
            tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[270]);

            if (unlikely(tmp_tuple_element_67 == NULL)) {
                tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[270]);
            }

            if (tmp_tuple_element_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM0(tmp_tuple_element_65, 1, tmp_tuple_element_67);
            goto tuple_build_noexception_57;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_58:;
            Py_DECREF(tmp_tuple_element_65);
            goto tuple_build_exception_57;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_57:;
            PyTuple_SET_ITEM(tmp_args_element_value_82, 1, tmp_tuple_element_65);
            tmp_tuple_element_68 = mod_consts[297];
            tmp_tuple_element_65 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_128;
                PyObject *tmp_args_element_value_83;
                bool tmp_condition_result_26;
                PyObject *tmp_cmp_expr_left_19;
                PyObject *tmp_cmp_expr_right_19;
                PyObject *tmp_called_value_129;
                PyObject *tmp_args_element_value_84;
                PyObject *tmp_args_element_value_85;
                PyObject *tmp_args_element_value_86;
                PyObject *tmp_expression_value_90;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_called_value_130;
                PyObject *tmp_expression_value_91;
                PyObject *tmp_subscript_value_33;
                PyObject *tmp_args_element_value_87;
                PyObject *tmp_called_value_131;
                PyObject *tmp_expression_value_92;
                PyObject *tmp_subscript_value_34;
                PyObject *tmp_called_value_132;
                PyObject *tmp_args_element_value_88;
                PyObject *tmp_expression_value_93;
                PyObject *tmp_subscript_value_35;
                PyObject *tmp_args_element_value_89;
                PyObject *tmp_args_element_value_90;
                PyObject *tmp_expression_value_94;
                PyObject *tmp_called_instance_8;
                PyObject *tmp_called_value_133;
                PyObject *tmp_expression_value_95;
                PyObject *tmp_subscript_value_36;
                PyObject *tmp_args_element_value_91;
                PyObject *tmp_called_value_134;
                PyObject *tmp_expression_value_96;
                PyObject *tmp_subscript_value_37;
                PyTuple_SET_ITEM0(tmp_tuple_element_65, 0, tmp_tuple_element_68);
                tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[36]);

                if (unlikely(tmp_called_value_128 == NULL)) {
                    tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                }

                if (tmp_called_value_128 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 339;

                    goto tuple_build_exception_59;
                }
                tmp_cmp_expr_left_19 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[207]);

                if (unlikely(tmp_cmp_expr_left_19 == NULL)) {
                    tmp_cmp_expr_left_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
                }

                if (tmp_cmp_expr_left_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 341;

                    goto tuple_build_exception_59;
                }
                tmp_cmp_expr_right_19 = Py_None;
                tmp_condition_result_26 = (tmp_cmp_expr_left_19 == tmp_cmp_expr_right_19) ? true : false;
                if (tmp_condition_result_26 != false) {
                    goto condexpr_true_7;
                } else {
                    goto condexpr_false_7;
                }
                condexpr_true_7:;
                tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[152]);

                if (unlikely(tmp_called_value_129 == NULL)) {
                    tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
                }

                if (tmp_called_value_129 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 340;

                    goto tuple_build_exception_59;
                }
                tmp_args_element_value_84 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[186]);

                if (unlikely(tmp_args_element_value_84 == NULL)) {
                    tmp_args_element_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
                }

                if (tmp_args_element_value_84 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 340;

                    goto tuple_build_exception_59;
                }
                tmp_args_element_value_85 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[242]);

                if (unlikely(tmp_args_element_value_85 == NULL)) {
                    tmp_args_element_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[242]);
                }

                if (tmp_args_element_value_85 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 340;

                    goto tuple_build_exception_59;
                }
                tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[203]);

                if (unlikely(tmp_expression_value_91 == NULL)) {
                    tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
                }

                if (tmp_expression_value_91 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 340;

                    goto tuple_build_exception_59;
                }
                tmp_subscript_value_33 = mod_consts[189];
                tmp_called_value_130 = LOOKUP_SUBSCRIPT(tmp_expression_value_91, tmp_subscript_value_33);
                if (tmp_called_value_130 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 340;

                    goto tuple_build_exception_59;
                }
                tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[232]);

                if (unlikely(tmp_expression_value_92 == NULL)) {
                    tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
                }

                if (tmp_expression_value_92 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_130);

                    exception_lineno = 340;

                    goto tuple_build_exception_59;
                }
                tmp_called_value_131 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[2]);
                if (tmp_called_value_131 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_130);

                    exception_lineno = 340;

                    goto tuple_build_exception_59;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 340;
                tmp_args_element_value_87 = CALL_FUNCTION_NO_ARGS(tmp_called_value_131);
                Py_DECREF(tmp_called_value_131);
                if (tmp_args_element_value_87 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_130);

                    exception_lineno = 340;

                    goto tuple_build_exception_59;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 340;
                tmp_called_instance_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_130, tmp_args_element_value_87);
                Py_DECREF(tmp_called_value_130);
                Py_DECREF(tmp_args_element_value_87);
                if (tmp_called_instance_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 340;

                    goto tuple_build_exception_59;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 340;
                tmp_expression_value_90 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[273]);
                Py_DECREF(tmp_called_instance_7);
                if (tmp_expression_value_90 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 340;

                    goto tuple_build_exception_59;
                }
                tmp_subscript_value_34 = mod_consts[298];
                tmp_args_element_value_86 = LOOKUP_SUBSCRIPT(tmp_expression_value_90, tmp_subscript_value_34);
                Py_DECREF(tmp_expression_value_90);
                if (tmp_args_element_value_86 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 340;

                    goto tuple_build_exception_59;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 340;
                {
                    PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86};
                    tmp_args_element_value_83 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_129, call_args);
                }

                Py_DECREF(tmp_args_element_value_86);
                if (tmp_args_element_value_83 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 340;

                    goto tuple_build_exception_59;
                }
                goto condexpr_end_7;
                condexpr_false_7:;
                tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[152]);

                if (unlikely(tmp_called_value_132 == NULL)) {
                    tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
                }

                if (tmp_called_value_132 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 342;

                    goto tuple_build_exception_59;
                }
                tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[207]);

                if (unlikely(tmp_expression_value_93 == NULL)) {
                    tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
                }

                if (tmp_expression_value_93 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 342;

                    goto tuple_build_exception_59;
                }
                tmp_subscript_value_35 = mod_consts[186];
                tmp_args_element_value_88 = LOOKUP_SUBSCRIPT(tmp_expression_value_93, tmp_subscript_value_35);
                if (tmp_args_element_value_88 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 342;

                    goto tuple_build_exception_59;
                }
                tmp_args_element_value_89 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[204]);

                if (unlikely(tmp_args_element_value_89 == NULL)) {
                    tmp_args_element_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                }

                if (tmp_args_element_value_89 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_88);

                    exception_lineno = 342;

                    goto tuple_build_exception_59;
                }
                tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[207]);

                if (unlikely(tmp_expression_value_95 == NULL)) {
                    tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
                }

                if (tmp_expression_value_95 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_88);

                    exception_lineno = 342;

                    goto tuple_build_exception_59;
                }
                tmp_subscript_value_36 = mod_consts[189];
                tmp_called_value_133 = LOOKUP_SUBSCRIPT(tmp_expression_value_95, tmp_subscript_value_36);
                if (tmp_called_value_133 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_88);

                    exception_lineno = 342;

                    goto tuple_build_exception_59;
                }
                tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[232]);

                if (unlikely(tmp_expression_value_96 == NULL)) {
                    tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
                }

                if (tmp_expression_value_96 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_88);
                    Py_DECREF(tmp_called_value_133);

                    exception_lineno = 342;

                    goto tuple_build_exception_59;
                }
                tmp_called_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[2]);
                if (tmp_called_value_134 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_88);
                    Py_DECREF(tmp_called_value_133);

                    exception_lineno = 342;

                    goto tuple_build_exception_59;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 342;
                tmp_args_element_value_91 = CALL_FUNCTION_NO_ARGS(tmp_called_value_134);
                Py_DECREF(tmp_called_value_134);
                if (tmp_args_element_value_91 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_88);
                    Py_DECREF(tmp_called_value_133);

                    exception_lineno = 342;

                    goto tuple_build_exception_59;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 342;
                tmp_called_instance_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_133, tmp_args_element_value_91);
                Py_DECREF(tmp_called_value_133);
                Py_DECREF(tmp_args_element_value_91);
                if (tmp_called_instance_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_88);

                    exception_lineno = 342;

                    goto tuple_build_exception_59;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 342;
                tmp_expression_value_94 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[273]);
                Py_DECREF(tmp_called_instance_8);
                if (tmp_expression_value_94 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_88);

                    exception_lineno = 342;

                    goto tuple_build_exception_59;
                }
                tmp_subscript_value_37 = mod_consts[298];
                tmp_args_element_value_90 = LOOKUP_SUBSCRIPT(tmp_expression_value_94, tmp_subscript_value_37);
                Py_DECREF(tmp_expression_value_94);
                if (tmp_args_element_value_90 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_value_88);

                    exception_lineno = 342;

                    goto tuple_build_exception_59;
                }
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 342;
                {
                    PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89, tmp_args_element_value_90};
                    tmp_args_element_value_83 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_132, call_args);
                }

                Py_DECREF(tmp_args_element_value_88);
                Py_DECREF(tmp_args_element_value_90);
                if (tmp_args_element_value_83 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 342;

                    goto tuple_build_exception_59;
                }
                condexpr_end_7:;
                frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 339;
                tmp_tuple_element_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_128, tmp_args_element_value_83);
                Py_DECREF(tmp_args_element_value_83);
                if (tmp_tuple_element_68 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 339;

                    goto tuple_build_exception_59;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_65, 1, tmp_tuple_element_68);
            }
            goto tuple_build_noexception_58;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_59:;
            Py_DECREF(tmp_tuple_element_65);
            goto tuple_build_exception_57;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_58:;
            PyTuple_SET_ITEM(tmp_args_element_value_82, 2, tmp_tuple_element_65);
        }
        goto tuple_build_noexception_59;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_57:;
        Py_DECREF(tmp_args_element_value_82);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_59:;
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 336;
        tmp_assign_source_135 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_127, tmp_args_element_value_82);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_open_filename_4;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_open_mode_4;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[300]);
        if (tmp_cmp_expr_left_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_20 = Py_None;
        tmp_condition_result_27 = (tmp_cmp_expr_left_20 == tmp_cmp_expr_right_20) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_20);
        if (tmp_condition_result_27 != false) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        tmp_assign_source_136 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assign_source_136 == NULL)) {
            tmp_assign_source_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        assert(!(tmp_assign_source_136 == NULL));
        Py_INCREF(tmp_assign_source_136);
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_open_filename_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[300]);
        if (tmp_open_filename_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_4 = mod_consts[244];
        tmp_assign_source_136 = BUILTIN_OPEN(tmp_open_filename_4, tmp_open_mode_4, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_4);
        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        condexpr_end_8:;
        UPDATE_STRING_DICT1(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_136);
    }
    {
        PyObject *tmp_called_value_135;
        PyObject *tmp_call_result_23;
        PyObject *tmp_kw_call_value_0_4;
        tmp_called_value_135 = LOOKUP_BUILTIN(mod_consts[246]);
        assert(tmp_called_value_135 != NULL);
        tmp_kw_call_value_0_4 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_kw_call_value_0_4 == NULL)) {
            tmp_kw_call_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        assert(!(tmp_kw_call_value_0_4 == NULL));
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 346;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_call_result_23 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_135, mod_consts[301], kw_values, mod_consts[248]);
        }

        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_136;
        PyObject *tmp_call_result_24;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_called_value_137;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_called_value_136 = LOOKUP_BUILTIN(mod_consts[246]);
        assert(tmp_called_value_136 != NULL);
        tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[240]);

        if (unlikely(tmp_called_value_137 == NULL)) {
            tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[240]);
        }

        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_92 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[299]);

        if (unlikely(tmp_args_element_value_92 == NULL)) {
            tmp_args_element_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[299]);
        }

        if (tmp_args_element_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 347;
        tmp_kw_call_arg_value_0_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_137, tmp_args_element_value_92);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_2 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_kw_call_dict_value_0_2 == NULL)) {
            tmp_kw_call_dict_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 347;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_136, args, kw_values, mod_consts[248]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_2);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_138;
        PyObject *tmp_call_result_25;
        PyObject *tmp_kw_call_value_0_5;
        tmp_called_value_138 = LOOKUP_BUILTIN(mod_consts[246]);
        assert(tmp_called_value_138 != NULL);
        tmp_kw_call_value_0_5 = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_kw_call_value_0_5 == NULL)) {
            tmp_kw_call_value_0_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        frame_aad468fdc22415983a81ec3bf09dbe31->m_frame.f_lineno = 348;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
            tmp_call_result_25 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_138, mod_consts[302], kw_values, mod_consts[248]);
        }

        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aad468fdc22415983a81ec3bf09dbe31);
#endif
    popFrameStack();

    assertFrameObject(frame_aad468fdc22415983a81ec3bf09dbe31);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aad468fdc22415983a81ec3bf09dbe31);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aad468fdc22415983a81ec3bf09dbe31, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aad468fdc22415983a81ec3bf09dbe31->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aad468fdc22415983a81ec3bf09dbe31, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pygost.asn1schemas.cert-selfsigned-example", false);

    Py_INCREF(module_pygost$asn1schemas$cert$$45$selfsigned$$45$example);
    return module_pygost$asn1schemas$cert$$45$selfsigned$$45$example;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygost$asn1schemas$cert$$45$selfsigned$$45$example, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pygost$asn1schemas$cert$$45$selfsigned$$45$example", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
