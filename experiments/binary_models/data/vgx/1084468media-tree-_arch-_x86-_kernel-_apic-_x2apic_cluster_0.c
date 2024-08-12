static void FUN1(void)
{
unsigned int VAR1 = FUN2();
unsigned int VAR2;

FUN3(VAR3, VAR1) = FUN4(VAR4);

FUN5(VAR1, FUN3(VAR5, VAR1));
FUN6(VAR2) {
if (FUN7(VAR1) != FUN7(VAR2))
continue;
FUN5(VAR1, FUN3(VAR5, VAR2));
FUN5(VAR2, FUN3(VAR5, VAR1));
}
}