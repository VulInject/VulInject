static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR4 *VAR6)
{
    VAR1 *VAR7 = FUN2();
    uint8_t VAR8 = FUN3(VAR3->VAR9);
    uint8_t VAR10;
    int VAR11;
    for (VAR11 = 0; VAR11 < FUN4(VAR3->VAR9->VAR12); VAR11++)
    {
        int VAR13;
        uint64_t VAR14, VAR15;
        VAR16 *VAR17 = VAR3->VAR9->VAR12[VAR11];
        if (!VAR17)
        {
            continue;
        }
        for (VAR13 = 0; VAR13 < VAR18; VAR13++)
        {
            VAR19 *VAR20 = &VAR17->VAR21[VAR13];
            VAR14 = VAR20->VAR22;
            VAR15 = VAR20->VAR22 + VAR20->VAR23 - 1;
            if (!VAR14 || VAR14 > VAR15)
            {
                continue;
            }
            if (VAR20->VAR10 & VAR24)
            {
                FUN5(VAR7, FUN6(VAR25, VAR26, VAR27, VAR28, 0, VAR14, VAR15, 0, VAR15 - VAR14 + 1));
                FUN7(VAR5, VAR14, VAR15);
            }
            else
            {
                FUN5(VAR7, FUN8(VAR27, VAR25, VAR26, VAR29, VAR30, 0, VAR14, VAR15, 0, VAR15 - VAR14 + 1));
                FUN7(VAR6, VAR14, VAR15);
            }
        }
        VAR10 = VAR17->VAR31[VAR32] & ~VAR33;
        if (VAR10 == VAR34)
        {
            uint8_t VAR35 = VAR17->VAR31[VAR36];
            if (VAR35 > VAR8)
            {
                VAR8 = VAR35;
            }
            VAR14 = FUN9(VAR17, VAR24);
            VAR15 = FUN10(VAR17, VAR24);
            if (VAR14 && VAR14 <= VAR15)
            {
                FUN5(VAR7, FUN6(VAR25, VAR26, VAR27, VAR28, 0, VAR14, VAR15, 0, VAR15 - VAR14 + 1));
                FUN7(VAR5, VAR14, VAR15);
            }
            VAR14 = FUN9(VAR17, VAR37);
            VAR15 = FUN10(VAR17, VAR37);
            if (VAR14 && VAR14 <= VAR15)
            {
                FUN5(VAR7, FUN8(VAR27, VAR25, VAR26, VAR29, VAR30, 0, VAR14, VAR15, 0, VAR15 - VAR14 + 1));
                FUN7(VAR6, VAR14, VAR15);
            }
            VAR14 = FUN9(VAR17, VAR38);
            VAR15 = FUN10(VAR17, VAR38);
            if (VAR14 && VAR14 <= VAR15)
            {
                FUN5(VAR7, FUN8(VAR27, VAR25, VAR26, VAR29, VAR30, 0, VAR14, VAR15, 0, VAR15 - VAR14 + 1));
                FUN7(VAR6, VAR14, VAR15);
            }
        }
    }
    FUN5(VAR7, FUN11(VAR25, VAR26, VAR27, 0, FUN3(VAR3->VAR9), VAR8, 0, VAR8 - FUN3(VAR3->VAR9) + 1));
    return VAR7;
}