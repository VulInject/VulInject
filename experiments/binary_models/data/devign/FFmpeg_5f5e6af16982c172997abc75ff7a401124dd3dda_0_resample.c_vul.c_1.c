int FUN1(VAR1 *VAR2, short *VAR3, short *VAR4, int VAR5)
{
    int VAR6, VAR7;
    short *VAR8[2];
    short *VAR9[2];
    short *VAR10[2], *VAR11[2];
    short *VAR12 = NULL;
    int VAR13;
    if (VAR2->VAR14 == VAR2->VAR15 && VAR2->VAR16 == 1.0 && 0)
    {
        memcpy(VAR3, VAR4, VAR5 * VAR2->VAR14 * sizeof(short));
        return VAR5;
    }
    if (VAR2->VAR17[0] != VAR18)
    {
        int VAR19[1] = {VAR2->VAR20[0]};
        int VAR21[1] = {2};
        const void *VAR22[1] = {VAR4};
        void *VAR23[1];
        unsigned VAR24 = VAR5 * VAR2->VAR14 * VAR2->VAR20[0];
        if (!VAR2->VAR25[0] || VAR2->VAR25[0] < VAR24)
        {
            FUN2(VAR2->VAR26[0]);
            VAR2->VAR25[0] = VAR24;
            VAR2->VAR26[0] = FUN3(VAR2->VAR25[0]);
            if (!VAR2->VAR26[0])
            {
                FUN4(VAR2, VAR27, "");
                return 0;
            }
        }
        VAR23[0] = VAR2->VAR26[0];
        if (FUN5(VAR2->VAR28[0], VAR23, VAR21, VAR22, VAR19, VAR5 * VAR2->VAR14) < 0)
        {
            FUN4(VAR2, VAR27, "");
            return 0;
        }
        VAR4 = VAR2->VAR26[0];
    }
    VAR13 = 4 * VAR5 * VAR2->VAR16 + 16;
    if (VAR2->VAR17[1] != VAR18)
    {
        VAR12 = VAR3;
        if (!VAR2->VAR25[1] || VAR2->VAR25[1] < VAR13)
        {
            FUN2(VAR2->VAR26[1]);
            VAR2->VAR25[1] = VAR13;
            VAR2->VAR26[1] = FUN3(VAR2->VAR25[1]);
            if (!VAR2->VAR26[1])
            {
                FUN4(VAR2, VAR27, "");
                return 0;
            }
        }
        VAR3 = VAR2->VAR26[1];
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR29; VAR6++)
    {
        VAR8[VAR6] = FUN3((VAR5 + VAR2->VAR30) * sizeof(short));
        memcpy(VAR8[VAR6], VAR2->VAR31[VAR6], VAR2->VAR30 * sizeof(short));
        VAR10[VAR6] = VAR8[VAR6] + VAR2->VAR30;
    }
    VAR9[0] = FUN3(VAR13 * sizeof(short));
    VAR9[1] = FUN3(VAR13 * sizeof(short));
    if (VAR2->VAR14 == 2 && VAR2->VAR15 == 1)
    {
        VAR11[0] = VAR3;
        FUN6(VAR10[0], VAR4, VAR5);
    }
    else if (VAR2->VAR15 >= 2 && VAR2->VAR14 == 1)
    {
        VAR11[0] = VAR9[0];
        memcpy(VAR10[0], VAR4, VAR5 * sizeof(short));
    }
    else if (VAR2->VAR15 >= 2)
    {
        VAR11[0] = VAR9[0];
        VAR11[1] = VAR9[1];
        FUN7(VAR10[0], VAR10[1], VAR4, VAR5);
    }
    else
    {
        VAR11[0] = VAR3;
        memcpy(VAR10[0], VAR4, VAR5 * sizeof(short));
    }
    VAR5 += VAR2->VAR30;
    VAR7 = 0;
    for (VAR6 = 0; VAR6 < VAR2->VAR29; VAR6++)
    {
        int VAR32;
        int VAR33 = VAR6 + 1 == VAR2->VAR29;
        VAR7 = FUN8(VAR2->VAR34, VAR11[VAR6], VAR8[VAR6], &VAR32, VAR5, VAR13, VAR33);
        VAR2->VAR30 = VAR5 - VAR32;
        VAR2->VAR31[VAR6] = FUN9(VAR2->VAR31[VAR6], VAR2->VAR30 * sizeof(short));
        memcpy(VAR2->VAR31[VAR6], VAR8[VAR6] + VAR32, VAR2->VAR30 * sizeof(short));
    }
    if (VAR2->VAR15 == 2 && VAR2->VAR14 == 1)
    {
        FUN10(VAR3, VAR11[0], VAR7);
    }
    else if (VAR2->VAR15 == 2)
    {
        FUN11(VAR3, VAR11[0], VAR11[1], VAR7);
    }
    else if (VAR2->VAR15 == 6)
    {
        FUN12(VAR3, VAR11[0], VAR11[1], VAR7);
    }
    if (VAR2->VAR17[1] != VAR18)
    {
        int VAR19[1] = {2};
        int VAR21[1] = {VAR2->VAR20[1]};
        const void *VAR22[1] = {VAR3};
        void *VAR23[1] = {VAR12};
        if (FUN5(VAR2->VAR28[1], VAR23, VAR21, VAR22, VAR19, VAR7 * VAR2->VAR15) < 0)
        {
            FUN4(VAR2, VAR27, "");
            return 0;
        }
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR29; VAR6++)
        FUN2(VAR8[VAR6]);
    FUN2(VAR9[0]);
    FUN2(VAR9[1]);
    return VAR7;
}