static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    int16_t VAR18;
    int VAR19, VAR20;
    for (VAR19 = 1; (1 << VAR19) < 2 * VAR2->VAR21; VAR19++)
        ;
    VAR20 = 1 << (VAR19 - 1);
    VAR13 = VAR2->VAR22.VAR13;
    VAR11 = VAR13;
    if (!VAR2->VAR23)
    {
        int VAR24 = VAR2->VAR25 == VAR26 ? VAR2->VAR27 : (2 * VAR20);
        VAR10 = 2 * VAR13;
        VAR9 = VAR2->VAR28;
        VAR9 /= VAR10;
        if (VAR29)
        {
            VAR18 = FUN2() - VAR29;
            VAR9 -= (VAR18 * VAR2->VAR22.VAR30) / 1000000;
        }
        VAR9 += 2 * VAR24;
        if (VAR9 < VAR24)
            VAR9 = VAR24;
        VAR4 = VAR5 = FUN3(VAR2->VAR31 - VAR9 * VAR13, VAR32);
        if (VAR2->VAR25 == VAR26)
        {
            VAR14 = VAR33;
            for (VAR3 = 0; VAR3 < 1000; VAR3 += VAR13)
            {
                int VAR34 = (VAR32 + VAR5 - VAR3) % VAR32;
                int VAR35 = VAR2->VAR36[VAR34];
                int VAR37 = VAR2->VAR36[(VAR34 + 4 * VAR13) % VAR32];
                int VAR38 = VAR2->VAR36[(VAR34 + 5 * VAR13) % VAR32];
                int VAR39 = VAR2->VAR36[(VAR34 + 9 * VAR13) % VAR32];
                int VAR40 = VAR35 - VAR39;
                if (VAR14 < VAR40 && (VAR37 ^ VAR38) < 0)
                {
                    VAR14 = VAR40;
                    VAR4 = VAR34;
                }
            }
        }
        VAR2->VAR41 = VAR4;
    }
    else
    {
        VAR4 = VAR2->VAR41;
    }
    VAR16 = FUN4(VAR42->VAR43, 0x00, 0x00, 0x00);
    if (VAR2->VAR25 == VAR26)
    {
        FUN5(VAR42, VAR2->VAR44, VAR2->VAR45, VAR2->VAR27, VAR2->VAR21, VAR16, 0);
        VAR17 = FUN4(VAR42->VAR43, 0xff, 0xff, 0xff);
        VAR14 = VAR2->VAR21 / VAR11;
        VAR15 = (VAR14 * 9) / 20;
        for (VAR12 = 0; VAR12 < VAR11; VAR12++)
        {
            VAR3 = VAR4 + VAR12;
            VAR6 = VAR2->VAR45 + VAR12 * VAR14 + (VAR14 / 2);
            for (VAR5 = 0; VAR5 < VAR2->VAR27; VAR5++)
            {
                VAR7 = (VAR2->VAR36[VAR3] * VAR15) >> 15;
                if (VAR7 < 0)
                {
                    VAR7 = -VAR7;
                    VAR8 = VAR6 - VAR7;
                }
                else
                {
                    VAR8 = VAR6;
                }
                FUN5(VAR42, VAR2->VAR44 + VAR5, VAR8, 1, VAR7, VAR17, 0);
                VAR3 += VAR13;
                if (VAR3 >= VAR32)
                    VAR3 -= VAR32;
            }
        }
        VAR17 = FUN4(VAR42->VAR43, 0x00, 0x00, 0xff);
        for (VAR12 = 1; VAR12 < VAR11; VAR12++)
        {
            VAR7 = VAR2->VAR45 + VAR12 * VAR14;
            FUN5(VAR42, VAR2->VAR44, VAR7, VAR2->VAR27, 1, VAR17, 0);
        }
        FUN6(VAR42, VAR2->VAR44, VAR2->VAR45, VAR2->VAR27, VAR2->VAR21);
    }
    else
    {
        VAR11 = FUN7(VAR11, 2);
        if (VAR19 != VAR2->VAR19)
        {
            FUN8(VAR2->VAR46);
            FUN9(VAR2->VAR47);
            VAR2->VAR46 = FUN10(VAR19, VAR48);
            VAR2->VAR19 = VAR19;
            VAR2->VAR47 = FUN11(4 * VAR20 * sizeof(*VAR2->VAR47));
        }
        {
            VAR49 *VAR50[2];
            for (VAR12 = 0; VAR12 < VAR11; VAR12++)
            {
                VAR50[VAR12] = VAR2->VAR47 + 2 * VAR20 * VAR12;
                VAR3 = VAR4 + VAR12;
                for (VAR5 = 0; VAR5 < 2 * VAR20; VAR5++)
                {
                    double VAR51 = (VAR5 - VAR20) * (1.0 / VAR20);
                    VAR50[VAR12][VAR5] = VAR2->VAR36[VAR3] * (1.0 - VAR51 * VAR51);
                    VAR3 += VAR13;
                    if (VAR3 >= VAR32)
                        VAR3 -= VAR32;
                }
                FUN12(VAR2->VAR46, VAR50[VAR12]);
            }
            for (VAR7 = 0; VAR7 < VAR2->VAR21; VAR7++)
            {
                double VAR51 = 1 / FUN13(VAR20);
                int VAR35 = FUN13(VAR51 * FUN13(VAR50[0][2 * VAR7 + 0] * VAR50[0][2 * VAR7 + 0] + VAR50[0][2 * VAR7 + 1] * VAR50[0][2 * VAR7 + 1]));
                int VAR37 = (VAR11 == 2) ? FUN13(VAR51 * FUN13(VAR50[1][2 * VAR7 + 0] * VAR50[1][2 * VAR7 + 0] + VAR50[1][2 * VAR7 + 1] * VAR50[1][2 * VAR7 + 1])) : VAR35;
                VAR35 = FUN7(VAR35, 255);
                VAR37 = FUN7(VAR37, 255);
                VAR17 = FUN4(VAR42->VAR43, VAR35, VAR37, (VAR35 + VAR37) / 2);
                FUN5(VAR42, VAR2->VAR52, VAR2->VAR21 - VAR7, 1, 1, VAR17, 0);
            }
        }
        FUN6(VAR42, VAR2->VAR52, VAR2->VAR45, 1, VAR2->VAR21);
        if (!VAR2->VAR23)
            VAR2->VAR52++;
        if (VAR2->VAR52 >= VAR2->VAR27)
            VAR2->VAR52 = VAR2->VAR44;
    }
}