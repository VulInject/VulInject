static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = NULL;
    while (!VAR6->VAR10 && !VAR9)
    {
        FUN2(VAR6->mutex, VAR11);
        VAR9 = VAR6->VAR9;
        if (VAR9)
        {
            *VAR4 = VAR9->VAR4;
            VAR6->VAR9 = VAR6->VAR9->VAR12;
            FUN3(VAR9);
            VAR6->VAR13 -= VAR4->VAR14;
        }
        FUN4(VAR6->VAR15[1]);
        FUN5(VAR6->mutex);
        if (!VAR9)
        {
            if (FUN6(VAR6->VAR16) < 0)
            {
                VAR6->VAR10 = 1;
            }
            else if (VAR2->VAR17 & VAR18)
            {
                return FUN7(VAR19);
            }
            else
            {
                FUN8(2, VAR6->VAR15, 0, VAR11);
            }
        }
    }
    return VAR6->VAR10 ? FUN7(VAR20) : VAR4->VAR14;
}