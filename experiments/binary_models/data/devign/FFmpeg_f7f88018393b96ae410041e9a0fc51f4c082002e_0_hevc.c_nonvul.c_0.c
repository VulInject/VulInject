static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8 = 0;
    VAR2->VAR9 = NULL;
    VAR2->VAR10 = 0;
    VAR2->VAR11 = 0;
    while (VAR5 >= 4)
    {
        VAR12 *VAR13;
        int VAR14 = 0;
        if (VAR2->VAR15)
        {
            int VAR6;
            for (VAR6 = 0; VAR6 < VAR2->VAR16; VAR6++)
                VAR14 = (VAR14 << 8) | VAR4[VAR6];
            VAR4 += VAR2->VAR16;
            VAR5 -= VAR2->VAR16;
            if (VAR14 > VAR5)
            {
                FUN2(VAR2->VAR17, VAR18, "");
                VAR8 = VAR19;
                goto VAR20;
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
                    FUN2(VAR2->VAR17, VAR18, "");
                    VAR8 = VAR19;
                    goto VAR20;
                }
            }
            VAR4 += 3;
            VAR5 -= 3;
        }
        if (!VAR2->VAR15)
            VAR14 = VAR5;
        if (VAR2->VAR21 < VAR2->VAR11 + 1)
        {
            int VAR22 = VAR2->VAR21 + 1;
            VAR12 *VAR23 = FUN3(VAR2->VAR24, VAR22, sizeof(*VAR23));
            if (!VAR23)
            {
                VAR8 = FUN4(VAR25);
                goto VAR20;
            }
            VAR2->VAR24 = VAR23;
            memset(VAR2->VAR24 + VAR2->VAR21, 0, (VAR22 - VAR2->VAR21) * sizeof(*VAR23));
            FUN5(&VAR2->VAR26, VAR22, sizeof(*VAR2->VAR26));
            FUN5(&VAR2->VAR27, VAR22, sizeof(*VAR2->VAR27));
            FUN5(&VAR2->VAR28, VAR22, sizeof(*VAR2->VAR28));
            VAR2->VAR27[VAR2->VAR21] = 1024;
            VAR2->VAR28[VAR2->VAR21] = FUN6(VAR2->VAR27[VAR2->VAR21], sizeof(*VAR2->VAR29));
            VAR2->VAR21 = VAR22;
        }
        VAR2->VAR30 = VAR2->VAR27[VAR2->VAR11];
        VAR2->VAR29 = VAR2->VAR28[VAR2->VAR11];
        VAR13 = &VAR2->VAR24[VAR2->VAR11];
        VAR7 = FUN7(VAR2, VAR4, VAR14, VAR13);
        VAR2->VAR26[VAR2->VAR11] = VAR2->VAR31;
        VAR2->VAR27[VAR2->VAR11] = VAR2->VAR30;
        VAR2->VAR28[VAR2->VAR11++] = VAR2->VAR29;
        if (VAR7 < 0)
        {
            VAR8 = VAR7;
            goto VAR20;
        }
        VAR8 = FUN8(&VAR2->VAR32->VAR33, VAR13->VAR34, VAR13->VAR35);
        if (VAR8 < 0)
            goto VAR20;
        FUN9(VAR2);
        if (VAR2->VAR36 == VAR37 || VAR2->VAR36 == VAR38)
            VAR2->VAR10 = 1;
        VAR4 += VAR7;
        VAR5 -= VAR7;
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR11; VAR6++)
    {
        int VAR8;
        VAR2->VAR31 = VAR2->VAR26[VAR6];
        VAR2->VAR29 = VAR2->VAR28[VAR6];
        VAR8 = FUN10(VAR2, VAR2->VAR24[VAR6].VAR34, VAR2->VAR24[VAR6].VAR35);
        if (VAR8 < 0)
        {
            FUN2(VAR2->VAR17, VAR39, "", VAR6);
            if (VAR2->VAR17->VAR40 & VAR41)
                goto VAR20;
        }
    }
VAR20:
    if (VAR2->VAR9 && VAR2->VAR42 == VAR43)
        FUN11(&VAR2->VAR9->VAR44, VAR45, 0);
    return VAR8;
}