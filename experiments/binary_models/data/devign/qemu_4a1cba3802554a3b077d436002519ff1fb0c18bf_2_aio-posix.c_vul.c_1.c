void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9;
    FUN2(VAR9, &VAR2->VAR10, VAR9)
    {
        if (VAR9->VAR4 == VAR4 && !VAR9->VAR11)
        {
            break;
        }
    }
    if (!VAR7)
    {
        if (VAR9)
        {
            FUN3(&VAR2->VAR12, &VAR9->VAR13);
            if (VAR2->VAR14)
            {
                VAR9->VAR11 = 1;
                VAR9->VAR13.VAR15 = 0;
            }
            else
            {
                FUN4(VAR9, VAR9);
                FUN5(VAR9);
            }
        }
    }
    else
    {
        if (VAR9 == NULL)
        {
            VAR9 = FUN6(VAR8, 1);
            VAR9->VAR4 = VAR4;
            VAR9->VAR13.VAR16 = (VAR17)FUN7(VAR4);
            VAR9->VAR13.VAR18 = VAR19;
            VAR9->VAR5 = VAR5;
            FUN8(&VAR2->VAR10, VAR9, VAR9);
            FUN9(&VAR2->VAR12, &VAR9->VAR13);
        }
        VAR9->VAR7 = VAR7;
    }
    FUN10(VAR2);
}