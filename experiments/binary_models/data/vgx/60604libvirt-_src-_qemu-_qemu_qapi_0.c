static int
FUN1(VAR1 *VAR2,
struct VAR3 *VAR4)
{
const char *VAR5 = FUN2(VAR4);
const char *VAR6 = NULL;
VAR1 *VAR7;
VAR1 *VAR8;
size_t VAR9;

if (VAR5[0] != '')
return 0;

if (FUN3(VAR4)) {

VAR6 = FUN2(VAR4);

if (*VAR6 != '' ||
FUN3(VAR4))
return -3;

VAR6++;
}

VAR5++;


if ((VAR8 = FUN4(VAR2, ""))) {
for (VAR9 = 0; VAR9 < FUN5(VAR8); VAR9++) {
VAR1 *VAR10 = FUN6(VAR8, VAR9);
const char *VAR11;

if (!VAR10 || !(VAR11 = FUN7(VAR10, "")))
return -2;

if (FUN8(VAR11, VAR5)) {
if (VAR6)
return FUN9(VAR6, VAR10);

return 1;
}
}

return 0;
}


if (VAR6)
return 0;

if (!(VAR7 = FUN4(VAR2, "")))
return -2;

for (VAR9 = 0; VAR9 < FUN5(VAR7); VAR9++) {
VAR1 *VAR12;
const char *VAR13;

if (!(VAR12 = FUN6(VAR7, VAR9)) ||
!(VAR13 = FUN10(VAR12)))
continue;

if (FUN8(VAR13, VAR5))
return 1;
}

return 0;
}