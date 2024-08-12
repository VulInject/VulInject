VAR1 *
FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4,
const char *VAR5)
{
VAR1 *VAR6;


FUN2(VAR3 || VAR4, return NULL);

VAR6 = FUN3(VAR2, VAR7);
FUN2(VAR6, return NULL);

if (VAR3) {
FUN4(VAR6, VAR8, VAR3);
} else {
const char *VAR9 = FUN5(VAR2);

FUN6(VAR6, "",
(VAR9? VAR9 : VAR7), VAR4);
}
FUN4(VAR6, VAR10, VAR4);
FUN4(VAR6, VAR11, VAR5);
return VAR6;
}