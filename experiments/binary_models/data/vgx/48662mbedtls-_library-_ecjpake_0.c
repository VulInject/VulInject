int FUN1(VAR1 *VAR2,
unsigned char *VAR3, size_t VAR4, VAR5 *VAR6,
int (*VAR7)(void *, unsigned char *, VAR5),
void *VAR8)
{
int VAR9 = VAR10;
mbedtls_ecp_point VAR11;
unsigned char VAR12[VAR13];
size_t VAR14;

*VAR6 = FUN2(VAR2->VAR15);
if (VAR4 < *VAR6) {
return VAR16;
}

FUN3(&VAR11);

VAR9 = FUN4(VAR2, &VAR11, VAR7, VAR8);
if (VAR9) {
goto VAR17;
}


VAR14 = (VAR2->VAR18.VAR19 + 7) / 8;
FUN5(FUN6(&VAR11.VAR20, VAR12, VAR14));
FUN5(FUN7(VAR2->VAR15,
VAR12, VAR14, VAR3));

VAR17:
FUN8(&VAR11);

return VAR9;
}