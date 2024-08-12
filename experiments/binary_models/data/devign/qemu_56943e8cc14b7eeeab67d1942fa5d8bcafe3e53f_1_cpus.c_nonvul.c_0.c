static void FUN1(VAR1 *VAR2)
{
    char VAR3[VAR4];
    static VAR5 *VAR6;
    static VAR7 *VAR8;
    if (!VAR8)
    {
        VAR2->VAR9 = FUN2(sizeof(VAR7));
        VAR2->VAR10 = FUN2(sizeof(VAR5));
        FUN3(VAR2->VAR10);
        VAR6 = VAR2->VAR10;
        snprintf(VAR3, VAR4, "", VAR2->VAR11);
        FUN4(VAR2->VAR9, VAR3, VAR12, VAR2, VAR13);
        VAR2->VAR14 = FUN5(VAR2->VAR9);
        while (!VAR2->VAR15)
        {
            FUN6(&VAR16, &VAR17);
        }
        VAR8 = VAR2->VAR9;
    }
    else
    {
        VAR2->VAR9 = VAR8;
        VAR2->VAR10 = VAR6;
    }
}