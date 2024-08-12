static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, struct MvField VAR11[])
{
    VAR12 *VAR13 = &VAR2->VAR14;
    VAR15 *VAR16 = VAR2->VAR17->VAR16;
    VAR18 *VAR19 = VAR2->VAR17->VAR19;
    const int VAR20 = VAR2->VAR21->VAR20;
    const int VAR22 = VAR13->VAR23.VAR22;
    const int VAR24 = VAR13->VAR23.VAR24;
    const int VAR25 = VAR13->VAR23.VAR25;
    const int VAR26 = VAR13->VAR23.VAR26;
    const int VAR27 = VAR13->VAR23.VAR28;
    const int VAR29 = VAR3 - 1;
    const int VAR30 = VAR4 + VAR6 - 1;
    const int VAR31 = VAR29 >> VAR2->VAR21->VAR32;
    const int VAR33 = VAR30 >> VAR2->VAR21->VAR32;
    const int VAR34 = VAR3 + VAR5 - 1;
    const int VAR35 = VAR4 - 1;
    const int VAR36 = VAR34 >> VAR2->VAR21->VAR32;
    const int VAR37 = VAR35 >> VAR2->VAR21->VAR32;
    const int VAR38 = VAR3 + VAR5;
    const int VAR39 = VAR4 - 1;
    const int VAR40 = VAR38 >> VAR2->VAR21->VAR32;
    const int VAR41 = VAR39 >> VAR2->VAR21->VAR32;
    const int VAR42 = VAR3 - 1;
    const int VAR43 = VAR4 + VAR6;
    const int VAR44 = VAR42 >> VAR2->VAR21->VAR32;
    const int VAR45 = VAR43 >> VAR2->VAR21->VAR32;
    const int VAR46 = VAR3 - 1;
    const int VAR47 = VAR4 - 1;
    const int VAR48 = VAR46 >> VAR2->VAR21->VAR32;
    const int VAR49 = VAR47 >> VAR2->VAR21->VAR32;
    const int VAR50 = (VAR2->VAR51.VAR52 == VAR53) ? VAR2->VAR51.VAR50[0] : FUN2(VAR2->VAR51.VAR50[0], VAR2->VAR51.VAR50[1]);
    int VAR54 = 1;
    int VAR55 = 1;
    int VAR56 = 0;
    int VAR57 = 0;
    int VAR58 = 0;
    int VAR59;
    int VAR60;
    int VAR61;
    int VAR62;
    int VAR63;
    int VAR64;
    int VAR65;
    VAR60 = FUN3(VAR24, VAR66);
    if (!VAR8 && VAR9 == 1 && (VAR13->VAR67.VAR68 == VAR69 || VAR13->VAR67.VAR68 == VAR70 || VAR13->VAR67.VAR68 == VAR71) || FUN4(VAR2, VAR29, VAR30, VAR3, VAR4))
    {
        VAR60 = 0;
    }
    if (VAR60)
    {
        VAR11[0] = FUN5(VAR66);
        if (VAR10 == 0)
            return;
        VAR57++;
    }
    VAR62 = FUN3(VAR26, VAR72);
    if (!VAR8 && VAR9 == 1 && (VAR13->VAR67.VAR68 == VAR73 || VAR13->VAR67.VAR68 == VAR74 || VAR13->VAR67.VAR68 == VAR75) || FUN4(VAR2, VAR34, VAR35, VAR3, VAR4))
    {
        VAR62 = 0;
    }
    if (VAR60 && VAR62)
        VAR54 = !FUN6(VAR72, VAR66);
    if (VAR62 && VAR54)
        VAR11[VAR57++] = FUN5(VAR72);
    VAR54 = 1;
    VAR64 = FUN7(VAR76);
    VAR61 = VAR64 && FUN3(VAR27, VAR76);
    if (FUN4(VAR2, VAR38, VAR39, VAR3, VAR4))
        VAR61 = 0;
    if (VAR62 && VAR61)
        VAR54 = !FUN6(VAR76, VAR72);
    if (VAR61 && VAR54)
    {
        VAR11[VAR57] = FUN5(VAR76);
        if (VAR10 == VAR57)
            return;
        VAR57++;
    }
    VAR54 = 1;
    VAR65 = FUN7(VAR77);
    VAR59 = VAR65 && FUN3(VAR22, VAR77);
    if (FUN4(VAR2, VAR42, VAR43, VAR3, VAR4))
        VAR59 = 0;
    if (VAR60 && VAR59)
        VAR54 = !FUN6(VAR77, VAR66);
    if (VAR59 && VAR54)
    {
        VAR11[VAR57] = FUN5(VAR77);
        if (VAR10 == VAR57)
            return;
        VAR57++;
    }
    VAR54 = 1;
    VAR63 = FUN3(VAR25, VAR78);
    if (FUN4(VAR2, VAR46, VAR47, VAR3, VAR4))
        VAR63 = 0;
    if (VAR60 && VAR63)
        VAR54 = !FUN6(VAR78, VAR66);
    if (VAR62 && VAR63)
        VAR55 = !FUN6(VAR78, VAR72);
    if (VAR63 && VAR54 && VAR55 && VAR57 != 4)
    {
        VAR11[VAR57] = FUN5(VAR78);
        if (VAR10 == VAR57)
            return;
        VAR57++;
    }
    if (VAR2->VAR51.VAR79 && VAR57 < VAR2->VAR51.VAR80)
    {
        Mv VAR81, VAR82;
        int VAR83 = FUN8(VAR2, VAR3, VAR4, VAR5, VAR6, 0, &VAR81, 0);
        int VAR84 = (VAR2->VAR51.VAR52 == VAR85) ? FUN8(VAR2, VAR3, VAR4, VAR5, VAR6, 0, &VAR82, 1) : 0;
        if (VAR83 || VAR84)
        {
            VAR11[VAR57].VAR86 = 0;
            VAR11[VAR57].VAR87[0] = VAR83;
            VAR11[VAR57].VAR87[1] = VAR84;
            if (VAR83)
            {
                VAR11[VAR57].VAR88[0] = VAR81;
                VAR11[VAR57].VAR89[0] = 0;
            }
            if (VAR84)
            {
                VAR11[VAR57].VAR88[1] = VAR82;
                VAR11[VAR57].VAR89[1] = 0;
            }
            if (VAR10 == VAR57)
                return;
            VAR57++;
        }
    }
    VAR58 = VAR57;
    if (VAR2->VAR51.VAR52 == VAR85 && VAR58 > 1 && VAR58 < VAR2->VAR51.VAR80)
    {
        int VAR90;
        for (VAR90 = 0; VAR57 < VAR2->VAR51.VAR80 && VAR90 < VAR58 * (VAR58 - 1); VAR90++)
        {
            int VAR91 = VAR92[VAR90][0];
            int VAR93 = VAR92[VAR90][1];
            MvField VAR94 = VAR11[VAR91];
            MvField VAR95 = VAR11[VAR93];
            if (VAR94.VAR87[0] && VAR95.VAR87[1] && (VAR16[0].VAR96[VAR94.VAR89[0]] != VAR16[1].VAR96[VAR95.VAR89[1]] || FUN9(&VAR94.VAR88[0]) != FUN9(&VAR95.VAR88[1])))
            {
                VAR11[VAR57].VAR89[0] = VAR94.VAR89[0];
                VAR11[VAR57].VAR89[1] = VAR95.VAR89[1];
                VAR11[VAR57].VAR87[0] = 1;
                VAR11[VAR57].VAR87[1] = 1;
                FUN10(&VAR11[VAR57].VAR88[0], &VAR94.VAR88[0]);
                FUN10(&VAR11[VAR57].VAR88[1], &VAR95.VAR88[1]);
                VAR11[VAR57].VAR86 = 0;
                if (VAR10 == VAR57)
                    return;
                VAR57++;
            }
        }
    }
    while (VAR57 < VAR2->VAR51.VAR80)
    {
        VAR11[VAR57].VAR87[0] = 1;
        VAR11[VAR57].VAR87[1] = VAR2->VAR51.VAR52 == VAR85;
        FUN11(VAR11[VAR57].VAR88 + 0);
        FUN11(VAR11[VAR57].VAR88 + 1);
        VAR11[VAR57].VAR86 = 0;
        VAR11[VAR57].VAR89[0] = VAR56 < VAR50 ? VAR56 : 0;
        VAR11[VAR57].VAR89[1] = VAR56 < VAR50 ? VAR56 : 0;
        if (VAR10 == VAR57)
            return;
        VAR57++;
        VAR56++;
    }
}