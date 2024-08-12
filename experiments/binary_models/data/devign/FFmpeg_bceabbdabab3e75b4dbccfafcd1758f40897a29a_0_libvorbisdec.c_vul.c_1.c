static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10[3];
    unsigned char *VAR11[3], *VAR8 = VAR2->VAR8;
    FUN2(&VAR4->VAR12);
    FUN3(&VAR4->VAR13);
    if (!VAR2->VAR14 || !VAR7)
    {
        FUN4(VAR2, VAR15, "");
        return -1;
    }
    if (VAR7[0] == 0 && VAR7[1] == 30)
    {
        for (VAR9 = 0; VAR9 < 3; VAR9++)
        {
            VAR10[VAR9] = FUN5((const VAR6 **)&VAR7);
            VAR11[VAR9] = VAR7;
            VAR7 += VAR10[VAR9];
        }
    }
    else if (*VAR7 == 2)
    {
        unsigned int VAR16 = 1;
        VAR7++;
        for (VAR9 = 0; VAR9 < 2; VAR9++)
        {
            VAR10[VAR9] = 0;
            while ((*VAR7 == 0xFF) && (VAR16 < VAR2->VAR14))
            {
                VAR10[VAR9] += 0xFF;
                VAR16++;
                VAR7++;
            }
            if (VAR16 >= VAR2->VAR14 - 1)
            {
                FUN4(VAR2, VAR15, "");
                return -1;
            }
            VAR10[VAR9] += *VAR7;
            VAR16++;
            VAR7++;
        }
        VAR10[2] = VAR2->VAR14 - VAR10[0] - VAR10[1] - VAR16;
        FUN4(VAR2, VAR17, "", VAR10[0], VAR10[1], VAR10[2], VAR2->VAR14);
        VAR11[0] = VAR8 + VAR16;
        VAR11[1] = VAR8 + VAR16 + VAR10[0];
        VAR11[2] = VAR8 + VAR16 + VAR10[0] + VAR10[1];
    }
    else
    {
        FUN4(VAR2, VAR15, "", *VAR7);
        return -1;
    }
    for (VAR9 = 0; VAR9 < 3; VAR9++)
    {
        VAR4->VAR18.VAR19 = VAR9 == 0;
        VAR4->VAR18.VAR20 = VAR10[VAR9];
        VAR4->VAR18.VAR21 = VAR11[VAR9];
        if (FUN6(&VAR4->VAR12, &VAR4->VAR13, &VAR4->VAR18) < 0)
        {
            FUN4(VAR2, VAR15, "", VAR9 + 1);
            return -1;
        }
    }
    VAR2->VAR22 = VAR4->VAR12.VAR22;
    VAR2->VAR23 = VAR4->VAR12.VAR24;
    VAR2->VAR25 = VAR26;
    VAR2->VAR27 = (VAR28){1, VAR2->VAR23};
    FUN7(&VAR4->VAR29, &VAR4->VAR12);
    FUN8(&VAR4->VAR29, &VAR4->VAR30);
    return 0;
}