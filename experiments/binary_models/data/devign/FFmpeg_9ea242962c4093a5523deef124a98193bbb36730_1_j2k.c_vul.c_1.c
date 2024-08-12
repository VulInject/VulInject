int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10, VAR11, VAR12 = 0, VAR13, VAR14, VAR15, VAR16 = 1;
    if (VAR13 = FUN2(&VAR2->VAR17, VAR2->VAR18, VAR4->VAR19 - 1, VAR4->VAR20))
        return VAR13;
    for (VAR14 = 0; VAR14 < 2; VAR14++)
        VAR16 *= VAR2->VAR18[VAR14][1] - VAR2->VAR18[VAR14][0];
    VAR2->VAR21 = FUN3(VAR16 * sizeof(int));
    if (!VAR2->VAR21)
        return FUN4(VAR22);
    VAR2->VAR23 = FUN3(VAR4->VAR19 * sizeof(VAR24));
    if (!VAR2->VAR23)
        return FUN4(VAR22);
    for (VAR10 = 0; VAR10 < VAR4->VAR19; VAR10++)
    {
        int VAR25 = VAR4->VAR19 - VAR10;
        VAR24 *VAR23 = VAR2->VAR23 + VAR10;
        for (VAR14 = 0; VAR14 < 2; VAR14++)
            for (VAR15 = 0; VAR15 < 2; VAR15++)
                VAR23->VAR18[VAR14][VAR15] = FUN5(VAR2->VAR18[VAR14][VAR15], VAR25 - 1);
        if (VAR10 == 0)
            VAR23->VAR26 = 1;
        else
            VAR23->VAR26 = 3;
        if (VAR23->VAR18[0][1] == VAR23->VAR18[0][0])
            VAR23->VAR27 = 0;
        else
            VAR23->VAR27 = FUN5(VAR23->VAR18[0][1], VAR4->VAR28) - (VAR23->VAR18[0][0] >> VAR4->VAR28);
        if (VAR23->VAR18[1][1] == VAR23->VAR18[1][0])
            VAR23->VAR29 = 0;
        else
            VAR23->VAR29 = FUN5(VAR23->VAR18[1][1], VAR4->VAR30) - (VAR23->VAR18[1][0] >> VAR4->VAR30);
        VAR23->VAR31 = FUN3(VAR23->VAR26 * sizeof(VAR32));
        if (!VAR23->VAR31)
            return FUN4(VAR22);
        for (VAR11 = 0; VAR11 < VAR23->VAR26; VAR11++, VAR12++)
        {
            VAR32 *VAR31 = VAR23->VAR31 + VAR11;
            int VAR33, VAR34, VAR35, VAR36;
            int VAR37, VAR38, VAR39, VAR40;
            int VAR41, VAR42, VAR43, VAR44;
            int VAR45, VAR46;
            if (VAR6->VAR47 != VAR48)
            {
                static const uint8_t VAR49[2][4] = {{0, 0, 0, 0}, {0, 1, 1, 2}};
                int VAR50;
                VAR50 = VAR7 + VAR49[VAR4->VAR20][VAR11 + VAR10 > 0];
                VAR31->VAR51 = FUN6(2048 + VAR6->VAR52[VAR12], 2 + VAR50 - VAR6->VAR53[VAR12]);
            }
            else
                VAR31->VAR51 = 1 << 13;
            if (VAR10 == 0)
            {
                VAR31->VAR54 = 1 << FUN7(VAR4->VAR55, VAR4->VAR28 - 1);
                VAR31->VAR56 = 1 << FUN7(VAR4->VAR57, VAR4->VAR30 - 1);
                for (VAR14 = 0; VAR14 < 2; VAR14++)
                    for (VAR15 = 0; VAR15 < 2; VAR15++)
                        VAR31->VAR18[VAR14][VAR15] = FUN5(VAR2->VAR18[VAR14][VAR15], VAR25 - 1);
            }
            else
            {
                VAR31->VAR54 = 1 << FUN7(VAR4->VAR55, VAR4->VAR28);
                VAR31->VAR56 = 1 << FUN7(VAR4->VAR57, VAR4->VAR30);
                for (VAR14 = 0; VAR14 < 2; VAR14++)
                    for (VAR15 = 0; VAR15 < 2; VAR15++)
                        VAR31->VAR18[VAR14][VAR15] = FUN5(VAR2->VAR18[VAR14][VAR15] - (((VAR11 + 1 >> VAR14) & 1) << VAR25 - 1), VAR25);
            }
            VAR31->VAR58 = FUN8(VAR31->VAR18[0][1], VAR31->VAR54) - VAR31->VAR18[0][0] / VAR31->VAR54;
            VAR31->VAR59 = FUN8(VAR31->VAR18[1][1], VAR31->VAR56) - VAR31->VAR18[1][0] / VAR31->VAR56;
            for (VAR15 = 0; VAR15 < 2; VAR15++)
                VAR31->VAR18[0][VAR15] = FUN8(VAR31->VAR18[0][VAR15], VAR8);
            for (VAR15 = 0; VAR15 < 2; VAR15++)
                VAR31->VAR18[1][VAR15] = FUN8(VAR31->VAR18[1][VAR15], VAR9);
            VAR31->VAR58 = FUN8(VAR31->VAR58, VAR8);
            VAR31->VAR59 = FUN8(VAR31->VAR59, VAR9);
            VAR31->VAR60 = FUN3(sizeof(VAR61) * VAR31->VAR58 * VAR31->VAR59);
            if (!VAR31->VAR60)
                return FUN4(VAR22);
            VAR31->VAR62 = FUN3(sizeof(VAR61) * VAR23->VAR27 * VAR23->VAR29);
            if (!VAR31->VAR62)
                return FUN4(VAR22);
            for (VAR33 = 0; VAR33 < VAR31->VAR58 * VAR31->VAR59; VAR33++)
            {
                VAR61 *VAR60 = VAR31->VAR60 + VAR33;
                VAR60->VAR63 = 0;
                VAR60->VAR64 = 3;
                VAR60->VAR65 = 0;
                VAR60->VAR66 = 0;
                VAR60->VAR67 = 0;
            }
            VAR38 = VAR31->VAR18[1][0];
            VAR40 = ((VAR31->VAR18[1][0] + (1 << VAR4->VAR30)) & ~((1 << VAR4->VAR30) - 1)) - VAR38;
            VAR42 = 0;
            VAR44 = FUN5(VAR40 - VAR38, VAR4->VAR57) << VAR4->VAR57;
            VAR44 = FUN7(VAR44, VAR31->VAR59);
            VAR46 = 1 << (VAR4->VAR30 - VAR4->VAR57);
            for (VAR35 = 0, VAR36 = 0; VAR35 < VAR23->VAR29; VAR35++)
            {
                for (VAR34 = 0; VAR34 < VAR23->VAR27; VAR34++, VAR36++)
                {
                    VAR31->VAR62[VAR36].VAR42 = VAR42;
                    VAR31->VAR62[VAR36].VAR44 = VAR44;
                }
                VAR44 += VAR46;
                VAR42 = VAR44 - VAR46;
                VAR44 = FUN7(VAR44, VAR31->VAR59);
            }
            VAR37 = VAR31->VAR18[0][0];
            VAR39 = ((VAR31->VAR18[0][0] + (1 << VAR4->VAR28)) & ~((1 << VAR4->VAR28) - 1)) - VAR37;
            VAR41 = 0;
            VAR43 = FUN5(VAR39 - VAR37, VAR4->VAR55) << VAR4->VAR55;
            VAR43 = FUN7(VAR43, VAR31->VAR58);
            VAR45 = 1 << (VAR4->VAR28 - VAR4->VAR55);
            for (VAR34 = 0, VAR36 = 0; VAR34 < VAR23->VAR27; VAR34++)
            {
                for (VAR35 = 0; VAR35 < VAR23->VAR29; VAR35++, VAR36 = 0)
                {
                    VAR68 *VAR62 = VAR31->VAR62 + VAR36;
                    VAR62->VAR41 = VAR41;
                    VAR62->VAR43 = VAR43;
                    VAR62->VAR69 = FUN9(VAR62->VAR43 - VAR62->VAR41, VAR62->VAR44 - VAR62->VAR42);
                    VAR62->VAR70 = FUN9(VAR62->VAR43 - VAR62->VAR41, VAR62->VAR44 - VAR62->VAR42);
                    if (!VAR62->VAR69 || !VAR62->VAR70)
                        return FUN4(VAR22);
                }
                VAR43 += VAR45;
                VAR41 = VAR43 - VAR45;
                VAR43 = FUN7(VAR43, VAR31->VAR58);
            }
        }
    }
    return 0;
}