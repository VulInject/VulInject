void FUN1(void *VAR1)
{
int VAR2;

VAR2 = FUN2(VAR1, "");

if (VAR2 < 0)
VAR2 = FUN2(VAR1, "");

if (VAR2 < 0) {
FUN3("",
VAR3, VAR2);
return;
}

if (FUN4() == 0 &&
(FUN5() || FUN6() == 0)) {
FUN7(VAR1, VAR2);
FUN8(VAR1);
} else {
FUN9(VAR1, VAR2);
}
}