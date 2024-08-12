static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    DisasContext VAR10, *VAR11 = &VAR10;
    target_ulong VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17, VAR18;
    uint64_t VAR19;
    target_ulong VAR20;
    target_ulong VAR21;
    int VAR22;
    int VAR23;
    VAR20 = VAR4->VAR24;
    VAR21 = VAR4->VAR21;
    VAR19 = VAR4->VAR19;
    VAR11->VAR25 = (VAR19 >> VAR26) & 1;
    VAR11->VAR27 = (VAR19 >> VAR28) & 1;
    VAR11->VAR29 = (VAR19 >> VAR30) & 1;
    VAR11->VAR31 = (VAR19 >> VAR32) & 1;
    VAR11->VAR33 = 0;
    VAR11->VAR34 = (VAR19 >> VAR35) & 1;
    VAR11->VAR36 = (VAR19 >> VAR37) & 3;
    VAR11->VAR38 = (VAR19 >> VAR39) & 3;
    VAR11->VAR40 = (VAR19 >> VAR41) & 1;
    VAR11->VAR42 = VAR7->VAR42;
    VAR11->VAR43 = VAR44;
    VAR11->VAR45 = false;
    VAR11->VAR21 = VAR21;
    VAR11->VAR4 = VAR4;
    VAR11->VAR46 = 0;
    VAR11->VAR47 = 0;
    if (VAR19 & VAR48)
    {
        VAR11->VAR47 = FUN3(VAR9);
    }
    VAR11->VAR49 = VAR9->VAR50[VAR51];
    VAR11->VAR52 = VAR9->VAR50[VAR53];
    VAR11->VAR54 = VAR9->VAR50[VAR55];
    VAR11->VAR56 = VAR9->VAR50[VAR57];
    VAR11->VAR58 = VAR9->VAR50[VAR59];
    VAR11->VAR60 = (VAR19 >> VAR61) & 1;
    VAR11->VAR62 = (VAR19 >> VAR63) & 1;
    VAR11->VAR19 = VAR19;
    VAR11->VAR64 = !(VAR11->VAR40 || VAR7->VAR42 || (VAR19 & VAR65) || (VAR19 & VAR48));
    VAR11->VAR66 = !VAR11->VAR64 && !(VAR4->VAR67 & VAR68);
    if (!VAR11->VAR31 && (VAR11->VAR34 || !VAR11->VAR25 || !VAR11->VAR27))
        FUN4("");
    VAR69[0] = FUN5();
    VAR69[1] = FUN5();
    VAR70 = FUN5();
    VAR71 = FUN5();
    VAR72 = FUN6();
    VAR73 = FUN7();
    VAR74 = FUN7();
    VAR75 = FUN5();
    VAR76 = FUN8();
    VAR77 = FUN8();
    VAR78 = FUN9();
    VAR14 = VAR79.VAR80 + VAR81;
    VAR11->VAR82 = VAR83;
    VAR12 = VAR20;
    VAR18 = -1;
    VAR22 = 0;
    VAR23 = VAR4->VAR67 & VAR84;
    if (VAR23 == 0)
        VAR23 = VAR84;
    FUN10(VAR4);
    for (;;)
    {
        if (FUN11(!FUN12(&VAR7->VAR85)))
        {
            FUN13(VAR16, &VAR7->VAR85, VAR86)
            {
                if (VAR16->VAR24 == VAR12 && !((VAR16->VAR19 & VAR87) && (VAR4->VAR19 & VAR88)))
                {
                    FUN14(VAR11, VAR12 - VAR11->VAR21);
                    goto VAR89;
                }
            }
        }
        if (VAR5)
        {
            VAR17 = VAR79.VAR90 - VAR79.VAR80;
            if (VAR18 < VAR17)
            {
                VAR18++;
                while (VAR18 < VAR17)
                    VAR79.VAR91[VAR18++] = 0;
            }
            VAR79.VAR92[VAR18] = VAR12;
            VAR93[VAR18] = VAR11->VAR43;
            VAR79.VAR91[VAR18] = 1;
            VAR79.VAR94[VAR18] = VAR22;
        }
        if (VAR22 + 1 == VAR23 && (VAR4->VAR67 & VAR95))
            FUN15();
        VAR12 = FUN16(VAR9, VAR11, VAR12);
        VAR22++;
        if (VAR11->VAR82)
            break;
        if (VAR11->VAR40 || VAR11->VAR42 || (VAR19 & VAR65))
        {
            FUN17(VAR12 - VAR11->VAR21);
            FUN18(VAR11);
            break;
        }
        if ((VAR4->VAR67 & VAR68) && ((VAR12 & VAR96) != ((VAR12 + VAR97 - 1) & VAR96) || (VAR12 & ~VAR96) == 0))
        {
            FUN17(VAR12 - VAR11->VAR21);
            FUN18(VAR11);
            break;
        }
        if (VAR79.VAR90 >= VAR14 || (VAR12 - VAR20) >= (VAR98 - 32) || VAR22 >= VAR23)
        {
            FUN17(VAR12 - VAR11->VAR21);
            FUN18(VAR11);
            break;
        }
        if (VAR99)
        {
            FUN17(VAR12 - VAR11->VAR21);
            FUN18(VAR11);
            break;
        }
    }
    if (VAR4->VAR67 & VAR95)
        FUN19();
VAR89:
    FUN20(VAR4, VAR22);
    *VAR79.VAR90 = VAR100;
    if (VAR5)
    {
        VAR17 = VAR79.VAR90 - VAR79.VAR80;
        VAR18++;
        while (VAR18 <= VAR17)
            VAR79.VAR91[VAR18++] = 0;
    }
    if (FUN21(VAR101))
    {
        int VAR102;
        FUN22("");
        FUN22("", FUN23(VAR20));
        if (VAR11->VAR62)
            VAR102 = 2;
        else
            VAR102 = !VAR11->VAR27;
        FUN24(VAR9, VAR20, VAR12 - VAR20, VAR102);
        FUN22("");
    }
    if (!VAR5)
    {
        VAR4->VAR103 = VAR12 - VAR20;
        VAR4->VAR104 = VAR22;
    }
}