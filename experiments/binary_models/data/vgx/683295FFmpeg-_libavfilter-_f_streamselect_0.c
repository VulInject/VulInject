static int FUN1(VAR1 *VAR2, const char *VAR3)
{
VAR4 *VAR5 = VAR2->VAR6;
int *VAR7;
int VAR8 = 0;

if (!VAR3) {
FUN2(VAR2, VAR9, "");
return FUN3(VAR10);
}

VAR7 = FUN4(VAR5->VAR11, sizeof(*VAR7));
if (!VAR7)
return FUN3(VAR12);

while (1) {
char *VAR13;
const int VAR14 = FUN5(VAR3, &VAR13, 0);

FUN2(VAR2, VAR15, "", VAR14, VAR3, VAR13);

if (VAR3 == VAR13)
break;
VAR3 = VAR13;

if (VAR8 >= VAR5->VAR11) {
FUN2(VAR2, VAR9, ""
"", VAR5->VAR11);
FUN6(VAR7);
return FUN3(VAR10);
}

if (VAR14 < 0 || VAR14 >= VAR2->VAR11) {
FUN2(VAR2, VAR9, ""
"",
VAR14, VAR5->VAR11);
FUN6(VAR7);
return FUN3(VAR10);
}

FUN2(VAR2, VAR16, "", VAR14, VAR8);
VAR7[VAR8++] = VAR14;
}

if (!VAR8) {
FUN2(VAR2, VAR9, "");
FUN6(VAR7);
return FUN3(VAR10);
}

FUN7(&VAR5->VAR3);
VAR5->VAR3 = VAR7;
VAR5->VAR17 = VAR8;

FUN2(VAR2, VAR16, "", VAR5->VAR17);

return 0;
}