static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR7.VAR6);
    VAR8 *VAR9 = FUN3(&VAR6->VAR10);
    int VAR11;
    unsigned VAR12 = FUN4(VAR9->VAR13.VAR14);
    bool VAR15 = false;
    if (VAR6->VAR16 < 4)
    {
        FUN5(VAR6->VAR17, VAR6->VAR16);
        return 0;
    }
    if (VAR6->VAR18->VAR19 == 0 || VAR6->VAR18->VAR19 == ~0 || !(VAR6->VAR18->VAR19 & VAR20))
    {
        FUN6(VAR6->VAR17, VAR6->VAR18->VAR19, VAR4);
        return 0;
    }
    if (!VAR4)
    {
        return 1;
    }
    if (VAR6->VAR12 && VAR6->VAR12 <= VAR12)
    {
        VAR12 = VAR6->VAR12;
    }
    VAR15 = FUN7(VAR9, VAR4, VAR12);
    memset(&VAR9->VAR13, 0, sizeof(VAR9->VAR13));
    VAR9->VAR13.VAR21 = VAR4->VAR22;
    if (VAR9->VAR13.VAR21 >= VAR12)
    {
        FUN8(VAR6->VAR17, VAR4->VAR22, VAR12);
        VAR9->VAR13.VAR21 = VAR12;
    }
    for (VAR11 = 0; VAR11 < VAR9->VAR13.VAR21; ++VAR11)
    {
        VAR23 *VAR24 = &VAR4->VAR25[VAR11];
        VAR26 *VAR27 = &VAR9->VAR13.VAR14[VAR11];
        VAR27->VAR28 = VAR24->VAR29;
        VAR27->VAR30 = VAR24->VAR31;
        VAR27->VAR32 = VAR24->VAR29 + VAR24->VAR33;
        VAR27->VAR34 = VAR24->VAR31 + VAR24->VAR35;
    }
    VAR9->VAR36 = FUN9((const VAR37 *)&VAR9->VAR13, sizeof(VAR9->VAR13));
    FUN10(VAR6->VAR17, sizeof(VAR9->VAR13), VAR9->VAR36);
    FUN11(VAR6->VAR17, VAR9->VAR13.VAR21, VAR9->VAR13.VAR14);
    if (VAR15)
    {
        FUN12(VAR6, VAR20);
    }
    return 1;
}