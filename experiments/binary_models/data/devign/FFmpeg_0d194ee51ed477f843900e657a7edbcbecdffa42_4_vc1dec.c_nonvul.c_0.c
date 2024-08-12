static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR2->VAR4.VAR6;
    VAR7 *VAR8 = &VAR2->VAR8;
    VAR9 *VAR10, *VAR11, *VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    int VAR22, VAR23;
    int VAR24 = VAR4->VAR24 >> VAR2->VAR25;
    if (!VAR2->VAR25 && !VAR2->VAR4.VAR26.VAR27.VAR28[0])
        return;
    VAR14 = VAR4->VAR29[1][0][0];
    VAR15 = VAR4->VAR29[1][0][1];
    VAR16 = (VAR14 + ((VAR14 & 3) == 3)) >> 1;
    VAR17 = (VAR15 + ((VAR15 & 3) == 3)) >> 1;
    if (VAR2->VAR25)
    {
        if (VAR2->VAR30 != VAR2->VAR31[1])
            VAR15 = VAR15 - 2 + 4 * VAR2->VAR30;
        VAR17 = VAR17 - 2 + 4 * VAR2->VAR30;
    }
    if (VAR2->VAR32)
    {
        VAR16 = VAR16 + ((VAR16 < 0) ? -(VAR16 & 1) : (VAR16 & 1));
        VAR17 = VAR17 + ((VAR17 < 0) ? -(VAR17 & 1) : (VAR17 & 1));
    }
    VAR10 = VAR4->VAR26.VAR27.VAR28[0];
    VAR11 = VAR4->VAR26.VAR27.VAR28[1];
    VAR12 = VAR4->VAR26.VAR27.VAR28[2];
    VAR18 = VAR4->VAR33 * 16 + (VAR14 >> 2);
    VAR19 = VAR4->VAR34 * 16 + (VAR15 >> 2);
    VAR20 = VAR4->VAR33 * 8 + (VAR16 >> 2);
    VAR21 = VAR4->VAR34 * 8 + (VAR17 >> 2);
    if (VAR2->VAR35 != VAR36)
    {
        VAR18 = FUN2(VAR18, -16, VAR4->VAR37 * 16);
        VAR19 = FUN2(VAR19, -16, VAR4->VAR38 * 16);
        VAR20 = FUN2(VAR20, -8, VAR4->VAR37 * 8);
        VAR21 = FUN2(VAR21, -8, VAR4->VAR38 * 8);
    }
    else
    {
        VAR18 = FUN2(VAR18, -17, VAR4->VAR39->VAR40);
        VAR19 = FUN2(VAR19, -18, VAR4->VAR39->VAR41 + 1);
        VAR20 = FUN2(VAR20, -8, VAR4->VAR39->VAR40 >> 1);
        VAR21 = FUN2(VAR21, -8, VAR4->VAR39->VAR41 >> 1);
    }
    VAR10 += VAR19 * VAR4->VAR42 + VAR18;
    VAR11 += VAR21 * VAR4->VAR43 + VAR20;
    VAR12 += VAR21 * VAR4->VAR43 + VAR20;
    if (VAR2->VAR25 && VAR2->VAR31[1])
    {
        VAR10 += VAR4->VAR44->VAR27.VAR42[0];
        VAR11 += VAR4->VAR44->VAR27.VAR42[1];
        VAR12 += VAR4->VAR44->VAR27.VAR42[2];
    }
    if (VAR4->VAR45 & VAR46)
    {
        VAR11 = VAR4->VAR47 + 18 * VAR4->VAR42;
        VAR12 = VAR4->VAR47 + 18 * VAR4->VAR42;
    }
    if (VAR2->VAR48 || VAR4->VAR49 < 22 || VAR24 < 22 || (unsigned)(VAR18 - 1) > VAR4->VAR49 - (VAR14 & 3) - 16 - 3 || (unsigned)(VAR19 - 1) > VAR24 - (VAR15 & 3) - 16 - 3)
    {
        VAR9 *VAR50 = VAR4->VAR47 + 19 * VAR4->VAR42;
        VAR10 -= VAR4->VAR51 * (1 + VAR4->VAR42);
        VAR4->VAR52.FUN3(VAR4->VAR47, VAR10, VAR4->VAR42, 17 + VAR4->VAR51 * 2, 17 + VAR4->VAR51 * 2, VAR18 - VAR4->VAR51, VAR19 - VAR4->VAR51, VAR4->VAR49, VAR24);
        VAR10 = VAR4->VAR47;
        VAR4->VAR52.FUN3(VAR50, VAR11, VAR4->VAR43, 8 + 1, 8 + 1, VAR20, VAR21, VAR4->VAR49 >> 1, VAR24 >> 1);
        VAR4->VAR52.FUN3(VAR50 + 16, VAR12, VAR4->VAR43, 8 + 1, 8 + 1, VAR20, VAR21, VAR4->VAR49 >> 1, VAR24 >> 1);
        VAR11 = VAR50;
        VAR12 = VAR50 + 16;
        if (VAR2->VAR48)
        {
            int VAR53, VAR54;
            VAR9 *VAR55, *VAR56;
            VAR55 = VAR10;
            for (VAR54 = 0; VAR54 < 17 + VAR4->VAR51 * 2; VAR54++)
            {
                for (VAR53 = 0; VAR53 < 17 + VAR4->VAR51 * 2; VAR53++)
                    VAR55[VAR53] = ((VAR55[VAR53] - 128) >> 1) + 128;
                VAR55 += VAR4->VAR42;
            }
            VAR55 = VAR11;
            VAR56 = VAR12;
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
        VAR10 += VAR4->VAR51 * (1 + VAR4->VAR42);
    }
    VAR22 = 0;
    VAR23 = 0;
    if (VAR4->VAR51)
    {
        VAR13 = ((VAR15 & 3) << 2) | (VAR14 & 3);
        VAR2->VAR57.VAR58[VAR13](VAR4->VAR59[0] + VAR22, VAR10, VAR4->VAR42, VAR2->VAR60);
        VAR2->VAR57.VAR58[VAR13](VAR4->VAR59[0] + VAR22 + 8, VAR10 + 8, VAR4->VAR42, VAR2->VAR60);
        VAR10 += VAR4->VAR42 * 8;
        VAR2->VAR57.VAR58[VAR13](VAR4->VAR59[0] + VAR22 + 8 * VAR4->VAR42, VAR10, VAR4->VAR42, VAR2->VAR60);
        VAR2->VAR57.VAR58[VAR13](VAR4->VAR59[0] + VAR22 + 8 * VAR4->VAR42 + 8, VAR10 + 8, VAR4->VAR42, VAR2->VAR60);
    }
    else
    {
        VAR13 = (VAR15 & 2) | ((VAR14 & 2) >> 1);
        if (!VAR2->VAR60)
            VAR6->VAR61[0][VAR13](VAR4->VAR59[0] + VAR22, VAR10, VAR4->VAR42, 16);
        else
            VAR6->VAR62[VAR13](VAR4->VAR59[0] + VAR22, VAR10, VAR4->VAR42, 16);
    }
    if (VAR4->VAR45 & VAR46)
        return;
    VAR16 = (VAR16 & 3) << 1;
    VAR17 = (VAR17 & 3) << 1;
    if (!VAR2->VAR60)
    {
        VAR8->VAR63[0](VAR4->VAR59[1] + VAR23, VAR11, VAR4->VAR43, 8, VAR16, VAR17);
        VAR8->VAR63[0](VAR4->VAR59[2] + VAR23, VAR12, VAR4->VAR43, 8, VAR16, VAR17);
    }
    else
    {
        VAR2->VAR57.VAR64[0](VAR4->VAR59[1] + VAR23, VAR11, VAR4->VAR43, 8, VAR16, VAR17);
        VAR2->VAR57.VAR64[0](VAR4->VAR59[2] + VAR23, VAR12, VAR4->VAR43, 8, VAR16, VAR17);
    }
}