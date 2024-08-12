static int FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    unsigned int VAR10[32];
    unsigned int VAR11;
    unsigned int VAR12[2];
    uint32_t VAR13 = 0;
    if (VAR5->VAR14 == VAR15 && VAR3)
        FUN2(VAR9, 32);
    if (VAR5->VAR16 && VAR5->VAR17)
    {
        VAR2->VAR18 = FUN3(VAR9);
        FUN4(VAR9);
    }
    if (!VAR5->VAR16 || VAR2->VAR18)
    {
        int VAR19 = !VAR5->VAR17;
        for (VAR11 = 0; VAR11 < VAR7->VAR20; VAR11++)
        {
            VAR12[0] = 0;
            VAR12[1] = 0;
            FUN5(VAR2, VAR10, &VAR13);
            if (VAR5->VAR17 && VAR5->VAR21)
                if (VAR13 >> 31)
                    VAR19 = 2;
            if (VAR11 == VAR7->VAR20 - 1)
                VAR19 = 1;
            if (VAR19)
            {
                if (FUN6(VAR2, VAR3, VAR11, VAR10, VAR12))
                    return -1;
                VAR19--;
            }
            else
            {
                if (FUN7(VAR2, VAR3, VAR11, VAR10, VAR12))
                    return -1;
                VAR11++;
            }
            memmove(VAR2->VAR22[VAR11] - VAR5->VAR23, VAR2->VAR22[VAR11] - VAR5->VAR23 + VAR5->VAR24, sizeof(*VAR2->VAR22[VAR11]) * VAR5->VAR23);
        }
    }
    else
    {
        ALSBlockData VAR25;
        int VAR26;
        int *VAR27 = VAR2->VAR27;
        unsigned int VAR28 = 0;
        for (VAR11 = 0; VAR11 < VAR7->VAR20; VAR11++)
            if (VAR2->VAR29[VAR11] < VAR2->VAR30)
            {
                FUN8(VAR2->VAR7, VAR31, "");
                return -1;
            }
        memset(&VAR25, 0, sizeof(VAR32));
        memset(VAR27, 0, sizeof(*VAR27) * VAR7->VAR20);
        VAR25.VAR33 = VAR3;
        VAR25.VAR34 = VAR2->VAR34;
        FUN5(VAR2, VAR10, &VAR13);
        for (VAR26 = 0; VAR26 < VAR2->VAR35; VAR26++)
        {
            VAR25.VAR36 = VAR10[VAR26];
            for (VAR11 = 0; VAR11 < VAR7->VAR20; VAR11++)
            {
                VAR25.VAR37 = VAR2->VAR37 + VAR11;
                VAR25.VAR38 = VAR2->VAR38 + VAR11;
                VAR25.VAR39 = VAR2->VAR39 + VAR11;
                VAR25.VAR40 = VAR2->VAR40 + VAR11;
                VAR25.VAR41 = VAR2->VAR41 + VAR11;
                VAR25.VAR42 = VAR2->VAR42 + VAR11;
                VAR25.VAR43 = VAR2->VAR43[VAR11];
                VAR25.VAR44 = VAR2->VAR44[VAR11];
                VAR25.VAR45 = VAR2->VAR45[VAR11];
                VAR25.VAR22 = VAR2->VAR22[VAR11] + VAR28;
                VAR25.VAR46 = NULL;
                if (FUN9(VAR2, &VAR25) || FUN10(VAR2, VAR2->VAR29[VAR11], VAR11))
                    return -1;
            }
            for (VAR11 = 0; VAR11 < VAR7->VAR20; VAR11++)
                if (FUN11(VAR2, &VAR25, VAR2->VAR29, VAR27, VAR28, VAR11))
                    return -1;
            for (VAR11 = 0; VAR11 < VAR7->VAR20; VAR11++)
            {
                VAR25.VAR37 = VAR2->VAR37 + VAR11;
                VAR25.VAR38 = VAR2->VAR38 + VAR11;
                VAR25.VAR39 = VAR2->VAR39 + VAR11;
                VAR25.VAR40 = VAR2->VAR40 + VAR11;
                VAR25.VAR41 = VAR2->VAR41 + VAR11;
                VAR25.VAR42 = VAR2->VAR42 + VAR11;
                VAR25.VAR43 = VAR2->VAR43[VAR11];
                VAR25.VAR44 = VAR2->VAR44[VAR11];
                VAR25.VAR45 = VAR2->VAR45[VAR11];
                VAR25.VAR22 = VAR2->VAR22[VAR11] + VAR28;
                if (FUN12(VAR2, &VAR25))
                    return -1;
            }
            memset(VAR27, 0, VAR7->VAR20 * sizeof(*VAR27));
            VAR28 += VAR10[VAR26];
            VAR25.VAR33 = 0;
        }
        for (VAR11 = 0; VAR11 < VAR7->VAR20; VAR11++)
            memmove(VAR2->VAR22[VAR11] - VAR5->VAR23, VAR2->VAR22[VAR11] - VAR5->VAR23 + VAR5->VAR24, sizeof(*VAR2->VAR22[VAR11]) * VAR5->VAR23);
    }
    return 0;
}