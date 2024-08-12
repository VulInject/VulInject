static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR11;
    VAR12 *VAR13 = &VAR11->VAR13;
    int VAR14 = VAR6->VAR15;
    int VAR16, VAR17, VAR18;
    VAR19 *VAR20;
    if (VAR14 == 0)
    {
        if (VAR13->VAR21 && !VAR13->VAR22)
        {
            *(VAR23 *)VAR3 = *(VAR23 *)&VAR13->VAR24;
            VAR13->VAR21 = NULL;
            *VAR4 = sizeof(VAR23);
        }
        return 0;
    }
    VAR13->VAR25 = VAR13->VAR26 = VAR11->VAR27 = 0;
    if (VAR8->VAR28)
    {
        VAR8->VAR20 = FUN2(VAR8->VAR20, &VAR8->VAR14, VAR14 + VAR29);
        if (!VAR8->VAR20)
            return FUN3(VAR30);
        memcpy(VAR8->VAR20, VAR6->VAR3, VAR14);
        VAR20 = VAR8->VAR20;
    }
    else
    {
        VAR20 = VAR6->VAR3;
    }
    FUN4(&VAR13->VAR31, VAR20, 8 * VAR14);
    if (FUN5(VAR2))
        return -1;
    VAR13->VAR32 = VAR11->VAR33;
    VAR13->VAR34 = VAR11->VAR35;
    if (VAR2->VAR36 & VAR37)
    {
        FUN6(VAR11->VAR13.VAR2, VAR38, "", FUN7(VAR13->VAR32), VAR8->VAR39, VAR8->VAR40, VAR13->VAR41, VAR13->VAR42, VAR11->VAR35);
    }
    VAR13->VAR43.VAR32 = VAR13->VAR32;
    VAR13->VAR43.VAR44 = (VAR13->VAR32 == VAR45);
    if (VAR13->VAR46 == NULL && VAR13->VAR32 == VAR47)
        return 0;
    if ((VAR2->VAR48 >= VAR49 && VAR13->VAR32 == VAR47) || (VAR2->VAR48 >= VAR50 && VAR13->VAR32 != VAR45) || VAR2->VAR48 >= VAR51)
        return 0;
    if (VAR13->VAR52)
    {
        if (VAR13->VAR32 == VAR47)
            return 0;
        else
            VAR13->VAR52 = 0;
    }
    if (FUN8(VAR11) < 0)
        return -1;
    if (VAR13->VAR32 == VAR47)
    {
        VAR11->VAR53 = (VAR11->VAR35 - VAR11->VAR54);
        if (VAR11->VAR53 < 0)
        {
            VAR11->VAR53 += 256;
        }
        if (VAR11->VAR53 == 0 || VAR11->VAR53 >= VAR11->VAR55)
        {
            FUN6(VAR11->VAR13.VAR2, VAR56, "");
            return -1;
        }
    }
    else
    {
        VAR11->VAR54 = VAR11->VAR57;
        VAR11->VAR57 = VAR11->VAR35;
        VAR11->VAR55 = (VAR11->VAR57 - VAR11->VAR54);
        if (VAR11->VAR55 < 0)
        {
            VAR11->VAR55 += 256;
        }
    }
    for (VAR16 = 0; VAR16 < 2; VAR16++)
    {
        int VAR58;
        for (VAR58 = 0; VAR58 < 4; VAR58++)
        {
            int VAR59;
            for (VAR59 = -1; VAR59 < 4; VAR59++)
                VAR11->VAR60[VAR16][VAR61[0] + 8 * VAR58 + VAR59] = 1;
            if (VAR58 < 3)
                VAR11->VAR60[VAR16][VAR61[0] + 8 * VAR58 + VAR59] = VAR62;
        }
    }
    for (VAR13->VAR26 = 0; VAR13->VAR26 < VAR13->VAR63; VAR13->VAR26++)
    {
        for (VAR13->VAR25 = 0; VAR13->VAR25 < VAR13->VAR64; VAR13->VAR25++)
        {
            VAR11->VAR27 = VAR13->VAR25 + VAR13->VAR26 * VAR13->VAR65;
            if ((FUN9(&VAR13->VAR31) + 7) >= VAR13->VAR31.VAR66 && ((FUN9(&VAR13->VAR31) & 7) == 0 || FUN10(&VAR13->VAR31, (-FUN9(&VAR13->VAR31) & 7)) == 0))
            {
                FUN11(&VAR13->VAR31, VAR8->VAR67 - FUN9(&VAR13->VAR31));
                VAR13->VAR31.VAR66 = 8 * VAR14;
                if (FUN5(VAR2))
                    return -1;
            }
            VAR17 = FUN12(&VAR13->VAR31);
            if (VAR13->VAR32 == VAR45)
            {
                VAR17 += 8;
            }
            else if (VAR13->VAR32 == VAR47 && VAR17 >= 4)
            {
                VAR17 += 4;
            }
            if (VAR17 > 33 || FUN13(VAR8, VAR17))
            {
                FUN6(VAR11->VAR13.VAR2, VAR56, "", VAR13->VAR25, VAR13->VAR26);
                return -1;
            }
            if (VAR17 != 0)
            {
                FUN14(VAR11);
            }
            if (VAR13->VAR32 != VAR47 && !VAR13->VAR22)
            {
                VAR13->VAR43.VAR17[VAR13->VAR25 + VAR13->VAR26 * VAR13->VAR65] = (VAR13->VAR32 == VAR68 && VAR17 < 8) ? (VAR17 - 1) : -1;
            }
        }
        FUN15(VAR13, 16 * VAR13->VAR26, 16);
    }
    VAR18 = VAR14 * 8 - FUN9(&VAR13->VAR31);
    if (VAR13->VAR26 != VAR13->VAR63 || VAR13->VAR25 != VAR13->VAR64)
    {
        FUN6(VAR2, VAR69, "", VAR2->VAR70, VAR13->VAR26, VAR13->VAR25, VAR18);
    }
    if (VAR18 < 0)
    {
        FUN6(VAR2, VAR56, "", VAR2->VAR70, VAR18);
        return -1;
    }
    FUN16(VAR13);
    if (VAR13->VAR32 == VAR47 || VAR13->VAR22)
    {
        *(VAR23 *)VAR3 = *(VAR23 *)&VAR13->VAR43;
    }
    else
    {
        *(VAR23 *)VAR3 = *(VAR23 *)&VAR13->VAR71;
    }
    if (VAR13->VAR46 || VAR13->VAR22)
    {
        *VAR4 = sizeof(VAR23);
    }
    return VAR14;
}