/* Generated code for Python module 'pygost.test_x509'
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

/* The "module_pygost$test_x509" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pygost$test_x509;
PyDictObject *moduledict_pygost$test_x509;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[248];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[248];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pygost.test_x509"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 248; i++) {
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
void checkModuleConstants_pygost$test_x509(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 248; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8802f9ed5ef74c6bda1f5b5c2e577f05;
static PyCodeObject *codeobj_0319855e771b8cf00120fc9540112597;
static PyCodeObject *codeobj_d10c9fd75aaf3f8ba8032df0deaf88f0;
static PyCodeObject *codeobj_c8a2cb7b3ec31aced24f93299e72f30e;
static PyCodeObject *codeobj_04f50cebeffc5cecc4cecbf16cd16c91;
static PyCodeObject *codeobj_4f72ad872df8fc24168b44e6c310da41;
static PyCodeObject *codeobj_96526387de3efbb34ea51a25ee4c1e24;
static PyCodeObject *codeobj_c9c87116f9324d8abb937679321482a7;
static PyCodeObject *codeobj_dbd9be602dc1526ba15da92ddbba253a;
static PyCodeObject *codeobj_425577575b34a603790ba078f71318e5;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[141]; CHECK_OBJECT(module_filename_obj);
    codeobj_8802f9ed5ef74c6bda1f5b5c2e577f05 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[241], NULL, NULL, 0, 0, 0);
    codeobj_0319855e771b8cf00120fc9540112597 = MAKE_CODEOBJECT(module_filename_obj, 83, CO_NOFREE, mod_consts[216], mod_consts[242], NULL, 0, 0, 0);
    codeobj_d10c9fd75aaf3f8ba8032df0deaf88f0 = MAKE_CODEOBJECT(module_filename_obj, 180, CO_NOFREE, mod_consts[232], mod_consts[242], NULL, 0, 0, 0);
    codeobj_c8a2cb7b3ec31aced24f93299e72f30e = MAKE_CODEOBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[102], mod_consts[243], NULL, 13, 0, 0);
    codeobj_04f50cebeffc5cecc4cecbf16cd16c91 = MAKE_CODEOBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[244], NULL, 5, 0, 0);
    codeobj_4f72ad872df8fc24168b44e6c310da41 = MAKE_CODEOBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[227], mod_consts[245], NULL, 1, 0, 0);
    codeobj_96526387de3efbb34ea51a25ee4c1e24 = MAKE_CODEOBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[235], mod_consts[246], NULL, 1, 0, 0);
    codeobj_c9c87116f9324d8abb937679321482a7 = MAKE_CODEOBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[237], mod_consts[246], NULL, 1, 0, 0);
    codeobj_dbd9be602dc1526ba15da92ddbba253a = MAKE_CODEOBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[229], mod_consts[245], NULL, 1, 0, 0);
    codeobj_425577575b34a603790ba078f71318e5 = MAKE_CODEOBJECT(module_filename_obj, 385, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[239], mod_consts[246], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__1_process_cert();


static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__2_test_256();


static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__3_test_512();


static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__4__test_vector();


static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__5_test_256_test_paramset();


static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__6_test_256a_paramset();


static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__7_test_512_test_paramset();


// The module function definitions.
static PyObject *impl_pygost$test_x509$$$function__1_process_cert(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_curve_name = python_pars[1];
    PyObject *par_hasher = python_pars[2];
    PyObject *par_prv_key_raw = python_pars[3];
    PyObject *par_cert_raw = python_pars[4];
    PyObject *var_cert = NULL;
    PyObject *var_tail = NULL;
    PyObject *var_curve = NULL;
    PyObject *var_prv_key = NULL;
    PyObject *var_spk = NULL;
    PyObject *var__ = NULL;
    PyObject *var_pub_key_raw = NULL;
    PyObject *var_pub_key = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_04f50cebeffc5cecc4cecbf16cd16c91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_04f50cebeffc5cecc4cecbf16cd16c91 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_04f50cebeffc5cecc4cecbf16cd16c91)) {
        Py_XDECREF(cache_frame_04f50cebeffc5cecc4cecbf16cd16c91);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04f50cebeffc5cecc4cecbf16cd16c91 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04f50cebeffc5cecc4cecbf16cd16c91 = MAKE_FUNCTION_FRAME(codeobj_04f50cebeffc5cecc4cecbf16cd16c91, module_pygost$test_x509, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_04f50cebeffc5cecc4cecbf16cd16c91->m_type_description == NULL);
    frame_04f50cebeffc5cecc4cecbf16cd16c91 = cache_frame_04f50cebeffc5cecc4cecbf16cd16c91;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_04f50cebeffc5cecc4cecbf16cd16c91);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_04f50cebeffc5cecc4cecbf16cd16c91) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 91;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_cert_raw);
        tmp_kw_call_arg_value_0_1 = par_cert_raw;
        tmp_dict_key_1 = mod_consts[2];
        tmp_tuple_element_2 = mod_consts[3];
        tmp_tuple_element_1 = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_4 = mod_consts[4];
            tmp_tuple_element_3 = PyTuple_New(2);
            {
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_called_value_3;
                PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_4);
                tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[5]);

                if (unlikely(tmp_dict_key_2 == NULL)) {
                    tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                }

                if (tmp_dict_key_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_1 = "ooooooooooooo";
                    goto tuple_build_exception_2;
                }
                tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[6]);

                if (unlikely(tmp_called_value_3 == NULL)) {
                    tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                }

                if (tmp_called_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_1 = "ooooooooooooo";
                    goto tuple_build_exception_2;
                }
                frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 104;
                tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_1 = "ooooooooooooo";
                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_4 = _PyDict_NewPresized( 2 );
                {
                    PyObject *tmp_called_value_4;
                    tmp_res = PyDict_SetItem(tmp_tuple_element_4, tmp_dict_key_2, tmp_dict_value_2);
                    Py_DECREF(tmp_dict_value_2);
                    if (tmp_res != 0) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 104;
                        type_description_1 = "ooooooooooooo";
                        goto dict_build_exception_1;
                    }
                    tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_dict_key_2 == NULL)) {
                        tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
                    }

                    if (tmp_dict_key_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 105;
                        type_description_1 = "ooooooooooooo";
                        goto dict_build_exception_1;
                    }
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 105;
                        type_description_1 = "ooooooooooooo";
                        goto dict_build_exception_1;
                    }
                    frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 105;
                    tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
                    if (tmp_dict_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 105;
                        type_description_1 = "ooooooooooooo";
                        goto dict_build_exception_1;
                    }
                    tmp_res = PyDict_SetItem(tmp_tuple_element_4, tmp_dict_key_2, tmp_dict_value_2);
                    Py_DECREF(tmp_dict_value_2);
                    if (tmp_res != 0) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 105;
                        type_description_1 = "ooooooooooooo";
                        goto dict_build_exception_1;
                    }
                }
                goto dict_build_noexception_1;
                // Exception handling pass through code for dict_build:
                dict_build_exception_1:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_2;
                // Finished with no exception for dict_build:
                dict_build_noexception_1:;
                PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_3);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_tuple_element_2 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_tuple_element_2, 0, tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_tuple_element_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_dict_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_kw_call_dict_value_0_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_call_dict_value_0_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 91;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 91;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 91;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 91;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[9];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 91;
            goto try_except_handler_3;
        }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_cert == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_cert = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_tail == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_tail = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_tail);
        tmp_args_element_value_1 = var_tail;
        tmp_args_element_value_2 = mod_consts[11];
        frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[10],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_curve_name);
        tmp_subscript_value_1 = par_curve_name;
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_curve == NULL);
        var_curve = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prv_key_raw);
        tmp_args_element_value_3 = par_prv_key_raw;
        frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 114;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prv_key == NULL);
        var_prv_key = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_cert);
        tmp_expression_value_5 = var_cert;
        tmp_subscript_value_2 = mod_consts[14];
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[15];
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[16];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spk == NULL);
        var_spk = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[17]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spk);
        tmp_expression_value_7 = var_spk;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[18]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 116;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 116;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_spk);
        tmp_expression_value_8 = var_spk;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[18]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 117;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 117;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 117;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[9];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 117;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_12);
        var__ = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        assert(var_pub_key_raw == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_pub_key_raw = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_bytes_arg_1;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pub_key_raw);
        tmp_bytes_arg_1 = var_pub_key_raw;
        tmp_args_element_value_5 = BUILTIN_BYTES1(tmp_bytes_arg_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 118;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pub_key == NULL);
        var_pub_key = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[10]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pub_key);
        tmp_args_element_value_6 = var_pub_key;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 119;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_curve);
        tmp_args_element_value_8 = var_curve;
        CHECK_OBJECT(var_prv_key);
        tmp_args_element_value_9 = var_prv_key;
        frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 119;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_bytes_arg_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[21]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 120;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_curve);
        tmp_args_element_value_11 = var_curve;
        CHECK_OBJECT(var_pub_key);
        tmp_args_element_value_12 = var_pub_key;
        CHECK_OBJECT(par_hasher);
        tmp_called_value_12 = par_hasher;
        CHECK_OBJECT(var_cert);
        tmp_expression_value_13 = var_cert;
        tmp_subscript_value_5 = mod_consts[14];
        tmp_expression_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_5);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[23]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 123;
        tmp_args_element_value_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
        Py_DECREF(tmp_called_value_13);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 123;
        tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 123;
        tmp_expression_value_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[24]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[25];
        tmp_args_element_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cert);
        tmp_expression_value_14 = var_cert;
        tmp_subscript_value_7 = mod_consts[26];
        tmp_bytes_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_7);
        if (tmp_bytes_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 124;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = BUILTIN_BYTES1(tmp_bytes_arg_2);
        Py_DECREF(tmp_bytes_arg_2);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 124;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_15};
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 120;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame.f_lineno = 120;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_04f50cebeffc5cecc4cecbf16cd16c91);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_04f50cebeffc5cecc4cecbf16cd16c91);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_04f50cebeffc5cecc4cecbf16cd16c91, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04f50cebeffc5cecc4cecbf16cd16c91->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04f50cebeffc5cecc4cecbf16cd16c91, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04f50cebeffc5cecc4cecbf16cd16c91,
        type_description_1,
        par_self,
        par_curve_name,
        par_hasher,
        par_prv_key_raw,
        par_cert_raw,
        var_cert,
        var_tail,
        var_curve,
        var_prv_key,
        var_spk,
        var__,
        var_pub_key_raw,
        var_pub_key
    );


    // Release cached frame if used for exception.
    if (frame_04f50cebeffc5cecc4cecbf16cd16c91 == cache_frame_04f50cebeffc5cecc4cecbf16cd16c91) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_04f50cebeffc5cecc4cecbf16cd16c91);
        cache_frame_04f50cebeffc5cecc4cecbf16cd16c91 = NULL;
    }

    assertFrameObject(frame_04f50cebeffc5cecc4cecbf16cd16c91);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cert);
    Py_DECREF(var_cert);
    var_cert = NULL;
    CHECK_OBJECT(var_tail);
    Py_DECREF(var_tail);
    var_tail = NULL;
    CHECK_OBJECT(var_curve);
    Py_DECREF(var_curve);
    var_curve = NULL;
    CHECK_OBJECT(var_prv_key);
    Py_DECREF(var_prv_key);
    var_prv_key = NULL;
    CHECK_OBJECT(var_spk);
    Py_DECREF(var_spk);
    var_spk = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    CHECK_OBJECT(var_pub_key_raw);
    Py_DECREF(var_pub_key_raw);
    var_pub_key_raw = NULL;
    CHECK_OBJECT(var_pub_key);
    Py_DECREF(var_pub_key);
    var_pub_key = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_cert);
    var_cert = NULL;
    Py_XDECREF(var_tail);
    var_tail = NULL;
    Py_XDECREF(var_curve);
    var_curve = NULL;
    Py_XDECREF(var_prv_key);
    var_prv_key = NULL;
    Py_XDECREF(var_spk);
    var_spk = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_pub_key_raw);
    var_pub_key_raw = NULL;
    Py_XDECREF(var_pub_key);
    var_pub_key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_curve_name);
    Py_DECREF(par_curve_name);
    CHECK_OBJECT(par_hasher);
    Py_DECREF(par_hasher);
    CHECK_OBJECT(par_prv_key_raw);
    Py_DECREF(par_prv_key_raw);
    CHECK_OBJECT(par_cert_raw);
    Py_DECREF(par_cert_raw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_curve_name);
    Py_DECREF(par_curve_name);
    CHECK_OBJECT(par_hasher);
    Py_DECREF(par_hasher);
    CHECK_OBJECT(par_prv_key_raw);
    Py_DECREF(par_prv_key_raw);
    CHECK_OBJECT(par_cert_raw);
    Py_DECREF(par_cert_raw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygost$test_x509$$$function__2_test_256(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_cert_raw = NULL;
    PyObject *var_prv_key_raw = NULL;
    struct Nuitka_FrameObject *frame_4f72ad872df8fc24168b44e6c310da41;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4f72ad872df8fc24168b44e6c310da41 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4f72ad872df8fc24168b44e6c310da41)) {
        Py_XDECREF(cache_frame_4f72ad872df8fc24168b44e6c310da41);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f72ad872df8fc24168b44e6c310da41 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f72ad872df8fc24168b44e6c310da41 = MAKE_FUNCTION_FRAME(codeobj_4f72ad872df8fc24168b44e6c310da41, module_pygost$test_x509, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4f72ad872df8fc24168b44e6c310da41->m_type_description == NULL);
    frame_4f72ad872df8fc24168b44e6c310da41 = cache_frame_4f72ad872df8fc24168b44e6c310da41;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4f72ad872df8fc24168b44e6c310da41);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4f72ad872df8fc24168b44e6c310da41) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4f72ad872df8fc24168b44e6c310da41->m_frame.f_lineno = 128;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[28]);

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_cert_raw == NULL);
        var_cert_raw = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4f72ad872df8fc24168b44e6c310da41->m_frame.f_lineno = 143;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[30]);

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[25];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_prv_key_raw == NULL);
        var_prv_key_raw = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[31]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[32];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_prv_key_raw);
        tmp_args_element_value_3 = var_prv_key_raw;
        CHECK_OBJECT(var_cert_raw);
        tmp_args_element_value_4 = var_cert_raw;
        frame_4f72ad872df8fc24168b44e6c310da41->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4f72ad872df8fc24168b44e6c310da41);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4f72ad872df8fc24168b44e6c310da41);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4f72ad872df8fc24168b44e6c310da41, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f72ad872df8fc24168b44e6c310da41->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f72ad872df8fc24168b44e6c310da41, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f72ad872df8fc24168b44e6c310da41,
        type_description_1,
        par_self,
        var_cert_raw,
        var_prv_key_raw
    );


    // Release cached frame if used for exception.
    if (frame_4f72ad872df8fc24168b44e6c310da41 == cache_frame_4f72ad872df8fc24168b44e6c310da41) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4f72ad872df8fc24168b44e6c310da41);
        cache_frame_4f72ad872df8fc24168b44e6c310da41 = NULL;
    }

    assertFrameObject(frame_4f72ad872df8fc24168b44e6c310da41);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cert_raw);
    Py_DECREF(var_cert_raw);
    var_cert_raw = NULL;
    CHECK_OBJECT(var_prv_key_raw);
    Py_DECREF(var_prv_key_raw);
    var_prv_key_raw = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_cert_raw);
    var_cert_raw = NULL;
    Py_XDECREF(var_prv_key_raw);
    var_prv_key_raw = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygost$test_x509$$$function__3_test_512(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_cert_raw = NULL;
    PyObject *var_prv_key_raw = NULL;
    struct Nuitka_FrameObject *frame_dbd9be602dc1526ba15da92ddbba253a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_dbd9be602dc1526ba15da92ddbba253a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dbd9be602dc1526ba15da92ddbba253a)) {
        Py_XDECREF(cache_frame_dbd9be602dc1526ba15da92ddbba253a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dbd9be602dc1526ba15da92ddbba253a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dbd9be602dc1526ba15da92ddbba253a = MAKE_FUNCTION_FRAME(codeobj_dbd9be602dc1526ba15da92ddbba253a, module_pygost$test_x509, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dbd9be602dc1526ba15da92ddbba253a->m_type_description == NULL);
    frame_dbd9be602dc1526ba15da92ddbba253a = cache_frame_dbd9be602dc1526ba15da92ddbba253a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dbd9be602dc1526ba15da92ddbba253a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dbd9be602dc1526ba15da92ddbba253a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_dbd9be602dc1526ba15da92ddbba253a->m_frame.f_lineno = 152;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[34]);

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_cert_raw == NULL);
        var_cert_raw = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_dbd9be602dc1526ba15da92ddbba253a->m_frame.f_lineno = 170;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[35]);

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[25];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_prv_key_raw == NULL);
        var_prv_key_raw = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[31]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[36];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_prv_key_raw);
        tmp_args_element_value_3 = var_prv_key_raw;
        CHECK_OBJECT(var_cert_raw);
        tmp_args_element_value_4 = var_cert_raw;
        frame_dbd9be602dc1526ba15da92ddbba253a->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dbd9be602dc1526ba15da92ddbba253a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dbd9be602dc1526ba15da92ddbba253a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dbd9be602dc1526ba15da92ddbba253a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dbd9be602dc1526ba15da92ddbba253a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dbd9be602dc1526ba15da92ddbba253a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dbd9be602dc1526ba15da92ddbba253a,
        type_description_1,
        par_self,
        var_cert_raw,
        var_prv_key_raw
    );


    // Release cached frame if used for exception.
    if (frame_dbd9be602dc1526ba15da92ddbba253a == cache_frame_dbd9be602dc1526ba15da92ddbba253a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dbd9be602dc1526ba15da92ddbba253a);
        cache_frame_dbd9be602dc1526ba15da92ddbba253a = NULL;
    }

    assertFrameObject(frame_dbd9be602dc1526ba15da92ddbba253a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cert_raw);
    Py_DECREF(var_cert_raw);
    var_cert_raw = NULL;
    CHECK_OBJECT(var_prv_key_raw);
    Py_DECREF(var_prv_key_raw);
    var_prv_key_raw = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_cert_raw);
    var_cert_raw = NULL;
    Py_XDECREF(var_prv_key_raw);
    var_prv_key_raw = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygost$test_x509$$$function__4__test_vector(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_curve_name = python_pars[1];
    PyObject *par_hsh = python_pars[2];
    PyObject *par_ai_spki = python_pars[3];
    PyObject *par_ai_sign = python_pars[4];
    PyObject *par_cert_serial = python_pars[5];
    PyObject *par_prv_hex = python_pars[6];
    PyObject *par_cr_sign_hex = python_pars[7];
    PyObject *par_cr_b64 = python_pars[8];
    PyObject *par_c_sign_hex = python_pars[9];
    PyObject *par_c_b64 = python_pars[10];
    PyObject *par_crl_sign_hex = python_pars[11];
    PyObject *par_crl_b64 = python_pars[12];
    PyObject *var_prv_raw = NULL;
    PyObject *var_prv = NULL;
    PyObject *var_curve = NULL;
    PyObject *var_pub = NULL;
    PyObject *var_pub_raw = NULL;
    PyObject *var_subj = NULL;
    PyObject *var_spki = NULL;
    PyObject *var_cri = NULL;
    PyObject *var_sign = NULL;
    PyObject *var_cr = NULL;
    PyObject *var_tbs = NULL;
    PyObject *var_cert = NULL;
    PyObject *var_crl = NULL;
    struct Nuitka_FrameObject *frame_c8a2cb7b3ec31aced24f93299e72f30e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c8a2cb7b3ec31aced24f93299e72f30e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c8a2cb7b3ec31aced24f93299e72f30e)) {
        Py_XDECREF(cache_frame_c8a2cb7b3ec31aced24f93299e72f30e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8a2cb7b3ec31aced24f93299e72f30e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8a2cb7b3ec31aced24f93299e72f30e = MAKE_FUNCTION_FRAME(codeobj_c8a2cb7b3ec31aced24f93299e72f30e, module_pygost$test_x509, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c8a2cb7b3ec31aced24f93299e72f30e->m_type_description == NULL);
    frame_c8a2cb7b3ec31aced24f93299e72f30e = cache_frame_c8a2cb7b3ec31aced24f93299e72f30e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c8a2cb7b3ec31aced24f93299e72f30e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c8a2cb7b3ec31aced24f93299e72f30e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prv_hex);
        tmp_args_element_value_1 = par_prv_hex;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 199;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[25];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prv_raw == NULL);
        var_prv_raw = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_prv_raw);
        tmp_args_element_value_2 = var_prv_raw;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 200;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prv == NULL);
        var_prv = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_curve_name);
        tmp_subscript_value_2 = par_curve_name;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_curve == NULL);
        var_curve = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_curve);
        tmp_args_element_value_3 = var_curve;
        CHECK_OBJECT(var_prv);
        tmp_args_element_value_4 = var_prv;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pub == NULL);
        var_pub = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pub);
        tmp_args_element_value_5 = var_pub;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 203;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pub_raw == NULL);
        var_pub_raw = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[40];
        tmp_args_element_value_6 = PyTuple_New(2);
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_list_element_1;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyTuple_SET_ITEM0(tmp_args_element_value_6, 0, tmp_tuple_element_1);
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_4 = mod_consts[44];
            tmp_tuple_element_3 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_9;
                PyObject *tmp_args_element_value_10;
                PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_4);
                tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_called_value_9 == NULL)) {
                    tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                }

                if (tmp_called_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_2;
                }
                tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[46]);

                if (unlikely(tmp_args_element_value_10 == NULL)) {
                    tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
                }

                if (tmp_args_element_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_2;
                }
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 207;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_10);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_3);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_args_element_value_9 = PyTuple_New(2);
            {
                PyObject *tmp_tuple_element_5;
                PyTuple_SET_ITEM(tmp_args_element_value_9, 0, tmp_tuple_element_3);
                tmp_tuple_element_5 = mod_consts[47];
                tmp_tuple_element_3 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_10;
                    PyObject *tmp_args_element_value_11;
                    PyObject *tmp_called_value_11;
                    PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_5);
                    tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[48]);

                    if (unlikely(tmp_called_value_10 == NULL)) {
                        tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                    }

                    if (tmp_called_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 208;
                        type_description_1 = "oooooooooooooooooooooooooo";
                        goto tuple_build_exception_4;
                    }
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 208;
                        type_description_1 = "oooooooooooooooooooooooooo";
                        goto tuple_build_exception_4;
                    }
                    frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 208;
                    tmp_args_element_value_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[50]);

                    if (tmp_args_element_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 208;
                        type_description_1 = "oooooooooooooooooooooooooo";
                        goto tuple_build_exception_4;
                    }
                    frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 208;
                    tmp_tuple_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_11);
                    Py_DECREF(tmp_args_element_value_11);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 208;
                        type_description_1 = "oooooooooooooooooooooooooo";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_5);
                }
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_tuple_element_3);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                PyTuple_SET_ITEM(tmp_args_element_value_9, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_args_element_value_9);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 206;
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_args_element_value_8 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_args_element_value_8, 0, tmp_tuple_element_2);
            frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 205;
            tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_args_element_value_7 = PyList_New(1);
            PyList_SET_ITEM(tmp_args_element_value_7, 0, tmp_list_element_1);
            frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 204;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_6, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_element_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 204;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_subj == NULL);
        var_subj = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_tuple_element_7;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = mod_consts[52];
        tmp_tuple_element_6 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_6, 0, tmp_tuple_element_7);
        CHECK_OBJECT(par_ai_spki);
        tmp_tuple_element_7 = par_ai_spki;
        PyTuple_SET_ITEM0(tmp_tuple_element_6, 1, tmp_tuple_element_7);
        tmp_args_element_value_12 = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_8;
            PyTuple_SET_ITEM(tmp_args_element_value_12, 0, tmp_tuple_element_6);
            tmp_tuple_element_8 = mod_consts[16];
            tmp_tuple_element_6 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_13;
                PyObject *tmp_args_element_value_13;
                PyObject *tmp_called_value_14;
                PyObject *tmp_expression_value_3;
                PyObject *tmp_called_value_15;
                PyObject *tmp_args_element_value_14;
                PyTuple_SET_ITEM0(tmp_tuple_element_6, 0, tmp_tuple_element_8);
                tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[53]);

                if (unlikely(tmp_called_value_13 == NULL)) {
                    tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                }

                if (tmp_called_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_6;
                }
                tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[6]);

                if (unlikely(tmp_called_value_15 == NULL)) {
                    tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                }

                if (tmp_called_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_6;
                }
                CHECK_OBJECT(var_pub_raw);
                tmp_args_element_value_14 = var_pub_raw;
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 214;
                tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_14);
                if (tmp_expression_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_6;
                }
                tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
                Py_DECREF(tmp_expression_value_3);
                if (tmp_called_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_6;
                }
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 214;
                tmp_args_element_value_13 = CALL_FUNCTION_NO_ARGS(tmp_called_value_14);
                Py_DECREF(tmp_called_value_14);
                if (tmp_args_element_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_6;
                }
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 214;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
                Py_DECREF(tmp_args_element_value_13);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_6, 1, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_tuple_element_6);
            goto tuple_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            PyTuple_SET_ITEM(tmp_args_element_value_12, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_args_element_value_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 212;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spki == NULL);
        var_spki = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_tuple_element_10;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = mod_consts[55];
        tmp_tuple_element_9 = PyTuple_New(2);
        {
            PyObject *tmp_called_value_17;
            PyTuple_SET_ITEM0(tmp_tuple_element_9, 0, tmp_tuple_element_10);
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 219;
            tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[57]);

            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_9, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_tuple_element_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_args_element_value_15 = PyTuple_New(4);
        {
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_tuple_element_13;
            PyTuple_SET_ITEM(tmp_args_element_value_15, 0, tmp_tuple_element_9);
            tmp_tuple_element_11 = mod_consts[58];
            tmp_tuple_element_9 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_9, 0, tmp_tuple_element_11);
            CHECK_OBJECT(var_subj);
            tmp_tuple_element_11 = var_subj;
            PyTuple_SET_ITEM0(tmp_tuple_element_9, 1, tmp_tuple_element_11);
            PyTuple_SET_ITEM(tmp_args_element_value_15, 1, tmp_tuple_element_9);
            tmp_tuple_element_12 = mod_consts[59];
            tmp_tuple_element_9 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_9, 0, tmp_tuple_element_12);
            CHECK_OBJECT(var_spki);
            tmp_tuple_element_12 = var_spki;
            PyTuple_SET_ITEM0(tmp_tuple_element_9, 1, tmp_tuple_element_12);
            PyTuple_SET_ITEM(tmp_args_element_value_15, 2, tmp_tuple_element_9);
            tmp_tuple_element_13 = mod_consts[60];
            tmp_tuple_element_9 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_18;
                PyTuple_SET_ITEM0(tmp_tuple_element_9, 0, tmp_tuple_element_13);
                tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[61]);

                if (unlikely(tmp_called_value_18 == NULL)) {
                    tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
                }

                if (tmp_called_value_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 222;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_9;
                }
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 222;
                tmp_tuple_element_13 = CALL_FUNCTION_NO_ARGS(tmp_called_value_18);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 222;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_9, 1, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_tuple_element_9);
            goto tuple_build_exception_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            PyTuple_SET_ITEM(tmp_args_element_value_15, 3, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_args_element_value_15);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 218;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cri == NULL);
        var_cri = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cr_sign_hex);
        tmp_args_element_value_16 = par_cr_sign_hex;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 224;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_16);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sign == NULL);
        var_sign = tmp_assign_source_9;
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_args_element_value_22;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[21]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_curve);
        tmp_args_element_value_18 = var_curve;
        CHECK_OBJECT(var_pub);
        tmp_args_element_value_19 = var_pub;
        CHECK_OBJECT(par_hsh);
        tmp_called_value_22 = par_hsh;
        CHECK_OBJECT(var_cri);
        tmp_expression_value_6 = var_cri;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[23]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 228;
        tmp_args_element_value_21 = CALL_FUNCTION_NO_ARGS(tmp_called_value_23);
        Py_DECREF(tmp_called_value_23);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 228;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 228;
        tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[24]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[25];
        tmp_args_element_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sign);
        tmp_args_element_value_22 = var_sign;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_22};
            tmp_args_element_value_17 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_args_element_value_20);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 225;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_tuple_element_15;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_15 = mod_consts[63];
        tmp_tuple_element_14 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_14, 0, tmp_tuple_element_15);
        CHECK_OBJECT(var_cri);
        tmp_tuple_element_15 = var_cri;
        PyTuple_SET_ITEM0(tmp_tuple_element_14, 1, tmp_tuple_element_15);
        tmp_args_element_value_23 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_tuple_element_17;
            PyTuple_SET_ITEM(tmp_args_element_value_23, 0, tmp_tuple_element_14);
            tmp_tuple_element_16 = mod_consts[64];
            tmp_tuple_element_14 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_14, 0, tmp_tuple_element_16);
            CHECK_OBJECT(par_ai_sign);
            tmp_tuple_element_16 = par_ai_sign;
            PyTuple_SET_ITEM0(tmp_tuple_element_14, 1, tmp_tuple_element_16);
            PyTuple_SET_ITEM(tmp_args_element_value_23, 1, tmp_tuple_element_14);
            tmp_tuple_element_17 = mod_consts[65];
            tmp_tuple_element_14 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_25;
                PyObject *tmp_args_element_value_24;
                PyTuple_SET_ITEM0(tmp_tuple_element_14, 0, tmp_tuple_element_17);
                tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[53]);

                if (unlikely(tmp_called_value_25 == NULL)) {
                    tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                }

                if (tmp_called_value_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 234;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_11;
                }
                CHECK_OBJECT(var_sign);
                tmp_args_element_value_24 = var_sign;
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 234;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_24);
                if (tmp_tuple_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 234;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_14, 1, tmp_tuple_element_17);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_tuple_element_14);
            goto tuple_build_exception_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            PyTuple_SET_ITEM(tmp_args_element_value_23, 2, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_args_element_value_23);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 231;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cr == NULL);
        var_cr = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_27;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[10]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cr);
        tmp_expression_value_8 = var_cr;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[23]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 236;
        tmp_args_element_value_25 = CALL_FUNCTION_NO_ARGS(tmp_called_value_27);
        Py_DECREF(tmp_called_value_27);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cr_b64);
        tmp_args_element_value_27 = par_cr_b64;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 236;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_27);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_25);

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_tuple_element_19;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_19 = mod_consts[55];
        tmp_tuple_element_18 = PyTuple_New(2);
        {
            PyObject *tmp_called_value_30;
            PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_19);
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 240;
            tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_30, mod_consts[68]);

            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_tuple_element_18);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_args_element_value_28 = PyTuple_New(8);
        {
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_tuple_element_31;
            PyTuple_SET_ITEM(tmp_args_element_value_28, 0, tmp_tuple_element_18);
            tmp_tuple_element_20 = mod_consts[69];
            tmp_tuple_element_18 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_31;
                PyObject *tmp_args_element_value_29;
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_20);
                tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[70]);

                if (unlikely(tmp_called_value_31 == NULL)) {
                    tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                }

                if (tmp_called_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 241;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_14;
                }
                CHECK_OBJECT(par_cert_serial);
                tmp_args_element_value_29 = par_cert_serial;
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 241;
                tmp_tuple_element_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_29);
                if (tmp_tuple_element_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 241;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_20);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_tuple_element_18);
            goto tuple_build_exception_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            PyTuple_SET_ITEM(tmp_args_element_value_28, 1, tmp_tuple_element_18);
            tmp_tuple_element_21 = mod_consts[65];
            tmp_tuple_element_18 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_21);
            CHECK_OBJECT(par_ai_sign);
            tmp_tuple_element_21 = par_ai_sign;
            PyTuple_SET_ITEM0(tmp_tuple_element_18, 1, tmp_tuple_element_21);
            PyTuple_SET_ITEM(tmp_args_element_value_28, 2, tmp_tuple_element_18);
            tmp_tuple_element_22 = mod_consts[71];
            tmp_tuple_element_18 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_22);
            CHECK_OBJECT(var_subj);
            tmp_tuple_element_22 = var_subj;
            PyTuple_SET_ITEM0(tmp_tuple_element_18, 1, tmp_tuple_element_22);
            PyTuple_SET_ITEM(tmp_args_element_value_28, 3, tmp_tuple_element_18);
            tmp_tuple_element_23 = mod_consts[72];
            tmp_tuple_element_18 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_32;
                PyObject *tmp_args_element_value_30;
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_tuple_element_25;
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_23);
                tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_called_value_32 == NULL)) {
                    tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_called_value_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_15;
                }
                tmp_tuple_element_25 = mod_consts[74];
                tmp_tuple_element_24 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_33;
                    PyObject *tmp_args_element_value_31;
                    PyObject *tmp_tuple_element_26;
                    PyTuple_SET_ITEM0(tmp_tuple_element_24, 0, tmp_tuple_element_25);
                    tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[75]);

                    if (unlikely(tmp_called_value_33 == NULL)) {
                        tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                    }

                    if (tmp_called_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 245;
                        type_description_1 = "oooooooooooooooooooooooooo";
                        goto tuple_build_exception_16;
                    }
                    tmp_tuple_element_26 = mod_consts[76];
                    tmp_args_element_value_31 = PyTuple_New(2);
                    {
                        PyObject *tmp_called_value_34;
                        PyTuple_SET_ITEM0(tmp_args_element_value_31, 0, tmp_tuple_element_26);
                        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[77]);

                        if (unlikely(tmp_called_value_34 == NULL)) {
                            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                        }

                        if (tmp_called_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 245;
                            type_description_1 = "oooooooooooooooooooooooooo";
                            goto tuple_build_exception_17;
                        }
                        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 245;
                        tmp_tuple_element_26 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_34, mod_consts[78]);

                        if (tmp_tuple_element_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 245;
                            type_description_1 = "oooooooooooooooooooooooooo";
                            goto tuple_build_exception_17;
                        }
                        PyTuple_SET_ITEM(tmp_args_element_value_31, 1, tmp_tuple_element_26);
                    }
                    goto tuple_build_noexception_14;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_17:;
                    Py_DECREF(tmp_args_element_value_31);
                    goto tuple_build_exception_16;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_14:;
                    frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 245;
                    tmp_tuple_element_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_31);
                    Py_DECREF(tmp_args_element_value_31);
                    if (tmp_tuple_element_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 245;
                        type_description_1 = "oooooooooooooooooooooooooo";
                        goto tuple_build_exception_16;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_24, 1, tmp_tuple_element_25);
                }
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_tuple_element_24);
                goto tuple_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                tmp_args_element_value_30 = PyTuple_New(2);
                {
                    PyObject *tmp_tuple_element_27;
                    PyTuple_SET_ITEM(tmp_args_element_value_30, 0, tmp_tuple_element_24);
                    tmp_tuple_element_27 = mod_consts[79];
                    tmp_tuple_element_24 = PyTuple_New(2);
                    {
                        PyObject *tmp_called_value_35;
                        PyObject *tmp_args_element_value_32;
                        PyObject *tmp_tuple_element_28;
                        PyTuple_SET_ITEM0(tmp_tuple_element_24, 0, tmp_tuple_element_27);
                        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[75]);

                        if (unlikely(tmp_called_value_35 == NULL)) {
                            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                        }

                        if (tmp_called_value_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 246;
                            type_description_1 = "oooooooooooooooooooooooooo";
                            goto tuple_build_exception_19;
                        }
                        tmp_tuple_element_28 = mod_consts[80];
                        tmp_args_element_value_32 = PyTuple_New(2);
                        {
                            PyObject *tmp_called_value_36;
                            PyTuple_SET_ITEM0(tmp_args_element_value_32, 0, tmp_tuple_element_28);
                            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[81]);

                            if (unlikely(tmp_called_value_36 == NULL)) {
                                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
                            }

                            if (tmp_called_value_36 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 246;
                                type_description_1 = "oooooooooooooooooooooooooo";
                                goto tuple_build_exception_20;
                            }
                            frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 246;
                            tmp_tuple_element_28 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_36, mod_consts[82]);

                            if (tmp_tuple_element_28 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 246;
                                type_description_1 = "oooooooooooooooooooooooooo";
                                goto tuple_build_exception_20;
                            }
                            PyTuple_SET_ITEM(tmp_args_element_value_32, 1, tmp_tuple_element_28);
                        }
                        goto tuple_build_noexception_16;
                        // Exception handling pass through code for tuple_build:
                        tuple_build_exception_20:;
                        Py_DECREF(tmp_args_element_value_32);
                        goto tuple_build_exception_19;
                        // Finished with no exception for tuple_build:
                        tuple_build_noexception_16:;
                        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 246;
                        tmp_tuple_element_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_32);
                        Py_DECREF(tmp_args_element_value_32);
                        if (tmp_tuple_element_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 246;
                            type_description_1 = "oooooooooooooooooooooooooo";
                            goto tuple_build_exception_19;
                        }
                        PyTuple_SET_ITEM(tmp_tuple_element_24, 1, tmp_tuple_element_27);
                    }
                    goto tuple_build_noexception_17;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_19:;
                    Py_DECREF(tmp_tuple_element_24);
                    goto tuple_build_exception_18;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_17:;
                    PyTuple_SET_ITEM(tmp_args_element_value_30, 1, tmp_tuple_element_24);
                }
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_args_element_value_30);
                goto tuple_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 244;
                tmp_tuple_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_30);
                Py_DECREF(tmp_args_element_value_30);
                if (tmp_tuple_element_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_23);
            }
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_tuple_element_18);
            goto tuple_build_exception_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            PyTuple_SET_ITEM(tmp_args_element_value_28, 4, tmp_tuple_element_18);
            tmp_tuple_element_29 = mod_consts[58];
            tmp_tuple_element_18 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_29);
            CHECK_OBJECT(var_subj);
            tmp_tuple_element_29 = var_subj;
            PyTuple_SET_ITEM0(tmp_tuple_element_18, 1, tmp_tuple_element_29);
            PyTuple_SET_ITEM(tmp_args_element_value_28, 5, tmp_tuple_element_18);
            tmp_tuple_element_30 = mod_consts[15];
            tmp_tuple_element_18 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_30);
            CHECK_OBJECT(var_spki);
            tmp_tuple_element_30 = var_spki;
            PyTuple_SET_ITEM0(tmp_tuple_element_18, 1, tmp_tuple_element_30);
            PyTuple_SET_ITEM(tmp_args_element_value_28, 6, tmp_tuple_element_18);
            tmp_tuple_element_31 = mod_consts[83];
            tmp_tuple_element_18 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_37;
                PyObject *tmp_args_element_value_33;
                PyObject *tmp_tuple_element_32;
                PyObject *tmp_called_value_38;
                PyObject *tmp_args_element_value_34;
                PyObject *tmp_tuple_element_33;
                PyObject *tmp_tuple_element_34;
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_31);
                tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[84]);

                if (unlikely(tmp_called_value_37 == NULL)) {
                    tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                }

                if (tmp_called_value_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 250;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_21;
                }
                tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[85]);

                if (unlikely(tmp_called_value_38 == NULL)) {
                    tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                }

                if (tmp_called_value_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 251;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_21;
                }
                tmp_tuple_element_34 = mod_consts[86];
                tmp_tuple_element_33 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_33, 0, tmp_tuple_element_34);
                tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[87]);

                if (unlikely(tmp_tuple_element_34 == NULL)) {
                    tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                }

                if (tmp_tuple_element_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_22;
                }
                PyTuple_SET_ITEM0(tmp_tuple_element_33, 1, tmp_tuple_element_34);
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_tuple_element_33);
                goto tuple_build_exception_21;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                tmp_args_element_value_34 = PyTuple_New(3);
                {
                    PyObject *tmp_tuple_element_35;
                    PyObject *tmp_tuple_element_36;
                    PyTuple_SET_ITEM(tmp_args_element_value_34, 0, tmp_tuple_element_33);
                    tmp_tuple_element_35 = mod_consts[88];
                    tmp_tuple_element_33 = PyTuple_New(2);
                    {
                        PyObject *tmp_called_value_39;
                        PyTuple_SET_ITEM0(tmp_tuple_element_33, 0, tmp_tuple_element_35);
                        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_called_value_39 == NULL)) {
                            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_called_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 253;
                            type_description_1 = "oooooooooooooooooooooooooo";
                            goto tuple_build_exception_24;
                        }
                        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 253;
                        tmp_tuple_element_35 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_39, mod_consts[90]);

                        if (tmp_tuple_element_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 253;
                            type_description_1 = "oooooooooooooooooooooooooo";
                            goto tuple_build_exception_24;
                        }
                        PyTuple_SET_ITEM(tmp_tuple_element_33, 1, tmp_tuple_element_35);
                    }
                    goto tuple_build_noexception_21;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_24:;
                    Py_DECREF(tmp_tuple_element_33);
                    goto tuple_build_exception_23;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_21:;
                    PyTuple_SET_ITEM(tmp_args_element_value_34, 1, tmp_tuple_element_33);
                    tmp_tuple_element_36 = mod_consts[91];
                    tmp_tuple_element_33 = PyTuple_New(2);
                    {
                        PyObject *tmp_called_value_40;
                        PyObject *tmp_args_element_value_35;
                        PyObject *tmp_called_value_41;
                        PyObject *tmp_expression_value_9;
                        PyObject *tmp_called_value_42;
                        PyObject *tmp_args_element_value_36;
                        PyObject *tmp_tuple_element_37;
                        PyObject *tmp_tuple_element_38;
                        PyTuple_SET_ITEM0(tmp_tuple_element_33, 0, tmp_tuple_element_36);
                        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[6]);

                        if (unlikely(tmp_called_value_40 == NULL)) {
                            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
                        }

                        if (tmp_called_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 254;
                            type_description_1 = "oooooooooooooooooooooooooo";
                            goto tuple_build_exception_25;
                        }
                        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[92]);

                        if (unlikely(tmp_called_value_42 == NULL)) {
                            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
                        }

                        if (tmp_called_value_42 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 255;
                            type_description_1 = "oooooooooooooooooooooooooo";
                            goto tuple_build_exception_25;
                        }
                        tmp_tuple_element_38 = mod_consts[93];
                        tmp_tuple_element_37 = PyTuple_New(2);
                        {
                            PyObject *tmp_called_value_43;
                            PyTuple_SET_ITEM0(tmp_tuple_element_37, 0, tmp_tuple_element_38);
                            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[89]);

                            if (unlikely(tmp_called_value_43 == NULL)) {
                                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                            }

                            if (tmp_called_value_43 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 255;
                                type_description_1 = "oooooooooooooooooooooooooo";
                                goto tuple_build_exception_26;
                            }
                            frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 255;
                            tmp_tuple_element_38 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_43, mod_consts[90]);

                            if (tmp_tuple_element_38 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 255;
                                type_description_1 = "oooooooooooooooooooooooooo";
                                goto tuple_build_exception_26;
                            }
                            PyTuple_SET_ITEM(tmp_tuple_element_37, 1, tmp_tuple_element_38);
                        }
                        goto tuple_build_noexception_22;
                        // Exception handling pass through code for tuple_build:
                        tuple_build_exception_26:;
                        Py_DECREF(tmp_tuple_element_37);
                        goto tuple_build_exception_25;
                        // Finished with no exception for tuple_build:
                        tuple_build_noexception_22:;
                        tmp_args_element_value_36 = PyTuple_New(1);
                        PyTuple_SET_ITEM(tmp_args_element_value_36, 0, tmp_tuple_element_37);
                        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 255;
                        tmp_expression_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_36);
                        Py_DECREF(tmp_args_element_value_36);
                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 255;
                            type_description_1 = "oooooooooooooooooooooooooo";
                            goto tuple_build_exception_25;
                        }
                        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[23]);
                        Py_DECREF(tmp_expression_value_9);
                        if (tmp_called_value_41 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 255;
                            type_description_1 = "oooooooooooooooooooooooooo";
                            goto tuple_build_exception_25;
                        }
                        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 255;
                        tmp_args_element_value_35 = CALL_FUNCTION_NO_ARGS(tmp_called_value_41);
                        Py_DECREF(tmp_called_value_41);
                        if (tmp_args_element_value_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 255;
                            type_description_1 = "oooooooooooooooooooooooooo";
                            goto tuple_build_exception_25;
                        }
                        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 254;
                        tmp_tuple_element_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_35);
                        Py_DECREF(tmp_args_element_value_35);
                        if (tmp_tuple_element_36 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 254;
                            type_description_1 = "oooooooooooooooooooooooooo";
                            goto tuple_build_exception_25;
                        }
                        PyTuple_SET_ITEM(tmp_tuple_element_33, 1, tmp_tuple_element_36);
                    }
                    goto tuple_build_noexception_23;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_25:;
                    Py_DECREF(tmp_tuple_element_33);
                    goto tuple_build_exception_23;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_23:;
                    PyTuple_SET_ITEM(tmp_args_element_value_34, 2, tmp_tuple_element_33);
                }
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_23:;
                Py_DECREF(tmp_args_element_value_34);
                goto tuple_build_exception_21;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 251;
                tmp_tuple_element_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_34);
                if (tmp_tuple_element_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 251;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_21;
                }
                tmp_args_element_value_33 = PyTuple_New(1);
                PyTuple_SET_ITEM(tmp_args_element_value_33, 0, tmp_tuple_element_32);
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 250;
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_33);
                if (tmp_tuple_element_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 250;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_21;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_31);
            }
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_tuple_element_18);
            goto tuple_build_exception_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            PyTuple_SET_ITEM(tmp_args_element_value_28, 7, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_args_element_value_28);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 239;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tbs == NULL);
        var_tbs = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_37;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_c_sign_hex);
        tmp_args_element_value_37 = par_c_sign_hex;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 260;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_37);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sign;
            assert(old != NULL);
            var_sign = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_43;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[21]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_curve);
        tmp_args_element_value_39 = var_curve;
        CHECK_OBJECT(var_pub);
        tmp_args_element_value_40 = var_pub;
        CHECK_OBJECT(par_hsh);
        tmp_called_value_47 = par_hsh;
        CHECK_OBJECT(var_tbs);
        tmp_expression_value_12 = var_tbs;
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[23]);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 264;
        tmp_args_element_value_42 = CALL_FUNCTION_NO_ARGS(tmp_called_value_48);
        Py_DECREF(tmp_called_value_48);
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 264;
        tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 264;
        tmp_expression_value_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[24]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[25];
        tmp_args_element_value_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sign);
        tmp_args_element_value_43 = var_sign;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_43};
            tmp_args_element_value_38 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_46, call_args);
        }

        Py_DECREF(tmp_args_element_value_41);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 261;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_49;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_tuple_element_40;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_40 = mod_consts[14];
        tmp_tuple_element_39 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_39, 0, tmp_tuple_element_40);
        CHECK_OBJECT(var_tbs);
        tmp_tuple_element_40 = var_tbs;
        PyTuple_SET_ITEM0(tmp_tuple_element_39, 1, tmp_tuple_element_40);
        tmp_args_element_value_44 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_tuple_element_42;
            PyTuple_SET_ITEM(tmp_args_element_value_44, 0, tmp_tuple_element_39);
            tmp_tuple_element_41 = mod_consts[64];
            tmp_tuple_element_39 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_39, 0, tmp_tuple_element_41);
            CHECK_OBJECT(par_ai_sign);
            tmp_tuple_element_41 = par_ai_sign;
            PyTuple_SET_ITEM0(tmp_tuple_element_39, 1, tmp_tuple_element_41);
            PyTuple_SET_ITEM(tmp_args_element_value_44, 1, tmp_tuple_element_39);
            tmp_tuple_element_42 = mod_consts[26];
            tmp_tuple_element_39 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_50;
                PyObject *tmp_args_element_value_45;
                PyTuple_SET_ITEM0(tmp_tuple_element_39, 0, tmp_tuple_element_42);
                tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[53]);

                if (unlikely(tmp_called_value_50 == NULL)) {
                    tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                }

                if (tmp_called_value_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_28;
                }
                CHECK_OBJECT(var_sign);
                tmp_args_element_value_45 = var_sign;
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 270;
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_45);
                if (tmp_tuple_element_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_28;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_39, 1, tmp_tuple_element_42);
            }
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_tuple_element_39);
            goto tuple_build_exception_27;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            PyTuple_SET_ITEM(tmp_args_element_value_44, 2, tmp_tuple_element_39);
        }
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_27:;
        Py_DECREF(tmp_args_element_value_44);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 267;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cert == NULL);
        var_cert = tmp_assign_source_13;
    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_value_53;
        PyObject *tmp_args_element_value_48;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[10]);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cert);
        tmp_expression_value_14 = var_cert;
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[23]);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 272;
        tmp_args_element_value_46 = CALL_FUNCTION_NO_ARGS(tmp_called_value_52);
        Py_DECREF(tmp_called_value_52);
        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_element_value_46);

            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_c_b64);
        tmp_args_element_value_48 = par_c_b64;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 272;
        tmp_args_element_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_48);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_element_value_46);

            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_51, call_args);
        }

        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_46);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_54;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_tuple_element_44;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_44 = mod_consts[55];
        tmp_tuple_element_43 = PyTuple_New(2);
        {
            PyObject *tmp_called_value_55;
            PyTuple_SET_ITEM0(tmp_tuple_element_43, 0, tmp_tuple_element_44);
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_29;
            }
            frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 276;
            tmp_tuple_element_44 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_55, mod_consts[95]);

            if (tmp_tuple_element_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_tuple_element_43, 1, tmp_tuple_element_44);
        }
        goto tuple_build_noexception_29;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_29:;
        Py_DECREF(tmp_tuple_element_43);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_29:;
        tmp_args_element_value_49 = PyTuple_New(5);
        {
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_tuple_element_49;
            PyTuple_SET_ITEM(tmp_args_element_value_49, 0, tmp_tuple_element_43);
            tmp_tuple_element_45 = mod_consts[65];
            tmp_tuple_element_43 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_43, 0, tmp_tuple_element_45);
            CHECK_OBJECT(par_ai_sign);
            tmp_tuple_element_45 = par_ai_sign;
            PyTuple_SET_ITEM0(tmp_tuple_element_43, 1, tmp_tuple_element_45);
            PyTuple_SET_ITEM(tmp_args_element_value_49, 1, tmp_tuple_element_43);
            tmp_tuple_element_46 = mod_consts[71];
            tmp_tuple_element_43 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_43, 0, tmp_tuple_element_46);
            CHECK_OBJECT(var_subj);
            tmp_tuple_element_46 = var_subj;
            PyTuple_SET_ITEM0(tmp_tuple_element_43, 1, tmp_tuple_element_46);
            PyTuple_SET_ITEM(tmp_args_element_value_49, 2, tmp_tuple_element_43);
            tmp_tuple_element_47 = mod_consts[96];
            tmp_tuple_element_43 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_56;
                PyObject *tmp_args_element_value_50;
                PyObject *tmp_tuple_element_48;
                PyTuple_SET_ITEM0(tmp_tuple_element_43, 0, tmp_tuple_element_47);
                tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_called_value_56 == NULL)) {
                    tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                }

                if (tmp_called_value_56 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 279;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_31;
                }
                tmp_tuple_element_48 = mod_consts[76];
                tmp_args_element_value_50 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_57;
                    PyTuple_SET_ITEM0(tmp_args_element_value_50, 0, tmp_tuple_element_48);
                    tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_called_value_57 == NULL)) {
                        tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                    }

                    if (tmp_called_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 279;
                        type_description_1 = "oooooooooooooooooooooooooo";
                        goto tuple_build_exception_32;
                    }
                    frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 279;
                    tmp_tuple_element_48 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_57, mod_consts[97]);

                    if (tmp_tuple_element_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 279;
                        type_description_1 = "oooooooooooooooooooooooooo";
                        goto tuple_build_exception_32;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_50, 1, tmp_tuple_element_48);
                }
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_args_element_value_50);
                goto tuple_build_exception_31;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 279;
                tmp_tuple_element_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_50);
                if (tmp_tuple_element_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 279;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_31;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_43, 1, tmp_tuple_element_47);
            }
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_tuple_element_43);
            goto tuple_build_exception_30;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            PyTuple_SET_ITEM(tmp_args_element_value_49, 3, tmp_tuple_element_43);
            tmp_tuple_element_49 = mod_consts[98];
            tmp_tuple_element_43 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_58;
                PyObject *tmp_args_element_value_51;
                PyObject *tmp_tuple_element_50;
                PyTuple_SET_ITEM0(tmp_tuple_element_43, 0, tmp_tuple_element_49);
                tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_called_value_58 == NULL)) {
                    tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                }

                if (tmp_called_value_58 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 280;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_33;
                }
                tmp_tuple_element_50 = mod_consts[76];
                tmp_args_element_value_51 = PyTuple_New(2);
                {
                    PyObject *tmp_called_value_59;
                    PyTuple_SET_ITEM0(tmp_args_element_value_51, 0, tmp_tuple_element_50);
                    tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_called_value_59 == NULL)) {
                        tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                    }

                    if (tmp_called_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 280;
                        type_description_1 = "oooooooooooooooooooooooooo";
                        goto tuple_build_exception_34;
                    }
                    frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 280;
                    tmp_tuple_element_50 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_59, mod_consts[99]);

                    if (tmp_tuple_element_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 280;
                        type_description_1 = "oooooooooooooooooooooooooo";
                        goto tuple_build_exception_34;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_51, 1, tmp_tuple_element_50);
                }
                goto tuple_build_noexception_32;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_34:;
                Py_DECREF(tmp_args_element_value_51);
                goto tuple_build_exception_33;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_32:;
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 280;
                tmp_tuple_element_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_51);
                if (tmp_tuple_element_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 280;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_33;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_43, 1, tmp_tuple_element_49);
            }
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_tuple_element_43);
            goto tuple_build_exception_30;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            PyTuple_SET_ITEM(tmp_args_element_value_49, 4, tmp_tuple_element_43);
        }
        goto tuple_build_noexception_34;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_30:;
        Py_DECREF(tmp_args_element_value_49);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_34:;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 275;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_49);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_tbs;
            assert(old != NULL);
            var_tbs = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_60;
        PyObject *tmp_args_element_value_52;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_crl_sign_hex);
        tmp_args_element_value_52 = par_crl_sign_hex;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 282;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_52);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sign;
            assert(old != NULL);
            var_sign = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_called_value_62;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_value_63;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_args_element_value_58;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[21]);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 283;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_curve);
        tmp_args_element_value_54 = var_curve;
        CHECK_OBJECT(var_pub);
        tmp_args_element_value_55 = var_pub;
        CHECK_OBJECT(par_hsh);
        tmp_called_value_63 = par_hsh;
        CHECK_OBJECT(var_tbs);
        tmp_expression_value_17 = var_tbs;
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[23]);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 286;
        tmp_args_element_value_57 = CALL_FUNCTION_NO_ARGS(tmp_called_value_64);
        Py_DECREF(tmp_called_value_64);
        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 286;
        tmp_called_instance_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_args_element_value_57);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 286;
        tmp_expression_value_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[24]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[25];
        tmp_args_element_value_56 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_args_element_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sign);
        tmp_args_element_value_58 = var_sign;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 283;
        {
            PyObject *call_args[] = {tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_58};
            tmp_args_element_value_53 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_62, call_args);
        }

        Py_DECREF(tmp_args_element_value_56);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 283;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 283;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_61, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_61);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_65;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_tuple_element_51;
        PyObject *tmp_tuple_element_52;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_52 = mod_consts[101];
        tmp_tuple_element_51 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_51, 0, tmp_tuple_element_52);
        CHECK_OBJECT(var_tbs);
        tmp_tuple_element_52 = var_tbs;
        PyTuple_SET_ITEM0(tmp_tuple_element_51, 1, tmp_tuple_element_52);
        tmp_args_element_value_59 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_53;
            PyObject *tmp_tuple_element_54;
            PyTuple_SET_ITEM(tmp_args_element_value_59, 0, tmp_tuple_element_51);
            tmp_tuple_element_53 = mod_consts[64];
            tmp_tuple_element_51 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_51, 0, tmp_tuple_element_53);
            CHECK_OBJECT(par_ai_sign);
            tmp_tuple_element_53 = par_ai_sign;
            PyTuple_SET_ITEM0(tmp_tuple_element_51, 1, tmp_tuple_element_53);
            PyTuple_SET_ITEM(tmp_args_element_value_59, 1, tmp_tuple_element_51);
            tmp_tuple_element_54 = mod_consts[26];
            tmp_tuple_element_51 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_66;
                PyObject *tmp_args_element_value_60;
                PyTuple_SET_ITEM0(tmp_tuple_element_51, 0, tmp_tuple_element_54);
                tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[53]);

                if (unlikely(tmp_called_value_66 == NULL)) {
                    tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                }

                if (tmp_called_value_66 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 292;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_36;
                }
                CHECK_OBJECT(var_sign);
                tmp_args_element_value_60 = var_sign;
                frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 292;
                tmp_tuple_element_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_60);
                if (tmp_tuple_element_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 292;
                    type_description_1 = "oooooooooooooooooooooooooo";
                    goto tuple_build_exception_36;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_51, 1, tmp_tuple_element_54);
            }
            goto tuple_build_noexception_35;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_36:;
            Py_DECREF(tmp_tuple_element_51);
            goto tuple_build_exception_35;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_35:;
            PyTuple_SET_ITEM(tmp_args_element_value_59, 2, tmp_tuple_element_51);
        }
        goto tuple_build_noexception_36;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_35:;
        Py_DECREF(tmp_args_element_value_59);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_36:;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 289;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_59);
        Py_DECREF(tmp_args_element_value_59);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_crl == NULL);
        var_crl = tmp_assign_source_16;
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_called_value_69;
        PyObject *tmp_args_element_value_63;
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[10]);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_crl);
        tmp_expression_value_19 = var_crl;
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[23]);
        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 294;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 294;
        tmp_args_element_value_61 = CALL_FUNCTION_NO_ARGS(tmp_called_value_68);
        Py_DECREF(tmp_called_value_68);
        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 294;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_args_element_value_61);

            exception_lineno = 294;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_crl_b64);
        tmp_args_element_value_63 = par_crl_b64;
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 294;
        tmp_args_element_value_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_69, tmp_args_element_value_63);
        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_args_element_value_61);

            exception_lineno = 294;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_67, call_args);
        }

        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_element_value_61);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8a2cb7b3ec31aced24f93299e72f30e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8a2cb7b3ec31aced24f93299e72f30e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c8a2cb7b3ec31aced24f93299e72f30e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8a2cb7b3ec31aced24f93299e72f30e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8a2cb7b3ec31aced24f93299e72f30e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8a2cb7b3ec31aced24f93299e72f30e,
        type_description_1,
        par_self,
        par_curve_name,
        par_hsh,
        par_ai_spki,
        par_ai_sign,
        par_cert_serial,
        par_prv_hex,
        par_cr_sign_hex,
        par_cr_b64,
        par_c_sign_hex,
        par_c_b64,
        par_crl_sign_hex,
        par_crl_b64,
        var_prv_raw,
        var_prv,
        var_curve,
        var_pub,
        var_pub_raw,
        var_subj,
        var_spki,
        var_cri,
        var_sign,
        var_cr,
        var_tbs,
        var_cert,
        var_crl
    );


    // Release cached frame if used for exception.
    if (frame_c8a2cb7b3ec31aced24f93299e72f30e == cache_frame_c8a2cb7b3ec31aced24f93299e72f30e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c8a2cb7b3ec31aced24f93299e72f30e);
        cache_frame_c8a2cb7b3ec31aced24f93299e72f30e = NULL;
    }

    assertFrameObject(frame_c8a2cb7b3ec31aced24f93299e72f30e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_prv_raw);
    Py_DECREF(var_prv_raw);
    var_prv_raw = NULL;
    CHECK_OBJECT(var_prv);
    Py_DECREF(var_prv);
    var_prv = NULL;
    CHECK_OBJECT(var_curve);
    Py_DECREF(var_curve);
    var_curve = NULL;
    CHECK_OBJECT(var_pub);
    Py_DECREF(var_pub);
    var_pub = NULL;
    CHECK_OBJECT(var_pub_raw);
    Py_DECREF(var_pub_raw);
    var_pub_raw = NULL;
    CHECK_OBJECT(var_subj);
    Py_DECREF(var_subj);
    var_subj = NULL;
    CHECK_OBJECT(var_spki);
    Py_DECREF(var_spki);
    var_spki = NULL;
    CHECK_OBJECT(var_cri);
    Py_DECREF(var_cri);
    var_cri = NULL;
    CHECK_OBJECT(var_sign);
    Py_DECREF(var_sign);
    var_sign = NULL;
    CHECK_OBJECT(var_cr);
    Py_DECREF(var_cr);
    var_cr = NULL;
    CHECK_OBJECT(var_tbs);
    Py_DECREF(var_tbs);
    var_tbs = NULL;
    CHECK_OBJECT(var_cert);
    Py_DECREF(var_cert);
    var_cert = NULL;
    CHECK_OBJECT(var_crl);
    Py_DECREF(var_crl);
    var_crl = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_prv_raw);
    var_prv_raw = NULL;
    Py_XDECREF(var_prv);
    var_prv = NULL;
    Py_XDECREF(var_curve);
    var_curve = NULL;
    Py_XDECREF(var_pub);
    var_pub = NULL;
    Py_XDECREF(var_pub_raw);
    var_pub_raw = NULL;
    Py_XDECREF(var_subj);
    var_subj = NULL;
    Py_XDECREF(var_spki);
    var_spki = NULL;
    Py_XDECREF(var_cri);
    var_cri = NULL;
    Py_XDECREF(var_sign);
    var_sign = NULL;
    Py_XDECREF(var_cr);
    var_cr = NULL;
    Py_XDECREF(var_tbs);
    var_tbs = NULL;
    Py_XDECREF(var_cert);
    var_cert = NULL;
    Py_XDECREF(var_crl);
    var_crl = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_curve_name);
    Py_DECREF(par_curve_name);
    CHECK_OBJECT(par_hsh);
    Py_DECREF(par_hsh);
    CHECK_OBJECT(par_ai_spki);
    Py_DECREF(par_ai_spki);
    CHECK_OBJECT(par_ai_sign);
    Py_DECREF(par_ai_sign);
    CHECK_OBJECT(par_cert_serial);
    Py_DECREF(par_cert_serial);
    CHECK_OBJECT(par_prv_hex);
    Py_DECREF(par_prv_hex);
    CHECK_OBJECT(par_cr_sign_hex);
    Py_DECREF(par_cr_sign_hex);
    CHECK_OBJECT(par_cr_b64);
    Py_DECREF(par_cr_b64);
    CHECK_OBJECT(par_c_sign_hex);
    Py_DECREF(par_c_sign_hex);
    CHECK_OBJECT(par_c_b64);
    Py_DECREF(par_c_b64);
    CHECK_OBJECT(par_crl_sign_hex);
    Py_DECREF(par_crl_sign_hex);
    CHECK_OBJECT(par_crl_b64);
    Py_DECREF(par_crl_b64);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_curve_name);
    Py_DECREF(par_curve_name);
    CHECK_OBJECT(par_hsh);
    Py_DECREF(par_hsh);
    CHECK_OBJECT(par_ai_spki);
    Py_DECREF(par_ai_spki);
    CHECK_OBJECT(par_ai_sign);
    Py_DECREF(par_ai_sign);
    CHECK_OBJECT(par_cert_serial);
    Py_DECREF(par_cert_serial);
    CHECK_OBJECT(par_prv_hex);
    Py_DECREF(par_prv_hex);
    CHECK_OBJECT(par_cr_sign_hex);
    Py_DECREF(par_cr_sign_hex);
    CHECK_OBJECT(par_cr_b64);
    Py_DECREF(par_cr_b64);
    CHECK_OBJECT(par_c_sign_hex);
    Py_DECREF(par_c_sign_hex);
    CHECK_OBJECT(par_c_b64);
    Py_DECREF(par_c_b64);
    CHECK_OBJECT(par_crl_sign_hex);
    Py_DECREF(par_crl_sign_hex);
    CHECK_OBJECT(par_crl_b64);
    Py_DECREF(par_crl_b64);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygost$test_x509$$$function__5_test_256_test_paramset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_96526387de3efbb34ea51a25ee4c1e24;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96526387de3efbb34ea51a25ee4c1e24 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_96526387de3efbb34ea51a25ee4c1e24)) {
        Py_XDECREF(cache_frame_96526387de3efbb34ea51a25ee4c1e24);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96526387de3efbb34ea51a25ee4c1e24 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96526387de3efbb34ea51a25ee4c1e24 = MAKE_FUNCTION_FRAME(codeobj_96526387de3efbb34ea51a25ee4c1e24, module_pygost$test_x509, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_96526387de3efbb34ea51a25ee4c1e24->m_type_description == NULL);
    frame_96526387de3efbb34ea51a25ee4c1e24 = cache_frame_96526387de3efbb34ea51a25ee4c1e24;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_96526387de3efbb34ea51a25ee4c1e24);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_96526387de3efbb34ea51a25ee4c1e24) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[102]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[103];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 299;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[52];
        tmp_tuple_element_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_4 = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_3;
            PyTuple_SET_ITEM(tmp_args_element_value_4, 0, tmp_tuple_element_1);
            tmp_tuple_element_3 = mod_consts[105];
            tmp_tuple_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_3;
                PyObject *tmp_args_element_value_5;
                PyObject *tmp_called_value_4;
                PyObject *tmp_args_element_value_6;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_tuple_element_5;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_3);
                tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[106]);

                if (unlikely(tmp_called_value_3 == NULL)) {
                    tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
                }

                if (tmp_called_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 302;
                    type_description_1 = "o";
                    goto tuple_build_exception_3;
                }
                tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[107]);

                if (unlikely(tmp_called_value_4 == NULL)) {
                    tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                }

                if (tmp_called_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 303;
                    type_description_1 = "o";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_5 = mod_consts[108];
                tmp_tuple_element_4 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_tuple_element_5 == NULL)) {
                    tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
                }

                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 304;
                    type_description_1 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM0(tmp_tuple_element_4, 1, tmp_tuple_element_5);
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_args_element_value_6 = PyTuple_New(2);
                {
                    PyObject *tmp_tuple_element_6;
                    PyTuple_SET_ITEM(tmp_args_element_value_6, 0, tmp_tuple_element_4);
                    tmp_tuple_element_6 = mod_consts[110];
                    tmp_tuple_element_4 = PyTuple_New(2);
                    PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_6);
                    tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[111]);

                    if (unlikely(tmp_tuple_element_6 == NULL)) {
                        tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
                    }

                    if (tmp_tuple_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 305;
                        type_description_1 = "o";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM0(tmp_tuple_element_4, 1, tmp_tuple_element_6);
                    goto tuple_build_noexception_3;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_6:;
                    Py_DECREF(tmp_tuple_element_4);
                    goto tuple_build_exception_5;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_3:;
                    PyTuple_SET_ITEM(tmp_args_element_value_6, 1, tmp_tuple_element_4);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_args_element_value_6);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                frame_96526387de3efbb34ea51a25ee4c1e24->m_frame.f_lineno = 303;
                tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
                Py_DECREF(tmp_args_element_value_6);
                if (tmp_args_element_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 303;
                    type_description_1 = "o";
                    goto tuple_build_exception_3;
                }
                frame_96526387de3efbb34ea51a25ee4c1e24->m_frame.f_lineno = 302;
                tmp_tuple_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
                Py_DECREF(tmp_args_element_value_5);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 302;
                    type_description_1 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            PyTuple_SET_ITEM(tmp_args_element_value_4, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        frame_96526387de3efbb34ea51a25ee4c1e24->m_frame.f_lineno = 300;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 309;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = mod_consts[52];
        tmp_tuple_element_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_7, 0, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_tuple_element_7, 1, tmp_tuple_element_8);
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_tuple_element_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_args_element_value_8 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_element_value_8, 0, tmp_tuple_element_7);
        frame_96526387de3efbb34ea51a25ee4c1e24->m_frame.f_lineno = 309;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 309;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[113];
        tmp_args_element_value_10 = mod_consts[114];
        tmp_args_element_value_11 = mod_consts[115];
        tmp_args_element_value_12 = mod_consts[116];
        tmp_args_element_value_13 = mod_consts[117];
        tmp_args_element_value_14 = mod_consts[118];
        tmp_args_element_value_15 = mod_consts[119];
        tmp_args_element_value_16 = mod_consts[120];
        frame_96526387de3efbb34ea51a25ee4c1e24->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_7, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS12(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_96526387de3efbb34ea51a25ee4c1e24);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_96526387de3efbb34ea51a25ee4c1e24);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96526387de3efbb34ea51a25ee4c1e24, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96526387de3efbb34ea51a25ee4c1e24->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96526387de3efbb34ea51a25ee4c1e24, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96526387de3efbb34ea51a25ee4c1e24,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_96526387de3efbb34ea51a25ee4c1e24 == cache_frame_96526387de3efbb34ea51a25ee4c1e24) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_96526387de3efbb34ea51a25ee4c1e24);
        cache_frame_96526387de3efbb34ea51a25ee4c1e24 = NULL;
    }

    assertFrameObject(frame_96526387de3efbb34ea51a25ee4c1e24);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygost$test_x509$$$function__6_test_256a_paramset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c9c87116f9324d8abb937679321482a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c9c87116f9324d8abb937679321482a7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c9c87116f9324d8abb937679321482a7)) {
        Py_XDECREF(cache_frame_c9c87116f9324d8abb937679321482a7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c9c87116f9324d8abb937679321482a7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c9c87116f9324d8abb937679321482a7 = MAKE_FUNCTION_FRAME(codeobj_c9c87116f9324d8abb937679321482a7, module_pygost$test_x509, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c9c87116f9324d8abb937679321482a7->m_type_description == NULL);
    frame_c9c87116f9324d8abb937679321482a7 = cache_frame_c9c87116f9324d8abb937679321482a7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c9c87116f9324d8abb937679321482a7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c9c87116f9324d8abb937679321482a7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[102]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[121];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 345;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[52];
        tmp_tuple_element_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_4 = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_3;
            PyTuple_SET_ITEM(tmp_args_element_value_4, 0, tmp_tuple_element_1);
            tmp_tuple_element_3 = mod_consts[105];
            tmp_tuple_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_3;
                PyObject *tmp_args_element_value_5;
                PyObject *tmp_called_value_4;
                PyObject *tmp_args_element_value_6;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_tuple_element_5;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_3);
                tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[106]);

                if (unlikely(tmp_called_value_3 == NULL)) {
                    tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
                }

                if (tmp_called_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 347;
                    type_description_1 = "o";
                    goto tuple_build_exception_3;
                }
                tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[107]);

                if (unlikely(tmp_called_value_4 == NULL)) {
                    tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                }

                if (tmp_called_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 348;
                    type_description_1 = "o";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_5 = mod_consts[108];
                tmp_tuple_element_4 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[122]);

                if (unlikely(tmp_tuple_element_5 == NULL)) {
                    tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                }

                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 349;
                    type_description_1 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM0(tmp_tuple_element_4, 1, tmp_tuple_element_5);
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_args_element_value_6 = PyTuple_New(1);
                PyTuple_SET_ITEM(tmp_args_element_value_6, 0, tmp_tuple_element_4);
                frame_c9c87116f9324d8abb937679321482a7->m_frame.f_lineno = 348;
                tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
                Py_DECREF(tmp_args_element_value_6);
                if (tmp_args_element_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 348;
                    type_description_1 = "o";
                    goto tuple_build_exception_3;
                }
                frame_c9c87116f9324d8abb937679321482a7->m_frame.f_lineno = 347;
                tmp_tuple_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
                Py_DECREF(tmp_args_element_value_5);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 347;
                    type_description_1 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            PyTuple_SET_ITEM(tmp_args_element_value_4, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        frame_c9c87116f9324d8abb937679321482a7->m_frame.f_lineno = 345;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 345;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 353;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = mod_consts[52];
        tmp_tuple_element_6 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_6, 0, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "o";
            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_tuple_element_6, 1, tmp_tuple_element_7);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_tuple_element_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_8 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_element_value_8, 0, tmp_tuple_element_6);
        frame_c9c87116f9324d8abb937679321482a7->m_frame.f_lineno = 353;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 353;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[113];
        tmp_args_element_value_10 = mod_consts[114];
        tmp_args_element_value_11 = mod_consts[123];
        tmp_args_element_value_12 = mod_consts[124];
        tmp_args_element_value_13 = mod_consts[125];
        tmp_args_element_value_14 = mod_consts[126];
        tmp_args_element_value_15 = mod_consts[127];
        tmp_args_element_value_16 = mod_consts[128];
        frame_c9c87116f9324d8abb937679321482a7->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_7, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS12(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9c87116f9324d8abb937679321482a7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9c87116f9324d8abb937679321482a7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c9c87116f9324d8abb937679321482a7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c9c87116f9324d8abb937679321482a7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9c87116f9324d8abb937679321482a7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c9c87116f9324d8abb937679321482a7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c9c87116f9324d8abb937679321482a7 == cache_frame_c9c87116f9324d8abb937679321482a7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c9c87116f9324d8abb937679321482a7);
        cache_frame_c9c87116f9324d8abb937679321482a7 = NULL;
    }

    assertFrameObject(frame_c9c87116f9324d8abb937679321482a7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pygost$test_x509$$$function__7_test_512_test_paramset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_425577575b34a603790ba078f71318e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_425577575b34a603790ba078f71318e5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_425577575b34a603790ba078f71318e5)) {
        Py_XDECREF(cache_frame_425577575b34a603790ba078f71318e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_425577575b34a603790ba078f71318e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_425577575b34a603790ba078f71318e5 = MAKE_FUNCTION_FRAME(codeobj_425577575b34a603790ba078f71318e5, module_pygost$test_x509, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_425577575b34a603790ba078f71318e5->m_type_description == NULL);
    frame_425577575b34a603790ba078f71318e5 = cache_frame_425577575b34a603790ba078f71318e5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_425577575b34a603790ba078f71318e5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_425577575b34a603790ba078f71318e5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[102]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[129];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 388;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 389;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[52];
        tmp_tuple_element_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_tuple_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_4 = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_3;
            PyTuple_SET_ITEM(tmp_args_element_value_4, 0, tmp_tuple_element_1);
            tmp_tuple_element_3 = mod_consts[105];
            tmp_tuple_element_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_3;
                PyObject *tmp_args_element_value_5;
                PyObject *tmp_called_value_4;
                PyObject *tmp_args_element_value_6;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_tuple_element_5;
                PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_3);
                tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[106]);

                if (unlikely(tmp_called_value_3 == NULL)) {
                    tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
                }

                if (tmp_called_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 391;
                    type_description_1 = "o";
                    goto tuple_build_exception_3;
                }
                tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[107]);

                if (unlikely(tmp_called_value_4 == NULL)) {
                    tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                }

                if (tmp_called_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 392;
                    type_description_1 = "o";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_5 = mod_consts[108];
                tmp_tuple_element_4 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[130]);

                if (unlikely(tmp_tuple_element_5 == NULL)) {
                    tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
                }

                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 393;
                    type_description_1 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM0(tmp_tuple_element_4, 1, tmp_tuple_element_5);
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_args_element_value_6 = PyTuple_New(1);
                PyTuple_SET_ITEM(tmp_args_element_value_6, 0, tmp_tuple_element_4);
                frame_425577575b34a603790ba078f71318e5->m_frame.f_lineno = 392;
                tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
                Py_DECREF(tmp_args_element_value_6);
                if (tmp_args_element_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 392;
                    type_description_1 = "o";
                    goto tuple_build_exception_3;
                }
                frame_425577575b34a603790ba078f71318e5->m_frame.f_lineno = 391;
                tmp_tuple_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
                Py_DECREF(tmp_args_element_value_5);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 391;
                    type_description_1 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            PyTuple_SET_ITEM(tmp_args_element_value_4, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        frame_425577575b34a603790ba078f71318e5->m_frame.f_lineno = 389;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 389;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = mod_consts[52];
        tmp_tuple_element_6 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_6, 0, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "o";
            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_tuple_element_6, 1, tmp_tuple_element_7);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_tuple_element_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_8 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_element_value_8, 0, tmp_tuple_element_6);
        frame_425577575b34a603790ba078f71318e5->m_frame.f_lineno = 397;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[132];
        tmp_args_element_value_10 = mod_consts[133];
        tmp_args_element_value_11 = mod_consts[134];
        tmp_args_element_value_12 = mod_consts[135];
        tmp_args_element_value_13 = mod_consts[136];
        tmp_args_element_value_14 = mod_consts[137];
        tmp_args_element_value_15 = mod_consts[138];
        tmp_args_element_value_16 = mod_consts[139];
        frame_425577575b34a603790ba078f71318e5->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_7, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS12(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_425577575b34a603790ba078f71318e5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_425577575b34a603790ba078f71318e5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_425577575b34a603790ba078f71318e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_425577575b34a603790ba078f71318e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_425577575b34a603790ba078f71318e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_425577575b34a603790ba078f71318e5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_425577575b34a603790ba078f71318e5 == cache_frame_425577575b34a603790ba078f71318e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_425577575b34a603790ba078f71318e5);
        cache_frame_425577575b34a603790ba078f71318e5 = NULL;
    }

    assertFrameObject(frame_425577575b34a603790ba078f71318e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__1_process_cert() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygost$test_x509$$$function__1_process_cert,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[226],
#endif
        codeobj_04f50cebeffc5cecc4cecbf16cd16c91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygost$test_x509,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__2_test_256() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygost$test_x509$$$function__2_test_256,
        mod_consts[227],
#if PYTHON_VERSION >= 0x300
        mod_consts[228],
#endif
        codeobj_4f72ad872df8fc24168b44e6c310da41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygost$test_x509,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__3_test_512() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygost$test_x509$$$function__3_test_512,
        mod_consts[229],
#if PYTHON_VERSION >= 0x300
        mod_consts[230],
#endif
        codeobj_dbd9be602dc1526ba15da92ddbba253a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygost$test_x509,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__4__test_vector() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygost$test_x509$$$function__4__test_vector,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[234],
#endif
        codeobj_c8a2cb7b3ec31aced24f93299e72f30e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygost$test_x509,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__5_test_256_test_paramset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygost$test_x509$$$function__5_test_256_test_paramset,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        mod_consts[236],
#endif
        codeobj_96526387de3efbb34ea51a25ee4c1e24,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygost$test_x509,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__6_test_256a_paramset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygost$test_x509$$$function__6_test_256a_paramset,
        mod_consts[237],
#if PYTHON_VERSION >= 0x300
        mod_consts[238],
#endif
        codeobj_c9c87116f9324d8abb937679321482a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygost$test_x509,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygost$test_x509$$$function__7_test_512_test_paramset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygost$test_x509$$$function__7_test_512_test_paramset,
        mod_consts[239],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_425577575b34a603790ba078f71318e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygost$test_x509,
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

function_impl_code functable_pygost$test_x509[] = {
    impl_pygost$test_x509$$$function__1_process_cert,
    impl_pygost$test_x509$$$function__2_test_256,
    impl_pygost$test_x509$$$function__3_test_512,
    impl_pygost$test_x509$$$function__4__test_vector,
    impl_pygost$test_x509$$$function__5_test_256_test_paramset,
    impl_pygost$test_x509$$$function__6_test_256a_paramset,
    impl_pygost$test_x509$$$function__7_test_512_test_paramset,
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

    function_impl_code *current = functable_pygost$test_x509;
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

    if (offset > sizeof(functable_pygost$test_x509) || offset < 0) {
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
        functable_pygost$test_x509[offset],
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
        module_pygost$test_x509,
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
PyObject *modulecode_pygost$test_x509(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pygost.test_x509");

    // Store the module for future use.
    module_pygost$test_x509 = module;

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
        PRINT_STRING("pygost.test_x509: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pygost.test_x509: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pygost.test_x509: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpygost$test_x509\n");

    moduledict_pygost$test_x509 = MODULE_DICT(module_pygost$test_x509);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pygost$test_x509,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pygost$test_x509,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[247]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pygost$test_x509,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pygost$test_x509,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pygost$test_x509,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pygost$test_x509);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pygost$test_x509, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pygost$test_x509, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pygost$test_x509, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pygost$test_x509);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_8802f9ed5ef74c6bda1f5b5c2e577f05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_pygost$test_x509$$$class__1_TestCertificate_83 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0319855e771b8cf00120fc9540112597_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0319855e771b8cf00120fc9540112597_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_pygost$test_x509$$$class__2_TestRFC4491bis_180 = NULL;
    struct Nuitka_FrameObject *frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[141];
        UPDATE_STRING_DICT0(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_8802f9ed5ef74c6bda1f5b5c2e577f05 = MAKE_MODULE_FRAME(codeobj_8802f9ed5ef74c6bda1f5b5c2e577f05, module_pygost$test_x509);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_8802f9ed5ef74c6bda1f5b5c2e577f05);
    assert(Py_REFCNT(frame_8802f9ed5ef74c6bda1f5b5c2e577f05) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[141];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[144], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[145], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[147];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[148];
        tmp_level_value_1 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 17;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[27],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[150];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[151];
        tmp_level_value_2 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 18;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[152],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[152]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[150];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[153];
        tmp_level_value_3 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 19;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[154],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[154]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[155];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[156];
        tmp_level_value_4 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 21;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[12],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[155];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[157];
        tmp_level_value_5 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 22;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[13],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[155];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[158];
        tmp_level_value_6 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 23;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[38],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[38]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[155];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[159];
        tmp_level_value_7 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 24;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[19],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[155];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[160];
        tmp_level_value_8 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 25;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[20],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[155];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[161];
        tmp_level_value_9 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 26;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[22],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[162];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[163];
        tmp_level_value_10 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 27;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[33],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[33]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[164];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[165];
        tmp_level_value_11 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 28;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[37],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[37]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[166];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[167];
        tmp_level_value_12 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 29;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[29],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_15);
    }
    {
        nuitka_bool tmp_assign_source_16;
        tmp_assign_source_16 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[168];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[169];
        tmp_level_value_13 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 33;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[106],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[106]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[168];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[170];
        tmp_level_value_14 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 34;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[53],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[53]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[168];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[171];
        tmp_level_value_15 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 35;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[89],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[89]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[168];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[172];
        tmp_level_value_16 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 36;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[81],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[81]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[168];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[173];
        tmp_level_value_17 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 37;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[56],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[168];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[174];
        tmp_level_value_18 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 38;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[6],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[168];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[175];
        tmp_level_value_19 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 39;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[49],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[168];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[176];
        tmp_level_value_20 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 40;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[77],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[77]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[177];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[178];
        tmp_level_value_21 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 42;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[46],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[177];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[179];
        tmp_level_value_22 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 43;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[87],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[87]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[177];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[180];
        tmp_level_value_23 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 44;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[109],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[109]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[177];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[181];
        tmp_level_value_24 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 45;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[5],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[177];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[182];
        tmp_level_value_25 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 46;
        tmp_import_name_from_25 = IMPORT_MODULE5(tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[122],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[122]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[177];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[183];
        tmp_level_value_26 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 47;
        tmp_import_name_from_26 = IMPORT_MODULE5(tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[7],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[7]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[177];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = mod_consts[184];
        tmp_level_value_27 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 48;
        tmp_import_name_from_27 = IMPORT_MODULE5(tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_import_name_from_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[130],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[130]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_value_28;
        PyObject *tmp_globals_arg_value_28;
        PyObject *tmp_locals_arg_value_28;
        PyObject *tmp_fromlist_value_28;
        PyObject *tmp_level_value_28;
        tmp_name_value_28 = mod_consts[177];
        tmp_globals_arg_value_28 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_28 = Py_None;
        tmp_fromlist_value_28 = mod_consts[185];
        tmp_level_value_28 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 49;
        tmp_import_name_from_28 = IMPORT_MODULE5(tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
        if (tmp_import_name_from_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[111],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_value_29;
        PyObject *tmp_globals_arg_value_29;
        PyObject *tmp_locals_arg_value_29;
        PyObject *tmp_fromlist_value_29;
        PyObject *tmp_level_value_29;
        tmp_name_value_29 = mod_consts[177];
        tmp_globals_arg_value_29 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_29 = Py_None;
        tmp_fromlist_value_29 = mod_consts[186];
        tmp_level_value_29 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 50;
        tmp_import_name_from_29 = IMPORT_MODULE5(tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
        if (tmp_import_name_from_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[112],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[112]);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_value_30;
        PyObject *tmp_globals_arg_value_30;
        PyObject *tmp_locals_arg_value_30;
        PyObject *tmp_fromlist_value_30;
        PyObject *tmp_level_value_30;
        tmp_name_value_30 = mod_consts[177];
        tmp_globals_arg_value_30 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_30 = Py_None;
        tmp_fromlist_value_30 = mod_consts[187];
        tmp_level_value_30 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 51;
        tmp_import_name_from_30 = IMPORT_MODULE5(tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
        if (tmp_import_name_from_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[131],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[131]);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_value_31;
        PyObject *tmp_globals_arg_value_31;
        PyObject *tmp_locals_arg_value_31;
        PyObject *tmp_fromlist_value_31;
        PyObject *tmp_level_value_31;
        tmp_name_value_31 = mod_consts[188];
        tmp_globals_arg_value_31 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_31 = Py_None;
        tmp_fromlist_value_31 = mod_consts[189];
        tmp_level_value_31 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 52;
        tmp_import_name_from_31 = IMPORT_MODULE5(tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
        if (tmp_import_name_from_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[61],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_value_32;
        PyObject *tmp_globals_arg_value_32;
        PyObject *tmp_locals_arg_value_32;
        PyObject *tmp_fromlist_value_32;
        PyObject *tmp_level_value_32;
        tmp_name_value_32 = mod_consts[188];
        tmp_globals_arg_value_32 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_32 = Py_None;
        tmp_fromlist_value_32 = mod_consts[190];
        tmp_level_value_32 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 53;
        tmp_import_name_from_32 = IMPORT_MODULE5(tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
        if (tmp_import_name_from_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[62],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_33;
        PyObject *tmp_name_value_33;
        PyObject *tmp_globals_arg_value_33;
        PyObject *tmp_locals_arg_value_33;
        PyObject *tmp_fromlist_value_33;
        PyObject *tmp_level_value_33;
        tmp_name_value_33 = mod_consts[188];
        tmp_globals_arg_value_33 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_33 = Py_None;
        tmp_fromlist_value_33 = mod_consts[191];
        tmp_level_value_33 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 54;
        tmp_import_name_from_33 = IMPORT_MODULE5(tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
        if (tmp_import_name_from_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[54],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[54]);
        }

        Py_DECREF(tmp_import_name_from_33);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_34;
        PyObject *tmp_name_value_34;
        PyObject *tmp_globals_arg_value_34;
        PyObject *tmp_locals_arg_value_34;
        PyObject *tmp_fromlist_value_34;
        PyObject *tmp_level_value_34;
        tmp_name_value_34 = mod_consts[192];
        tmp_globals_arg_value_34 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_34 = Py_None;
        tmp_fromlist_value_34 = mod_consts[193];
        tmp_level_value_34 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 55;
        tmp_import_name_from_34 = IMPORT_MODULE5(tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
        if (tmp_import_name_from_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[104],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[104]);
        }

        Py_DECREF(tmp_import_name_from_34);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_value_35;
        PyObject *tmp_globals_arg_value_35;
        PyObject *tmp_locals_arg_value_35;
        PyObject *tmp_fromlist_value_35;
        PyObject *tmp_level_value_35;
        tmp_name_value_35 = mod_consts[192];
        tmp_globals_arg_value_35 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_35 = Py_None;
        tmp_fromlist_value_35 = mod_consts[194];
        tmp_level_value_35 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 56;
        tmp_import_name_from_35 = IMPORT_MODULE5(tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
        if (tmp_import_name_from_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[45],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_35);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_value_36;
        PyObject *tmp_globals_arg_value_36;
        PyObject *tmp_locals_arg_value_36;
        PyObject *tmp_fromlist_value_36;
        PyObject *tmp_level_value_36;
        tmp_name_value_36 = mod_consts[192];
        tmp_globals_arg_value_36 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_36 = Py_None;
        tmp_fromlist_value_36 = mod_consts[195];
        tmp_level_value_36 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 57;
        tmp_import_name_from_36 = IMPORT_MODULE5(tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
        if (tmp_import_name_from_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[43],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_36, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_37;
        PyObject *tmp_name_value_37;
        PyObject *tmp_globals_arg_value_37;
        PyObject *tmp_locals_arg_value_37;
        PyObject *tmp_fromlist_value_37;
        PyObject *tmp_level_value_37;
        tmp_name_value_37 = mod_consts[192];
        tmp_globals_arg_value_37 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_37 = Py_None;
        tmp_fromlist_value_37 = mod_consts[196];
        tmp_level_value_37 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 58;
        tmp_import_name_from_37 = IMPORT_MODULE5(tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
        if (tmp_import_name_from_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[48],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_37, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_37);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_38;
        PyObject *tmp_name_value_38;
        PyObject *tmp_globals_arg_value_38;
        PyObject *tmp_locals_arg_value_38;
        PyObject *tmp_fromlist_value_38;
        PyObject *tmp_level_value_38;
        tmp_name_value_38 = mod_consts[192];
        tmp_globals_arg_value_38 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_38 = Py_None;
        tmp_fromlist_value_38 = mod_consts[197];
        tmp_level_value_38 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 59;
        tmp_import_name_from_38 = IMPORT_MODULE5(tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
        if (tmp_import_name_from_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[92],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_38, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_38);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_39;
        PyObject *tmp_name_value_39;
        PyObject *tmp_globals_arg_value_39;
        PyObject *tmp_locals_arg_value_39;
        PyObject *tmp_fromlist_value_39;
        PyObject *tmp_level_value_39;
        tmp_name_value_39 = mod_consts[192];
        tmp_globals_arg_value_39 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_39 = Py_None;
        tmp_fromlist_value_39 = mod_consts[198];
        tmp_level_value_39 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 60;
        tmp_import_name_from_39 = IMPORT_MODULE5(tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
        if (tmp_import_name_from_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[0],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_39, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_39);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_40;
        PyObject *tmp_name_value_40;
        PyObject *tmp_globals_arg_value_40;
        PyObject *tmp_locals_arg_value_40;
        PyObject *tmp_fromlist_value_40;
        PyObject *tmp_level_value_40;
        tmp_name_value_40 = mod_consts[192];
        tmp_globals_arg_value_40 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_40 = Py_None;
        tmp_fromlist_value_40 = mod_consts[199];
        tmp_level_value_40 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 61;
        tmp_import_name_from_40 = IMPORT_MODULE5(tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
        if (tmp_import_name_from_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[100],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_40, mod_consts[100]);
        }

        Py_DECREF(tmp_import_name_from_40);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_41;
        PyObject *tmp_name_value_41;
        PyObject *tmp_globals_arg_value_41;
        PyObject *tmp_locals_arg_value_41;
        PyObject *tmp_fromlist_value_41;
        PyObject *tmp_level_value_41;
        tmp_name_value_41 = mod_consts[192];
        tmp_globals_arg_value_41 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_41 = Py_None;
        tmp_fromlist_value_41 = mod_consts[200];
        tmp_level_value_41 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 62;
        tmp_import_name_from_41 = IMPORT_MODULE5(tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
        if (tmp_import_name_from_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[70],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_41, mod_consts[70]);
        }

        Py_DECREF(tmp_import_name_from_41);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_42;
        PyObject *tmp_name_value_42;
        PyObject *tmp_globals_arg_value_42;
        PyObject *tmp_locals_arg_value_42;
        PyObject *tmp_fromlist_value_42;
        PyObject *tmp_level_value_42;
        tmp_name_value_42 = mod_consts[192];
        tmp_globals_arg_value_42 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_42 = Py_None;
        tmp_fromlist_value_42 = mod_consts[201];
        tmp_level_value_42 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 63;
        tmp_import_name_from_42 = IMPORT_MODULE5(tmp_name_value_42, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
        if (tmp_import_name_from_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_42,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[85],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_42, mod_consts[85]);
        }

        Py_DECREF(tmp_import_name_from_42);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_43;
        PyObject *tmp_name_value_43;
        PyObject *tmp_globals_arg_value_43;
        PyObject *tmp_locals_arg_value_43;
        PyObject *tmp_fromlist_value_43;
        PyObject *tmp_level_value_43;
        tmp_name_value_43 = mod_consts[192];
        tmp_globals_arg_value_43 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_43 = Py_None;
        tmp_fromlist_value_43 = mod_consts[202];
        tmp_level_value_43 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 64;
        tmp_import_name_from_43 = IMPORT_MODULE5(tmp_name_value_43, tmp_globals_arg_value_43, tmp_locals_arg_value_43, tmp_fromlist_value_43, tmp_level_value_43);
        if (tmp_import_name_from_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_43,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[84],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_43, mod_consts[84]);
        }

        Py_DECREF(tmp_import_name_from_43);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_44;
        PyObject *tmp_name_value_44;
        PyObject *tmp_globals_arg_value_44;
        PyObject *tmp_locals_arg_value_44;
        PyObject *tmp_fromlist_value_44;
        PyObject *tmp_level_value_44;
        tmp_name_value_44 = mod_consts[192];
        tmp_globals_arg_value_44 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_44 = Py_None;
        tmp_fromlist_value_44 = mod_consts[203];
        tmp_level_value_44 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 65;
        tmp_import_name_from_44 = IMPORT_MODULE5(tmp_name_value_44, tmp_globals_arg_value_44, tmp_locals_arg_value_44, tmp_fromlist_value_44, tmp_level_value_44);
        if (tmp_import_name_from_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_44,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[107],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_44, mod_consts[107]);
        }

        Py_DECREF(tmp_import_name_from_44);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_45;
        PyObject *tmp_name_value_45;
        PyObject *tmp_globals_arg_value_45;
        PyObject *tmp_locals_arg_value_45;
        PyObject *tmp_fromlist_value_45;
        PyObject *tmp_level_value_45;
        tmp_name_value_45 = mod_consts[192];
        tmp_globals_arg_value_45 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_45 = Py_None;
        tmp_fromlist_value_45 = mod_consts[204];
        tmp_level_value_45 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 66;
        tmp_import_name_from_45 = IMPORT_MODULE5(tmp_name_value_45, tmp_globals_arg_value_45, tmp_locals_arg_value_45, tmp_fromlist_value_45, tmp_level_value_45);
        if (tmp_import_name_from_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_45,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[39],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_45, mod_consts[39]);
        }

        Py_DECREF(tmp_import_name_from_45);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_46;
        PyObject *tmp_name_value_46;
        PyObject *tmp_globals_arg_value_46;
        PyObject *tmp_locals_arg_value_46;
        PyObject *tmp_fromlist_value_46;
        PyObject *tmp_level_value_46;
        tmp_name_value_46 = mod_consts[192];
        tmp_globals_arg_value_46 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_46 = Py_None;
        tmp_fromlist_value_46 = mod_consts[205];
        tmp_level_value_46 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 67;
        tmp_import_name_from_46 = IMPORT_MODULE5(tmp_name_value_46, tmp_globals_arg_value_46, tmp_locals_arg_value_46, tmp_fromlist_value_46, tmp_level_value_46);
        if (tmp_import_name_from_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_46,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[41],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_46, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_46);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_47;
        PyObject *tmp_name_value_47;
        PyObject *tmp_globals_arg_value_47;
        PyObject *tmp_locals_arg_value_47;
        PyObject *tmp_fromlist_value_47;
        PyObject *tmp_level_value_47;
        tmp_name_value_47 = mod_consts[192];
        tmp_globals_arg_value_47 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_47 = Py_None;
        tmp_fromlist_value_47 = mod_consts[206];
        tmp_level_value_47 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 68;
        tmp_import_name_from_47 = IMPORT_MODULE5(tmp_name_value_47, tmp_globals_arg_value_47, tmp_locals_arg_value_47, tmp_fromlist_value_47, tmp_level_value_47);
        if (tmp_import_name_from_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_47,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[42],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME(tmp_import_name_from_47, mod_consts[42]);
        }

        Py_DECREF(tmp_import_name_from_47);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_48;
        PyObject *tmp_name_value_48;
        PyObject *tmp_globals_arg_value_48;
        PyObject *tmp_locals_arg_value_48;
        PyObject *tmp_fromlist_value_48;
        PyObject *tmp_level_value_48;
        tmp_name_value_48 = mod_consts[192];
        tmp_globals_arg_value_48 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_48 = Py_None;
        tmp_fromlist_value_48 = mod_consts[207];
        tmp_level_value_48 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 69;
        tmp_import_name_from_48 = IMPORT_MODULE5(tmp_name_value_48, tmp_globals_arg_value_48, tmp_locals_arg_value_48, tmp_fromlist_value_48, tmp_level_value_48);
        if (tmp_import_name_from_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_48,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[51],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_48, mod_consts[51]);
        }

        Py_DECREF(tmp_import_name_from_48);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_49;
        PyObject *tmp_name_value_49;
        PyObject *tmp_globals_arg_value_49;
        PyObject *tmp_locals_arg_value_49;
        PyObject *tmp_fromlist_value_49;
        PyObject *tmp_level_value_49;
        tmp_name_value_49 = mod_consts[192];
        tmp_globals_arg_value_49 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_49 = Py_None;
        tmp_fromlist_value_49 = mod_consts[208];
        tmp_level_value_49 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 70;
        tmp_import_name_from_49 = IMPORT_MODULE5(tmp_name_value_49, tmp_globals_arg_value_49, tmp_locals_arg_value_49, tmp_fromlist_value_49, tmp_level_value_49);
        if (tmp_import_name_from_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_49,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[66],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME(tmp_import_name_from_49, mod_consts[66]);
        }

        Py_DECREF(tmp_import_name_from_49);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_50;
        PyObject *tmp_name_value_50;
        PyObject *tmp_globals_arg_value_50;
        PyObject *tmp_locals_arg_value_50;
        PyObject *tmp_fromlist_value_50;
        PyObject *tmp_level_value_50;
        tmp_name_value_50 = mod_consts[192];
        tmp_globals_arg_value_50 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_50 = Py_None;
        tmp_fromlist_value_50 = mod_consts[209];
        tmp_level_value_50 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 71;
        tmp_import_name_from_50 = IMPORT_MODULE5(tmp_name_value_50, tmp_globals_arg_value_50, tmp_locals_arg_value_50, tmp_fromlist_value_50, tmp_level_value_50);
        if (tmp_import_name_from_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_50,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[94],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME(tmp_import_name_from_50, mod_consts[94]);
        }

        Py_DECREF(tmp_import_name_from_50);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_51;
        PyObject *tmp_name_value_51;
        PyObject *tmp_globals_arg_value_51;
        PyObject *tmp_locals_arg_value_51;
        PyObject *tmp_fromlist_value_51;
        PyObject *tmp_level_value_51;
        tmp_name_value_51 = mod_consts[192];
        tmp_globals_arg_value_51 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_51 = Py_None;
        tmp_fromlist_value_51 = mod_consts[210];
        tmp_level_value_51 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 72;
        tmp_import_name_from_51 = IMPORT_MODULE5(tmp_name_value_51, tmp_globals_arg_value_51, tmp_locals_arg_value_51, tmp_fromlist_value_51, tmp_level_value_51);
        if (tmp_import_name_from_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_51,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[75],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME(tmp_import_name_from_51, mod_consts[75]);
        }

        Py_DECREF(tmp_import_name_from_51);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_52;
        PyObject *tmp_name_value_52;
        PyObject *tmp_globals_arg_value_52;
        PyObject *tmp_locals_arg_value_52;
        PyObject *tmp_fromlist_value_52;
        PyObject *tmp_level_value_52;
        tmp_name_value_52 = mod_consts[192];
        tmp_globals_arg_value_52 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_52 = Py_None;
        tmp_fromlist_value_52 = mod_consts[211];
        tmp_level_value_52 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 73;
        tmp_import_name_from_52 = IMPORT_MODULE5(tmp_name_value_52, tmp_globals_arg_value_52, tmp_locals_arg_value_52, tmp_fromlist_value_52, tmp_level_value_52);
        if (tmp_import_name_from_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_52,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[73],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_52, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_52);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_53;
        PyObject *tmp_name_value_53;
        PyObject *tmp_globals_arg_value_53;
        PyObject *tmp_locals_arg_value_53;
        PyObject *tmp_fromlist_value_53;
        PyObject *tmp_level_value_53;
        tmp_name_value_53 = mod_consts[192];
        tmp_globals_arg_value_53 = (PyObject *)moduledict_pygost$test_x509;
        tmp_locals_arg_value_53 = Py_None;
        tmp_fromlist_value_53 = mod_consts[212];
        tmp_level_value_53 = mod_consts[149];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 74;
        tmp_import_name_from_53 = IMPORT_MODULE5(tmp_name_value_53, tmp_globals_arg_value_53, tmp_locals_arg_value_53, tmp_fromlist_value_53, tmp_level_value_53);
        if (tmp_import_name_from_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_53,
                (PyObject *)moduledict_pygost$test_x509,
                mod_consts[67],
                mod_consts[149]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_53, mod_consts[67]);
        }

        Py_DECREF(tmp_import_name_from_53);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_57);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_assign_source_58;
        tmp_assign_source_58 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_58;
    }
    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_8802f9ed5ef74c6bda1f5b5c2e577f05, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_8802f9ed5ef74c6bda1f5b5c2e577f05, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = Py_False;
        UPDATE_STRING_DICT0(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_59);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 31;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame) frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_2;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_try_except_1__unhandled_indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = Py_True;
        UPDATE_STRING_DICT0(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_60);
    }
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        tmp_assign_source_61 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_61, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_62 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[214];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[214];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[149];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_64 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_64;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[214];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[214];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 83;

        goto try_except_handler_3;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[215]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[215]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[216];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 83;
        tmp_assign_source_65 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[217]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[218];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[219];
        tmp_getattr_default_1 = mod_consts[220];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[219]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 83;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_66;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_3;
        }
        tmp_operand_value_2 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_operand_value_2 == NULL)) {
            tmp_operand_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[213]);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_3;
        }
        tmp_args_element_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_args_element_value_2 = mod_consts[221];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_called_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_3;
        }
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pygost$test_x509$$$class__1_TestCertificate_83 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[222];
        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__1_TestCertificate_83, mod_consts[223], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[224];
        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__1_TestCertificate_83, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[216];
        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__1_TestCertificate_83, mod_consts[225], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_5;
        }
        if (isFrameUnusable(cache_frame_0319855e771b8cf00120fc9540112597_2)) {
            Py_XDECREF(cache_frame_0319855e771b8cf00120fc9540112597_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0319855e771b8cf00120fc9540112597_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0319855e771b8cf00120fc9540112597_2 = MAKE_FUNCTION_FRAME(codeobj_0319855e771b8cf00120fc9540112597, module_pygost$test_x509, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0319855e771b8cf00120fc9540112597_2->m_type_description == NULL);
        frame_0319855e771b8cf00120fc9540112597_2 = cache_frame_0319855e771b8cf00120fc9540112597_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0319855e771b8cf00120fc9540112597_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0319855e771b8cf00120fc9540112597_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pygost$test_x509$$$function__1_process_cert();

        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__1_TestCertificate_83, mod_consts[31], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygost$test_x509$$$function__2_test_256();

        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__1_TestCertificate_83, mod_consts[227], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygost$test_x509$$$function__3_test_512();

        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__1_TestCertificate_83, mod_consts[229], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0319855e771b8cf00120fc9540112597_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0319855e771b8cf00120fc9540112597_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0319855e771b8cf00120fc9540112597_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0319855e771b8cf00120fc9540112597_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0319855e771b8cf00120fc9540112597_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0319855e771b8cf00120fc9540112597_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_0319855e771b8cf00120fc9540112597_2 == cache_frame_0319855e771b8cf00120fc9540112597_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0319855e771b8cf00120fc9540112597_2);
            cache_frame_0319855e771b8cf00120fc9540112597_2 = NULL;
        }

        assertFrameObject(frame_0319855e771b8cf00120fc9540112597_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__1_TestCertificate_83, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_5;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[216];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_pygost$test_x509$$$class__1_TestCertificate_83;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 83;
            tmp_assign_source_68 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_68;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_args_element_value_3 = outline_0_var___class__;
        Py_INCREF(tmp_args_element_value_3);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_pygost$test_x509$$$class__1_TestCertificate_83);
        locals_pygost$test_x509$$$class__1_TestCertificate_83 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pygost$test_x509$$$class__1_TestCertificate_83);
        locals_pygost$test_x509$$$class__1_TestCertificate_83 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 83;
        goto try_except_handler_3;
        outline_result_1:;
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 82;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_67);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_6;
        }
        tmp_assign_source_69 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_69, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_70 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[214];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[214];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        Py_INCREF(tmp_metaclass_value_2);
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_6;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[149];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_6;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_72 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[214];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[214];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 180;

        goto try_except_handler_6;
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[215]);
        tmp_condition_result_12 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[215]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_6;
        }
        tmp_tuple_element_6 = mod_consts[232];
        tmp_args_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 180;
        tmp_assign_source_73 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_73;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[217]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_6;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[218];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[219];
        tmp_getattr_default_2 = mod_consts[220];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[219]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 180;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_74;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_6;
        }
        tmp_operand_value_4 = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_operand_value_4 == NULL)) {
            tmp_operand_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[213]);
        }

        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_6;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_6;
        }
        tmp_args_element_value_4 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_args_element_value_5 = mod_consts[221];
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_called_value_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_6;
        }
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pygost$test_x509$$$class__2_TestRFC4491bis_180 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[222];
        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__2_TestRFC4491bis_180, mod_consts[223], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[233];
        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__2_TestRFC4491bis_180, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[232];
        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__2_TestRFC4491bis_180, mod_consts[225], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_8;
        }
        if (isFrameUnusable(cache_frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3)) {
            Py_XDECREF(cache_frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3 = MAKE_FUNCTION_FRAME(codeobj_d10c9fd75aaf3f8ba8032df0deaf88f0, module_pygost$test_x509, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3->m_type_description == NULL);
        frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3 = cache_frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pygost$test_x509$$$function__4__test_vector();

        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__2_TestRFC4491bis_180, mod_consts[102], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygost$test_x509$$$function__5_test_256_test_paramset();

        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__2_TestRFC4491bis_180, mod_consts[235], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygost$test_x509$$$function__6_test_256a_paramset();

        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__2_TestRFC4491bis_180, mod_consts[237], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygost$test_x509$$$function__7_test_512_test_paramset();

        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__2_TestRFC4491bis_180, mod_consts[239], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3 == cache_frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3);
            cache_frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3 = NULL;
        }

        assertFrameObject(frame_d10c9fd75aaf3f8ba8032df0deaf88f0_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pygost$test_x509$$$class__2_TestRFC4491bis_180, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_8;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[232];
            tmp_args_value_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_pygost$test_x509$$$class__2_TestRFC4491bis_180;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 180;
            tmp_assign_source_76 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_76;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_args_element_value_6 = outline_1_var___class__;
        Py_INCREF(tmp_args_element_value_6);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_pygost$test_x509$$$class__2_TestRFC4491bis_180);
        locals_pygost$test_x509$$$class__2_TestRFC4491bis_180 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pygost$test_x509$$$class__2_TestRFC4491bis_180);
        locals_pygost$test_x509$$$class__2_TestRFC4491bis_180 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 180;
        goto try_except_handler_6;
        outline_result_2:;
        frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame.f_lineno = 179;
        tmp_assign_source_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pygost$test_x509, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_75);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8802f9ed5ef74c6bda1f5b5c2e577f05);
#endif
    popFrameStack();

    assertFrameObject(frame_8802f9ed5ef74c6bda1f5b5c2e577f05);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8802f9ed5ef74c6bda1f5b5c2e577f05);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8802f9ed5ef74c6bda1f5b5c2e577f05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8802f9ed5ef74c6bda1f5b5c2e577f05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8802f9ed5ef74c6bda1f5b5c2e577f05, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pygost.test_x509", false);

    Py_INCREF(module_pygost$test_x509);
    return module_pygost$test_x509;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygost$test_x509, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pygost$test_x509", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
