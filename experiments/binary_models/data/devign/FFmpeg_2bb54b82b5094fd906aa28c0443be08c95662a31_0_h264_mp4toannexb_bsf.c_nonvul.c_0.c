static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7, int *VAR8, const VAR6 *VAR9, int VAR10, int VAR11)
{
    VAR12 *VAR13 = VAR2->VAR14;
    int VAR15;
    uint8_t VAR16;
    int32_t VAR17;
    uint32_t VAR18 = 0;
    const VAR6 *VAR19 = VAR9 + VAR10;
    int VAR20 = 0;
    if (!VAR4->VAR21 || VAR4->VAR22 < 6)
    {
        *VAR7 = (VAR6 *)VAR9;
        *VAR8 = VAR10;
        return 0;
    }
    if (!VAR13->VAR23)
    {
        if (VAR5 && strstr(VAR5, ""))
            VAR13->VAR24 = 1;
        VAR20 = FUN2(VAR13, VAR4, VAR25);
        if (VAR20 < 0)
            return VAR20;
        VAR13->VAR26 = VAR20;
        VAR13->VAR27 = 1;
        VAR13->VAR28 = 0;
        VAR13->VAR29 = 0;
        VAR13->VAR23 = 1;
    }
    *VAR8 = 0;
    *VAR7 = NULL;
    do
    {
        VAR20 = FUN3(VAR30);
        if (VAR9 + VAR13->VAR26 > VAR19)
            goto VAR31;
        for (VAR17 = 0, VAR15 = 0; VAR15 < VAR13->VAR26; VAR15++)
            VAR17 = (VAR17 << 8) | VAR9[VAR15];
        VAR9 += VAR13->VAR26;
        VAR16 = *VAR9 & 0x1f;
        if (VAR17 > VAR19 - VAR9 || VAR17 < 0)
            goto VAR31;
        if (VAR16 == 7)
            VAR13->VAR28 = VAR13->VAR27 = 1;
        else if (VAR16 == 8)
        {
            VAR13->VAR29 = VAR13->VAR27 = 1;
            if (!VAR13->VAR28)
            {
                if (VAR13->VAR32 == -1)
                    FUN4(VAR4, VAR33, "");
                else
                {
                    if ((VAR20 = FUN5(VAR7, VAR8, VAR13->VAR34 + VAR13->VAR32, VAR13->VAR35 != -1 ? VAR13->VAR35 : VAR13->VAR36 - VAR13->VAR32, VAR9, VAR17)) < 0)
                        goto VAR31;
                    VAR13->VAR28 = 1;
                    goto VAR37;
                }
            }
        }
        if (!VAR13->VAR27 && VAR16 == 5 && (VAR9[1] & 0x80))
            VAR13->VAR27 = 1;
        if (VAR13->VAR27 && VAR16 == 5 && !VAR13->VAR28 && !VAR13->VAR29)
        {
            if ((VAR20 = FUN5(VAR7, VAR8, VAR13->VAR34, VAR13->VAR36, VAR9, VAR17)) < 0)
                goto VAR31;
            VAR13->VAR27 = 0;
        }
        else if (VAR13->VAR27 && VAR16 == 5 && VAR13->VAR28 && !VAR13->VAR29)
        {
            if (VAR13->VAR35 == -1)
            {
                FUN4(VAR4, VAR33, "");
                if ((VAR20 = FUN5(VAR7, VAR8, NULL, 0, VAR9, VAR17)) < 0)
                    goto VAR31;
            }
            else if ((VAR20 = FUN5(VAR7, VAR8, VAR13->VAR34 + VAR13->VAR35, VAR13->VAR36 - VAR13->VAR35, VAR9, VAR17)) < 0)
                goto VAR31;
        }
        else
        {
            if ((VAR20 = FUN5(VAR7, VAR8, NULL, 0, VAR9, VAR17)) < 0)
                goto VAR31;
            if (!VAR13->VAR27 && VAR16 == 1)
            {
                VAR13->VAR27 = 1;
                VAR13->VAR28 = 0;
                VAR13->VAR29 = 0;
            }
        }
    VAR37:
        VAR9 += VAR17;
        VAR18 += VAR17 + VAR13->VAR26;
    } while (VAR18 < VAR10);
    return 1;
VAR31:
    FUN6(VAR7);
    *VAR8 = 0;
    return VAR20;
}