static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    VAR10 *VAR11, *VAR12;
    int VAR13, VAR14;
    int VAR15[4], VAR16[4];
    int VAR17, VAR18, VAR19, VAR20;
    int VAR21 = VAR2->VAR22[VAR7->VAR23[0]];
    static const int VAR24[16] = {0, 0, 1, 2, 4, 4, 5, 6, 2, 2, 3, 8, 6, 6, 7, 12};
    int VAR25 = VAR21 ? 1 : 4;
    int VAR26 = VAR7->VAR26 >> 1;
    int VAR27;
    FUN2(*VAR28)[256];
    if (VAR7->VAR29 & VAR30)
        return;
    for (VAR17 = 0; VAR17 < 4; VAR17++)
    {
        int VAR31 = VAR17 < 2 ? VAR3 : VAR4;
        VAR19 = VAR7->VAR32[VAR31][VAR17][0];
        VAR15[VAR17] = (VAR19 + ((VAR19 & 3) == 3)) >> 1;
        VAR20 = VAR7->VAR32[VAR31][VAR17][1];
        if (VAR21)
            VAR16[VAR17] = (VAR20 >> 4) * 8 + VAR24[VAR20 & 0xF];
        else
            VAR16[VAR17] = (VAR20 + ((VAR20 & 3) == 3)) >> 1;
    }
    for (VAR17 = 0; VAR17 < 4; VAR17++)
    {
        VAR18 = (VAR17 & 1) * 4 + ((VAR17 & 2) ? VAR25 * VAR7->VAR33 : 0);
        VAR13 = VAR7->VAR34 * 8 + (VAR17 & 1) * 4 + (VAR15[VAR17] >> 2);
        VAR14 = VAR7->VAR35 * 8 + ((VAR17 & 2) ? VAR25 : 0) + (VAR16[VAR17] >> 2);
        VAR13 = FUN3(VAR13, -8, VAR7->VAR36->VAR37 >> 1);
        VAR14 = FUN3(VAR14, -8, VAR7->VAR36->VAR38 >> 1);
        if (VAR17 < 2 ? VAR3 : VAR4)
        {
            VAR11 = VAR7->VAR39.VAR40.VAR41[1] + VAR14 * VAR7->VAR33 + VAR13;
            VAR12 = VAR7->VAR39.VAR40.VAR41[2] + VAR14 * VAR7->VAR33 + VAR13;
            VAR28 = VAR2->VAR42;
            VAR27 = VAR2->VAR43;
        }
        else
        {
            VAR11 = VAR7->VAR44.VAR40.VAR41[1] + VAR14 * VAR7->VAR33 + VAR13;
            VAR12 = VAR7->VAR44.VAR40.VAR41[2] + VAR14 * VAR7->VAR33 + VAR13;
            VAR28 = VAR2->VAR45;
            VAR27 = VAR2->VAR46;
        }
        VAR15[VAR17] = (VAR15[VAR17] & 3) << 1;
        VAR16[VAR17] = (VAR16[VAR17] & 3) << 1;
        if (VAR21 && !(VAR14 & 1))
            VAR26--;
        if (VAR21 && (VAR14 & 1) && VAR14 < 2)
            VAR14--;
        if (VAR27 || VAR7->VAR47 < 10 || VAR26 < (5 << VAR21) || (unsigned)VAR13 > (VAR7->VAR47 >> 1) - 5 || (unsigned)VAR14 > VAR26 - (5 << VAR21))
        {
            VAR7->VAR48.FUN4(VAR7->VAR49, VAR11, VAR7->VAR33, VAR7->VAR33, 5, (5 << VAR21), VAR13, VAR14, VAR7->VAR47 >> 1, VAR26);
            VAR7->VAR48.FUN4(VAR7->VAR49 + 16, VAR12, VAR7->VAR33, VAR7->VAR33, 5, (5 << VAR21), VAR13, VAR14, VAR7->VAR47 >> 1, VAR26);
            VAR11 = VAR7->VAR49;
            VAR12 = VAR7->VAR49 + 16;
            if (VAR27)
            {
                int VAR17, VAR50;
                VAR10 *VAR51, *VAR52;
                VAR51 = VAR11;
                VAR52 = VAR12;
                for (VAR50 = 0; VAR50 < 5; VAR50++)
                {
                    int VAR40 = (VAR14 + (VAR50 << VAR21)) & 1;
                    for (VAR17 = 0; VAR17 < 5; VAR17++)
                    {
                        VAR51[VAR17] = VAR28[VAR40][VAR51[VAR17]];
                        VAR52[VAR17] = VAR28[VAR40][VAR52[VAR17]];
                    }
                    VAR51 += VAR7->VAR33 << VAR21;
                    VAR52 += VAR7->VAR33 << VAR21;
                }
            }
        }
        if (VAR5)
        {
            if (!VAR2->VAR53)
            {
                VAR9->VAR54[1](VAR7->VAR55[1] + VAR18, VAR11, VAR7->VAR33 << VAR21, 4, VAR15[VAR17], VAR16[VAR17]);
                VAR9->VAR54[1](VAR7->VAR55[2] + VAR18, VAR12, VAR7->VAR33 << VAR21, 4, VAR15[VAR17], VAR16[VAR17]);
            }
            else
            {
                VAR2->VAR56.VAR57[1](VAR7->VAR55[1] + VAR18, VAR11, VAR7->VAR33 << VAR21, 4, VAR15[VAR17], VAR16[VAR17]);
                VAR2->VAR56.VAR57[1](VAR7->VAR55[2] + VAR18, VAR12, VAR7->VAR33 << VAR21, 4, VAR15[VAR17], VAR16[VAR17]);
            }
        }
        else
        {
            if (!VAR2->VAR53)
            {
                VAR9->VAR58[1](VAR7->VAR55[1] + VAR18, VAR11, VAR7->VAR33 << VAR21, 4, VAR15[VAR17], VAR16[VAR17]);
                VAR9->VAR58[1](VAR7->VAR55[2] + VAR18, VAR12, VAR7->VAR33 << VAR21, 4, VAR15[VAR17], VAR16[VAR17]);
            }
            else
            {
                VAR2->VAR56.VAR59[1](VAR7->VAR55[1] + VAR18, VAR11, VAR7->VAR33 << VAR21, 4, VAR15[VAR17], VAR16[VAR17]);
                VAR2->VAR56.VAR59[1](VAR7->VAR55[2] + VAR18, VAR12, VAR7->VAR33 << VAR21, 4, VAR15[VAR17], VAR16[VAR17]);
            }
        }
    }
}