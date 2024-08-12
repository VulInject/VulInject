static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &VAR12->VAR15;
    VAR16 *VAR17 = VAR3;
    int VAR18;
    VAR15->VAR19 = VAR2->VAR19;
    VAR15->VAR20 = VAR2->VAR20;
VAR21:
    if (VAR9 == 0)
    {
        VAR22 *VAR21;
        int VAR23, VAR24;
        VAR15->VAR25 = NULL;
        VAR21 = VAR12->VAR26[0];
        VAR24 = 0;
        for (VAR23 = 1; VAR12->VAR26[VAR23] && !VAR12->VAR26[VAR23]->VAR27 && !VAR12->VAR26[VAR23]->VAR28; VAR23++)
            if (VAR12->VAR26[VAR23]->VAR29 < VAR21->VAR29)
            {
                VAR21 = VAR12->VAR26[VAR23];
                VAR24 = VAR23;
            }
        for (VAR23 = VAR24; VAR12->VAR26[VAR23]; VAR23++)
            VAR12->VAR26[VAR23] = VAR12->VAR26[VAR23 + 1];
        if (VAR21)
        {
            *VAR4 = sizeof(VAR16);
            *VAR17 = *(VAR16 *)VAR21;
        }
        return 0;
    }
    VAR18 = FUN2(VAR12, VAR8, VAR9);
    if (VAR18 < 0)
        return -1;
    if (!VAR15->VAR25 && VAR12->VAR30 == VAR31)
    {
        VAR9 = 0;
        goto VAR21;
    }
    if (!(VAR15->VAR20 & VAR32) && !VAR15->VAR25)
    {
        if (VAR2->VAR33 >= VAR34)
            return 0;
        FUN3(VAR2, VAR35, "");
        return -1;
    }
    if (!(VAR15->VAR20 & VAR32) || (VAR15->VAR36 >= VAR15->VAR37 && VAR15->VAR37))
    {
        if (VAR15->VAR20 & VAR32)
            FUN4(VAR12);
        FUN5(VAR12, 0);
        if (!VAR12->VAR38)
        {
            *VAR4 = 0;
        }
        else
        {
            *VAR4 = sizeof(VAR16);
            *VAR17 = *(VAR16 *)VAR12->VAR38;
        }
    }
    assert(VAR17->VAR3[0] || !*VAR4);
    FUN6(VAR15, VAR17);
    return FUN7(VAR15, VAR18, VAR9);
}