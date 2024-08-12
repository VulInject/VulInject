static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11;
    int VAR12 = 0;
    int VAR13;
    int VAR14, VAR15;
    if (VAR6->VAR16 >= VAR6->VAR17)
        VAR11 = &VAR6->VAR18[VAR6->VAR16];
    FUN2(VAR9, VAR11->VAR19, VAR20);
    if ((VAR11->VAR21 == VAR6->VAR22) && (VAR6->VAR23 == VAR24))
    {
        VAR4->VAR25 = FUN3(VAR9);
        if (FUN4(VAR4, VAR11->VAR26))
            return FUN5(VAR27);
        FUN6(VAR9, VAR4->VAR28, VAR11->VAR26);
    }
    else if ((VAR11->VAR21 == VAR6->VAR29) && (VAR6->VAR30 == 2) && (VAR6->VAR31 != VAR32))
    {
        if (FUN4(VAR4, VAR11->VAR26))
            return FUN5(VAR27);
        if (VAR11->VAR26 > VAR6->VAR33)
        {
            FUN7(VAR6->VAR34);
            VAR6->VAR33 = VAR11->VAR26;
            VAR6->VAR34 = FUN8(VAR6->VAR33);
            if (!VAR6->VAR34)
            {
                VAR6->VAR33 = 0;
                return FUN5(VAR27);
            }
        }
        VAR4->VAR25 = FUN3(VAR9);
        VAR12 = FUN6(VAR9, VAR6->VAR34, VAR11->VAR26);
        if (VAR12 != VAR11->VAR26)
            VAR12 = FUN5(VAR35);
        VAR14 = 0;
        VAR15 = VAR11->VAR26 / 2;
        for (VAR13 = 0; VAR13 < VAR11->VAR26;)
        {
            if (VAR6->VAR36 == 8)
            {
                VAR4->VAR28[VAR13++] = VAR6->VAR34[VAR14++];
                VAR4->VAR28[VAR13++] = VAR6->VAR34[VAR15++];
            }
            else
            {
                VAR4->VAR28[VAR13++] = VAR6->VAR34[VAR14++];
                VAR4->VAR28[VAR13++] = VAR6->VAR34[VAR14++];
                VAR4->VAR28[VAR13++] = VAR6->VAR34[VAR15++];
                VAR4->VAR28[VAR13++] = VAR6->VAR34[VAR15++];
            }
        }
    }
    else
    {
        VAR12 = FUN9(VAR9, VAR4, VAR11->VAR26);
        if (VAR12 != VAR11->VAR26)
            VAR12 = FUN5(VAR35);
    }
    VAR4->VAR37 = VAR11->VAR21;
    VAR4->VAR38 = VAR11->VAR38;
    VAR6->VAR16++;
    return VAR12;