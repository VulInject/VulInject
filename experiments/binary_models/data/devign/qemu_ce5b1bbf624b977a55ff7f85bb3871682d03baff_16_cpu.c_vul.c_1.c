static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = &VAR6->VAR8;
    static bool VAR9;
    VAR4->VAR10 = VAR8;
    FUN4(VAR4, &VAR11);
    FUN5(VAR12, &VAR8->VAR13);
    FUN6(FUN7(VAR6), VAR14, 2);
    if (FUN8() && !VAR9)
    {
        VAR9 = true;
        FUN9();
    }
}