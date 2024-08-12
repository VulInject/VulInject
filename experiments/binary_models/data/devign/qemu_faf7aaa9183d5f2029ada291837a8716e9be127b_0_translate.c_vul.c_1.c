FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    DisasContext VAR6;
    target_ulong VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11 = -1;
    if (VAR5 && VAR12)
        fprintf(VAR13, "", VAR5);
    VAR7 = VAR4->VAR14;
    VAR9 = VAR15 + VAR16;
    VAR6.VAR14 = VAR7;
    VAR6.VAR17 = -1;
    VAR6.VAR4 = VAR4;
    VAR6.VAR18 = VAR19;
    VAR6.VAR20 = (VAR21)VAR4->VAR22;
    FUN2(VAR2, &VAR6);
    VAR6.VAR23 = VAR24;
    VAR6.VAR23 = VAR6.VAR20 & VAR25;
    if (VAR12 & VAR26)
    {
        fprintf(VAR13, "");
        FUN3(VAR2, VAR13, fprintf, 0);
    }
    if (VAR12 & VAR27)
        fprintf(VAR13, "", VAR4, VAR6.VAR23, VAR6.VAR20);
    while (VAR6.VAR18 == VAR19 && VAR28 < VAR9)
    {
        if (VAR2->VAR29 > 0)
        {
            for (VAR10 = 0; VAR10 < VAR2->VAR29; VAR10++)
            {
                if (VAR2->VAR30[VAR10] == VAR6.VAR14)
                {
                    FUN4(&VAR6, 1);
                    VAR6.VAR18 = VAR31;
                    FUN5();
                    VAR6.VAR14 += 4;
                    goto VAR32;
                }
            }
        }
        if (VAR5)
        {
            VAR10 = VAR28 - VAR15;
            if (VAR11 < VAR10)
            {
                VAR11++;
                while (VAR11 < VAR10)
                    VAR33[VAR11++] = 0;
            }
            VAR34[VAR11] = VAR6.VAR14;
            VAR35[VAR11] = VAR6.VAR20 & VAR36;
            VAR33[VAR11] = 1;
        }
        VAR6.VAR37 = FUN6(VAR6.VAR14);
        FUN7(VAR2, &VAR6);
        VAR6.VAR14 += 4;
        if (VAR2->VAR38)
            break;
        if ((VAR6.VAR14 & (VAR39 - 1)) == 0)
            break;
        break;
    }
    if (VAR2->VAR38)
    {
        FUN4(&VAR6, VAR6.VAR18 == VAR19);
        FUN5();
    }
    else
    {
        switch (VAR6.VAR18)
        {
        case VAR40:
            FUN8(VAR41);
            FUN9(&VAR6, 0, VAR6.VAR14);
            break;
        case VAR19:
            FUN4(&VAR6, 0);
            FUN9(&VAR6, 0, VAR6.VAR14);
            break;
        case VAR42:
            FUN8(VAR41);
            FUN10(0);
            break;
        case VAR31:
        default:
            break;
        }
    }
VAR32:
    *VAR28 = VAR43;
    if (VAR5)
    {
        VAR10 = VAR28 - VAR15;
        VAR11++;
        while (VAR11 <= VAR10)
            VAR33[VAR11++] = 0;
    }
    else
    {
        VAR4->VAR44 = VAR6.VAR14 - VAR7;
    }
    if (VAR12 & VAR27)
        fprintf(VAR13, "");
    if (VAR12 & VAR27)
    {
        fprintf(VAR13, "", FUN11(VAR7));
        FUN12(VAR13, VAR7, VAR6.VAR14 - VAR7, 0);
        fprintf(VAR13, "");
    }
    if (VAR12 & VAR26)
    {
        fprintf(VAR13, "", VAR6.VAR18, VAR6.VAR20);
    }
    return 0;
}