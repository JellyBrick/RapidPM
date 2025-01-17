
extern zend_class_entry *pocketmine_utils_binarystream_ce;

ZEPHIR_INIT_CLASS(Pocketmine_Utils_BinaryStream);

PHP_METHOD(Pocketmine_Utils_BinaryStream, getOffset);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getBuffer);
PHP_METHOD(Pocketmine_Utils_BinaryStream, __construct);
PHP_METHOD(Pocketmine_Utils_BinaryStream, setOffset);
PHP_METHOD(Pocketmine_Utils_BinaryStream, reset);
PHP_METHOD(Pocketmine_Utils_BinaryStream, rewind);
PHP_METHOD(Pocketmine_Utils_BinaryStream, setBuffer);
PHP_METHOD(Pocketmine_Utils_BinaryStream, get);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getRemaining);
PHP_METHOD(Pocketmine_Utils_BinaryStream, put);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getBool);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putBool);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getByte);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putByte);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getShort);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getSignedShort);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putShort);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getLShort);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getSignedLShort);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putLShort);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getTriad);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putTriad);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getLTriad);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putLTriad);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getInt);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putInt);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getLInt);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putLInt);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getFloat);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getRoundedFloat);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putFloat);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getLFloat);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getRoundedLFloat);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putLFloat);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getDouble);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putDouble);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getLDouble);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putLDouble);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getLong);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putLong);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getLLong);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putLLong);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getUnsignedVarInt);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putUnsignedVarInt);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getVarInt);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putVarInt);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getUnsignedVarLong);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putUnsignedVarLong);
PHP_METHOD(Pocketmine_Utils_BinaryStream, getVarLong);
PHP_METHOD(Pocketmine_Utils_BinaryStream, putVarLong);
PHP_METHOD(Pocketmine_Utils_BinaryStream, feof);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getoffset, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getoffset, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getbuffer, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getbuffer, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream___construct, 0, 0, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, buffer, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, buffer)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, offset)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70100
#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_setoffset, 0, 1, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_setoffset, 0, 1, IS_VOID, NULL, 0)
#endif
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_setoffset, 0, 0, 1)
#define arginfo_pocketmine_utils_binarystream_setoffset NULL
#endif

#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, offset)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70100
#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_rewind, 0, 0, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_rewind, 0, 0, IS_VOID, NULL, 0)
#endif
ZEND_END_ARG_INFO()
#else
#define arginfo_pocketmine_utils_binarystream_rewind NULL
#endif

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_setbuffer, 0, 0, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, buffer, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, buffer)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, offset)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_get, 0, 1, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_get, 0, 1, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, len)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getremaining, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getremaining, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_put, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, str)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getbool, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getbool, 0, 0, _IS_BOOL, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putbool, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getbyte, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getbyte, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putbyte, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getshort, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getshort, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getsignedshort, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getsignedshort, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putshort, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getlshort, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getlshort, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getsignedlshort, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getsignedlshort, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putlshort, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_gettriad, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_gettriad, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_puttriad, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getltriad, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getltriad, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putltriad, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getint, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getint, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putint, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getlint, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getlint, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putlint, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getfloat, 0, 0, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getfloat, 0, 0, IS_DOUBLE, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getroundedfloat, 0, 1, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getroundedfloat, 0, 1, IS_DOUBLE, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, accuracy, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, accuracy)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putfloat, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getlfloat, 0, 0, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getlfloat, 0, 0, IS_DOUBLE, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getroundedlfloat, 0, 1, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getroundedlfloat, 0, 1, IS_DOUBLE, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, accuracy, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, accuracy)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putlfloat, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getdouble, 0, 0, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getdouble, 0, 0, IS_DOUBLE, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70100
#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_putdouble, 0, 1, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_putdouble, 0, 1, IS_VOID, NULL, 0)
#endif
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putdouble, 0, 0, 1)
#define arginfo_pocketmine_utils_binarystream_putdouble NULL
#endif

#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getldouble, 0, 0, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getldouble, 0, 0, IS_DOUBLE, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70100
#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_putldouble, 0, 1, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_putldouble, 0, 1, IS_VOID, NULL, 0)
#endif
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putldouble, 0, 0, 1)
#define arginfo_pocketmine_utils_binarystream_putldouble NULL
#endif

#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_DOUBLE, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getlong, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getlong, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putlong, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getllong, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getllong, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putllong, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getunsignedvarint, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getunsignedvarint, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putunsignedvarint, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getvarint, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getvarint, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putvarint, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getunsignedvarlong, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getunsignedvarlong, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putunsignedvarlong, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getvarlong, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_getvarlong, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pocketmine_utils_binarystream_putvarlong, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, v)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_feof, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pocketmine_utils_binarystream_feof, 0, 0, _IS_BOOL, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(pocketmine_utils_binarystream_method_entry) {
	PHP_ME(Pocketmine_Utils_BinaryStream, getOffset, arginfo_pocketmine_utils_binarystream_getoffset, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getBuffer, arginfo_pocketmine_utils_binarystream_getbuffer, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, __construct, arginfo_pocketmine_utils_binarystream___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Pocketmine_Utils_BinaryStream, setOffset, arginfo_pocketmine_utils_binarystream_setoffset, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, reset, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, rewind, arginfo_pocketmine_utils_binarystream_rewind, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, setBuffer, arginfo_pocketmine_utils_binarystream_setbuffer, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, get, arginfo_pocketmine_utils_binarystream_get, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getRemaining, arginfo_pocketmine_utils_binarystream_getremaining, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, put, arginfo_pocketmine_utils_binarystream_put, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getBool, arginfo_pocketmine_utils_binarystream_getbool, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putBool, arginfo_pocketmine_utils_binarystream_putbool, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getByte, arginfo_pocketmine_utils_binarystream_getbyte, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putByte, arginfo_pocketmine_utils_binarystream_putbyte, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getShort, arginfo_pocketmine_utils_binarystream_getshort, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getSignedShort, arginfo_pocketmine_utils_binarystream_getsignedshort, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putShort, arginfo_pocketmine_utils_binarystream_putshort, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getLShort, arginfo_pocketmine_utils_binarystream_getlshort, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getSignedLShort, arginfo_pocketmine_utils_binarystream_getsignedlshort, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putLShort, arginfo_pocketmine_utils_binarystream_putlshort, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getTriad, arginfo_pocketmine_utils_binarystream_gettriad, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putTriad, arginfo_pocketmine_utils_binarystream_puttriad, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getLTriad, arginfo_pocketmine_utils_binarystream_getltriad, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putLTriad, arginfo_pocketmine_utils_binarystream_putltriad, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getInt, arginfo_pocketmine_utils_binarystream_getint, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putInt, arginfo_pocketmine_utils_binarystream_putint, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getLInt, arginfo_pocketmine_utils_binarystream_getlint, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putLInt, arginfo_pocketmine_utils_binarystream_putlint, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getFloat, arginfo_pocketmine_utils_binarystream_getfloat, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getRoundedFloat, arginfo_pocketmine_utils_binarystream_getroundedfloat, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putFloat, arginfo_pocketmine_utils_binarystream_putfloat, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getLFloat, arginfo_pocketmine_utils_binarystream_getlfloat, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getRoundedLFloat, arginfo_pocketmine_utils_binarystream_getroundedlfloat, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putLFloat, arginfo_pocketmine_utils_binarystream_putlfloat, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getDouble, arginfo_pocketmine_utils_binarystream_getdouble, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putDouble, arginfo_pocketmine_utils_binarystream_putdouble, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getLDouble, arginfo_pocketmine_utils_binarystream_getldouble, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putLDouble, arginfo_pocketmine_utils_binarystream_putldouble, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getLong, arginfo_pocketmine_utils_binarystream_getlong, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putLong, arginfo_pocketmine_utils_binarystream_putlong, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getLLong, arginfo_pocketmine_utils_binarystream_getllong, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putLLong, arginfo_pocketmine_utils_binarystream_putllong, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getUnsignedVarInt, arginfo_pocketmine_utils_binarystream_getunsignedvarint, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putUnsignedVarInt, arginfo_pocketmine_utils_binarystream_putunsignedvarint, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getVarInt, arginfo_pocketmine_utils_binarystream_getvarint, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putVarInt, arginfo_pocketmine_utils_binarystream_putvarint, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getUnsignedVarLong, arginfo_pocketmine_utils_binarystream_getunsignedvarlong, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putUnsignedVarLong, arginfo_pocketmine_utils_binarystream_putunsignedvarlong, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, getVarLong, arginfo_pocketmine_utils_binarystream_getvarlong, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, putVarLong, arginfo_pocketmine_utils_binarystream_putvarlong, ZEND_ACC_PUBLIC)
	PHP_ME(Pocketmine_Utils_BinaryStream, feof, arginfo_pocketmine_utils_binarystream_feof, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
