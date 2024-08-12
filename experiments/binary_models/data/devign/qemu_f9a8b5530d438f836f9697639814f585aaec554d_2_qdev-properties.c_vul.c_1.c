int FUN1(void)
{
    VAR1 *VAR2;
    int VAR3 = 0;
    FUN2(VAR2, &VAR4, VAR5)
    {
        VAR6 *VAR7;
        VAR8 *VAR9;
        if (VAR2->VAR10)
        {
            continue;
        }
        if (!VAR2->VAR11)
        {
            continue;
        }
        VAR7 = FUN3(VAR2->VAR12);
        VAR7 = FUN4(VAR7, VAR13);
        if (!VAR7)
        {
            FUN5("", VAR2->VAR12, VAR2->VAR14);
            VAR3 = 1;
            continue;
        }
        VAR9 = FUN6(VAR7);
        if (!VAR9->VAR15 && !VAR2->VAR10)
        {
            FUN5("", VAR2->VAR12, VAR2->VAR14, VAR2->VAR16);
            VAR3 = 1;
            continue;
        }
    }
    return VAR3;
}