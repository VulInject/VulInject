static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
int VAR5;

FUN2(&VAR2->VAR6, "");

VAR5 = FUN3(VAR2);
if (VAR5) {
FUN4(VAR2, "");
return VAR5;
}

VAR5 = FUN5(VAR2, VAR7 & ~VAR8);
if (VAR5) {
FUN4(VAR2, "");
return VAR5;
}

VAR5 = FUN6(VAR2);
if (VAR5) {

FUN7(VAR2,
"",
VAR5);
}


VAR5 = FUN8(VAR2);
if (VAR5) {
FUN9(&VAR2->VAR6, "");
FUN10(VAR2);
return VAR5;
}

return 0;
}