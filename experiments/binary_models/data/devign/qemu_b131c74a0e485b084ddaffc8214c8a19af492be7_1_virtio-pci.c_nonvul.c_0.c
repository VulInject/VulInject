static int FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4, MSIMessage VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2->VAR8, VAR3);
    VAR9 *VAR10 = FUN3(VAR7);
    VAR11 *VAR12 = &VAR2->VAR13[VAR4];
    int VAR14;
    if (VAR12->VAR15 == 0)
    {
        VAR14 = FUN4(VAR16, VAR5);
        if (VAR14 < 0)
        {
            return VAR14;
        }
        VAR12->VAR17 = VAR14;
    }
    VAR12->VAR15++;
    VAR14 = FUN5(VAR16, VAR10, VAR12->VAR17);
    if (VAR14 < 0)
    {
        if (--VAR12->VAR15 == 0)
        {
            FUN6(VAR16, VAR12->VAR17);
        }
        return VAR14;
    }
    FUN7(VAR7, true, true);
    return 0;
}