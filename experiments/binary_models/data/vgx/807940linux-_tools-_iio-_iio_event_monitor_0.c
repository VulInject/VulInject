static void FUN1(char *VAR1, int VAR2)
{
const struct VAR3 *VAR4;
char VAR5[256];
int VAR6;
VAR7 *VAR8;

snprintf(VAR5, sizeof(VAR5), VAR9, VAR1);
VAR5[sizeof(VAR5)-1] = '';

VAR8 = FUN2(VAR5);
if (!VAR8) {
fprintf(VAR10, "",
VAR5);
return;
}

while (VAR4 = FUN3(VAR8), VAR4) {
if (FUN4(VAR4->VAR11, "")) {
FUN5("",
VAR2 ? "" : "",
VAR4->VAR11);
VAR6 = FUN6(VAR4->VAR11, VAR5,
VAR2);
if (VAR6 < 0)
fprintf(VAR10, "",
VAR4->VAR11);
}
}

if (FUN7(VAR8) == -1) {
FUN8(""
"");
return;
}
}