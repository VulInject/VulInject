static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    int VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    if (!VAR6->VAR11)
    {
        VAR7 = FUN2(VAR9, VAR3, 1);
        if (VAR7 < 0)
            return VAR7;
        *VAR4 = VAR7;
        return 0;
    }
    VAR9->VAR12 = NULL;
    VAR7 = FUN3(VAR9, VAR6->VAR3, VAR6->VAR11);
    if (VAR7 < 0)
        return VAR7;
    if (VAR2->VAR13 & VAR14 && VAR9->VAR15 && VAR9->VAR16)
    {
        VAR7 = FUN4(VAR9, VAR9->VAR12->VAR17);
        if (VAR7 < 0 && VAR2->VAR13 & VAR18)
        {
            FUN5(VAR9, VAR9->VAR12, ~0);
            return VAR7;
        }
    }
    VAR9->VAR16 = 0;
    if (VAR9->VAR15)
    {
        FUN6(VAR2, VAR19, "", VAR9->VAR20);
        VAR9->VAR15 = 0;
    }
    if (VAR9->VAR21->VAR22[0])
    {
        FUN7(VAR3, VAR9->VAR21);
        *VAR4 = 1;
    }
    return VAR6->VAR11;
}