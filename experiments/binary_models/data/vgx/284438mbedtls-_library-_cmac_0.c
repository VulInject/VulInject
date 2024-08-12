int FUN1(const unsigned char *VAR1, size_t VAR2,
const unsigned char *VAR3, size_t VAR4,
unsigned char VAR5[16])
{
int VAR6 = VAR7;
const VAR8 *VAR9;
unsigned char VAR10[VAR11];
unsigned char VAR12[VAR11];

if (VAR1 == NULL || VAR3 == NULL || VAR5 == NULL) {
return VAR13;
}

VAR9 = FUN2(VAR14);
if (VAR9 == NULL) {

VAR6 = VAR15;
goto VAR16;
}

if (VAR2 == VAR11) {

memcpy(VAR12, VAR1, VAR11);
} else {
memset(VAR10, 0, VAR11);

VAR6 = FUN3(VAR9, VAR10, 128, VAR1,
VAR2, VAR12);
if (VAR6 != 0) {
goto VAR16;
}
}

VAR6 = FUN3(VAR9, VAR12, 128, VAR3, VAR4,
VAR5);

VAR16:
FUN4(VAR12, sizeof(VAR12));

return VAR6;
}