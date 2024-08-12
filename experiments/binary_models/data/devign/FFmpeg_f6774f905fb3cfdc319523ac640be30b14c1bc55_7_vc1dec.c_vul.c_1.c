static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR2->VAR6;
    VAR7 *VAR8, *VAR9, *VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    int VAR20, VAR21;
    int VAR22 = VAR4->VAR22 >> VAR2->VAR23;
    int VAR24 = VAR2->VAR25;
    if (!VAR2->VAR23 && !VAR2->VAR4.VAR26.VAR27.VAR28[0])
        return;
    VAR12 = VAR4->VAR29[1][0][0];
    VAR13 = VAR4->VAR29[1][0][1];
    VAR14 = (VAR12 + ((VAR12 & 3) == 3)) >> 1;
    VAR15 = (VAR13 + ((VAR13 & 3) == 3)) >> 1;
    if (VAR2->VAR23)
    {
        if (VAR2->VAR30 != VAR2->VAR31[1])
            VAR13 = VAR13 - 2 + 4 * VAR2->VAR30;
        VAR15 = VAR15 - 2 + 4 * VAR2->VAR30;
    }
    if (VAR2->VAR32)
    {
        VAR14 = VAR14 + ((VAR14 < 0) ? -(VAR14 & 1) : (VAR14 & 1));
        VAR15 = VAR15 + ((VAR15 < 0) ? -(VAR15 & 1) : (VAR15 & 1));
    }
    VAR8 = VAR4->VAR26.VAR27.VAR28[0];
    VAR9 = VAR4->VAR26.VAR27.VAR28[1];
    VAR10 = VAR4->VAR26.VAR27.VAR28[2];
    VAR16 = VAR4->VAR33 * 16 + (VAR12 >> 2);
    VAR17 = VAR4->VAR34 * 16 + (VAR13 >> 2);
    VAR18 = VAR4->VAR33 * 8 + (VAR14 >> 2);
    VAR19 = VAR4->VAR34 * 8 + (VAR15 >> 2);
    if (VAR2->VAR35 != VAR36)
    {
        VAR16 = FUN2(VAR16, -16, VAR4->VAR37 * 16);
        VAR17 = FUN2(VAR17, -16, VAR4->VAR38 * 16);
        VAR18 = FUN2(VAR18, -8, VAR4->VAR37 * 8);
        VAR19 = FUN2(VAR19, -8, VAR4->VAR38 * 8);
    }
    else
    {
        VAR16 = FUN2(VAR16, -17, VAR4->VAR39->VAR40);
        VAR17 = FUN2(VAR17, -18, VAR4->VAR39->VAR41 + 1);
        VAR18 = FUN2(VAR18, -8, VAR4->VAR39->VAR40 >> 1);
        VAR19 = FUN2(VAR19, -8, VAR4->VAR39->VAR41 >> 1);
    }
    VAR8 += VAR17 * VAR4->VAR42 + VAR16;
    VAR9 += VAR19 * VAR4->VAR43 + VAR18;
    VAR10 += VAR19 * VAR4->VAR43 + VAR18;
    if (VAR2->VAR23 && VAR2->VAR31[1])
    {
        VAR8 += VAR4->VAR44->VAR27.VAR42[0];
        VAR9 += VAR4->VAR44->VAR27.VAR42[1];
        VAR10 += VAR4->VAR44->VAR27.VAR42[2];
    }
    if (VAR4->VAR45 & VAR46)
    {
        VAR9 = VAR4->VAR47 + 18 * VAR4->VAR42;
        VAR10 = VAR4->VAR47 + 18 * VAR4->VAR42;
    }
    if (VAR2->VAR48 || VAR4->VAR49 < 22 || VAR22 < 22 || VAR24 || (unsigned)(VAR16 - 1) > VAR4->VAR49 - (VAR12 & 3) - 16 - 3 || (unsigned)(VAR17 - 1) > VAR22 - (VAR13 & 3) - 16 - 3)
    {
        VAR7 *VAR50 = VAR4->VAR47 + 19 * VAR4->VAR42;
        VAR8 -= VAR4->VAR51 * (1 + VAR4->VAR42);
        VAR4->VAR52.FUN3(VAR4->VAR47, VAR8, VAR4->VAR42, VAR4->VAR42, 17 + VAR4->VAR51 * 2, 17 + VAR4->VAR51 * 2, VAR16 - VAR4->VAR51, VAR17 - VAR4->VAR51, VAR4->VAR49, VAR22);
        VAR8 = VAR4->VAR47;
        VAR4->VAR52.FUN3(VAR50, VAR9, VAR4->VAR43, VAR4->VAR43, 8 + 1, 8 + 1, VAR18, VAR19, VAR4->VAR49 >> 1, VAR22 >> 1);
        VAR4->VAR52.FUN3(VAR50 + 16, VAR10, VAR4->VAR43, VAR4->VAR43, 8 + 1, 8 + 1, VAR18, VAR19, VAR4->VAR49 >> 1, VAR22 >> 1);
        VAR9 = VAR50;
        VAR10 = VAR50 + 16;
        if (VAR2->VAR48)
        {
            int VAR53, VAR54;
            VAR7 *VAR55, *VAR56;
            VAR55 = VAR8;
            for (VAR54 = 0; VAR54 < 17 + VAR4->VAR51 * 2; VAR54++)
            {
                for (VAR53 = 0; VAR53 < 17 + VAR4->VAR51 * 2; VAR53++)
                    VAR55[VAR53] = ((VAR55[VAR53] - 128) >> 1) + 128;
                VAR55 += VAR4->VAR42;
            }
            VAR55 = VAR9;
            VAR56 = VAR10;
            for (VAR54 = 0; VAR54 < 9; VAR54++)
            {
                for (VAR53 = 0; VAR53 < 9; VAR53++)
                {
                    VAR55[VAR53] = ((VAR55[VAR53] - 128) >> 1) + 128;
                    VAR56[VAR53] = ((VAR56[VAR53] - 128) >> 1) + 128;
                }
                VAR55 += VAR4->VAR43;
                VAR56 += VAR4->VAR43;
            }
        }
        if (VAR24)
        {
            FUN4(*VAR57)[256] = VAR2->VAR58;
            FUN4(*VAR59)[256] = VAR2->VAR60;
            int VAR53, VAR54;
            VAR7 *VAR55, *VAR56;
            VAR55 = VAR8;
            for (VAR54 = 0; VAR54 < 17 + VAR4->VAR51 * 2; VAR54++)
            {
                int VAR27 = VAR2->VAR23 ? VAR2->VAR31[1] : ((VAR54 + VAR17 - VAR4->VAR51) & 1);
                for (VAR53 = 0; VAR53 < 17 + VAR4->VAR51 * 2; VAR53++)
                    VAR55[VAR53] = VAR57[VAR27][VAR55[VAR53]];
                VAR55 += VAR4->VAR42;
            }
            VAR55 = VAR9;
            VAR56 = VAR10;
            for (VAR54 = 0; VAR54 < 9; VAR54++)
            {
                int VAR27 = VAR2->VAR23 ? VAR2->VAR31[1] : ((VAR54 + VAR19) & 1);
                for (VAR53 = 0; VAR53 < 9; VAR53++)
                {
                    VAR55[VAR53] = VAR59[VAR27][VAR55[VAR53]];
                    VAR56[VAR53] = VAR59[VAR27][VAR56[VAR53]];
                }
                VAR55 += VAR4->VAR43;
                VAR56 += VAR4->VAR43;
            }
        }
        VAR8 += VAR4->VAR51 * (1 + VAR4->VAR42);
    }
    VAR20 = 0;
    VAR21 = 0;
    if (VAR4->VAR51)
    {
        VAR11 = ((VAR13 & 3) << 2) | (VAR12 & 3);
        VAR2->VAR61.VAR62[VAR11](VAR4->VAR63[0] + VAR20, VAR8, VAR4->VAR42, VAR2->VAR64);
        VAR2->VAR61.VAR62[VAR11](VAR4->VAR63[0] + VAR20 + 8, VAR8 + 8, VAR4->VAR42, VAR2->VAR64);
        VAR8 += VAR4->VAR42 * 8;
        VAR2->VAR61.VAR62[VAR11](VAR4->VAR63[0] + VAR20 + 8 * VAR4->VAR42, VAR8, VAR4->VAR42, VAR2->VAR64);
        VAR2->VAR61.VAR62[VAR11](VAR4->VAR63[0] + VAR20 + 8 * VAR4->VAR42 + 8, VAR8 + 8, VAR4->VAR42, VAR2->VAR64);
    }
    else
    {
        VAR11 = (VAR13 & 2) | ((VAR12 & 2) >> 1);
        if (!VAR2->VAR64)
            VAR4->VAR65.VAR66[0][VAR11](VAR4->VAR63[0] + VAR20, VAR8, VAR4->VAR42, 16);
        else
            VAR4->VAR65.VAR67[VAR11](VAR4->VAR63[0] + VAR20, VAR8, VAR4->VAR42, 16);
    }
    if (VAR4->VAR45 & VAR46)
        return;
    VAR14 = (VAR14 & 3) << 1;
    VAR15 = (VAR15 & 3) << 1;
    if (!VAR2->VAR64)
    {
        VAR6->VAR68[0](VAR4->VAR63[1] + VAR21, VAR9, VAR4->VAR43, 8, VAR14, VAR15);
        VAR6->VAR68[0](VAR4->VAR63[2] + VAR21, VAR10, VAR4->VAR43, 8, VAR14, VAR15);
    }
    else
    {
        VAR2->VAR61.VAR69[0](VAR4->VAR63[1] + VAR21, VAR9, VAR4->VAR43, 8, VAR14, VAR15);
        VAR2->VAR61.VAR69[0](VAR4->VAR63[2] + VAR21, VAR10, VAR4->VAR43, 8, VAR14, VAR15);
    }
}