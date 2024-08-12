static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = FUN4(VAR2);
    VAR9 *VAR10 = &VAR6->VAR10;
    static bool VAR11;
    VAR4->VAR12 = VAR10;
    VAR10->VAR13 = VAR8->VAR13;
    FUN5(VAR4, &VAR14);
    if (FUN6() && !VAR11)
    {
        VAR11 = true;
        FUN7();
    }
}