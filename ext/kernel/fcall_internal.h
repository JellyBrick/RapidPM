#ifndef ZEPHIR_KERNEL_FCALL_INTERNAL_H
#define ZEPHIR_KERNEL_FCALL_INTERNAL_H
	#define ZEPHIR_CALL_INTERNAL_METHOD_NORETURN_P1(object, method, p0) \
		do { \
			zval rv; \
			zval *rvp = &rv; \
			ZVAL_UNDEF(&rv); \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS(object); \
			ZEPHIR_SET_SCOPE((Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL), (Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL)); \
			zval _p0; \
			ZVAL_COPY(&_p0, p0); \
			method(0, rvp, object, 0, &_p0); \
			Z_TRY_DELREF_P(p0); \
			zval_ptr_dtor(rvp); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
	#define ZEPHIR_CALL_INTERNAL_METHOD_NORETURN_P3(object, method, p0, p1, p2) \
		do { \
			zval rv; \
			zval *rvp = &rv; \
			ZVAL_UNDEF(&rv); \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS(object); \
			ZEPHIR_SET_SCOPE((Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL), (Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL)); \
			zval _p0, _p1, _p2; \
			ZVAL_COPY(&_p0, p0); \
			ZVAL_COPY(&_p1, p1); \
			ZVAL_COPY(&_p2, p2); \
			method(0, rvp, object, 0, &_p0, &_p1, &_p2); \
			Z_TRY_DELREF_P(p0); \
			Z_TRY_DELREF_P(p1); \
			Z_TRY_DELREF_P(p2); \
			zval_ptr_dtor(rvp); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
	#define ZEPHIR_CALL_INTERNAL_METHOD_NORETURN_P6(object, method, p0, p1, p2, p3, p4, p5) \
		do { \
			zval rv; \
			zval *rvp = &rv; \
			ZVAL_UNDEF(&rv); \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS(object); \
			ZEPHIR_SET_SCOPE((Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL), (Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL)); \
			zval _p0, _p1, _p2, _p3, _p4, _p5; \
			ZVAL_COPY(&_p0, p0); \
			ZVAL_COPY(&_p1, p1); \
			ZVAL_COPY(&_p2, p2); \
			ZVAL_COPY(&_p3, p3); \
			ZVAL_COPY(&_p4, p4); \
			ZVAL_COPY(&_p5, p5); \
			method(0, rvp, object, 0, &_p0, &_p1, &_p2, &_p3, &_p4, &_p5); \
			Z_TRY_DELREF_P(p0); \
			Z_TRY_DELREF_P(p1); \
			Z_TRY_DELREF_P(p2); \
			Z_TRY_DELREF_P(p3); \
			Z_TRY_DELREF_P(p4); \
			Z_TRY_DELREF_P(p5); \
			zval_ptr_dtor(rvp); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
	#define ZEPHIR_CALL_INTERNAL_METHOD_P0(return_value_ptr, object, method) \
		do { \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS(object); \
			ZEPHIR_SET_SCOPE((Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL), (Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL)); \
			ZEPHIR_INIT_NVAR((return_value_ptr)); \
			method(0, return_value_ptr, object, 1); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
	#define ZEPHIR_CALL_INTERNAL_METHOD_P1(return_value_ptr, object, method, p0) \
		do { \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS(object); \
			ZEPHIR_SET_SCOPE((Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL), (Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL)); \
			zval _p0; \
			ZEPHIR_INIT_NVAR((return_value_ptr)); \
			ZVAL_COPY(&_p0, p0); \
			method(0, return_value_ptr, object, 1, &_p0); \
			Z_TRY_DELREF_P(p0); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
	#define ZEPHIR_CALL_INTERNAL_METHOD_P2(return_value_ptr, object, method, p0, p1) \
		do { \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS(object); \
			ZEPHIR_SET_SCOPE((Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL), (Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL)); \
			zval _p0, _p1; \
			ZEPHIR_INIT_NVAR((return_value_ptr)); \
			ZVAL_COPY(&_p0, p0); \
			ZVAL_COPY(&_p1, p1); \
			method(0, return_value_ptr, object, 1, &_p0, &_p1); \
			Z_TRY_DELREF_P(p0); \
			Z_TRY_DELREF_P(p1); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
	#define ZEPHIR_RETURN_CALL_INTERNAL_METHOD_P1(object, method, p0) \
		do { \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS(object); \
			ZEPHIR_SET_SCOPE((Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL), (Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL)); \
			zval _p0; \
			ZVAL_COPY(&_p0, p0); \
			method(0, return_value, object, 0, &_p0); \
			Z_TRY_DELREF_P(p0); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
	#define ZEPHIR_RETURN_CALL_INTERNAL_METHOD_P2(object, method, p0, p1) \
		do { \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS(object); \
			ZEPHIR_SET_SCOPE((Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL), (Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL)); \
			zval _p0, _p1; \
			ZVAL_COPY(&_p0, p0); \
			ZVAL_COPY(&_p1, p1); \
			method(0, return_value, object, 0, &_p0, &_p1); \
			Z_TRY_DELREF_P(p0); \
			Z_TRY_DELREF_P(p1); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
	#define ZEPHIR_RETURN_CALL_INTERNAL_METHOD_P6(object, method, p0, p1, p2, p3, p4, p5) \
		do { \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS(object); \
			ZEPHIR_SET_SCOPE((Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL), (Z_OBJ_P(object) ? Z_OBJCE_P(object) : NULL)); \
			zval _p0, _p1, _p2, _p3, _p4, _p5; \
			ZVAL_COPY(&_p0, p0); \
			ZVAL_COPY(&_p1, p1); \
			ZVAL_COPY(&_p2, p2); \
			ZVAL_COPY(&_p3, p3); \
			ZVAL_COPY(&_p4, p4); \
			ZVAL_COPY(&_p5, p5); \
			method(0, return_value, object, 0, &_p0, &_p1, &_p2, &_p3, &_p4, &_p5); \
			Z_TRY_DELREF_P(p0); \
			Z_TRY_DELREF_P(p1); \
			Z_TRY_DELREF_P(p2); \
			Z_TRY_DELREF_P(p3); \
			Z_TRY_DELREF_P(p4); \
			Z_TRY_DELREF_P(p5); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
	#define ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P1(return_value_ptr, scope_ce, method, p0) \
		do { \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS_EXPLICIT_NULL(); \
			ZEPHIR_SET_SCOPE(scope_ce, scope_ce); \
			zval _p0; \
			ZEPHIR_INIT_NVAR((return_value_ptr)); \
			ZVAL_COPY(&_p0, p0); \
			method(0, return_value_ptr, NULL, 1, &_p0); \
			Z_TRY_DELREF_P(p0); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
	#define ZEPHIR_STATIC_CALL_INTERNAL_METHOD_P2(return_value_ptr, scope_ce, method, p0, p1) \
		do { \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS_EXPLICIT_NULL(); \
			ZEPHIR_SET_SCOPE(scope_ce, scope_ce); \
			zval _p0, _p1; \
			ZEPHIR_INIT_NVAR((return_value_ptr)); \
			ZVAL_COPY(&_p0, p0); \
			ZVAL_COPY(&_p1, p1); \
			method(0, return_value_ptr, NULL, 1, &_p0, &_p1); \
			Z_TRY_DELREF_P(p0); \
			Z_TRY_DELREF_P(p1); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
	#define ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P1(scope_ce, method, p0) \
		do { \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS_EXPLICIT_NULL(); \
			ZEPHIR_SET_SCOPE(scope_ce, scope_ce); \
			zval _p0; \
			ZVAL_COPY(&_p0, p0); \
			method(0, return_value, NULL, 0, &_p0); \
			Z_TRY_DELREF_P(p0); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
	#define ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P2(scope_ce, method, p0, p1) \
		do { \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS_EXPLICIT_NULL(); \
			ZEPHIR_SET_SCOPE(scope_ce, scope_ce); \
			zval _p0, _p1; \
			ZVAL_COPY(&_p0, p0); \
			ZVAL_COPY(&_p1, p1); \
			method(0, return_value, NULL, 0, &_p0, &_p1); \
			Z_TRY_DELREF_P(p0); \
			Z_TRY_DELREF_P(p1); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
	#define ZEPHIR_STATIC_RETURN_CALL_INTERNAL_METHOD_P3(scope_ce, method, p0, p1, p2) \
		do { \
			ZEPHIR_BACKUP_SCOPE(); \
			ZEPHIR_BACKUP_THIS_PTR(); \
			ZEPHIR_SET_THIS_EXPLICIT_NULL(); \
			ZEPHIR_SET_SCOPE(scope_ce, scope_ce); \
			zval _p0, _p1, _p2; \
			ZVAL_COPY(&_p0, p0); \
			ZVAL_COPY(&_p1, p1); \
			ZVAL_COPY(&_p2, p2); \
			method(0, return_value, NULL, 0, &_p0, &_p1, &_p2); \
			Z_TRY_DELREF_P(p0); \
			Z_TRY_DELREF_P(p1); \
			Z_TRY_DELREF_P(p2); \
			ZEPHIR_LAST_CALL_STATUS = EG(exception) ? FAILURE : SUCCESS; \
			ZEPHIR_RESTORE_THIS_PTR(); \
			ZEPHIR_RESTORE_SCOPE(); \
		} while (0)
	
#endif
