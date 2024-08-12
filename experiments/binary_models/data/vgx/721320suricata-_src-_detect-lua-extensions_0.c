static int FUN1(VAR1 *VAR2)
{
VAR3 *VAR4;
const char *VAR5;
int VAR6;
VAR7 *VAR8;


int VAR9 = FUN2(VAR2, &VAR4);
if (VAR9 != 0)
return VAR9;

const char *VAR10 = NULL;
int VAR11 = 0;

VAR10 = FUN3(VAR2, 1);
if (VAR10 == NULL) {
FUN4("");
}
if (!FUN5(VAR2, 2)) {
FUN4("");
}
VAR11 = FUN6(VAR2, 2);
if (VAR11 < 0 || VAR11 > 0xff) {
FUN4("");
}

if (!FUN7(VAR2, 3)) {
FUN4("");
}
VAR5 = FUN3(VAR2, 3);
if (VAR5 == NULL) {
FUN4("");
}

if (!FUN5(VAR2, 4)) {
FUN4("");
}
VAR6 = FUN6(VAR2, 4);
if (VAR6 < 0 || VAR6 > 0xffff) {
FUN4("");
}

VAR8 = FUN8(VAR6+1);
if (FUN9(VAR8 == NULL)) {
FUN4("");
}
memcpy(VAR8, VAR5, VAR6);
VAR8[VAR6] = '';

VAR7 *VAR12 = FUN8(VAR11+1);
if (FUN9(VAR12 == NULL)) {
FUN10(VAR8);
FUN4("");
}
memcpy(VAR12, VAR10, VAR11);
VAR12[VAR11] = '';
FUN11(VAR4, VAR12, VAR11, VAR8, VAR6);

return 0;
}