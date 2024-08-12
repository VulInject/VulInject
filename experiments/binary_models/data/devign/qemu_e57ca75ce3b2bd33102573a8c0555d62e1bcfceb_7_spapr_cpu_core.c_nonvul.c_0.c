static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = FUN2(FUN3());
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = FUN4(VAR5);
    VAR8 *VAR9 = &VAR5->VAR9;
    FUN5(VAR7);
    VAR7->VAR10 = 1;
    VAR9->VAR11[VAR12] = 0;
    if (FUN6())
    {
        VAR9->VAR11[VAR13] = (VAR14)(VAR15)VAR3->VAR16 | (VAR3->VAR17 - 18);
        if (FUN7(VAR5) < 0)
        {
            FUN8("");
            FUN9(1);
        }
    }
}