static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    TCGv VAR4;
    if (FUN3(VAR2->VAR5))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    VAR4 = FUN4();
    FUN5(VAR2, VAR4);
    FUN6(VAR6, VAR4);
    FUN7(VAR4);
}