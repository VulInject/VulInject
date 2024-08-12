void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7;
    VAR8 *VAR9, *VAR10, VAR11, *VAR12 = &VAR11;
    int VAR13, VAR14, VAR15, VAR16;
    int VAR17;
    int *VAR18;
    VAR6 = FUN2();
    if (!VAR6)
    {
        FUN3(VAR2, "");
        return;
    }
    VAR13 = FUN4(VAR6, &VAR9);
    if (VAR13 < 0)
    {
        FUN3(VAR2, "", VAR13);
        return;
    }
    if (VAR13 == 0)
    {
        FUN3(VAR2, "");
        return;
    }
    VAR18 = FUN5(sizeof(int) * VAR13);
    VAR17 = 0;
    for (VAR14 = 0; VAR14 < VAR13; VAR14++)
    {
        VAR10 = &VAR9[VAR14];
        VAR16 = 1;
        VAR7 = NULL;
        while ((VAR7 = FUN6(VAR7)))
        {
            if (FUN7(VAR7) && VAR7 != VAR6)
            {
                VAR15 = FUN8(VAR7, VAR12, VAR10->VAR19);
                if (VAR15 < 0)
                {
                    VAR16 = 0;
                    break;
                }
            }
        }
        if (VAR16)
        {
            VAR18[VAR17] = VAR14;
            VAR17++;
        }
    }
    if (VAR17 > 0)
    {
        FUN9((VAR20)VAR21, VAR2, NULL);
        FUN3(VAR2, "");
        for (VAR14 = 0; VAR14 < VAR17; VAR14++)
        {
            VAR10 = &VAR9[VAR18[VAR14]];
            FUN9((VAR20)VAR21, VAR2, VAR10);
            FUN3(VAR2, "");
        }
    }
    else
    {
        FUN3(VAR2, "");
    }
    FUN10(VAR9);
    FUN10(VAR18);
}