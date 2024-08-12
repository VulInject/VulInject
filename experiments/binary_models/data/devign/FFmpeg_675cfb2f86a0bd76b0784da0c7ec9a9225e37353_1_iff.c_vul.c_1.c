static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    char VAR8[24];
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15[6];
    VAR16 *VAR17;
    while (FUN2(VAR7) + 12 <= VAR5)
    {
        uint32_t VAR18 = FUN3(VAR7);
        uint64_t VAR19 = FUN4(VAR7);
        uint64_t VAR20 = FUN2(VAR7);
        switch (VAR18)
        {
        case FUN5('', '', '', ''):
            if (VAR19 < 8)
                return VAR21;
            VAR9 = FUN6(VAR7);
            VAR10 = FUN7(VAR7);
            VAR11 = FUN7(VAR7);
            snprintf(VAR8, sizeof(VAR8), "", VAR9, VAR10, VAR11, FUN8(VAR7));
            FUN9(&VAR4->VAR22, "", VAR8, 0);
            break;
        case FUN5('', '', '', ''):
            if (VAR19 < 2)
                return VAR21;
            VAR4->VAR23->VAR24 = FUN6(VAR7);
            if (VAR19 < 2 + VAR4->VAR23->VAR24 * 4)
                return VAR21;
            VAR4->VAR23->VAR25 = 0;
            if (VAR4->VAR23->VAR24 > FUN10(VAR15))
            {
                FUN11(VAR2, "");
                break;
            }
            for (VAR12 = 0; VAR12 < VAR4->VAR23->VAR24; VAR12++)
                VAR15[VAR12] = FUN3(VAR7);
            for (VAR12 = 0; VAR12 < FUN10(VAR26); VAR12++)
            {
                const VAR27 *VAR28 = &VAR26[VAR12];
                if (FUN12(VAR28->VAR29) == VAR4->VAR23->VAR24 && !memcmp(VAR28->VAR15, VAR15, VAR4->VAR23->VAR24 * sizeof(VAR30)))
                {
                    VAR4->VAR23->VAR25 = VAR28->VAR29;
                    break;
                }
            }
            break;
        case FUN5('', '', '', ''):
            if (VAR19 < 4)
                return VAR21;
            VAR18 = FUN3(VAR7);
            VAR4->VAR23->VAR31 = FUN13(VAR32, VAR18);
            if (!VAR4->VAR23->VAR31)
            {
                FUN14(VAR2, VAR33, "", VAR18 & 0xFF, (VAR18 >> 8) & 0xFF, (VAR18 >> 16) & 0xFF, (VAR18 >> 24) & 0xFF);
                return VAR34;
            }
            break;
        case FUN5('', '', '', ''):
            if (VAR19 < 4)
                return VAR21;
            VAR4->VAR23->VAR35 = FUN8(VAR7) / 8;
            break;
        case FUN5('', '', '', ''):
            VAR17 = NULL;
            FUN15(VAR2, VAR36, &VAR17, VAR19);
            if (VAR17)
            {
                if ((VAR13 = FUN16(VAR2, &VAR17)) < 0)
                {
                    FUN17(&VAR17);
                    return VAR13;
                }
                FUN17(&VAR17);
            }
            if (VAR19 < FUN2(VAR7) - VAR20)
            {
                FUN14(VAR2, VAR33, "");
                return VAR21;
            }
            break;
        case FUN5('', '', '', ''):
            if (VAR19 < 2)
                return VAR21;
            VAR14 = FUN6(VAR7);
            if (VAR14 != 0xFFFF)
            {
                if (VAR14 < FUN10(VAR37))
                    VAR4->VAR23->VAR25 = VAR37[VAR14];
                if (!VAR4->VAR23->VAR25)
                    FUN11(VAR2, "", VAR14);
            }
            break;
        }
        FUN18(VAR7, VAR19 - (FUN2(VAR7) - VAR20) + (VAR19 & 1));
    }
    return 0;
}