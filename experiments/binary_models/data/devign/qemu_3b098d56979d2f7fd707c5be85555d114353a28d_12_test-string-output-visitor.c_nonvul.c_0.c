static void FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR2->VAR3 = VAR3;
    VAR2->VAR4 = FUN2(VAR3, &VAR2->VAR5);
    FUN3(VAR2->VAR4);
}