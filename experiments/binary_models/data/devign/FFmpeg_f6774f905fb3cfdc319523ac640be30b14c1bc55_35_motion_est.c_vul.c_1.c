static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *const VAR7 = &VAR2->VAR8;
    const int VAR9 = 1;
    const int VAR10 = 8;
    int VAR11;
    int VAR12[10][2];
    int VAR13 = 0, VAR14 = 0, VAR15 = 0;
    int VAR16 = 1;
    const int VAR17 = VAR7->VAR17;
    VAR18 *VAR19 = VAR7->VAR20;
    FUN2(VAR7);
    for (VAR11 = 0; VAR11 < 4; VAR11++)
    {
        int VAR21, VAR22;
        int VAR23, VAR24;
        int VAR25;
        static const int VAR26[4] = {2, 1, 1, -1};
        const int VAR27 = VAR2->VAR28;
        const int VAR29 = VAR2->VAR30[VAR11];
        VAR31[0] = VAR2->VAR32.VAR33[0][VAR29 - 1][0];
        VAR31[1] = VAR2->VAR32.VAR33[0][VAR29 - 1][1];
        if (VAR31[0] > (VAR7->VAR34 << VAR5))
            VAR31[0] = (VAR7->VAR34 << VAR5);
        if (VAR2->VAR35 && VAR11 < 2)
        {
            VAR7->VAR36 = VAR23 = VAR31[0];
            VAR7->VAR37 = VAR24 = VAR31[1];
        }
        else
        {
            VAR38[0] = VAR2->VAR32.VAR33[0][VAR29 - VAR27][0];
            VAR38[1] = VAR2->VAR32.VAR33[0][VAR29 - VAR27][1];
            VAR39[0] = VAR2->VAR32.VAR33[0][VAR29 - VAR27 + VAR26[VAR11]][0];
            VAR39[1] = VAR2->VAR32.VAR33[0][VAR29 - VAR27 + VAR26[VAR11]][1];
            if (VAR38[1] > (VAR7->VAR40 << VAR5))
                VAR38[1] = (VAR7->VAR40 << VAR5);
            if (VAR39[0] < (VAR7->VAR41 << VAR5))
                VAR39[0] = (VAR7->VAR41 << VAR5);
            if (VAR39[0] > (VAR7->VAR34 << VAR5))
                VAR39[0] = (VAR7->VAR34 << VAR5);
            if (VAR39[1] > (VAR7->VAR40 << VAR5))
                VAR39[1] = (VAR7->VAR40 << VAR5);
            VAR42[0] = FUN3(VAR31[0], VAR38[0], VAR39[0]);
            VAR42[1] = FUN3(VAR31[1], VAR38[1], VAR39[1]);
            VAR7->VAR36 = VAR23 = VAR42[0];
            VAR7->VAR37 = VAR24 = VAR42[1];
        }
        VAR43[0] = VAR3;
        VAR43[1] = VAR4;
        VAR25 = FUN4(VAR2, &VAR21, &VAR22, VAR12, VAR11, VAR11, VAR2->VAR44, (1 << 16) >> VAR5);
        VAR25 = VAR7->FUN5(VAR2, &VAR21, &VAR22, VAR25, VAR11, VAR11, VAR9, VAR10);
        if (VAR2->VAR45.VAR46[0] != VAR2->VAR45.VAR47[0])
        {
            int VAR48;
            const int VAR49 = ((VAR11 & 1) + (VAR11 >> 1) * VAR17) * 8;
            VAR18 *VAR50 = VAR7->VAR51 + VAR49;
            if (VAR2->VAR52)
            {
                VAR18 *VAR53 = VAR7->VAR53[VAR11][0] + (VAR21 >> 2) + (VAR22 >> 2) * VAR17;
                VAR48 = ((VAR22 & 3) << 2) | (VAR21 & 3);
                if (VAR2->VAR54)
                    VAR2->VAR45.VAR55[1][VAR48](VAR50, VAR53, VAR17);
                else
                    VAR2->VAR45.VAR56[1][VAR48](VAR50, VAR53, VAR17);
            }
            else
            {
                VAR18 *VAR53 = VAR7->VAR53[VAR11][0] + (VAR21 >> 1) + (VAR22 >> 1) * VAR17;
                VAR48 = ((VAR22 & 1) << 1) | (VAR21 & 1);
                if (VAR2->VAR54)
                    VAR2->VAR57.VAR58[1][VAR48](VAR50, VAR53, VAR17, VAR10);
                else
                    VAR2->VAR57.VAR59[1][VAR48](VAR50, VAR53, VAR17, VAR10);
            }
            VAR13 += (VAR19[VAR21 - VAR23] + VAR19[VAR22 - VAR24]) * VAR7->VAR60;
        }
        else
            VAR13 += VAR25;
        if (VAR2->VAR52)
        {
            VAR14 += VAR21 / 2;
            VAR15 += VAR22 / 2;
        }
        else
        {
            VAR14 += VAR21;
            VAR15 += VAR22;
        }
        VAR2->VAR32.VAR33[0][VAR2->VAR30[VAR11]][0] = VAR21;
        VAR2->VAR32.VAR33[0][VAR2->VAR30[VAR11]][1] = VAR22;
        if (VAR21 != VAR3 || VAR22 != VAR4)
            VAR16 = 0;
    }
    if (VAR16)
        return VAR61;
    if (VAR2->VAR45.VAR46[0] != VAR2->VAR45.VAR47[0])
    {
        VAR13 += VAR2->VAR45.VAR47[0](VAR2, VAR2->VAR62.VAR63.VAR64[0] + VAR2->VAR65 * 16 + VAR2->VAR66 * 16 * VAR17, VAR7->VAR51, VAR17, 16);
    }
    if (VAR7->VAR67->VAR47 & VAR68)
    {
        int VAR48;
        int VAR3, VAR4;
        int VAR49;
        VAR3 = FUN6(VAR14);
        VAR4 = FUN6(VAR15);
        VAR48 = ((VAR4 & 1) << 1) | (VAR3 & 1);
        VAR49 = (VAR2->VAR65 * 8 + (VAR3 >> 1)) + (VAR2->VAR66 * 8 + (VAR4 >> 1)) * VAR2->VAR69;
        if (VAR2->VAR54)
        {
            VAR2->VAR57.VAR58[1][VAR48](VAR7->VAR51, VAR2->VAR70.VAR63.VAR64[1] + VAR49, VAR2->VAR69, 8);
            VAR2->VAR57.VAR58[1][VAR48](VAR7->VAR51 + 8, VAR2->VAR70.VAR63.VAR64[2] + VAR49, VAR2->VAR69, 8);
        }
        else
        {
            VAR2->VAR57.VAR59[1][VAR48](VAR7->VAR51, VAR2->VAR70.VAR63.VAR64[1] + VAR49, VAR2->VAR69, 8);
            VAR2->VAR57.VAR59[1][VAR48](VAR7->VAR51 + 8, VAR2->VAR70.VAR63.VAR64[2] + VAR49, VAR2->VAR69, 8);
        }
        VAR13 += VAR2->VAR45.VAR47[1](VAR2, VAR2->VAR62.VAR63.VAR64[1] + VAR2->VAR65 * 8 + VAR2->VAR66 * 8 * VAR2->VAR69, VAR7->VAR51, VAR2->VAR69, 8);
        VAR13 += VAR2->VAR45.VAR47[1](VAR2, VAR2->VAR62.VAR63.VAR64[2] + VAR2->VAR65 * 8 + VAR2->VAR66 * 8 * VAR2->VAR69, VAR7->VAR51 + 8, VAR2->VAR69, 8);
    }
    VAR7->VAR36 = VAR3;
    VAR7->VAR37 = VAR4;
    switch (VAR7->VAR67->VAR47 & 0xFF)
    {
    case VAR71:
        return VAR13;
    default:
        return VAR13 + 11 * VAR7->VAR60;
    }
}