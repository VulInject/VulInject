static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = VAR4->VAR7.VAR6;
    VAR8 *VAR9;
    VAR10 *VAR11 = NULL;
    if (!VAR6)
    {
        FUN3("");
        return -1;
    }
    FUN4(&VAR4->VAR7, &VAR2->VAR12);
    FUN5(VAR6, &VAR4->VAR2.VAR13);
    VAR4->VAR7.VAR6 = NULL;
    FUN6(VAR2);
    FUN7(VAR2);
    FUN8(&VAR4->VAR14, sizeof(VAR4->VAR14), FUN9(VAR2), &VAR15, NULL);
    VAR9 = FUN10(&VAR4->VAR14, VAR6, 0, !!VAR4->VAR16, VAR4->VAR7.VAR17, VAR2->VAR12, &VAR11);
    if (!VAR9)
    {
        return -1;
    }
    VAR4->VAR14.VAR18.VAR19 = 0;
    FUN11(VAR2);
    if (FUN12(VAR6))
    {
        if (VAR20)
        {
            FUN13(VAR20, VAR6, VAR21, VAR4);
            VAR4->VAR2.VAR22 = 0;
        }
        else
        {
            VAR23 = 0;
        }
    }
    return 0;