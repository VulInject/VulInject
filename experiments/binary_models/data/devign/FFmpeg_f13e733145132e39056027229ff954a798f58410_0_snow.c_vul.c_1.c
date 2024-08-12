int FUN1(VAR1 *VAR2)
{
    AVFrame VAR3;
    int VAR4, VAR5;
    int VAR6 = VAR2->VAR7->VAR8;
    int VAR9 = VAR2->VAR7->VAR10;
    if (VAR2->VAR11.VAR12[0] && !(VAR2->VAR7->VAR13 & VAR14))
    {
        VAR2->VAR15.FUN2(VAR2->VAR11.VAR12[0], VAR2->VAR11.VAR16[0], VAR6, VAR9, VAR17, VAR17, VAR18 | VAR19);
        VAR2->VAR15.FUN2(VAR2->VAR11.VAR12[1], VAR2->VAR11.VAR16[1], VAR6 >> VAR2->VAR20, VAR9 >> VAR2->VAR21, VAR17 >> VAR2->VAR20, VAR17 >> VAR2->VAR21, VAR18 | VAR19);
        VAR2->VAR15.FUN2(VAR2->VAR11.VAR12[2], VAR2->VAR11.VAR16[2], VAR6 >> VAR2->VAR20, VAR9 >> VAR2->VAR21, VAR17 >> VAR2->VAR20, VAR17 >> VAR2->VAR21, VAR18 | VAR19);
    }
    FUN3(VAR2->VAR7);
    FUN4(&VAR3, &VAR2->VAR22[VAR2->VAR23 - 1]);
    for (VAR4 = VAR2->VAR23 - 1; VAR4 > 0; VAR4--)
        FUN4(&VAR2->VAR22[VAR4], &VAR2->VAR22[VAR4 - 1]);
    memmove(VAR2->VAR24 + 1, VAR2->VAR24, (VAR2->VAR23 - 1) * sizeof(void *) * 4 * 4);
    if (VAR25 && VAR2->VAR11.VAR12[0])
        FUN5(VAR2, VAR2->VAR24[0], &VAR2->VAR11);
    FUN4(&VAR2->VAR22[0], &VAR2->VAR11);
    FUN4(&VAR2->VAR11, &VAR3);
    if (VAR2->VAR26)
    {
        VAR2->VAR27 = 0;
    }
    else
    {
        int VAR4;
        for (VAR4 = 0; VAR4 < VAR2->VAR23 && VAR2->VAR22[VAR4].VAR12[0]; VAR4++)
            if (VAR4 && VAR2->VAR22[VAR4 - 1].VAR28)
                break;
        VAR2->VAR27 = VAR4;
        if (VAR2->VAR27 == 0)
        {
            FUN6(VAR2->VAR7, VAR29, "");
            return -1;
        }
    }
    if ((VAR5 = FUN7(VAR2->VAR7, &VAR2->VAR11, VAR30)) < 0)
        return VAR5;
    VAR2->VAR11.VAR28 = VAR2->VAR26;
    return 0;
}