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
        {
            VAR2->VAR21 = VAR20.VAR22;
            if (!VAR4->VAR23)
                VAR4->VAR23 = VAR20.VAR24;
            if (VAR11->VAR25->VAR18 & VAR26)
            {
                VAR11->VAR25->VAR27 = VAR20.VAR28;
                if (!VAR20.VAR29)
                    VAR11->VAR25->VAR27 *= VAR20.VAR22;
            }
        }
        *VAR6 = VAR8;
        *VAR7 = VAR9;
        return VAR9;
    }
    VAR11->VAR4 = VAR4;
    if (VAR11->VAR30)
        return FUN3(VAR11, VAR6, VAR7);
    if (VAR11->VAR31 && VAR11->VAR31->VAR32)
    {
        VAR13 *VAR33;
        VAR13 *VAR32 = VAR11->VAR31->VAR32;
        for (VAR14 = VAR11->VAR34; VAR14 != VAR32; VAR14 = VAR33)
        {
            if (VAR14 != VAR11->VAR31)
            {
                FUN4(VAR4, VAR35, "", VAR14->VAR36, VAR14->VAR37, VAR14->VAR38->VAR37);
            }
            VAR33 = VAR14->VAR38;
            FUN5(&VAR14->VAR39);
            FUN6(VAR14);
        }
        FUN7(VAR11->VAR40, VAR32->VAR37);
        for (VAR14 = VAR32->VAR38; VAR14; VAR14 = VAR14->VAR38)
            VAR14->VAR37 -= VAR32->VAR37;
        VAR32->VAR37 = 0;
        VAR11->VAR34 = VAR32;
        if (VAR11->VAR41 >= VAR42)
        {
            VAR11->VAR31 = VAR32;
            return FUN3(VAR11, VAR6, VAR7);
        }
        VAR11->VAR31 = NULL;
    }
    else if (VAR11->VAR31)
    {
        VAR13 *VAR33;
        for (VAR14 = VAR11->VAR34; VAR14 != VAR11->VAR31; VAR14 = VAR33)
        {
            VAR33 = VAR14->VAR38;
            FUN5(&VAR14->VAR39);
            FUN6(VAR14);
        }
        VAR11->VAR34 = VAR11->VAR31->VAR38;
        FUN5(&VAR11->VAR31->VAR39);
        FUN5(&VAR11->VAR31);
    }
    while ((VAR8 && VAR9 && VAR16 < VAR8 + VAR9 && VAR11->VAR41 < VAR42) || ((!VAR8 || !VAR9) && !VAR11->VAR43))
    {
        int VAR44;
        if (!VAR8 || !VAR9)
        {
            VAR11->VAR43 = 1;
            VAR9 = VAR45;
            VAR16 = VAR17 + VAR45;
        }
        else
        {
            int VAR46 = VAR42 - VAR11->VAR41 + 1;
            VAR16 = VAR16 + FUN8(VAR8 + VAR9 - VAR16, VAR46 * VAR47);
        }
        if (!FUN9(VAR11->VAR40) && FUN10(VAR11->VAR40) / VAR47 > VAR11->VAR41 * 20)
        {
            goto VAR48;
        }
        if (FUN9(VAR11->VAR40) < VAR16 - VAR17 && FUN11(VAR11->VAR40, (VAR16 - VAR17) + 2 * FUN10(VAR11->VAR40)) < 0)
        {
            FUN4(VAR4, VAR49, "" VAR50 "", (VAR16 - VAR17) + FUN10(VAR11->VAR40));
            goto VAR48;
        }
        if (VAR8 && VAR9)
        {
            FUN12(VAR11->VAR40, (void *)VAR17, VAR16 - VAR17, NULL);
        }
        else
        {
            int8_t VAR51[VAR45] = {0};
            FUN12(VAR11->VAR40, (void *)VAR51, sizeof(VAR51), NULL);
        }
        VAR44 = FUN10(VAR11->VAR40) - ((VAR16 - VAR17) + (VAR45 - 1));
        VAR44 = FUN13(0, VAR44);
        VAR15 = FUN14(VAR11, VAR44);
        if (VAR15 < 0)
        {
            FUN4(VAR4, VAR49, "");
            goto VAR48;
        }
        VAR11->VAR41 = VAR15;
        if (!VAR11->VAR43 && VAR11->VAR41 < VAR42)
        {
            if (VAR8 && VAR16 < VAR8 + VAR9)
            {
                VAR17 = VAR16;
                continue;
            }
            else
            {
                goto VAR48;
            }
        }
        if (VAR11->VAR43 || VAR11->VAR52)
            FUN15(VAR11);
        if (VAR11->VAR43)
        {
            int VAR53 = VAR11->VAR40->VAR54 - VAR11->VAR40->VAR55 < VAR45;
            VAR11->VAR40->VAR54 -= VAR45;
            VAR11->VAR40->VAR56 -= VAR45;
            if (VAR53)
            {
                VAR11->VAR40->VAR54 += VAR11->VAR40->VAR57 - VAR11->VAR40->VAR55;
            }
            VAR9 = 0;
            VAR17 = VAR16 = NULL;
        }
    }
    for (VAR14 = VAR11->VAR34; VAR14; VAR14 = VAR14->VAR38)
    {
        if (VAR14->VAR36 > 0 && (!VAR11->VAR31 || VAR14->VAR36 > VAR11->VAR31->VAR36))
        {
            VAR11->VAR31 = VAR14;
        }
    }
    if (VAR11->VAR31)
    {
        VAR11->VAR30 = 1;
        if (VAR11->VAR31->VAR37 > 0)
        {
            FUN4(VAR4, VAR35, "", VAR11->VAR31->VAR37);
            VAR2->VAR21 = 0;
            *VAR7 = VAR11->VAR31->VAR37;
            *VAR6 = FUN16(VAR11, 0, *VAR7, &VAR11->VAR58, &VAR11->VAR59);
            return VAR9 ? (VAR16 - VAR8) : (VAR11->VAR31->VAR37 - FUN10(VAR11->VAR40));
        }
        if (!VAR9)
            return FUN3(VAR11, VAR6, VAR7);
    }
VAR48:
    *VAR6 = NULL;
    *VAR7 = 0;
    return VAR9 ? VAR16 - VAR8 : 0;