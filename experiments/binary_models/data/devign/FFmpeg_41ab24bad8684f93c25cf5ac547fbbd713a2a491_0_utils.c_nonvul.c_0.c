static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = FUN2(VAR4->VAR8->VAR9, !!VAR4->VAR8->VAR10);
    int VAR11, VAR12, VAR13, VAR14;
    FUN3(VAR2, "" VAR15 "" VAR15 "" VAR15 "", VAR6->VAR16, VAR6->VAR17, VAR4->VAR18, VAR7, VAR6->VAR19, VAR6->VAR20);
    if (VAR6->VAR21 == 0)
    {
        FUN4(&VAR11, &VAR12, VAR4, NULL, VAR6);
        if (VAR12 && VAR11)
        {
            VAR6->VAR21 = FUN5(1, VAR11 * (VAR22)VAR4->VAR23.VAR12 * VAR4->VAR8->VAR24, VAR12 * (VAR22)VAR4->VAR23.VAR11);
        }
    }
    if (VAR6->VAR16 == VAR25 && VAR6->VAR17 != VAR25 && VAR7 == 0)
        VAR6->VAR16 = VAR6->VAR17;
    if ((VAR6->VAR16 == 0 || VAR6->VAR16 == VAR25) && VAR6->VAR17 == VAR25 && !VAR7)
    {
        VAR6->VAR17 = VAR6->VAR16 = VAR4->VAR16.VAR26;
    }
    if (VAR6->VAR16 != VAR25 && VAR6->VAR17 == VAR25 && VAR7 <= VAR27)
    {
        VAR4->VAR28[0] = VAR6->VAR16;
        for (VAR14 = 1; VAR14 < VAR7 + 1 && VAR4->VAR28[VAR14] == VAR25; VAR14++)
            VAR4->VAR28[VAR14] = VAR6->VAR16 + (VAR14 - VAR7 - 1) * VAR6->VAR21;
        for (VAR14 = 0; VAR14 < VAR7 && VAR4->VAR28[VAR14] > VAR4->VAR28[VAR14 + 1]; VAR14++)
            FUN6(VAR22, VAR4->VAR28[VAR14], VAR4->VAR28[VAR14 + 1]);
        VAR6->VAR17 = VAR4->VAR28[0];
    }
    if (VAR4->VAR18 && VAR4->VAR18 != VAR25 && ((!(VAR2->VAR29->VAR30 & VAR31) && VAR4->VAR18 >= VAR6->VAR17) || VAR4->VAR18 > VAR6->VAR17))
    {
        FUN7(VAR2, VAR32, "" VAR15 "" VAR15 "", VAR4->VAR33, VAR4->VAR18, VAR6->VAR17);
        return FUN8(VAR34);
    }
    if (VAR6->VAR17 != VAR25 && VAR6->VAR16 != VAR25 && VAR6->VAR16 < VAR6->VAR17)
    {
        FUN7(VAR2, VAR32, "", VAR4->VAR33);
        return FUN8(VAR34);
    }
    VAR4->VAR18 = VAR6->VAR17;
    VAR4->VAR16.VAR26 = VAR6->VAR17;
    switch (VAR4->VAR8->VAR35)
    {
    case VAR36:
        VAR13 = FUN9(VAR4->VAR8, VAR6->VAR19);
        if (VAR13 >= 0 && (VAR6->VAR19 || VAR4->VAR16.VAR11 != VAR4->VAR16.VAR12 >> 1 || VAR4->VAR16.VAR26))
        {
            FUN10(&VAR4->VAR16, (VAR22)VAR4->VAR23.VAR12 * VAR13);
        }
        break;
    case VAR37:
        FUN10(&VAR4->VAR16, (VAR22)VAR4->VAR23.VAR12 * VAR4->VAR8->VAR23.VAR11);
        break;
    default:
        break;
    }
    return 0;
}