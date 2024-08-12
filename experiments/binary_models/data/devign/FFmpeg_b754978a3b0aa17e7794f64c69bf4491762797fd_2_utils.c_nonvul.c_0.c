static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4)
{
    int VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    if (!VAR2->VAR10)
    {
        if (FUN2(VAR2))
        {
            FUN3(VAR2);
        }
        else
        {
            return -1;
        }
        VAR2->VAR10 = 1;
    }
    if (VAR3 < 0)
        VAR3 = 0;
    VAR7 = VAR2->VAR11[VAR3];
    VAR5 = FUN4(VAR7, VAR4);
    if (VAR5 < 0)
        return -1;
    VAR9 = &VAR7->VAR12[VAR5];
    FUN5(VAR2);
    FUN6(&VAR2->VAR13, VAR9->VAR14, VAR15);
    VAR7->VAR16 = VAR9->VAR4;
    return 0;
}