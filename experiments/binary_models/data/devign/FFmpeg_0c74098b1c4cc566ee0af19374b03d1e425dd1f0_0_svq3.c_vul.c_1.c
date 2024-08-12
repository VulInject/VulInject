static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *const VAR9 = VAR2->VAR10;
    VAR11 *const VAR12 = VAR2->VAR10;
    int VAR13, VAR14;
    unsigned char *VAR15;
    unsigned int VAR16;
    VAR9->VAR17 = VAR2->VAR17;
    VAR9->VAR18 = VAR2->VAR18;
    VAR9->VAR19 = 1;
    if (!VAR9->VAR20)
    {
        VAR9->VAR21 = VAR2->VAR21;
        VAR9->VAR22 = VAR2->VAR22;
        VAR12->VAR23[VAR24] = VAR25;
        VAR12->VAR26[VAR27] = VAR28;
        VAR12->VAR29 = 1;
        VAR12->VAR30 = 1;
        VAR12->VAR31 = 0;
        VAR12->VAR32 = 4;
        if (FUN2(VAR9) < 0)
            return -1;
        VAR12->VAR33 = 4 * VAR9->VAR34;
        FUN3(VAR12);
        VAR15 = (unsigned char *)VAR2->VAR15;
        for (VAR13 = 0; VAR13 < VAR2->VAR35; VAR13++)
        {
            if (!memcmp(VAR15, "", 4))
                break;
            VAR15++;
        }
        if (VAR15 && !memcmp(VAR15, "", 4))
        {
            GetBitContext VAR36;
            VAR16 = FUN4(&VAR15[4]);
            FUN5(&VAR36, VAR15 + 8, VAR16 * 8);
            if (FUN6(&VAR36, 3) == 7)
            {
                FUN6(&VAR36, 12);
                FUN6(&VAR36, 12);
            }
            VAR12->VAR29 = FUN7(&VAR36);
            VAR12->VAR30 = FUN7(&VAR36);
            FUN7(&VAR36);
            FUN7(&VAR36);
            FUN7(&VAR36);
            FUN7(&VAR36);
            VAR9->VAR37 = FUN7(&VAR36);
            FUN7(&VAR36);
            while (FUN7(&VAR36))
            {
                FUN6(&VAR36, 8);
            }
            VAR12->VAR31 = FUN7(&VAR36);
            VAR2->VAR38 = !VAR9->VAR37;
        }
    }
    if (VAR7 == 0)
    {
        if (VAR9->VAR39 && !VAR9->VAR37)
        {
            *(VAR40 *)VAR3 = *(VAR40 *)&VAR9->VAR41;
            *VAR4 = sizeof(VAR40);
        }
        return 0;
    }
    FUN5(&VAR9->VAR36, VAR6, 8 * VAR7);
    VAR9->VAR42 = VAR9->VAR43 = 0;
    if (FUN8(VAR12))
        return -1;
    VAR9->VAR44 = VAR12->VAR45;
    VAR9->VAR46 = VAR12->VAR47;
    if (VAR2->VAR48 & VAR49)
    {
        FUN9(VAR12->VAR9.VAR2, VAR50, "", FUN10(VAR9->VAR44), VAR12->VAR29, VAR12->VAR30, VAR9->VAR51, VAR9->VAR52);
    }
    VAR9->VAR53.VAR44 = VAR9->VAR44;
    VAR9->VAR53.VAR54 = (VAR9->VAR44 == VAR55);
    if (VAR9->VAR56 == NULL && VAR9->VAR44 == VAR57)
        return 0;
    if (VAR2->VAR58 && VAR9->VAR44 == VAR57)
        return 0;
    if (VAR2->VAR58 >= 5)
        return 0;
    if ((VAR2->VAR59 >= VAR60 && VAR9->VAR44 == VAR57) || (VAR2->VAR59 >= VAR61 && VAR9->VAR44 != VAR55) || VAR2->VAR59 >= VAR62)
        return 0;
    if (VAR9->VAR63)
    {
        if (VAR9->VAR44 == VAR57)
            return 0;
        else
            VAR9->VAR63 = 0;
    }
    FUN11(VAR12);
    if (VAR9->VAR44 == VAR57)
    {
        VAR12->VAR64 = (VAR12->VAR47 - VAR12->VAR65);
        if (VAR12->VAR64 < 0)
        {
            VAR12->VAR64 += 256;
        }
        if (VAR12->VAR64 == 0 || VAR12->VAR64 >= VAR12->VAR66)
        {
            FUN9(VAR12->VAR9.VAR2, VAR67, "");
            return -1;
        }
    }
    else
    {
        VAR12->VAR65 = VAR12->VAR68;
        VAR12->VAR68 = VAR12->VAR47;
        VAR12->VAR66 = (VAR12->VAR68 - VAR12->VAR65);
        if (VAR12->VAR66 < 0)
        {
            VAR12->VAR66 += 256;
        }
    }
    for (VAR13 = 0; VAR13 < 2; VAR13++)
    {
        int VAR69;
        for (VAR69 = 0; VAR69 < 4; VAR69++)
        {
            int VAR70;
            for (VAR70 = -1; VAR70 < 4; VAR70++)
                VAR12->VAR71[VAR13][VAR72[0] + 8 * VAR69 + VAR70] = 1;
            VAR12->VAR71[VAR13][VAR72[0] + 8 * VAR69 + VAR70] = VAR73;
        }
    }
    for (VAR9->VAR43 = 0; VAR9->VAR43 < VAR9->VAR74; VAR9->VAR43++)
    {
        for (VAR9->VAR42 = 0; VAR9->VAR42 < VAR9->VAR34; VAR9->VAR42++)
        {
            if ((FUN12(&VAR9->VAR36) + 7) >= VAR9->VAR36.VAR75 && ((FUN12(&VAR9->VAR36) & 7) == 0 || FUN13(&VAR9->VAR36, (-FUN12(&VAR9->VAR36) & 7)) == 0))
            {
                FUN14(&VAR9->VAR36, VAR12->VAR76 - FUN12(&VAR9->VAR36));
                VAR9->VAR36.VAR75 = 8 * VAR7;
                if (FUN8(VAR12))
                    return -1;
            }
            VAR14 = FUN15(&VAR9->VAR36);
            if (VAR9->VAR44 == VAR55)
            {
                VAR14 += 8;
            }
            else if (VAR9->VAR44 == VAR57 && VAR14 >= 4)
            {
                VAR14 += 4;
            }
            if (VAR14 > 33 || FUN16(VAR12, VAR14))
            {
                FUN9(VAR12->VAR9.VAR2, VAR67, "", VAR9->VAR42, VAR9->VAR43);
                return -1;
            }
            if (VAR14 != 0)
            {
                FUN17(VAR12);
            }
            if (VAR9->VAR44 != VAR57 && !VAR9->VAR37)
            {
                VAR9->VAR53.VAR14[VAR9->VAR42 + VAR9->VAR43 * VAR9->VAR77] = (VAR9->VAR44 == VAR78 && VAR14 < 8) ? (VAR14 - 1) : -1;
            }
        }
        FUN18(VAR9, 16 * VAR9->VAR43, 16);
    }
    FUN19(VAR9);
    if (VAR9->VAR44 == VAR57 || VAR9->VAR37)
    {
        *(VAR40 *)VAR3 = *(VAR40 *)&VAR9->VAR53;
    }
    else
    {
        *(VAR40 *)VAR3 = *(VAR40 *)&VAR9->VAR79;
    }
    VAR2->VAR80 = VAR9->VAR46 - 1;
    if (VAR9->VAR56 || VAR9->VAR37)
    {
        *VAR4 = sizeof(VAR40);
    }
    return VAR7;
}