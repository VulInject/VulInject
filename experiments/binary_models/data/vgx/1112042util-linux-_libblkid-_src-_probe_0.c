int FUN1(blkid_probe VAR1, const char *VAR2,
const char *VAR3, ...)
{
int VAR4;
va_list VAR5;

FUN2(VAR5, VAR3);
VAR4 = FUN3(VAR1, VAR2, VAR3, VAR5);
FUN4(VAR5);

return VAR4;
}