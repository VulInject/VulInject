static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10, *VAR11 = VAR6->VAR3;
    VAR9 *VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    VAR10 = VAR6->VAR3 + VAR6->VAR17;
    while (!VAR2->VAR18 || !VAR2->VAR19)
    {
        char VAR20[256];
        int VAR21, VAR22;
        VAR11 += strcspn(VAR11, "");
        if (sscanf(VAR11, "", VAR20, &VAR21) != 2)
        {
            FUN2(VAR2, VAR23, "");
            return VAR24;
        }
        VAR22 = strlen(VAR20);
        if ((VAR22 > 6) && !VAR2->VAR19 && !memcmp(VAR20 + VAR22 - 7, "", 7))
        {
            VAR2->VAR19 = VAR21;
        }
        else if ((VAR22 > 5) && !VAR2->VAR18 && !memcmp(VAR20 + VAR22 - 6, "", 6))
        {
            VAR2->VAR18 = VAR21;
        }
        else
        {
            FUN2(VAR2, VAR23, "", VAR20);
            return VAR24;
        }
        VAR11 += strcspn(VAR11, "") + 1;
    }
    if ((VAR13 = FUN3(VAR2, VAR8, 0)) < 0)
        return VAR13;
    VAR11 += strcspn(VAR11, "") + 1;
    VAR14 = (VAR2->VAR18 + 7) / 8;
    for (VAR15 = 0; VAR15 < VAR2->VAR19; VAR15++)
    {
        VAR12 = VAR8->VAR3[0] + VAR15 * VAR8->VAR14[0];
        for (VAR16 = 0; VAR16 < VAR14; VAR16++)
        {
            uint8_t VAR25;
            VAR11 += strcspn(VAR11, "") + 1;
            if (VAR11 < VAR10 && FUN4(*VAR11))
            {
                VAR25 = FUN5(*VAR11);
                VAR11++;
                if (FUN4(*VAR11))
                    VAR25 = (VAR25 << 4) + FUN5(*VAR11);
                *VAR12++ = VAR26[VAR25];
            }
            else
            {
                FUN2(VAR2, VAR23, "", VAR11);
                return VAR24;
            }
        }
    }
    VAR8->VAR27 = 1;
    VAR8->VAR28 = VAR29;
    *VAR4 = 1;
    return VAR6->VAR17;
}