static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    VAR10 *VAR11;
    int VAR12, VAR13;
    FUN3(&VAR9->VAR14);
    VAR9->VAR15 = FUN4();
    VAR11 = FUN5(VAR2);
    FUN6(VAR11, VAR9->VAR16, VAR17, VAR18, VAR2);
    if (VAR6)
    {
        if (!VAR9->VAR19)
        {
            FUN7(VAR9->VAR16, 1);
        }
        VAR12 = FUN8(VAR9->VAR16, VAR4);
        if (VAR12 >= 0)
        {
            VAR13 = FUN9(VAR9->VAR16, VAR6->VAR20, VAR6->VAR21, VAR7, VAR4->VAR22);
            if (VAR13 != VAR4->VAR22)
            {
                VAR12 = -VAR23;
            }
        }
        if (!VAR9->VAR19)
        {
            FUN7(VAR9->VAR16, 0);
        }
    }
    else
    {
        VAR12 = FUN8(VAR9->VAR16, VAR4);
    }
    FUN6(VAR11, VAR9->VAR16, VAR17, NULL, VAR2);
    VAR9->VAR15 = NULL;
    FUN10(&VAR9->VAR14);
    return VAR12;
}