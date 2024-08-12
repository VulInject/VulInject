static int FUN1(ofnode VAR1, struct VAR2 **VAR3)
{
struct VAR2 *VAR4, *VAR5;
int VAR6;


if (!FUN2(VAR1, "")) {
FUN3("");
return -VAR7;
}


if (FUN4(VAR1, &VAR5))
VAR5 = FUN5();


VAR6 = FUN6(VAR5, "",
FUN7(VAR1),
VAR1, &VAR4);
if (VAR6) {
FUN8(VAR4, "");
return VAR6;
}
VAR6 = FUN9(VAR4);
if (VAR6) {
FUN8(VAR4, "");
return VAR6;
}

*VAR3 = VAR4;
return 0;
}