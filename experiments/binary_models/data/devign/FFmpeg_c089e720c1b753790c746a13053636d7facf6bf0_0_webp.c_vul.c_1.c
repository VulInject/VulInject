static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7, unsigned int VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    if (!VAR9)
    {
        VAR11->VAR17 = 1;
        VAR2->VAR18 = VAR19;
    }
    VAR15 = FUN2(&VAR11->VAR20, VAR7, VAR8);
    if (VAR15 < 0)
        return VAR15;
    if (!VAR9)
    {
        if (FUN3(&VAR11->VAR20, 8) != 0x2F)
        {
            FUN4(VAR2, VAR21, "");
            return VAR22;
        }
        VAR13 = FUN3(&VAR11->VAR20, 14) + 1;
        VAR14 = FUN3(&VAR11->VAR20, 14) + 1;
        if (VAR11->VAR23 && VAR11->VAR23 != VAR13)
        {
            FUN4(VAR2, VAR24, "", VAR11->VAR23, VAR13);
        }
        VAR11->VAR23 = VAR13;
        if (VAR11->VAR25 && VAR11->VAR25 != VAR14)
        {
            FUN4(VAR2, VAR24, "", VAR11->VAR23, VAR13);
        }
        VAR11->VAR25 = VAR14;
        VAR15 = FUN5(VAR2, VAR11->VAR23, VAR11->VAR25);
        if (VAR15 < 0)
            return VAR15;
        VAR11->VAR26 = FUN6(&VAR11->VAR20);
        if (FUN3(&VAR11->VAR20, 3) != 0x0)
        {
            FUN4(VAR2, VAR21, "");
            return VAR22;
        }
    }
    else
    {
        if (!VAR11->VAR23 || !VAR11->VAR25)
            return VAR27;
        VAR13 = VAR11->VAR23;
        VAR14 = VAR11->VAR25;
    }
    VAR11->VAR28 = 0;
    VAR11->VAR29 = 0;
    while (FUN6(&VAR11->VAR20))
    {
        enum TransformType VAR30 = FUN3(&VAR11->VAR20, 2);
        VAR11->VAR31[VAR11->VAR28++] = VAR30;
        switch (VAR30)
        {
        case VAR32:
            VAR15 = FUN7(VAR11);
            break;
        case VAR33:
            VAR15 = FUN8(VAR11);
            break;
        case VAR34:
            VAR15 = FUN9(VAR11);
            break;
        }
        if (VAR15 < 0)
            goto VAR35;
    }
    VAR11->VAR36[VAR37].VAR38 = VAR4;
    if (VAR9)
        VAR11->VAR36[VAR37].VAR39 = 1;
    VAR15 = FUN10(VAR11, VAR37, VAR13, VAR14);
    if (VAR15 < 0)
        goto VAR35;
    for (VAR16 = VAR11->VAR28 - 1; VAR16 >= 0; VAR16--)
    {
        switch (VAR11->VAR31[VAR16])
        {
        case VAR32:
            VAR15 = FUN11(VAR11);
            break;
        case VAR33:
            VAR15 = FUN12(VAR11);
            break;
        case VAR40:
            VAR15 = FUN13(VAR11);
            break;
        case VAR34:
            VAR15 = FUN14(VAR11);
            break;
        }
        if (VAR15 < 0)
            goto VAR35;
    }
    *VAR5 = 1;
    VAR4->VAR41 = VAR42;
    VAR4->VAR43 = 1;
    VAR15 = VAR8;
VAR35:
    for (VAR16 = 0; VAR16 < VAR44; VAR16++)
        FUN15(&VAR11->VAR36[VAR16]);
    return VAR15;
}