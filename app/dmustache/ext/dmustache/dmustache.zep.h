
extern zend_class_entry *dmustache_dmustache_ce;

ZEPHIR_INIT_CLASS(Dmustache_Dmustache);

PHP_METHOD(Dmustache_Dmustache, say);

ZEPHIR_INIT_FUNCS(dmustache_dmustache_method_entry) {
	PHP_ME(Dmustache_Dmustache, say, NULL, ZEND_ACC_STATIC)
	PHP_FE_END
};
