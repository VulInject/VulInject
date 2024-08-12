static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    char VAR8[1024];
    int VAR9;
    int VAR10[3] = {0}, VAR11[3] = {0};
    VAR12 *VAR13[3];
    VAR14 *VAR15 = VAR2->VAR16[0]->VAR15;
    if (!VAR6->VAR17)
    {
        if (VAR6->VAR18 && VAR6->VAR19 > VAR6->VAR20)
        {
            VAR6->VAR19 = VAR6->VAR21;
        }
        if (VAR6->VAR19 > VAR6->VAR20)
            return VAR22;
        if (FUN2(VAR8, sizeof(VAR8), VAR6->VAR23, VAR6->VAR19) < 0 && VAR6->VAR19 > 1)
            return FUN3(VAR24);
        for (VAR9 = 0; VAR9 < 3; VAR9++)
        {
            if (FUN4(&VAR13[VAR9], VAR8, VAR25, &VAR2->VAR26, NULL) < 0)
            {
                if (VAR9 == 1)
                    break;
                FUN5(VAR2, VAR27, "", VAR8);
                return FUN3(VAR24);
            }
            VAR10[VAR9] = FUN6(VAR13[VAR9]);
            if (VAR15->VAR28 != VAR29)
                break;
            VAR8[strlen(VAR8) - 1] = '' + VAR9;
        }
        if (VAR15->VAR28 == VAR29 && !VAR15->VAR30)
            FUN7(&VAR15->VAR30, &VAR15->VAR31, VAR10[0]);
    }
    else
    {
        VAR13[0] = VAR2->VAR32;
        if (VAR13[0]->VAR33)
            return FUN3(VAR24);
        VAR10[0] = 4096;
    }
    FUN8(VAR4, VAR10[0] + VAR10[1] + VAR10[2]);
    VAR4->VAR34 = 0;
    VAR4->VAR35 |= VAR36;
    VAR4->VAR10 = 0;
    for (VAR9 = 0; VAR9 < 3; VAR9++)
    {
        if (VAR10[VAR9])
        {
            VAR11[VAR9] = FUN9(VAR13[VAR9], VAR4->VAR37 + VAR4->VAR10, VAR10[VAR9]);
            if (!VAR6->VAR17)
                FUN10(VAR13[VAR9]);
            if (VAR11[VAR9] > 0)
                VAR4->VAR10 += VAR11[VAR9];
        }
    }
    if (VAR11[0] <= 0 || VAR11[1] < 0 || VAR11[2] < 0)
    {
        FUN11(VAR4);
        return FUN3(VAR24);
    }
    else
    {
        VAR6->VAR38++;
        VAR6->VAR19++;
        return 0;
    }
}