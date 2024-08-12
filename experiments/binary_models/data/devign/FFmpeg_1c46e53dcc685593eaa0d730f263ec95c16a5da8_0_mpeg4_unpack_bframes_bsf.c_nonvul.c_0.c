static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = -1, VAR9 = 0, VAR10 = -1, VAR11 = 0;
    VAR3 *VAR12;
    VAR11 = FUN2(VAR2, &VAR12);
    if (VAR11 < 0)
        return VAR11;
    FUN3(VAR12->VAR13, VAR12->VAR14, &VAR8, &VAR9, &VAR10);
    FUN4(VAR2, VAR15, "", VAR9);
    if (VAR10 >= 0)
    {
        if (VAR6->VAR16)
        {
            FUN4(VAR2, VAR17, "");
            FUN5(&VAR6->VAR16);
            VAR6->VAR18 = 0;
        }
        VAR6->VAR18 = VAR12->VAR14 - VAR10;
        VAR6->VAR16 = FUN6(VAR12->VAR13 + VAR10, VAR6->VAR18);
        if (!VAR6->VAR16)
        {
            VAR6->VAR18 = 0;
            FUN7(&VAR12);
            return FUN8(VAR19);
        }
    }
    if (VAR9 > 2)
    {
        FUN4(VAR2, VAR17, "", VAR9);
    }
    if (VAR9 == 1 && VAR6->VAR16)
    {
        VAR11 = FUN9(VAR4, VAR12);
        if (VAR11 < 0)
        {
            FUN7(&VAR12);
            return VAR11;
        }
        VAR11 = FUN10(VAR4, VAR6->VAR16, VAR6->VAR18);
        if (VAR11 < 0)
        {
            FUN7(&VAR12);
            return VAR11;
        }
        if (VAR12->VAR14 <= VAR20)
        {
            FUN4(VAR2, VAR15, "");
            VAR6->VAR16 = NULL;
            VAR6->VAR18 = 0;
        }
        else
        {
            VAR6->VAR18 = VAR12->VAR14;
            VAR6->VAR16 = FUN6(VAR12->VAR13, VAR12->VAR14);
            if (!VAR6->VAR16)
            {
                VAR6->VAR18 = 0;
                FUN11(VAR4);
                FUN7(&VAR12);
                return FUN8(VAR19);
            }
        }
    }
    else if (VAR9 >= 2)
    {
        FUN12(VAR4, VAR12);
        VAR4->VAR14 = VAR10;
    }
    else if (VAR8 >= 0)
    {
        FUN4(VAR2, VAR15, "");
        FUN12(VAR4, VAR12);
        VAR4->VAR13[VAR8] = '';
    }
    else
    {
        FUN12(VAR4, VAR12);
    }
    FUN7(&VAR12);
    return 0;
}