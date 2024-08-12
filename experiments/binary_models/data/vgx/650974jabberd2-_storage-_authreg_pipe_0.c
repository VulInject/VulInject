static int FUN1(authreg_t VAR1, int VAR2, const char *VAR3, ...)
{
va_list VAR4;
char VAR5[1024];
int VAR6;

FUN2(VAR4, VAR3);
vsnprintf(VAR5, 1024, VAR3, VAR4);
FUN3(VAR4);

FUN4(VAR7, "", VAR5);

VAR6 = write(VAR2, VAR5, strlen(VAR5));
if(VAR6 < 0)
FUN5(VAR1->VAR8->VAR9, VAR10, "", strerror(VAR11));

return VAR6;
}