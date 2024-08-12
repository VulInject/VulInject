static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14;
    int VAR15;
    const VAR5 *VAR16 = VAR8;
    const VAR5 *VAR17 = VAR8;
    if (VAR2->VAR18 & VAR19)
    {
        FLACFrameInfo VAR20;
        if (FUN2(VAR4, VAR8, &VAR20))
            VAR4->VAR21 = VAR20.VAR22;
        *VAR6 = VAR8;
        *VAR7 = VAR9;
        return VAR9;
    }
    VAR11->VAR4 = VAR4;
    if (VAR11->VAR23)
        return FUN3(VAR11, VAR6, VAR7);
    if (VAR11->VAR24 && VAR11->VAR24->VAR25)
    {
        VAR13 *VAR26;
        VAR13 *VAR25 = VAR11->VAR24->VAR25;
        for (VAR14 = VAR11->VAR27; VAR14 != VAR25; VAR14 = VAR26)
        {
            if (VAR14 != VAR11->VAR24)
            {
                FUN4(VAR4, VAR28, "", VAR14->VAR29, VAR14->VAR30, VAR14->VAR31->VAR30);
            }
            VAR26 = VAR14->VAR31;
            FUN5(&VAR14->VAR32);
            FUN6(VAR14);
            VAR11->VAR33--;
        }
        FUN7(VAR11->VAR34, VAR25->VAR30);
        for (VAR14 = VAR25->VAR31; VAR14; VAR14 = VAR14->VAR31)
            VAR14->VAR30 -= VAR25->VAR30;
        VAR11->VAR33--;
        VAR25->VAR30 = 0;
        VAR11->VAR27 = VAR25;
        if (VAR11->VAR33 >= VAR35)
        {
            VAR11->VAR24 = VAR25;
            return FUN3(VAR11, VAR6, VAR7);
        }
        VAR11->VAR24 = NULL;
    }
    else if (VAR11->VAR24)
    {
        VAR13 *VAR26;
        for (VAR14 = VAR11->VAR27; VAR14 != VAR11->VAR24; VAR14 = VAR26)
        {
            VAR26 = VAR14->VAR31;
            FUN5(&VAR14->VAR32);
            FUN6(VAR14);
        }
        VAR11->VAR27 = VAR11->VAR24->VAR31;
        FUN5(&VAR11->VAR24->VAR32);
        FUN5(&VAR11->VAR24);
    }
    while ((VAR8 && VAR16 < VAR8 + VAR9 && VAR11->VAR33 < VAR35) || (!VAR8 && !VAR11->VAR36))
    {
        int VAR37;
        if (!VAR8)
        {
            VAR11->VAR36 = 1;
            VAR9 = VAR38;
            VAR16 = VAR17 + VAR38;
        }
        else
        {
            int VAR39 = VAR35 - VAR11->VAR33 + 1;
            VAR16 = VAR16 + FUN8(VAR8 + VAR9 - VAR16, VAR39 * VAR40);
        }
        if (FUN9(VAR11->VAR34, (VAR16 - VAR17) + FUN10(VAR11->VAR34)) < 0)
        {
            FUN4(VAR4, VAR41, "", (VAR16 - VAR17) + FUN10(VAR11->VAR34));
            goto VAR42;
        }
        if (VAR8)
        {
            FUN11(VAR11->VAR34, (void *)VAR17, VAR16 - VAR17, NULL);
        }
        else
        {
            int8_t VAR43[VAR38];
            memset(VAR43, 0, sizeof(VAR43));
            FUN11(VAR11->VAR34, (void *)VAR43, sizeof(VAR43), NULL);
        }
        VAR37 = FUN10(VAR11->VAR34) - ((VAR16 - VAR17) + (VAR38 - 1));
        VAR37 = FUN12(0, VAR37);
        VAR15 = FUN13(VAR11, VAR37);
        if (VAR15 < 0)
        {
            FUN4(VAR4, VAR41, "");
            goto VAR42;
        }
        VAR11->VAR33 = VAR15;
        if (!VAR11->VAR36 && VAR11->VAR33 < VAR35)
        {
            if (VAR8 && VAR16 < VAR8 + VAR9)
            {
                VAR17 = VAR16;
                continue;
            }
            else
            {
                goto VAR42;
            }
        }
        if (VAR11->VAR36 || VAR11->VAR44)
            FUN14(VAR11);
        if (VAR11->VAR36)
        {
            VAR11->VAR34->VAR45 -= VAR38;
            VAR11->VAR34->VAR46 -= VAR38;
            if (VAR11->VAR34->VAR45 < 0)
            {
                VAR11->VAR34->VAR45 += VAR11->VAR34->VAR47 - VAR11->VAR34->VAR48;
            }
            VAR9 = 0;
            VAR17 = VAR16 = NULL;
        }
    }
    VAR14 = VAR11->VAR27;
    for (VAR14 = VAR11->VAR27; VAR14; VAR14 = VAR14->VAR31)
        if (!VAR11->VAR24 || VAR14->VAR29 > VAR11->VAR24->VAR29)
            VAR11->VAR24 = VAR14;
    if (VAR11->VAR24)
    {
        VAR11->VAR23 = 1;
        if (VAR11->VAR24->VAR30 > 0)
        {
            FUN4(VAR4, VAR28, "", VAR11->VAR24->VAR30);
            VAR4->VAR21 = 0;
            *VAR7 = VAR11->VAR24->VAR30;
            *VAR6 = FUN15(VAR11, 0, *VAR7, &VAR11->VAR49, &VAR11->VAR50);
            return VAR9 ? (VAR16 - VAR8) : (VAR11->VAR24->VAR30 - FUN10(VAR11->VAR34));
        }
        if (!VAR9)
            return FUN3(VAR11, VAR6, VAR7);
    }
VAR42:
    *VAR6 = NULL;
    *VAR7 = 0;
    return VAR16 - VAR8;
}