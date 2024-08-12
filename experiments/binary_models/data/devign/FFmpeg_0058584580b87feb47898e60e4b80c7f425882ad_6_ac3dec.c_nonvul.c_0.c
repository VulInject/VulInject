static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = &VAR2->VAR6;
    int VAR7 = 0;
    int VAR8 = 0;
    for (VAR3 = 0; VAR3 < VAR2->VAR9.VAR10; VAR3++)
    {
        VAR8 = VAR5->VAR8 & (1 << VAR3);
        if (FUN2(VAR5->VAR11[VAR3], VAR5->VAR12[VAR3], VAR5->VAR13[VAR3], VAR5->VAR14[VAR3 + 1], 0, VAR5->VAR15[VAR3], VAR8, &VAR2->VAR16, &VAR2->VAR17))
            return -1;
        if ((VAR5->VAR18 & VAR19) && (VAR5->VAR20 & (1 << VAR3)) && !VAR7)
        {
            if (FUN2(VAR5->VAR21, VAR5->VAR22, 1.0f, VAR5->VAR23, VAR5->VAR24, VAR5->VAR25, 0, &VAR2->VAR16, &VAR2->VAR17))
                return -1;
            VAR7 = 1;
        }
    }
    if (VAR2->VAR9.VAR18 & VAR26)
        if (FUN2(VAR5->VAR27, VAR5->VAR28, 1.0f, VAR5->VAR14[0], 0, 7, 0, &VAR2->VAR16, &VAR2->VAR17))
            return -1;
    if (VAR5->VAR18 & VAR19)
        FUN3(VAR2);
    return 0;
}