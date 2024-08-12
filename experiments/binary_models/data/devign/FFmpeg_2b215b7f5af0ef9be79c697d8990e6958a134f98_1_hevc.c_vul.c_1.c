static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8 = 0;
    VAR2->VAR9 = NULL;
    VAR2->VAR10 = VAR2->VAR11;
    VAR2->VAR11 = 0;
    VAR2->VAR12 = 0;
    while (VAR5 >= 4)
    {
        VAR13 *VAR14;
        int VAR15 = 0;
        if (VAR2->VAR16)
        {
            int VAR6;
            for (VAR6 = 0; VAR6 < VAR2->VAR17; VAR6++)
                VAR15 = (VAR15 << 8) | VAR4[VAR6];
            VAR4 += VAR2->VAR17;
            VAR5 -= VAR2->VAR17;
            if (VAR15 > VAR5)
            {
                FUN2(VAR2->VAR18, VAR19, "");
                VAR8 = VAR20;
            }
        }
        else
        {
            while (VAR4[0] != 0 || VAR4[1] != 0 || VAR4[2] != 1)
            {
                ++VAR4;
                --VAR5;
                if (VAR5 < 4)
                {
                    FUN2(VAR2->VAR18, VAR19, "");
                    VAR8 = VAR20;
                }
            }
            VAR4 += 3;
            VAR5 -= 3;
        }
        if (!VAR2->VAR16)
            VAR15 = VAR5;
        if (VAR2->VAR21 < VAR2->VAR12 + 1)
        {
            int VAR22 = VAR2->VAR21 + 1;
            void *VAR23 = FUN3(VAR2->VAR24, VAR22, sizeof(*VAR2->VAR24));
            VAR8 = FUN4(VAR25);
            if (!VAR23)
            {
            }
            VAR2->VAR24 = VAR23;
            memset(VAR2->VAR24 + VAR2->VAR21, 0, (VAR22 - VAR2->VAR21) * sizeof(*VAR2->VAR24));
            VAR23 = FUN3(VAR2->VAR26, VAR22, sizeof(*VAR2->VAR26));
            if (!VAR23)
                VAR2->VAR26 = VAR23;
            VAR23 = FUN3(VAR2->VAR27, VAR22, sizeof(*VAR2->VAR27));
            if (!VAR23)
                VAR2->VAR27 = VAR23;
            VAR23 = FUN3(VAR2->VAR28, VAR22, sizeof(*VAR2->VAR28));
            if (!VAR23)
                VAR2->VAR28 = VAR23;
            VAR2->VAR27[VAR2->VAR21] = 1024;
            VAR2->VAR28[VAR2->VAR21] = FUN5(VAR2->VAR27[VAR2->VAR21], sizeof(*VAR2->VAR29));
            VAR2->VAR21 = VAR22;
        }
        VAR2->VAR30 = VAR2->VAR27[VAR2->VAR12];
        VAR2->VAR29 = VAR2->VAR28[VAR2->VAR12];
        VAR14 = &VAR2->VAR24[VAR2->VAR12];
        VAR7 = FUN6(VAR2, VAR4, VAR15, VAR14);
        VAR2->VAR26[VAR2->VAR12] = VAR2->VAR31;
        VAR2->VAR27[VAR2->VAR12] = VAR2->VAR30;
        VAR2->VAR28[VAR2->VAR12++] = VAR2->VAR29;
        if (VAR7 < 0)
        {
            VAR8 = VAR7;
        }
        VAR8 = FUN7(&VAR2->VAR32->VAR33, VAR14->VAR34, VAR14->VAR35);
        if (VAR8 < 0)
            FUN8(VAR2);
        if (VAR2->VAR36 == VAR37 || VAR2->VAR36 == VAR38)
            VAR2->VAR11 = 1;
        VAR4 += VAR7;
        VAR5 -= VAR7;
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR12; VAR6++)
    {
        int VAR8;
        VAR2->VAR31 = VAR2->VAR26[VAR6];
        VAR2->VAR29 = VAR2->VAR28[VAR6];
        VAR8 = FUN9(VAR2, &VAR2->VAR24[VAR6]);
        if (VAR8 < 0)
        {
            FUN2(VAR2->VAR18, VAR39, "", VAR6);
        }
    }
VAR40:
    if (VAR2->VAR9 && VAR2->VAR41 == VAR42)
        FUN10(&VAR2->VAR9->VAR43, VAR44, 0);
    return VAR8;