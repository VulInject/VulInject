static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = FUN2(VAR2->VAR6->VAR7, !!VAR2->VAR6->VAR8);
    int VAR9, VAR10, VAR11, VAR12;
    if (VAR4->VAR13 == 0)
    {
        FUN3(&VAR9, &VAR10, VAR2, NULL, VAR4);
        if (VAR10 && VAR9)
        {
            VAR4->VAR13 = FUN4(1, VAR9 * (VAR14)VAR2->VAR15.VAR10, VAR10 * (VAR14)VAR2->VAR15.VAR9);
        }
    }
    if (VAR4->VAR16 == VAR17 && VAR4->VAR18 != VAR17 && VAR5 == 0)
        VAR4->VAR16 = VAR4->VAR18;
    if ((VAR4->VAR16 == 0 || VAR4->VAR16 == VAR17) && VAR4->VAR18 == VAR17 && !VAR5)
    {
        VAR4->VAR18 = VAR4->VAR16 = VAR2->VAR16.VAR19;
    }
    if (VAR4->VAR16 != VAR17 && VAR4->VAR18 == VAR17)
    {
        VAR2->VAR20[0] = VAR4->VAR16;
        for (VAR12 = 1; VAR12 < VAR5 + 1 && VAR2->VAR20[VAR12] == VAR17; VAR12++)
            VAR2->VAR20[VAR12] = (VAR12 - VAR5 - 1) * VAR4->VAR13;
        for (VAR12 = 0; VAR12 < VAR5 && VAR2->VAR20[VAR12] > VAR2->VAR20[VAR12 + 1]; VAR12++)
            FUN5(VAR14, VAR2->VAR20[VAR12], VAR2->VAR20[VAR12 + 1]);
        VAR4->VAR18 = VAR2->VAR20[0];
    }
    if (VAR2->VAR21 && VAR2->VAR21 != VAR17 && VAR2->VAR21 >= VAR4->VAR18)
    {
        FUN6(VAR2->VAR6, VAR22, "" VAR23 "" VAR23 "", VAR2->VAR21, VAR4->VAR18);
        return -1;
    }
    if (VAR4->VAR18 != VAR17 && VAR4->VAR16 != VAR17 && VAR4->VAR16 < VAR4->VAR18)
    {
        FUN6(VAR2->VAR6, VAR22, "");
        return -1;
    }
    VAR2->VAR21 = VAR4->VAR18;
    VAR2->VAR16.VAR19 = VAR4->VAR18;
    switch (VAR2->VAR6->VAR24)
    {
    case VAR25:
        VAR11 = FUN7(VAR2->VAR6, VAR4->VAR26);
        if (VAR11 >= 0 && (VAR4->VAR26 || VAR2->VAR16.VAR9 != VAR2->VAR16.VAR10 >> 1 || VAR2->VAR16.VAR19))
        {
            FUN8(&VAR2->VAR16, (VAR14)VAR2->VAR15.VAR10 * VAR11);
        }
        break;
    case VAR27:
        FUN8(&VAR2->VAR16, (VAR14)VAR2->VAR15.VAR10 * VAR2->VAR6->VAR15.VAR9);
        break;
    default:
        break;
    }
    return 0;
}