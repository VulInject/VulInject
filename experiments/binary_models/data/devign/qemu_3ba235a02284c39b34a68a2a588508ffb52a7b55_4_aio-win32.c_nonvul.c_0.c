void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    FUN2(VAR8, &VAR2->VAR9, VAR8)
    {
        if (VAR8->VAR4 == VAR4 && !VAR8->VAR10)
        {
            break;
        }
    }
    if (!VAR6)
    {
        if (VAR8)
        {
            FUN3(&VAR2->VAR11, &VAR8->VAR12);
            if (VAR2->VAR13)
            {
                VAR8->VAR10 = 1;
                VAR8->VAR12.VAR14 = 0;
            }
            else
            {
                FUN4(VAR8, VAR8);
                FUN5(VAR8);
            }
        }
    }
    else
    {
        if (VAR8 == NULL)
        {
            VAR8 = FUN6(VAR7, 1);
            VAR8->VAR4 = VAR4;
            VAR8->VAR12.VAR15 = (VAR16)FUN7(VAR4);
            VAR8->VAR12.VAR17 = VAR18;
            FUN8(&VAR2->VAR9, VAR8, VAR8);
            FUN9(&VAR2->VAR11, &VAR8->VAR12);
        }
        VAR8->VAR6 = VAR6;
    }
    FUN10(VAR2);
}