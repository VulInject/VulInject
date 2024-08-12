static void FUN1(ktime_t VAR1, unsigned int VAR2)
{
ktime_t VAR3, VAR4;

VAR4 = FUN2(VAR1, FUN3(VAR2));
VAR3 = FUN4();

if (FUN5(VAR3, VAR4))
FUN6(FUN7(FUN8(VAR4, VAR3)) + 1);
}