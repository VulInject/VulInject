int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9, VAR10 *VAR11)
{
    uint8_t VAR12, VAR13;
    int VAR14, VAR15, VAR16 = 0, VAR17, VAR18, VAR19;
    uint32_t VAR20;
    if (!VAR4->VAR21)
    {
        FUN2(VAR11, VAR22, "");
        return VAR23;
    }
    if (VAR17 = FUN3(&VAR2->VAR24, VAR2->VAR25, VAR4->VAR21 - 1, VAR4->VAR26))
        return VAR17;
    VAR20 = (VAR2->VAR25[0][1] - VAR2->VAR25[0][0]) * (VAR2->VAR25[1][1] - VAR2->VAR25[1][0]);
    if (VAR4->VAR26 == VAR27)
    {
        VAR2->VAR28 = NULL;
        VAR2->VAR29 = FUN4(VAR20, sizeof(*VAR2->VAR29));
        if (!VAR2->VAR29)
            return FUN5(VAR30);
    }
    else
    {
        VAR2->VAR29 = NULL;
        VAR2->VAR28 = FUN4(VAR20, sizeof(*VAR2->VAR28));
        if (!VAR2->VAR28)
            return FUN5(VAR30);
    }
    VAR2->VAR31 = FUN6(VAR4->VAR32, sizeof(*VAR2->VAR31));
    if (!VAR2->VAR31)
        return FUN5(VAR30);
    for (VAR14 = 0; VAR14 < VAR4->VAR32; VAR14++)
    {
        int VAR33 = VAR4->VAR32 - VAR14;
        VAR34 *VAR31 = VAR2->VAR31 + VAR14;
        for (VAR18 = 0; VAR18 < 2; VAR18++)
            for (VAR19 = 0; VAR19 < 2; VAR19++)
                VAR31->VAR25[VAR18][VAR19] = FUN7(VAR2->VAR35[VAR18][VAR19], VAR33 - 1);
        VAR31->VAR36 = VAR4->VAR37[VAR14];
        VAR31->VAR38 = VAR4->VAR39[VAR14];
        if (VAR14 == 0)
            VAR31->VAR40 = 1;
        else
            VAR31->VAR40 = 3;
        if (VAR31->VAR25[0][1] == VAR31->VAR25[0][0])
            VAR31->VAR41 = 0;
        else
            VAR31->VAR41 = FUN7(VAR31->VAR25[0][1], VAR31->VAR36) - (VAR31->VAR25[0][0] >> VAR31->VAR36);
        if (VAR31->VAR25[1][1] == VAR31->VAR25[1][0])
            VAR31->VAR42 = 0;
        else
            VAR31->VAR42 = FUN7(VAR31->VAR25[1][1], VAR31->VAR38) - (VAR31->VAR25[1][0] >> VAR31->VAR38);
        VAR31->VAR43 = FUN6(VAR31->VAR40, sizeof(*VAR31->VAR43));
        if (!VAR31->VAR43)
            return FUN5(VAR30);
        for (VAR15 = 0; VAR15 < VAR31->VAR40; VAR15++, VAR16++)
        {
            VAR44 *VAR43 = VAR31->VAR43 + VAR15;
            int VAR45, VAR46;
            int VAR47;
            switch (VAR6->VAR48)
            {
                uint8_t VAR49;
                int VAR50;
            case VAR51:
                VAR43->VAR52 = 1;
                break;
            case VAR53:
                VAR50 = VAR7 + VAR54[VAR4->VAR26 == VAR55][VAR15 + (VAR14 > 0)];
                VAR43->VAR52 = FUN8(2048 + VAR6->VAR56[VAR16], 2 + VAR50 - VAR6->VAR57[VAR16]);
                break;
            case VAR58:
                VAR49 = VAR7;
                VAR43->VAR52 = FUN9(2.0, VAR49 - VAR6->VAR57[VAR16]);
                VAR43->VAR52 *= VAR6->VAR56[VAR16] / 2048.0 + 1.0;
                break;
            default:
                VAR43->VAR52 = 0;
                FUN2(VAR11, VAR22, "");
                break;
            }
            if (!FUN10(VAR11->VAR59))
                VAR43->VAR52 *= 0.5;
            VAR43->VAR60 = VAR43->VAR52 * (1 << 16);
            if (VAR14 == 0)
            {
                for (VAR18 = 0; VAR18 < 2; VAR18++)
                    for (VAR19 = 0; VAR19 < 2; VAR19++)
                        VAR43->VAR25[VAR18][VAR19] = FUN7(VAR2->VAR35[VAR18][VAR19] - VAR2->VAR35[VAR18][0], VAR33 - 1);
                VAR12 = VAR31->VAR36;
                VAR13 = VAR31->VAR38;
                VAR43->VAR61 = FUN11(VAR4->VAR61, VAR31->VAR36);
                VAR43->VAR62 = FUN11(VAR4->VAR62, VAR31->VAR38);
            }
            else
            {
                for (VAR18 = 0; VAR18 < 2; VAR18++)
                    for (VAR19 = 0; VAR19 < 2; VAR19++)
                        VAR43->VAR25[VAR18][VAR19] = FUN7(VAR2->VAR35[VAR18][VAR19] - VAR2->VAR35[VAR18][0] - (((VAR15 + 1 >> VAR18) & 1) << VAR33 - 1), VAR33);
                VAR43->VAR61 = FUN11(VAR4->VAR61, VAR31->VAR36 - 1);
                VAR43->VAR62 = FUN11(VAR4->VAR62, VAR31->VAR38 - 1);
                VAR12 = VAR31->VAR36 - 1;
                VAR13 = VAR31->VAR38 - 1;
            }
            for (VAR19 = 0; VAR19 < 2; VAR19++)
                VAR43->VAR25[0][VAR19] = FUN12(VAR43->VAR25[0][VAR19], VAR8);
            for (VAR19 = 0; VAR19 < 2; VAR19++)
                VAR43->VAR25[1][VAR19] = FUN12(VAR43->VAR25[1][VAR19], VAR9);
            VAR43->VAR63 = FUN6(VAR31->VAR41 * VAR31->VAR42, sizeof(*VAR43->VAR63));
            if (!VAR43->VAR63)
                return FUN5(VAR30);
            VAR47 = VAR31->VAR41 * VAR31->VAR42;
            for (VAR46 = 0; VAR46 < VAR47; VAR46++)
            {
                VAR64 *VAR63 = VAR43->VAR63 + VAR46;
                VAR63->VAR25[0][0] = (VAR46 % VAR31->VAR41) * (1 << VAR12);
                VAR63->VAR25[0][0] = FUN13(VAR63->VAR25[0][0], VAR43->VAR25[0][0]);
                VAR63->VAR25[1][0] = (VAR46 / VAR31->VAR41) * (1 << VAR13);
                VAR63->VAR25[1][0] = FUN13(VAR63->VAR25[1][0], VAR43->VAR25[1][0]);
                VAR63->VAR25[0][1] = VAR63->VAR25[0][0] + (1 << VAR12);
                VAR63->VAR25[0][1] = FUN11(VAR63->VAR25[0][1], VAR43->VAR25[0][1]);
                VAR63->VAR25[1][1] = VAR63->VAR25[1][0] + (1 << VAR13);
                VAR63->VAR25[1][1] = FUN11(VAR63->VAR25[1][1], VAR43->VAR25[1][1]);
                VAR63->VAR65 = FUN7(VAR63->VAR25[0][1] - VAR63->VAR25[0][0], VAR43->VAR61);
                VAR63->VAR66 = FUN7(VAR63->VAR25[1][1] - VAR63->VAR25[1][0], VAR43->VAR62);
                VAR63->VAR67 = FUN14(VAR63->VAR65, VAR63->VAR66);
                if (!VAR63->VAR67)
                    return FUN5(VAR30);
                VAR63->VAR68 = FUN14(VAR63->VAR65, VAR63->VAR66);
                if (!VAR63->VAR68)
                    return FUN5(VAR30);
                VAR63->VAR69 = FUN6(VAR63->VAR65 * VAR63->VAR66, sizeof(*VAR63->VAR69));
                if (!VAR63->VAR69)
                    return FUN5(VAR30);
                for (VAR45 = 0; VAR45 < VAR63->VAR65 * VAR63->VAR66; VAR45++)
                {
                    VAR70 *VAR69 = VAR63->VAR69 + VAR45;
                    uint16_t VAR71, VAR72;
                    VAR71 = (VAR63->VAR25[0][0] >> VAR43->VAR61) << VAR43->VAR61;
                    VAR71 = VAR71 + ((VAR45 % VAR63->VAR65) << VAR43->VAR61);
                    VAR69->VAR25[0][0] = FUN13(VAR71, VAR63->VAR25[0][0]);
                    VAR72 = (VAR63->VAR25[1][0] >> VAR43->VAR62) << VAR43->VAR62;
                    VAR72 = VAR72 + ((VAR45 / VAR63->VAR65) << VAR43->VAR62);
                    VAR69->VAR25[1][0] = FUN13(VAR72, VAR63->VAR25[1][0]);
                    VAR69->VAR25[0][1] = FUN11(VAR71 + (1 << VAR43->VAR61), VAR63->VAR25[0][1]);
                    VAR69->VAR25[1][1] = FUN11(VAR72 + (1 << VAR43->VAR62), VAR63->VAR25[1][1]);
                    if ((VAR15 + !!VAR14) & 1)
                    {
                        VAR69->VAR25[0][0] += VAR2->VAR31[VAR14 - 1].VAR25[0][1] - VAR2->VAR31[VAR14 - 1].VAR25[0][0];
                        VAR69->VAR25[0][1] += VAR2->VAR31[VAR14 - 1].VAR25[0][1] - VAR2->VAR31[VAR14 - 1].VAR25[0][0];
                    }
                    if ((VAR15 + !!VAR14) & 2)
                    {
                        VAR69->VAR25[1][0] += VAR2->VAR31[VAR14 - 1].VAR25[1][1] - VAR2->VAR31[VAR14 - 1].VAR25[1][0];
                        VAR69->VAR25[1][1] += VAR2->VAR31[VAR14 - 1].VAR25[1][1] - VAR2->VAR31[VAR14 - 1].VAR25[1][0];
                    }
                    VAR69->VAR73 = 0;
                    VAR69->VAR74 = 3;
                    VAR69->VAR75 = 0;
                    VAR69->VAR76 = 0;
                    VAR69->VAR77 = 0;
                }
            }
        }
    }
    return 0;
}