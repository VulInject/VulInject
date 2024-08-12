static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6;
    FUN2(!VAR2->VAR7->VAR8->VAR9[0]);
    if (!VAR4)
        VAR4 = VAR2->VAR7->VAR10;
    VAR2->VAR11 = 1;
    if (VAR2->VAR7->VAR12)
        return VAR13;
    if (VAR2->VAR14 == VAR15)
    {
        VAR6 = FUN3(VAR2, VAR2->VAR7->VAR8, &VAR5, VAR4);
        if (VAR6 >= 0 && !(VAR2->VAR16 & VAR17))
            VAR6 = VAR4->VAR18;
    }
    else if (VAR2->VAR14 == VAR19)
    {
        VAR6 = FUN4(VAR2, VAR2->VAR7->VAR8, &VAR5, VAR4);
    }
    else
    {
        VAR6 = FUN5(VAR20);
    }
    if (VAR6 == FUN5(VAR21))
        VAR6 = VAR4->VAR18;
    if (VAR2->VAR7->VAR22 && !VAR5)
        VAR2->VAR7->VAR12 = 1;
    if (VAR6 < 0)
        return VAR6;
    if (VAR6 >= VAR4->VAR18)
    {
        FUN6(VAR2->VAR7->VAR10);
    }
    else
    {
        int VAR23 = VAR6;
        if (VAR4 != VAR2->VAR7->VAR10)
        {
            FUN6(VAR2->VAR7->VAR10);
            if ((VAR6 = FUN7(VAR2->VAR7->VAR10, VAR4)) < 0)
                return VAR6;
        }
        VAR2->VAR7->VAR10->VAR24 += VAR23;
        VAR2->VAR7->VAR10->VAR18 -= VAR23;
        VAR2->VAR7->VAR10->VAR25 = VAR26;
        VAR2->VAR7->VAR10->VAR27 = VAR26;
    }
    if (VAR5)
        FUN2(VAR2->VAR7->VAR8->VAR9[0]);
    return 0;
}