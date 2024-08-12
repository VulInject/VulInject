int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9, VAR10 *VAR11)
{
    uint8_t VAR12, VAR13;
    int VAR14, VAR15, VAR16 = 0, VAR17, VAR18, VAR19;
    uint32_t VAR20 = 1;
    if (!VAR4->VAR21)
    {
        FUN2(VAR11, VAR22, "");
        return VAR23;
    }
    if (VAR17 = FUN3(&VAR2->VAR24, VAR2->VAR25, VAR4->VAR21 - 1, VAR4->VAR26))
        return VAR17;
    VAR20 = (VAR2->VAR25[0][1] - VAR2->VAR25[0][0]) * (VAR2->VAR25[1][1] - VAR2->VAR25[1][0]);
    VAR2->VAR27 = FUN4(VAR20, sizeof(*VAR2->VAR27));
    if (!VAR2->VAR27)
        return FUN5(VAR28);
    VAR2->VAR29 = FUN4(VAR4->VAR30, sizeof(*VAR2->VAR29));
    if (!VAR2->VAR29)
        return FUN5(VAR28);
    for (VAR14 = 0; VAR14 < VAR4->VAR30; VAR14++)
    {
        int VAR31 = VAR4->VAR30 - VAR14;
        VAR32 *VAR29 = VAR2->VAR29 + VAR14;
        for (VAR18 = 0; VAR18 < 2; VAR18++)
            for (VAR19 = 0; VAR19 < 2; VAR19++)
                VAR29->VAR25[VAR18][VAR19] = FUN6(VAR2->VAR33[VAR18][VAR19], VAR31 - 1);
        VAR29->VAR34 = VAR4->VAR35[VAR14];
        VAR29->VAR36 = VAR4->VAR37[VAR14];
        if (VAR14 == 0)
            VAR29->VAR38 = 1;
        else
            VAR29->VAR38 = 3;
        if (VAR29->VAR25[0][1] == VAR29->VAR25[0][0])
            VAR29->VAR39 = 0;
        else
            VAR29->VAR39 = FUN6(VAR29->VAR25[0][1], VAR29->VAR34) - (VAR29->VAR25[0][0] >> VAR29->VAR34);
        if (VAR29->VAR25[1][1] == VAR29->VAR25[1][0])
            VAR29->VAR40 = 0;
        else
            VAR29->VAR40 = FUN6(VAR29->VAR25[1][1], VAR29->VAR36) - (VAR29->VAR25[1][0] >> VAR29->VAR36);
        VAR29->VAR41 = FUN4(VAR29->VAR38, sizeof(*VAR29->VAR41));
        if (!VAR29->VAR41)
            return FUN5(VAR28);
        for (VAR15 = 0; VAR15 < VAR29->VAR38; VAR15++, VAR16++)
        {
            VAR42 *VAR41 = VAR29->VAR41 + VAR15;
            int VAR43, VAR44;
            int VAR45;
            switch (VAR6->VAR46)
            {
                uint8_t VAR47;
                int VAR48;
            case VAR49:
                VAR48 = VAR7 + VAR50[VAR4->VAR26][VAR15 + VAR14 > 0];
                VAR41->VAR51 = (float)FUN7(2048 + VAR6->VAR52[VAR16], 2 + VAR48 - VAR6->VAR53[VAR16]);
                break;
            case VAR54:
                VAR41->VAR51 = (float)(1 << 13);
                break;
            case VAR55:
                VAR47 = VAR7;
                VAR41->VAR51 = FUN8(2.0, VAR47 - VAR6->VAR53[VAR16]);
                VAR41->VAR51 *= (float)VAR6->VAR52[VAR16] / 2048.0 + 1.0;
                VAR41->VAR51 *= 0.5;
                break;
            default:
                VAR41->VAR51 = 0;
                FUN2(VAR11, VAR22, "");
                break;
            }
            if (VAR11->VAR56 & VAR57)
                VAR41->VAR51 = (VAR58)(VAR41->VAR51 * (1 << 16));
            if (VAR14 == 0)
            {
                for (VAR18 = 0; VAR18 < 2; VAR18++)
                    for (VAR19 = 0; VAR19 < 2; VAR19++)
                        VAR41->VAR25[VAR18][VAR19] = FUN6(VAR2->VAR33[VAR18][VAR19], VAR31 - 1);
                VAR12 = VAR29->VAR34;
                VAR13 = VAR29->VAR36;
                VAR41->VAR59 = FUN9(VAR4->VAR59, VAR29->VAR34);
                VAR41->VAR60 = FUN9(VAR4->VAR60, VAR29->VAR36);
            }
            else
            {
                for (VAR18 = 0; VAR18 < 2; VAR18++)
                    for (VAR19 = 0; VAR19 < 2; VAR19++)
                        VAR41->VAR25[VAR18][VAR19] = FUN6(VAR2->VAR33[VAR18][VAR19] - (((VAR15 + 1 >> VAR18) & 1) << VAR31 - 1), VAR31);
                VAR41->VAR59 = FUN9(VAR4->VAR59, VAR29->VAR34 - 1);
                VAR41->VAR60 = FUN9(VAR4->VAR60, VAR29->VAR36 - 1);
                VAR12 = VAR29->VAR34 - 1;
                VAR13 = VAR29->VAR36 - 1;
            }
            VAR41->VAR61 = FUN4(VAR29->VAR39 * VAR29->VAR40, sizeof(*VAR41->VAR61));
            if (!VAR41->VAR61)
                return FUN5(VAR28);
            VAR45 = VAR29->VAR39 * VAR29->VAR40;
            for (VAR44 = 0; VAR44 < VAR45; VAR44++)
            {
                VAR62 *VAR61 = VAR41->VAR61 + VAR44;
                VAR61->VAR25[0][0] = (VAR44 % VAR29->VAR39) * (1 << VAR12);
                VAR61->VAR25[0][0] = FUN10(VAR61->VAR25[0][0], VAR41->VAR25[0][0]);
                VAR61->VAR25[1][0] = (VAR44 / VAR29->VAR39) * (1 << VAR13);
                VAR61->VAR25[1][0] = FUN10(VAR61->VAR25[1][0], VAR41->VAR25[1][0]);
                VAR61->VAR25[0][1] = VAR61->VAR25[0][0] + (1 << VAR12);
                VAR61->VAR25[0][1] = FUN9(VAR61->VAR25[0][1], VAR41->VAR25[0][1]);
                VAR61->VAR25[1][1] = VAR61->VAR25[1][0] + (1 << VAR13);
                VAR61->VAR25[1][1] = FUN9(VAR61->VAR25[1][1], VAR41->VAR25[1][1]);
                VAR61->VAR63 = FUN6(VAR61->VAR25[0][1] - VAR61->VAR25[0][0], VAR41->VAR59);
                VAR61->VAR64 = FUN6(VAR61->VAR25[1][1] - VAR61->VAR25[1][0], VAR41->VAR60);
                VAR61->VAR65 = FUN11(VAR61->VAR63, VAR61->VAR64);
                if (!VAR61->VAR65)
                    return FUN5(VAR28);
                VAR61->VAR66 = FUN11(VAR61->VAR63, VAR61->VAR64);
                if (!VAR61->VAR66)
                    return FUN5(VAR28);
                VAR61->VAR67 = FUN4(VAR61->VAR63 * VAR61->VAR64, sizeof(*VAR61->VAR67));
                if (!VAR61->VAR67)
                    return FUN5(VAR28);
                for (VAR43 = 0; VAR43 < VAR61->VAR63 * VAR61->VAR64; VAR43++)
                {
                    VAR68 *VAR67 = VAR61->VAR67 + VAR43;
                    uint16_t VAR69, VAR70;
                    VAR69 = (VAR61->VAR25[0][0] >> VAR41->VAR59) << VAR41->VAR59;
                    VAR69 = VAR69 + ((VAR43 % VAR61->VAR63) << VAR41->VAR59);
                    VAR67->VAR25[0][0] = FUN10(VAR69, VAR61->VAR25[0][0]);
                    VAR70 = (VAR61->VAR25[1][0] >> VAR41->VAR60) << VAR41->VAR60;
                    VAR70 = VAR70 + ((VAR43 / VAR61->VAR63) << VAR41->VAR60);
                    VAR67->VAR25[1][0] = FUN10(VAR70, VAR61->VAR25[1][0]);
                    VAR67->VAR25[0][1] = FUN9(VAR69 + (1 << VAR41->VAR59), VAR61->VAR25[0][1]);
                    VAR67->VAR25[1][1] = FUN9(VAR70 + (1 << VAR41->VAR60), VAR61->VAR25[1][1]);
                    VAR67->VAR71 = 0;
                    VAR67->VAR72 = 3;
                    VAR67->VAR73 = 0;
                    VAR67->VAR74 = 0;
                    VAR67->VAR75 = 0;
                }
            }
        }
    }
    return 0;
}