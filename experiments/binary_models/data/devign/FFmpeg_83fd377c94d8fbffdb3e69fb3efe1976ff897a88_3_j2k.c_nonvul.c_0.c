int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9, VAR10 *VAR11)
{
    uint8_t VAR12, VAR13;
    int VAR14, VAR15, VAR16 = 0, VAR17, VAR18, VAR19, VAR20 = 1;
    if (VAR17 = FUN2(&VAR2->VAR21, VAR2->VAR22, VAR4->VAR23 - 1, VAR4->VAR24))
        return VAR17;
    for (VAR18 = 0; VAR18 < 2; VAR18++)
        VAR20 *= VAR2->VAR22[VAR18][1] - VAR2->VAR22[VAR18][0];
    VAR2->VAR25 = FUN3(VAR20, sizeof(*VAR2->VAR25));
    if (!VAR2->VAR25)
        return FUN4(VAR26);
    VAR2->VAR27 = FUN3(VAR4->VAR28, sizeof(*VAR2->VAR27));
    if (!VAR2->VAR27)
        return FUN4(VAR26);
    for (VAR14 = 0; VAR14 < VAR4->VAR28; VAR14++)
    {
        int VAR29 = VAR4->VAR28 - VAR14;
        VAR30 *VAR27 = VAR2->VAR27 + VAR14;
        for (VAR18 = 0; VAR18 < 2; VAR18++)
            for (VAR19 = 0; VAR19 < 2; VAR19++)
                VAR27->VAR22[VAR18][VAR19] = FUN5(VAR2->VAR31[VAR18][VAR19], VAR29 - 1);
        VAR27->VAR32 = VAR4->VAR33[VAR14];
        VAR27->VAR34 = VAR4->VAR35[VAR14];
        if (VAR14 == 0)
            VAR27->VAR36 = 1;
        else
            VAR27->VAR36 = 3;
        if (VAR27->VAR22[0][1] == VAR27->VAR22[0][0])
            VAR27->VAR37 = 0;
        else
            VAR27->VAR37 = FUN5(VAR27->VAR22[0][1], VAR27->VAR32) - (VAR27->VAR22[0][0] >> VAR27->VAR32);
        if (VAR27->VAR22[1][1] == VAR27->VAR22[1][0])
            VAR27->VAR38 = 0;
        else
            VAR27->VAR38 = FUN5(VAR27->VAR22[1][1], VAR27->VAR34) - (VAR27->VAR22[1][0] >> VAR27->VAR34);
        VAR27->VAR39 = FUN3(VAR27->VAR36, sizeof(*VAR27->VAR39));
        if (!VAR27->VAR39)
            return FUN4(VAR26);
        for (VAR15 = 0; VAR15 < VAR27->VAR36; VAR15++, VAR16++)
        {
            VAR40 *VAR39 = VAR27->VAR39 + VAR15;
            int VAR41, VAR42;
            int VAR43;
            switch (VAR6->VAR44)
            {
                uint8_t VAR45;
                int VAR46;
            case VAR47:
                VAR39->VAR48 = 1;
                break;
            case VAR49:
                VAR46 = VAR7 + VAR50[VAR4->VAR24 == VAR51][VAR15 + (VAR14 > 0)];
                VAR39->VAR48 = FUN6(2048 + VAR6->VAR52[VAR16], 2 + VAR46 - VAR6->VAR53[VAR16]);
                break;
            case VAR54:
                VAR45 = VAR7;
                VAR39->VAR48 = FUN7(2.0, VAR45 - VAR6->VAR53[VAR16]);
                VAR39->VAR48 *= (VAR6->VAR52[VAR16] / 2048.0 + 1.0);
                break;
            default:
                VAR39->VAR48 = 0;
                FUN8(VAR11, VAR55, "");
                break;
            }
            if (!FUN9(VAR11->VAR56))
                VAR39->VAR48 *= 0.5;
            VAR39->VAR57 = VAR39->VAR48 * (1 << 16);
            if (VAR14 == 0)
            {
                for (VAR18 = 0; VAR18 < 2; VAR18++)
                    for (VAR19 = 0; VAR19 < 2; VAR19++)
                        VAR39->VAR22[VAR18][VAR19] = FUN5(VAR2->VAR31[VAR18][VAR19] - VAR2->VAR31[VAR18][0], VAR29 - 1);
                VAR12 = VAR27->VAR32;
                VAR13 = VAR27->VAR34;
                VAR39->VAR58 = FUN10(VAR4->VAR58, VAR27->VAR32);
                VAR39->VAR59 = FUN10(VAR4->VAR59, VAR27->VAR34);
            }
            else
            {
                for (VAR18 = 0; VAR18 < 2; VAR18++)
                    for (VAR19 = 0; VAR19 < 2; VAR19++)
                        VAR39->VAR22[VAR18][VAR19] = FUN5(VAR2->VAR31[VAR18][VAR19] - VAR2->VAR31[VAR18][0] - (((VAR15 + 1 >> VAR18) & 1) << VAR29 - 1), VAR29);
                VAR39->VAR58 = FUN10(VAR4->VAR58, VAR27->VAR32 - 1);
                VAR39->VAR59 = FUN10(VAR4->VAR59, VAR27->VAR34 - 1);
                VAR12 = VAR27->VAR32 - 1;
                VAR13 = VAR27->VAR34 - 1;
            }
            for (VAR19 = 0; VAR19 < 2; VAR19++)
                VAR39->VAR22[0][VAR19] = FUN11(VAR39->VAR22[0][VAR19], VAR8);
            for (VAR19 = 0; VAR19 < 2; VAR19++)
                VAR39->VAR22[1][VAR19] = FUN11(VAR39->VAR22[1][VAR19], VAR9);
            VAR39->VAR60 = FUN3(VAR27->VAR37 * VAR27->VAR38, sizeof(*VAR39->VAR60));
            if (!VAR39->VAR60)
                return FUN4(VAR26);
            VAR43 = VAR27->VAR37 * VAR27->VAR38;
            for (VAR42 = 0; VAR42 < VAR43; VAR42++)
            {
                VAR61 *VAR60 = VAR39->VAR60 + VAR42;
                VAR60->VAR22[0][0] = (VAR42 % VAR27->VAR37) * (1 << VAR12);
                VAR60->VAR22[0][0] = FUN12(VAR60->VAR22[0][0], VAR39->VAR22[0][0]);
                VAR60->VAR22[1][0] = (VAR42 / VAR27->VAR37) * (1 << VAR13);
                VAR60->VAR22[1][0] = FUN12(VAR60->VAR22[1][0], VAR39->VAR22[1][0]);
                VAR60->VAR22[0][1] = VAR60->VAR22[0][0] + (1 << VAR12);
                VAR60->VAR22[0][1] = FUN10(VAR60->VAR22[0][1], VAR39->VAR22[0][1]);
                VAR60->VAR22[1][1] = VAR60->VAR22[1][0] + (1 << VAR13);
                VAR60->VAR22[1][1] = FUN10(VAR60->VAR22[1][1], VAR39->VAR22[1][1]);
                VAR60->VAR62 = FUN5(VAR60->VAR22[0][1] - VAR60->VAR22[0][0], VAR39->VAR58);
                VAR60->VAR63 = FUN5(VAR60->VAR22[1][1] - VAR60->VAR22[1][0], VAR39->VAR59);
                VAR60->VAR64 = FUN13(VAR60->VAR62, VAR60->VAR63);
                if (!VAR60->VAR64)
                    return FUN4(VAR26);
                VAR60->VAR65 = FUN13(VAR60->VAR62, VAR60->VAR63);
                if (!VAR60->VAR65)
                    return FUN4(VAR26);
                VAR60->VAR66 = FUN3(VAR60->VAR62 * VAR60->VAR63, sizeof(*VAR60->VAR66));
                if (!VAR60->VAR66)
                    return FUN4(VAR26);
                for (VAR41 = 0; VAR41 < VAR60->VAR62 * VAR60->VAR63; VAR41++)
                {
                    VAR67 *VAR66 = VAR60->VAR66 + VAR41;
                    uint16_t VAR68, VAR69;
                    VAR68 = (VAR60->VAR22[0][0] >> VAR39->VAR58) << VAR39->VAR58;
                    VAR68 = VAR68 + ((VAR41 % VAR60->VAR62) << VAR39->VAR58);
                    VAR66->VAR22[0][0] = FUN12(VAR68, VAR60->VAR22[0][0]);
                    VAR69 = (VAR60->VAR22[1][0] >> VAR39->VAR59) << VAR39->VAR59;
                    VAR69 = VAR69 + ((VAR41 / VAR60->VAR62) << VAR39->VAR59);
                    VAR66->VAR22[1][0] = FUN12(VAR69, VAR60->VAR22[1][0]);
                    VAR66->VAR22[0][1] = FUN10(VAR68 + (1 << VAR39->VAR58), VAR60->VAR22[0][1]);
                    VAR66->VAR22[1][1] = FUN10(VAR69 + (1 << VAR39->VAR59), VAR60->VAR22[1][1]);
                    if ((VAR15 + !!VAR14) & 1)
                    {
                        VAR66->VAR22[0][0] += VAR2->VAR27[VAR14 - 1].VAR22[0][1] - VAR2->VAR27[VAR14 - 1].VAR22[0][0];
                        VAR66->VAR22[0][1] += VAR2->VAR27[VAR14 - 1].VAR22[0][1] - VAR2->VAR27[VAR14 - 1].VAR22[0][0];
                    }
                    if ((VAR15 + !!VAR14) & 2)
                    {
                        VAR66->VAR22[1][0] += VAR2->VAR27[VAR14 - 1].VAR22[1][1] - VAR2->VAR27[VAR14 - 1].VAR22[1][0];
                        VAR66->VAR22[1][1] += VAR2->VAR27[VAR14 - 1].VAR22[1][1] - VAR2->VAR27[VAR14 - 1].VAR22[1][0];
                    }
                    VAR66->VAR70 = 0;
                    VAR66->VAR71 = 3;
                    VAR66->VAR72 = 0;
                    VAR66->VAR73 = 0;
                    VAR66->VAR74 = 0;
                }
            }
        }
    }
    return 0;
}