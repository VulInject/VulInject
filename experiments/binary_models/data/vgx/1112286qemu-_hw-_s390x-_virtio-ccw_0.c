static int FUN1(VAR1 *VAR2, int VAR3,
bool VAR4)
{
VAR5 *VAR6 = FUN2(VAR2);
VAR7 *VAR8 = FUN3(&VAR6->VAR9);
VAR10 *VAR11 = FUN4(VAR2);
bool VAR12 = VAR11->VAR13->VAR14 && FUN5();
int VAR15, VAR16;

if (VAR12 && VAR4) {

VAR15 = FUN6(VAR6, VAR3);
if (VAR15 < 0) {
goto VAR17;
}
}
for (VAR16 = 0; VAR16 < VAR3; VAR16++) {
if (!FUN7(VAR8, VAR16)) {
break;
}
VAR15 = FUN8(VAR6, VAR16, VAR4, VAR12);
if (VAR15 < 0) {
goto VAR18;
}
}
if (VAR12 && !VAR4) {

FUN9(VAR6, VAR3);
}
return 0;

VAR18:
while (--VAR16 >= 0) {
FUN8(VAR6, VAR16, !VAR4, false);
}
VAR17:
if (VAR12 && VAR4) {
FUN9(VAR6, VAR3);
}
return VAR15;
}