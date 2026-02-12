static void Test_u_vfprintf(const char *expectedResult, const char *format, ...) {
UChar uBuffer[256];
UChar uBuffer2[256];
va_list ap;
int32_t count;

va_start(ap, format);
count = u_vsprintf(uBuffer, format, ap);
(void)count;    
va_end(ap);
u_uastrcpy(uBuffer2, expectedResult);
if (u_strcmp(uBuffer, uBuffer2) != 0) {
log_err("Got two different results for \"%s\" expected \"%s\"\n", format, expectedResult);
}

u_uastrcpy(uBuffer2, format);
va_start(ap, format);
count = u_vsprintf_u(uBuffer, uBuffer2, ap);
va_end(ap);
u_uastrcpy(uBuffer2, expectedResult);
if (u_strcmp(uBuffer, uBuffer2) != 0) {
log_err("Got two different results for \"%s\" expected \"%s\"\n", format, expectedResult);
}
}