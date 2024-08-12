void FUN1(void)
{
VAR1 = FUN2("");

FUN3("");
FUN3("");

FUN4(FUN5(VAR1, ""));

FUN3("");
FUN3("");

FUN4(FUN5(VAR1, ""));

FUN6("");
FUN3("");

FUN4(FUN5(VAR1, ""));

FUN6("");
FUN6("");

FUN4(FUN7(VAR1));

FUN3("");
FUN3("");

FUN4(FUN5(
VAR1, ""));

FUN3("");
FUN6("");
}