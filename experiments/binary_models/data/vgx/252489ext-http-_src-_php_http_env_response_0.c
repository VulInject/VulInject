static VAR1 FUN1(VAR2 *VAR3, const char *VAR4, ...)
{
ZEND_RESULT_CODE VAR5;
va_list VAR6;

FUN2(VAR6, VAR4);
VAR5 = FUN3(0, 1, VAR4, VAR6);
FUN4(VAR6);

return VAR5;
}