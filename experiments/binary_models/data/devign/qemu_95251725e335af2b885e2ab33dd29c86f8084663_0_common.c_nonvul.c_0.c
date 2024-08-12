int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, const char *VAR8)
{
    struct VAR9 *VAR10;
    int VAR11;
    VAR11 = FUN2(VAR4, VAR7, &VAR10);
    if (VAR11)
    {
        return VAR11;
    }
    VAR6->VAR4 = VAR4;
    VAR6->VAR12 = VAR10->VAR12;
    VAR6->VAR13 = VAR10->VAR13;
    VAR6->VAR14 = VAR10->VAR15;
    VAR6->VAR16 = VAR7;
    if (VAR6->VAR13)
    {
        VAR6->VAR17 = FUN3(VAR18, 1);
        FUN4(VAR6->VAR17, VAR2, &VAR19, VAR6, VAR8, VAR6->VAR13);
        if (!VAR4->VAR20 && VAR6->VAR12 & VAR21)
        {
            VAR11 = FUN5(VAR6, VAR10);
            if (VAR11)
            {
                VAR6->VAR22 = 1;
                VAR6->VAR23 = FUN3(VAR24, VAR6->VAR22);
                VAR6->VAR23[0].VAR15 = 0;
                VAR6->VAR23[0].VAR13 = VAR6->VAR13;
            }
        }
    }
    FUN6(VAR10);
    FUN7(VAR4->VAR8, VAR7, VAR8, VAR6->VAR12, VAR6->VAR14, VAR6->VAR13);
    return 0;
}