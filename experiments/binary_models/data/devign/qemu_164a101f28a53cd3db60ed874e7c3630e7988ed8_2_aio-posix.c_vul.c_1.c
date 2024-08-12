void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10;
    FUN2(VAR10, &VAR2->VAR11, VAR10)
    {
        if (VAR10->VAR4 == VAR4 && !VAR10->VAR12)
        {
            break;
        }
    }
    if (!VAR6)
    {
        if (VAR10)
        {
            FUN3(&VAR2->VAR13, &VAR10->VAR14);
            if (VAR2->VAR15)
            {
                VAR10->VAR12 = 1;
                VAR10->VAR14.VAR16 = 0;
            }
            else
            {
                FUN4(VAR10, VAR10);
                FUN5(VAR10);
            }
        }
    }
    else
    {
        if (VAR10 == NULL)
        {
            VAR10 = FUN6(sizeof(VAR9));
            VAR10->VAR4 = VAR4;
            VAR10->VAR14.VAR17 = (VAR18)FUN7(VAR4);
            VAR10->VAR14.VAR19 = VAR20;
            FUN8(&VAR2->VAR11, VAR10, VAR10);
            FUN9(&VAR2->VAR13, &VAR10->VAR14);
        }
        VAR10->VAR6 = VAR6;
        VAR10->VAR8 = VAR8;
    }
    FUN10(VAR2);
}