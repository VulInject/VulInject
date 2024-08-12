static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, const void *VAR5, int VAR6, int VAR7, const void *VAR8, int VAR9, int VAR10, const void *VAR11, int VAR12, int VAR13, uint32_t VAR14, int VAR15, int VAR16)
{
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27;
    uint32_t VAR28;
    FUN2(*VAR29)
    [2];
    VAR21 = 1 << VAR3;
    VAR22 = FUN3(VAR2, VAR21, VAR16 & VAR30);
    FUN4(NULL, VAR31, "", VAR22, VAR21, VAR14, VAR15);
    if (VAR22 < 0)
        return -1;
    VAR29 = &VAR2->VAR29[VAR22];
    for (VAR17 = 0; VAR17 < VAR21; VAR17++)
    {
        VAR29[VAR17][1] = 0;
        VAR29[VAR17][0] = -1;
    }
    for (VAR17 = 0; VAR17 < VAR4; VAR17++)
    {
        FUN5(VAR20, VAR5, VAR17, VAR6, VAR7);
        FUN5(VAR28, VAR8, VAR17, VAR9, VAR10);
        if (VAR20 <= 0)
            continue;
        if (!VAR11)
            VAR27 = VAR17;
        else
            FUN5(VAR27, VAR11, VAR17, VAR12, VAR13);
        FUN4(NULL, VAR31, "", VAR17, VAR20, VAR28);
        VAR20 -= VAR15;
        if (VAR16 & VAR32)
            VAR26 = VAR28 & (VAR15 >= 32 ? 0xffffffff : (1 << VAR15) - 1);
        else
            VAR26 = VAR28 >> VAR20;
        if (VAR20 > 0 && VAR26 == VAR14)
        {
            if (VAR20 <= VAR3)
            {
                VAR18 = (VAR28 << (VAR3 - VAR20)) & (VAR21 - 1);
                VAR23 = 1 << (VAR3 - VAR20);
                for (VAR19 = 0; VAR19 < VAR23; VAR19++)
                {
                    if (VAR16 & VAR32)
                        VAR18 = (VAR28 >> VAR15) + (VAR19 << VAR20);
                    FUN4(NULL, VAR31, "", VAR18, VAR17, VAR20);
                    if (VAR29[VAR18][1] != 0)
                    {
                        FUN4(NULL, VAR33, "");
                        return -1;
                    }
                    VAR29[VAR18][1] = VAR20;
                    VAR29[VAR18][0] = VAR27;
                    VAR18++;
                }
            }
            else
            {
                VAR20 -= VAR3;
                VAR18 = (VAR28 >> ((VAR16 & VAR32) ? VAR15 : VAR20)) & ((1 << VAR3) - 1);
                FUN4(NULL, VAR31, "", VAR18, VAR20);
                VAR24 = -VAR29[VAR18][1];
                if (VAR20 > VAR24)
                    VAR24 = VAR20;
                VAR29[VAR18][1] = -VAR24;
            }
        }
    }
    for (VAR17 = 0; VAR17 < VAR21; VAR17++)
    {
        VAR20 = VAR29[VAR17][1];
        if (VAR20 < 0)
        {
            VAR20 = -VAR20;
            if (VAR20 > VAR3)
            {
                VAR20 = VAR3;
                VAR29[VAR17][1] = -VAR20;
            }
            VAR25 = FUN1(VAR2, VAR20, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, (VAR16 & VAR32) ? (VAR14 | (VAR17 << VAR15)) : ((VAR14 << VAR3) | VAR17), VAR15 + VAR3, VAR16);
            if (VAR25 < 0)
                return -1;
            VAR29 = &VAR2->VAR29[VAR22];
            VAR29[VAR17][0] = VAR25;
        }
    }
    return VAR22;
}