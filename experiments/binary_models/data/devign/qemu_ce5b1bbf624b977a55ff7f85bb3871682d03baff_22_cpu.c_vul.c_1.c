static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = FUN4(VAR2);
    VAR9 *VAR10 = &VAR6->VAR10;
    static bool VAR11;
    VAR4->VAR12 = VAR10;
    FUN5(VAR4, &VAR13);
    VAR10->VAR14[VAR15] = VAR8->VAR16;
    FUN6(FUN7(VAR6), VAR17, 2);
    if (FUN8() && !VAR11)
    {
        VAR11 = true;
        if (VAR10->VAR14[VAR15] < 32)
        {
            FUN9();
        }
        else
        {
            FUN10();
        }
    }
}