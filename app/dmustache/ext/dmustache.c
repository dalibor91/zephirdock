
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "dmustache.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *dmustache_dmustache_ce;

ZEND_DECLARE_MODULE_GLOBALS(dmustache)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(dmustache)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(Dmustache_Dmustache);
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(dmustache)
{
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_dmustache_globals *dmustache_globals TSRMLS_DC)
{
	dmustache_globals->initialized = 0;

	/* Memory options */
	dmustache_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	dmustache_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	dmustache_globals->cache_enabled = 1;

	/* Recursive Lock */
	dmustache_globals->recursive_lock = 0;

	/* Static cache */
	memset(dmustache_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_dmustache_globals *dmustache_globals TSRMLS_DC)
{

}

static PHP_RINIT_FUNCTION(dmustache)
{

	zend_dmustache_globals *dmustache_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	dmustache_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(dmustache_globals_ptr TSRMLS_CC);
	zephir_initialize_memory(dmustache_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(dmustache)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(dmustache)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_DMUSTACHE_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_DMUSTACHE_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_DMUSTACHE_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_DMUSTACHE_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_DMUSTACHE_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(dmustache)
{
	php_zephir_init_globals(dmustache_globals TSRMLS_CC);
	php_zephir_init_module_globals(dmustache_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(dmustache)
{

}


zend_function_entry php_dmustache_functions[] = {
ZEND_FE_END

};

zend_module_entry dmustache_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_DMUSTACHE_EXTNAME,
	php_dmustache_functions,
	PHP_MINIT(dmustache),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(dmustache),
#else
	NULL,
#endif
	PHP_RINIT(dmustache),
	PHP_RSHUTDOWN(dmustache),
	PHP_MINFO(dmustache),
	PHP_DMUSTACHE_VERSION,
	ZEND_MODULE_GLOBALS(dmustache),
	PHP_GINIT(dmustache),
	PHP_GSHUTDOWN(dmustache),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_DMUSTACHE
ZEND_GET_MODULE(dmustache)
#endif
