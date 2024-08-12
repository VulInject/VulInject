static int FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR3 **VAR5, VAR6 *VAR7)
{
    int VAR8 = VAR2->VAR9, VAR10;
    while (VAR8--)
    {
        VAR3 *VAR11 = *VAR4;
        if (!VAR11)
        {
            FUN2(VAR7, VAR12, ""%VAR13\"", VAR2->VAR14->VAR15);
            return FUN3(VAR16);
        }
        *VAR4 = (*VAR4)->VAR17;
        if (VAR11->VAR14)
        {
            if ((VAR10 = FUN4(VAR11->VAR14, VAR11->VAR18, VAR2, VAR8, VAR7)) < 0)
                return VAR10;
            FUN5(VAR11->VAR15);
            FUN5(VAR11);
        }
        else
        {
            VAR11->VAR14 = VAR2;
            VAR11->VAR18 = VAR8;
            FUN6(VAR5, VAR11);
        }
    }
    if (*VAR4)
    {
        FUN2(VAR7, VAR12, ""%VAR13\"", VAR2->VAR14->VAR15);
        return FUN3(VAR16);
    }
    VAR8 = VAR2->VAR19;
    while (VAR8--)
    {
        VAR3 *VAR20 = FUN7(sizeof(VAR3));
        VAR20->VAR14 = VAR2;
        VAR20->VAR18 = VAR8;
        FUN6(VAR4, VAR20);
    }
    return 0;