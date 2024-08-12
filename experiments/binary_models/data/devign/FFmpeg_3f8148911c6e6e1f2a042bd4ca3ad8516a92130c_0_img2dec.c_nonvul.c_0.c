static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    char VAR8[1024];
    char *VAR9 = VAR8;
    int VAR10;
    int VAR11[3] = {0}, VAR12[3] = {0};
    VAR13 *VAR14[3] = {NULL};
    VAR15 *VAR16 = VAR2->VAR17[0]->VAR16;
    if (!VAR6->VAR18)
    {
        if (VAR6->VAR19 && VAR6->VAR20 > VAR6->VAR21)
        {
            VAR6->VAR20 = VAR6->VAR22;
        }
        if (VAR6->VAR20 > VAR6->VAR21)
            return VAR23;
        if (VAR6->VAR24)
        {
            VAR9 = VAR6->VAR25.VAR26[VAR6->VAR20];
        }
        else
        {
            if (FUN2(VAR8, sizeof(VAR8), VAR6->VAR27, VAR6->VAR20) < 0 && VAR6->VAR20 > 1)
                return FUN3(VAR28);
        }
        for (VAR10 = 0; VAR10 < 3; VAR10++)
        {
            if (FUN4(&VAR14[VAR10], VAR9, VAR29, &VAR2->VAR30, NULL) < 0)
            {
                if (VAR10 >= 1)
                    break;
                FUN5(VAR2, VAR31, "", VAR9);
                return FUN3(VAR28);
            }
            VAR11[VAR10] = FUN6(VAR14[VAR10]);
            if (!VAR6->VAR32)
                break;
            VAR9[strlen(VAR9) - 1] = '' + VAR10;
        }
        if (VAR16->VAR33 == VAR34 && !VAR16->VAR35)
            FUN7(&VAR16->VAR35, &VAR16->VAR36, VAR11[0]);
    }
    else
    {
        VAR14[0] = VAR2->VAR37;
        if (FUN8(VAR14[0]))
            return FUN3(VAR28);
        VAR11[0] = 4096;
    }
    if (FUN9(VAR4, VAR11[0] + VAR11[1] + VAR11[2]) < 0)
        return FUN3(VAR38);
    VAR4->VAR39 = 0;
    VAR4->VAR40 |= VAR41;
    VAR4->VAR11 = 0;
    for (VAR10 = 0; VAR10 < 3; VAR10++)
    {
        if (VAR14[VAR10])
        {
            VAR12[VAR10] = FUN10(VAR14[VAR10], VAR4->VAR42 + VAR4->VAR11, VAR11[VAR10]);
            if (!VAR6->VAR18)
                FUN11(VAR14[VAR10]);
            if (VAR12[VAR10] > 0)
                VAR4->VAR11 += VAR12[VAR10];
        }
    }
    if (VAR12[0] <= 0 || VAR12[1] < 0 || VAR12[2] < 0)
    {
        FUN12(VAR4);
        return FUN3(VAR28);
    }
    else
    {
        VAR6->VAR43++;
        VAR6->VAR20++;
        return 0;
    }
}