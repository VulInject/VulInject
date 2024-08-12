void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11->VAR10;
    int VAR12 = VAR2->VAR13->VAR12;
    int VAR14 = VAR2->VAR13->VAR15;
    int VAR16 = VAR2->VAR13->VAR16;
    int VAR17 = VAR2->VAR13->VAR18;
    int VAR19 = VAR10[(VAR4 >> VAR12) * VAR16 + (VAR3 >> VAR12)].VAR19;
    int VAR20, VAR21;
    int VAR22, VAR23, VAR24;
    VAR20 = VAR4 > 0 && !(VAR4 & 7);
    if (VAR20 && ((!VAR2->VAR25.VAR26 && VAR7->VAR27 & VAR28 && (VAR4 % (1 << VAR2->VAR13->VAR29)) == 0) || (!VAR2->VAR30->VAR31 && VAR7->VAR27 & VAR32 && (VAR4 % (1 << VAR2->VAR13->VAR29)) == 0)))
        VAR20 = 0;
    if (VAR20)
    {
        int VAR33 = (VAR4 - 1) >> VAR12;
        int VAR34 = VAR4 >> VAR12;
        int VAR35 = (VAR4 - 1) >> VAR14;
        int VAR36 = VAR4 >> VAR14;
        for (VAR22 = 0; VAR22 < (1 << VAR5); VAR22 += 4)
        {
            int VAR37 = (VAR3 + VAR22) >> VAR12;
            int VAR38 = (VAR3 + VAR22) >> VAR14;
            VAR9 *VAR39 = &VAR10[VAR33 * VAR16 + VAR37];
            VAR9 *VAR40 = &VAR10[VAR34 * VAR16 + VAR37];
            uint8_t VAR41 = VAR2->VAR42[VAR35 * VAR17 + VAR38];
            uint8_t VAR43 = VAR2->VAR42[VAR36 * VAR17 + VAR38];
            VAR44 *VAR45 = FUN2(VAR2, VAR2->VAR11, VAR3 + VAR22, VAR4 - 1);
            VAR24 = FUN3(VAR2, VAR40, VAR43, VAR39, VAR41, VAR45, 1);
            if (VAR24)
                VAR2->VAR46[((VAR3 + VAR22) + VAR4 * VAR2->VAR47) >> 2] = VAR24;
        }
    }
    if (VAR5 > VAR2->VAR13->VAR12 && !VAR19)
        for (VAR23 = 8; VAR23 < (1 << VAR5); VAR23 += 8)
        {
            int VAR33 = (VAR4 + VAR23 - 1) >> VAR12;
            int VAR34 = (VAR4 + VAR23) >> VAR12;
            int VAR35 = (VAR4 + VAR23 - 1) >> VAR14;
            int VAR36 = (VAR4 + VAR23) >> VAR14;
            for (VAR22 = 0; VAR22 < (1 << VAR5); VAR22 += 4)
            {
                int VAR37 = (VAR3 + VAR22) >> VAR12;
                int VAR38 = (VAR3 + VAR22) >> VAR14;
                VAR9 *VAR39 = &VAR10[VAR33 * VAR16 + VAR37];
                VAR9 *VAR40 = &VAR10[VAR34 * VAR16 + VAR37];
                uint8_t VAR41 = VAR2->VAR42[VAR35 * VAR17 + VAR38];
                uint8_t VAR43 = VAR2->VAR42[VAR36 * VAR17 + VAR38];
                VAR44 *VAR45 = FUN2(VAR2, VAR2->VAR11, VAR3 + VAR22, VAR4 + VAR23 - 1);
                VAR24 = FUN3(VAR2, VAR40, VAR43, VAR39, VAR41, VAR45, 0);
                if (VAR24)
                    VAR2->VAR46[((VAR3 + VAR22) + (VAR4 + VAR23) * VAR2->VAR47) >> 2] = VAR24;
            }
        }
    VAR21 = VAR3 > 0 && !(VAR3 & 7);
    if (VAR21 && ((!VAR2->VAR25.VAR26 && VAR7->VAR27 & VAR48 && (VAR3 % (1 << VAR2->VAR13->VAR29)) == 0) || (!VAR2->VAR30->VAR31 && VAR7->VAR27 & VAR49 && (VAR3 % (1 << VAR2->VAR13->VAR29)) == 0)))
        VAR21 = 0;
    if (VAR21)
    {
        int VAR50 = (VAR3 - 1) >> VAR12;
        int VAR51 = VAR3 >> VAR12;
        int VAR52 = (VAR3 - 1) >> VAR14;
        int VAR53 = VAR3 >> VAR14;
        for (VAR22 = 0; VAR22 < (1 << VAR5); VAR22 += 4)
        {
            int VAR54 = (VAR4 + VAR22) >> VAR12;
            int VAR55 = (VAR4 + VAR22) >> VAR14;
            VAR9 *VAR56 = &VAR10[VAR54 * VAR16 + VAR50];
            VAR9 *VAR40 = &VAR10[VAR54 * VAR16 + VAR51];
            uint8_t VAR57 = VAR2->VAR42[VAR55 * VAR17 + VAR52];
            uint8_t VAR43 = VAR2->VAR42[VAR55 * VAR17 + VAR53];
            VAR44 *VAR58 = FUN2(VAR2, VAR2->VAR11, VAR3 - 1, VAR4 + VAR22);
            VAR24 = FUN3(VAR2, VAR40, VAR43, VAR56, VAR57, VAR58, 1);
            if (VAR24)
                VAR2->VAR59[(VAR3 >> 3) + ((VAR4 + VAR22) >> 2) * VAR2->VAR47] = VAR24;
        }
    }
    if (VAR5 > VAR12 && !VAR19)
        for (VAR23 = 0; VAR23 < (1 << VAR5); VAR23 += 4)
        {
            int VAR54 = (VAR4 + VAR23) >> VAR12;
            int VAR55 = (VAR4 + VAR23) >> VAR14;
            for (VAR22 = 8; VAR22 < (1 << VAR5); VAR22 += 8)
            {
                int VAR50 = (VAR3 + VAR22 - 1) >> VAR12;
                int VAR51 = (VAR3 + VAR22) >> VAR12;
                int VAR52 = (VAR3 + VAR22 - 1) >> VAR14;
                int VAR53 = (VAR3 + VAR22) >> VAR14;
                VAR9 *VAR56 = &VAR10[VAR54 * VAR16 + VAR50];
                VAR9 *VAR40 = &VAR10[VAR54 * VAR16 + VAR51];
                uint8_t VAR57 = VAR2->VAR42[VAR55 * VAR17 + VAR52];
                uint8_t VAR43 = VAR2->VAR42[VAR55 * VAR17 + VAR53];
                VAR44 *VAR58 = FUN2(VAR2, VAR2->VAR11, VAR3 + VAR22 - 1, VAR4 + VAR23);
                VAR24 = FUN3(VAR2, VAR40, VAR43, VAR56, VAR57, VAR58, 0);
                if (VAR24)
                    VAR2->VAR59[((VAR3 + VAR22) >> 3) + ((VAR4 + VAR23) >> 2) * VAR2->VAR47] = VAR24;
            }
        }
}