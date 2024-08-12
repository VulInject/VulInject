static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, const void *VAR5, int VAR6, int VAR7, const void *VAR8, int VAR9, int VAR10, uint32_t VAR11, int VAR12)
{
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    uint32_t VAR22;
    FUN2(*VAR23)
    [2];
    VAR17 = 1 << VAR3;
    VAR18 = FUN3(VAR2, VAR17);
    FUN4("", VAR18, VAR17, VAR11, VAR12);
    if (VAR18 < 0)
        return -1;
    VAR23 = &VAR2->VAR23[VAR18];
    for (VAR13 = 0; VAR13 < VAR17; VAR13++)
    {
        VAR23[VAR13][1] = 0;
        VAR23[VAR13][0] = -1;
    }
    for (VAR13 = 0; VAR13 < VAR4; VAR13++)
    {
        FUN5(VAR16, VAR5, VAR13, VAR6, VAR7);
        FUN5(VAR22, VAR8, VAR13, VAR9, VAR10);
        if (VAR16 <= 0)
            continue;
        FUN4("", VAR13, VAR16, VAR22);
        VAR16 -= VAR12;
        if (VAR16 > 0 && (VAR22 >> VAR16) == VAR11)
        {
            if (VAR16 <= VAR3)
            {
                VAR14 = (VAR22 << (VAR3 - VAR16)) & (VAR17 - 1);
                VAR19 = 1 << (VAR3 - VAR16);
                for (VAR15 = 0; VAR15 < VAR19; VAR15++)
                {
                    FUN6(NULL, VAR24, "", VAR14, VAR13, VAR16);
                    if (VAR23[VAR14][1] != 0)
                    {
                        FUN6(NULL, VAR25, "");
                        return -1;
                    }
                    VAR23[VAR14][1] = VAR16;
                    VAR23[VAR14][0] = VAR13;
                    VAR14++;
                }
            }
            else
            {
                VAR16 -= VAR3;
                VAR14 = (VAR22 >> VAR16) & ((1 << VAR3) - 1);
                FUN4("", VAR14, VAR16);
                VAR20 = -VAR23[VAR14][1];
                if (VAR16 > VAR20)
                    VAR20 = VAR16;
                VAR23[VAR14][1] = -VAR20;
            }
        }
    }
    for (VAR13 = 0; VAR13 < VAR17; VAR13++)
    {
        VAR16 = VAR23[VAR13][1];
        if (VAR16 < 0)
        {
            VAR16 = -VAR16;
            if (VAR16 > VAR3)
            {
                VAR16 = VAR3;
                VAR23[VAR13][1] = -VAR16;
            }
            VAR21 = FUN1(VAR2, VAR16, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, (VAR11 << VAR3) | VAR13, VAR12 + VAR3);
            if (VAR21 < 0)
                return -1;
            VAR23 = &VAR2->VAR23[VAR18];
            VAR23[VAR13][0] = VAR21;
        }
    }
    return VAR18;
}