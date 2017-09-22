
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Dmustache_Dmustache) {

	ZEPHIR_REGISTER_CLASS(Dmustache, Dmustache, dmustache, dmustache, dmustache_dmustache_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Dmustache_Dmustache, say) {

	zval *this_ptr = getThis();


	php_printf("%s", "hi :)");

}

