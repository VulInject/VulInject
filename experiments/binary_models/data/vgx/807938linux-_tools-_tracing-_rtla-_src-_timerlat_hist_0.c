static int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5;

if (!VAR4->VAR6)
VAR4->VAR6 = 1;

if (VAR4->VAR7) {
VAR5 = FUN2(VAR2->VAR8, VAR4->VAR7);
if (VAR5) {
FUN3("");
goto VAR9;
}
}

if (VAR4->VAR10) {
VAR5 = FUN4(VAR2->VAR8, VAR4->VAR10);
if (VAR5) {
FUN3("");
goto VAR9;
}
}

if (VAR4->VAR11) {
VAR5 = FUN5(VAR2->VAR8, VAR4->VAR11);
if (VAR5) {
FUN3("");
goto VAR9;
}
}

if (VAR4->VAR12) {
VAR5 = FUN6(VAR2->VAR8, VAR4->VAR12);
if (VAR5) {
FUN3("");
goto VAR9;
}
}

if (VAR4->VAR13) {
VAR5 = FUN7(VAR2->VAR8, VAR4->VAR13);
if (VAR5) {
FUN3("");
goto VAR9;
}
}

return 0;

VAR9:
return -1;
}