static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9 = 0;
    if (VAR2->VAR10 && VAR6->VAR11 != VAR12)
    {
        FUN2(VAR2->VAR13, VAR14, "");
        return VAR15;
    }
    FUN3(VAR2->VAR16 == VAR2->VAR17 * VAR2->VAR18);
    if (VAR4->VAR19 << FUN4(VAR2) >= VAR2->VAR16 || VAR4->VAR19 >= VAR2->VAR16)
    {
        FUN2(VAR2->VAR13, VAR14, "");
        return VAR15;
    }
    VAR4->VAR20 = VAR4->VAR21 = VAR4->VAR19 % VAR2->VAR17;
    VAR4->VAR22 = VAR4->VAR23 = (VAR4->VAR19 / VAR2->VAR17) << FUN4(VAR2);
    if (VAR2->VAR24 == VAR25)
        VAR4->VAR22 = VAR4->VAR23 = VAR4->VAR23 + 1;
    FUN3(VAR4->VAR23 < VAR2->VAR18);
    VAR9 = FUN5(VAR2, VAR4);
    if (VAR9 < 0)
        return VAR9;
    if (VAR2->VAR26.VAR27->VAR28 == 2 && VAR4->VAR29 == VAR30)
    {
        FUN6(VAR2, VAR4, -1);
        if (FUN7(VAR2))
        {
            FUN6(VAR2, VAR4, 0);
            FUN6(VAR2, VAR4, 1);
        }
    }
    if (VAR4->VAR29 == VAR30 && !VAR4->VAR31)
        FUN8(VAR2, VAR4);
    FUN9(VAR2, VAR4);
    if (VAR2->VAR13->VAR32 >= VAR33 || (VAR2->VAR13->VAR32 >= VAR34 && VAR2->VAR35 != VAR12) || (VAR2->VAR13->VAR32 >= VAR36 && VAR4->VAR29 != VAR37) || (VAR2->VAR13->VAR32 >= VAR38 && VAR4->VAR29 == VAR30) || (VAR2->VAR13->VAR32 >= VAR39 && VAR6->VAR40 == 0))
        VAR4->VAR41 = 0;
    if (VAR4->VAR41 == 1 && VAR2->VAR42 > 1)
    {
        if (VAR2->VAR13->VAR43 & VAR44)
        {
            VAR4->VAR41 = 2;
        }
        else
        {
            VAR2->VAR45 = 1;
        }
    }
    VAR4->VAR46 = 15 - FUN10(VAR4->VAR47, VAR4->VAR48) - FUN11(0, VAR2->VAR26.VAR27->VAR49[0], VAR2->VAR26.VAR27->VAR49[1]) + 6 * (VAR2->VAR26.VAR50->VAR51 - 8);
    VAR4->VAR52 = ++VAR2->VAR53;
    if (VAR4->VAR52)
        VAR2->VAR54[(VAR4->VAR52 - 1) & (VAR55 - 1)] = VAR4->VAR22;
    if (VAR2->VAR54[VAR4->VAR52 & (VAR55 - 1)] + 3 >= VAR4->VAR22 && VAR2->VAR54[VAR4->VAR52 & (VAR55 - 1)] <= VAR4->VAR22 && VAR4->VAR52 >= VAR55)
    {
        FUN2(VAR2->VAR13, VAR56, "", VAR4->VAR52, VAR55);
    }
    for (VAR8 = 0; VAR8 < 2; VAR8++)
    {
        int VAR57[16];
        int *VAR58 = VAR2->VAR58[VAR4->VAR52 & (VAR55 - 1)][VAR8];
        for (VAR7 = 0; VAR7 < 16; VAR7++)
        {
            VAR57[VAR7] = 60;
            if (VAR8 < VAR4->VAR59 && VAR7 < VAR4->VAR60[VAR8] && VAR4->VAR61[VAR8][VAR7].VAR62->VAR63->VAR64[0])
            {
                int VAR65;
                VAR66 *VAR64 = VAR4->VAR61[VAR8][VAR7].VAR62->VAR63->VAR64[0]->VAR67;
                for (VAR65 = 0; VAR65 < VAR2->VAR68; VAR65++)
                    if (VAR2->VAR69[VAR65]->VAR63->VAR64[0]->VAR67 == VAR64)
                    {
                        VAR57[VAR7] = VAR65;
                        break;
                    }
                for (VAR65 = 0; VAR65 < VAR2->VAR70; VAR65++)
                    if (VAR2->VAR71[VAR65] && VAR2->VAR71[VAR65]->VAR63->VAR64[0]->VAR67 == VAR64)
                    {
                        VAR57[VAR7] = VAR2->VAR68 + VAR65;
                        break;
                    }
            }
        }
        VAR58[0] = VAR58[1] = -1;
        for (VAR7 = 0; VAR7 < 16; VAR7++)
            VAR58[VAR7 + 2] = 4 * VAR57[VAR7] + (VAR4->VAR61[VAR8][VAR7].VAR72 & 3);
        VAR58[18 + 0] = VAR58[18 + 1] = -1;
        for (VAR7 = 16; VAR7 < 48; VAR7++)
            VAR58[VAR7 + 4] = 4 * VAR57[(VAR7 - 16) >> 1] + (VAR4->VAR61[VAR8][VAR7].VAR72 & 3);
    }
    if (VAR2->VAR13->VAR73 & VAR74)
    {
        FUN2(VAR2->VAR13, VAR75, "", VAR4->VAR52, (VAR2->VAR24 == VAR76 ? "" : VAR2->VAR24 == VAR77 ? ""
                                                                                                                                                                                                                                       : ""),
               VAR4->VAR23 * VAR2->VAR17 + VAR4->VAR21, FUN12(VAR4->VAR78), VAR4->VAR79 ? "" : "", VAR6->VAR11 == VAR12 ? "" : "", VAR2->VAR80.VAR81, VAR2->VAR82->VAR83[0], VAR2->VAR82->VAR83[1], VAR4->VAR60[0], VAR4->VAR60[1], VAR4->VAR84, VAR4->VAR41, VAR4->VAR47, VAR4->VAR48, VAR4->VAR85.VAR86, VAR4->VAR85.VAR86 == 1 && VAR4->VAR85.VAR87 ? "" : "", VAR4->VAR78 == VAR30 ? (VAR4->VAR31 ? "" : "") : "");
    }
    return 0;
}