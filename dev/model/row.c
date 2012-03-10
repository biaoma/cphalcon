
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2012 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"
#include "phalcon.h"

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/require.h"
#include "kernel/object.h"
#include "kernel/debug.h"
#include "kernel/assert.h"
#include "kernel/array.h"

#include "zend_operators.h"
#include "zend_exceptions.h"
#include "zend_interfaces.h"

/**
 * Phalcon_Model_Row
 *
 * This component allows to Phalcon_Model_Base returns grouped resultsets.
 */

PHP_METHOD(Phalcon_Model_Row, __construct){

	zval *a0 = NULL;

	phalcon_step_into_entry("Phalcon_Model_Row", "::__construct", 0);
	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	zend_update_property(phalcon_model_row_class_entry, this_ptr, "_columns", strlen("_columns"), a0 TSRMLS_CC);
}

/**
 * Overwrittes default connection
 *
 * @param Phalcon_Db $connection
 */
PHP_METHOD(Phalcon_Model_Row, setConnection){

	zval *v0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	phalcon_debug_vdump("Receiving Param &v0 > ", v0 TSRMLS_CC);
	phalcon_step_into_entry("Phalcon_Model_Row", "setConnection", 0);
	phalcon_step_over("Phalcon_Model_Row::setConnection (Assignment) File=/Model/Row Line=20");
	{
		zval *copy;
		ALLOC_ZVAL(copy);
		ZVAL_ZVAL(copy, v0, 1, 0);
		Z_SET_REFCOUNT_P(copy, 0);
		phalcon_update_property_zval(this_ptr, "_connection", strlen("_connection"), copy TSRMLS_CC);
	}
	phalcon_step_out_entry();
	RETURN_NULL();
	phalcon_step_over("Phalcon_Model_Row::setConnection (Method) File=/Model/Row Line=28");
}

/**
 * Returns default connection
 *
 * @return Phalcon_Db
 */
PHP_METHOD(Phalcon_Model_Row, getConnection){

	zval *t0 = NULL;

	phalcon_step_into_entry("Phalcon_Model_Row", "getConnection", 0);
	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_connection", sizeof("_connection")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	phalcon_debug_vdump("Returning > ", t0 TSRMLS_CC);
	phalcon_step_out_entry();
	PHALCON_RETURN_CTOR(t0);
	phalcon_step_out_entry();
	phalcon_step_over("Phalcon_Model_Row::getConnection (Method) File=/Model/Row Line=47");
}

/**
 * Assigns values to a row from an array returning a new row
 *
 *
 *
 * @param array $result
 * @return Phalcon_Model $result
 */
PHP_METHOD(Phalcon_Model_Row, dumpResult){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL;
	zval *s0 = NULL;
	zval *r0 = NULL, *r1 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL;
	zval *a0 = NULL;
	zval *ac0 = NULL, *ac1 = NULL;
	zval *p0[] = { NULL };
	HashTable *ah0, *ah1;
	HashPosition hp0, hp1;
	zval **hd;
	char *index;
	uint index_len;
	ulong num;
	int htype;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	phalcon_debug_vdump("Receiving Param &v0 > ", v0 TSRMLS_CC);
	phalcon_step_into_entry("Phalcon_Model_Row", "dumpResult", 0);
	phalcon_step_over("Phalcon_Model_Row::dumpResult (Assignment) File=/Model/Row Line=48");
	phalcon_clone(&s0, this_ptr TSRMLS_CC);
	PHALCON_CPY_WRT(v1, s0);
	phalcon_debug_assign("$objectRow", s0 TSRMLS_CC);
	phalcon_step_over("Phalcon_Model_Row::dumpResult (If) File=/Model/Row Line=49");
	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_columns", sizeof("_columns")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	p0[0] = t0;
	phalcon_debug_param(t0 TSRMLS_CC);
	PHALCON_CALL_FUNC_PARAMS(r0, "count", 1, p0);
	phalcon_debug_vdump("count > ", r0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 0);
	PHALCON_ALLOC_ZVAL(r1);
	is_equal_function(r1, r0, t1 TSRMLS_CC);
	if (zend_is_true(r1)) {
		phalcon_step_over("Phalcon_Model_Row::dumpResult (Block) File=/Model/Row Line=49");
		phalcon_step_over("Phalcon_Model_Row::dumpResult (Assignment) File=/Model/Row Line=50");
		PHALCON_ALLOC_ZVAL(a0);
		array_init(a0);
		PHALCON_CPY_WRT(v2, a0);
		phalcon_debug_assign("$columns", a0 TSRMLS_CC);
		phalcon_step_over("Phalcon_Model_Row::dumpResult (Foreach) File=/Model/Row Line=51");
		FOREACH_KV(v0, ac0, fes66, fee66, ah0, hp0, v4, v3)
			phalcon_step_over("Phalcon_Model_Row::dumpResult (Block) File=/Model/Row Line=51");
			phalcon_step_over("Phalcon_Model_Row::dumpResult (Assignment) File=/Model/Row Line=52");
			if (!t2) {
				PHALCON_ALLOC_ZVAL(t2);
			} else {
				if (Z_REFCOUNT_P(t2) > 1) {
					SEPARATE_ZVAL(&t2);
				} else {
					if (Z_TYPE_P(t2) != IS_BOOL) {
						FREE_ZVAL(t2);
						PHALCON_ALLOC_ZVAL(t2);
					}
				}
			}
			ZVAL_BOOL(t2, 1);
			{
				zval *copy;
				ALLOC_ZVAL(copy);
				ZVAL_ZVAL(copy, t2, 1, 0);
				Z_SET_REFCOUNT_P(copy, 1);
				PHALCON_SEPARATE(v2);
				phalcon_array_update(v2, v4, copy TSRMLS_CC);
			}
			phalcon_step_over("Phalcon_Model_Row::dumpResult (Assignment) File=/Model/Row Line=53");
			{
				zval *copy;
				ALLOC_ZVAL(copy);
				ZVAL_ZVAL(copy, v3, 1, 0);
				Z_SET_REFCOUNT_P(copy, 0);
				phalcon_update_property_zval(v1, Z_STRVAL_P(v4), Z_STRLEN_P(v4), copy TSRMLS_CC);
			}
		END_FOREACH(ac0, fes66, fee66, ah0, hp0);
		phalcon_step_over("Phalcon_Model_Row::dumpResult (Assignment) File=/Model/Row Line=55");
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, v2, 1, 0);
			Z_SET_REFCOUNT_P(copy, 0);
			phalcon_update_property_zval(v1, "_columns", strlen("_columns"), copy TSRMLS_CC);
		}
		phalcon_step_over("Phalcon_Model_Row::dumpResult (Assignment) File=/Model/Row Line=56");
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, v2, 1, 0);
			Z_SET_REFCOUNT_P(copy, 0);
			phalcon_update_property_zval(this_ptr, "_columns", strlen("_columns"), copy TSRMLS_CC);
		}
	} else {
		phalcon_step_over("Phalcon_Model_Row::dumpResult (Block) File=/Model/Row Line=57");
		phalcon_step_over("Phalcon_Model_Row::dumpResult (Foreach) File=/Model/Row Line=58");
		FOREACH_KV(v0, ac1, fes67, fee67, ah1, hp1, v4, v3)
			phalcon_step_over("Phalcon_Model_Row::dumpResult (Block) File=/Model/Row Line=58");
			phalcon_step_over("Phalcon_Model_Row::dumpResult (Assignment) File=/Model/Row Line=59");
			{
				zval *copy;
				ALLOC_ZVAL(copy);
				ZVAL_ZVAL(copy, v3, 1, 0);
				Z_SET_REFCOUNT_P(copy, 0);
				phalcon_update_property_zval(v1, Z_STRVAL_P(v4), Z_STRLEN_P(v4), copy TSRMLS_CC);
			}
		END_FOREACH(ac1, fes67, fee67, ah1, hp1);
		phalcon_step_over("Phalcon_Model_Row::dumpResult (Assignment) File=/Model/Row Line=61");
		PHALCON_ALLOC_ZVAL(t3);
		phalcon_read_property(t3, this_ptr, "_columns", sizeof("_columns")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, t3, 1, 0);
			Z_SET_REFCOUNT_P(copy, 0);
			phalcon_update_property_zval(v1, "_columns", strlen("_columns"), copy TSRMLS_CC);
		}
	}
	phalcon_debug_vdump("Returning > ", v1 TSRMLS_CC);
	phalcon_step_out_entry();
	PHALCON_RETURN_CTOR(v1);
	phalcon_step_out_entry();
	phalcon_step_over("Phalcon_Model_Row::dumpResult (Method) File=/Model/Row Line=74");
}

/**
 * Reads an attribute value by its name
 *
 * 
 *
 * @param string $attribute
 * @return mixed
 */
PHP_METHOD(Phalcon_Model_Row, readAttribute){

	zval *v0 = NULL;
	zval *t0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	phalcon_debug_vdump("Receiving Param &v0 > ", v0 TSRMLS_CC);
	phalcon_step_into_entry("Phalcon_Model_Row", "readAttribute", 0);
	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property_zval(t0, this_ptr, v0, PHALCON_NOISY_FETCH TSRMLS_CC);
	phalcon_debug_vdump("Returning > ", t0 TSRMLS_CC);
	phalcon_step_out_entry();
	PHALCON_RETURN_CTOR(t0);
	phalcon_step_out_entry();
	phalcon_step_over("Phalcon_Model_Row::readAttribute (Method) File=/Model/Row Line=83");
}

/**
 * Magic method sleep
 *
 * @return array
 */
PHP_METHOD(Phalcon_Model_Row, sleep){

	zval *a0 = NULL;

	phalcon_step_into_entry("Phalcon_Model_Row", "sleep", 0);
	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_string(a0, "_columns", 1);
	phalcon_debug_vdump("Returning > ", a0 TSRMLS_CC);
	phalcon_step_out_entry();
	{
		zend_uchar is_ref = Z_ISREF_P(return_value);
		zend_uint refcount = Z_REFCOUNT_P(return_value);
		*(return_value) = *(a0);
		zval_copy_ctor(return_value);
		Z_SET_ISREF_TO_P(return_value, is_ref);
		Z_SET_REFCOUNT_P(return_value, refcount);
	}
	return;
	phalcon_step_out_entry();
}

