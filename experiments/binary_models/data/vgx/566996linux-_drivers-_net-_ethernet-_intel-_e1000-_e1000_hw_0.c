static VAR1 FUN1(struct VAR2 *VAR3)
{
s32 VAR4;

if ((VAR3->VAR5 >= VAR6) && (VAR3->VAR5 != VAR7)) {
FUN2(VAR3);
} else {
VAR4 = FUN3(VAR3);
if (VAR4) {
FUN4("");
return VAR4;
}
}
VAR4 = FUN5(VAR3);
if (VAR4) {
FUN4("");
return VAR4;
}


if (VAR3->VAR8 == VAR9) {
VAR4 = FUN6(VAR3, true);
if (VAR4) {
FUN4("");
return VAR4;
}
}

return VAR10;
}