void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10->VAR9;
    int VAR11 = VAR2->VAR12->VAR11;
    int VAR13 = VAR2->VAR12->VAR14;
    int VAR15 = VAR2->VAR12->VAR15;
    int VAR16 = VAR2->VAR12->VAR17;
    int VAR18 = VAR9[(VAR4 >> VAR11) * VAR15 + (VAR3 >> VAR11)].VAR18;
    int VAR19, VAR20, VAR21;
    if (VAR4 > 0 && (VAR4 & 7) == 0)
    {
        int VAR22 = (VAR4 - 1) >> VAR11;
        int VAR23 = VAR4 >> VAR11;
        int VAR24 = (VAR4 - 1) >> VAR13;
        int VAR25 = VAR4 >> VAR13;
        for (VAR19 = 0; VAR19 < (1 << VAR5); VAR19 += 4)
        {
            int VAR26 = (VAR3 + VAR19) >> VAR11;
            int VAR27 = (VAR3 + VAR19) >> VAR13;
            VAR8 *VAR28 = &VAR9[VAR22 * VAR15 + VAR26];
            VAR8 *VAR29 = &VAR9[VAR23 * VAR15 + VAR26];
            uint8_t VAR30 = VAR2->VAR31[VAR24 * VAR16 + VAR27];
            uint8_t VAR32 = VAR2->VAR31[VAR25 * VAR16 + VAR27];
            VAR33 *VAR34 = FUN2(VAR2, VAR2->VAR10, VAR3 + VAR19, VAR4 - 1);
            VAR21 = FUN3(VAR2, VAR29, VAR32, VAR28, VAR30, VAR34, 1);
            if (!VAR2->VAR35.VAR36 && (VAR6 & 1) && (VAR4 % (1 << VAR2->VAR12->VAR37)) == 0)
                VAR21 = 0;
            else if (!VAR2->VAR38->VAR39 && (VAR6 & 2) && (VAR4 % (1 << VAR2->VAR12->VAR37)) == 0)
                VAR21 = 0;
            if (VAR4 == 0)
                VAR21 = 0;
            if (VAR21)
                VAR2->VAR40[((VAR3 + VAR19) + VAR4 * VAR2->VAR41) >> 2] = VAR21;
        }
    }
    if (VAR5 > VAR2->VAR12->VAR11 && !VAR18)
        for (VAR20 = 8; VAR20 < (1 << VAR5); VAR20 += 8)
        {
            int VAR22 = (VAR4 + VAR20 - 1) >> VAR11;
            int VAR23 = (VAR4 + VAR20) >> VAR11;
            int VAR24 = (VAR4 + VAR20 - 1) >> VAR13;
            int VAR25 = (VAR4 + VAR20) >> VAR13;
            for (VAR19 = 0; VAR19 < (1 << VAR5); VAR19 += 4)
            {
                int VAR26 = (VAR3 + VAR19) >> VAR11;
                int VAR27 = (VAR3 + VAR19) >> VAR13;
                VAR8 *VAR28 = &VAR9[VAR22 * VAR15 + VAR26];
                VAR8 *VAR29 = &VAR9[VAR23 * VAR15 + VAR26];
                uint8_t VAR30 = VAR2->VAR31[VAR24 * VAR16 + VAR27];
                uint8_t VAR32 = VAR2->VAR31[VAR25 * VAR16 + VAR27];
                VAR33 *VAR34 = FUN2(VAR2, VAR2->VAR10, VAR3 + VAR19, VAR4 + VAR20 - 1);
                VAR21 = FUN3(VAR2, VAR29, VAR32, VAR28, VAR30, VAR34, 0);
                if (VAR21)
                    VAR2->VAR40[((VAR3 + VAR19) + (VAR4 + VAR20) * VAR2->VAR41) >> 2] = VAR21;
            }
        }
    if (VAR3 > 0 && (VAR3 & 7) == 0)
    {
        int VAR42 = (VAR3 - 1) >> VAR11;
        int VAR43 = VAR3 >> VAR11;
        int VAR44 = (VAR3 - 1) >> VAR13;
        int VAR45 = VAR3 >> VAR13;
        for (VAR19 = 0; VAR19 < (1 << VAR5); VAR19 += 4)
        {
            int VAR46 = (VAR4 + VAR19) >> VAR11;
            int VAR47 = (VAR4 + VAR19) >> VAR13;
            VAR8 *VAR48 = &VAR9[VAR46 * VAR15 + VAR42];
            VAR8 *VAR29 = &VAR9[VAR46 * VAR15 + VAR43];
            uint8_t VAR49 = VAR2->VAR31[VAR47 * VAR16 + VAR44];
            uint8_t VAR32 = VAR2->VAR31[VAR47 * VAR16 + VAR45];
            VAR33 *VAR50 = FUN2(VAR2, VAR2->VAR10, VAR3 - 1, VAR4 + VAR19);
            VAR21 = FUN3(VAR2, VAR29, VAR32, VAR48, VAR49, VAR50, 1);
            if (!VAR2->VAR35.VAR36 && (VAR7 & 1) && (VAR3 % (1 << VAR2->VAR12->VAR37)) == 0)
                VAR21 = 0;
            else if (!VAR2->VAR38->VAR39 && (VAR7 & 2) && (VAR3 % (1 << VAR2->VAR12->VAR37)) == 0)
                VAR21 = 0;
            if (VAR3 == 0)
                VAR21 = 0;
            if (VAR21)
                VAR2->VAR51[(VAR3 >> 3) + ((VAR4 + VAR19) >> 2) * VAR2->VAR41] = VAR21;
        }
    }
    if (VAR5 > VAR11 && !VAR18)
        for (VAR20 = 0; VAR20 < (1 << VAR5); VAR20 += 4)
        {
            int VAR46 = (VAR4 + VAR20) >> VAR11;
            int VAR47 = (VAR4 + VAR20) >> VAR13;
            for (VAR19 = 8; VAR19 < (1 << VAR5); VAR19 += 8)
            {
                int VAR42 = (VAR3 + VAR19 - 1) >> VAR11;
                int VAR43 = (VAR3 + VAR19) >> VAR11;
                int VAR44 = (VAR3 + VAR19 - 1) >> VAR13;
                int VAR45 = (VAR3 + VAR19) >> VAR13;
                VAR8 *VAR48 = &VAR9[VAR46 * VAR15 + VAR42];
                VAR8 *VAR29 = &VAR9[VAR46 * VAR15 + VAR43];
                uint8_t VAR49 = VAR2->VAR31[VAR47 * VAR16 + VAR44];
                uint8_t VAR32 = VAR2->VAR31[VAR47 * VAR16 + VAR45];
                VAR33 *VAR50 = FUN2(VAR2, VAR2->VAR10, VAR3 + VAR19 - 1, VAR4 + VAR20);
                VAR21 = FUN3(VAR2, VAR29, VAR32, VAR48, VAR49, VAR50, 0);
                if (VAR21)
                    VAR2->VAR51[((VAR3 + VAR19) >> 3) + ((VAR4 + VAR20) >> 2) * VAR2->VAR41] = VAR21;
            }
        }
}