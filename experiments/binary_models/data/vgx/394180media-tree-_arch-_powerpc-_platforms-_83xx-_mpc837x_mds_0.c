static int FUN1(void)
{
struct VAR1 *VAR2;
const void *VAR3, *VAR4;
void VAR5 *VAR6 = NULL;
u8 VAR7;
int VAR8;

VAR8 = FUN2();
if (VAR8)
return VAR8;

VAR2 = FUN3(NULL, NULL, "");
if (VAR2) {
VAR6 = FUN4(VAR2, 0);
FUN5(VAR2);
}
if (!VAR6)
return -1;

VAR2 = FUN6(NULL, "");
if (!VAR2) {
VAR8 = -VAR9;
goto VAR10;
}
VAR3 = FUN7(VAR2, "", NULL);
if (VAR3 && !strcmp(VAR3, "")) {
FUN8(VAR6 + 12, VAR11);
} else if (VAR3 && !strcmp(VAR3, "")) {
VAR4 = FUN7(VAR2, "", NULL);
VAR7 = FUN9(VAR6 + 12) & ~VAR12;
VAR7 |= VAR11;
if (VAR4 && !strcmp(VAR4, ""))
VAR7 |= VAR13;
FUN10(VAR6 + 12, VAR7);
} else {
FUN11(VAR14 "");
}

FUN5(VAR2);
VAR10:
FUN12(VAR6);
return VAR8;
}