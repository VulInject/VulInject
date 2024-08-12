static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
char VAR5[30], *VAR6;
struct VAR1 *VAR7;
const char *VAR8;
int VAR9;

if (VAR4->VAR10 >= VAR11) {
FUN3("",
VAR2->VAR8, VAR4->VAR10);
return 0;
}

VAR8 = VAR12[VAR4->VAR10];
if (!VAR8) {
FUN3("",
VAR2->VAR8);
return 0;
}

snprintf(VAR5, sizeof(VAR5), "", VAR8, FUN4(VAR2));
VAR6 = strdup(VAR5);
if (!VAR6)
return -VAR13;

VAR9 = FUN5(VAR2, VAR8, VAR6, &VAR7);
if (VAR9 == -VAR14) {
FUN3("", VAR2->VAR8);
return 0;
}
if (VAR9) {
free(VAR6);
return VAR9;
}
FUN6(VAR7);

if (VAR4->VAR10 == VAR15 && !FUN7(VAR16)) {
VAR9 = FUN8(VAR7, "");
if (VAR9)
return FUN9("", VAR9);
}

FUN10(&VAR4->VAR17);

return 0;
}