static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    VAR1 *VAR9 = VAR7 + 1;
    target_ulong VAR10 = VAR7[7];
    VAR11 *VAR12 = FUN2(VAR5->VAR13, VAR8);
    VAR14 *VAR15 = (VAR14 *)VAR12;
    unsigned VAR16;
    VAR17 *VAR18, *VAR19;
    int VAR20, VAR21;
    int VAR22;
    FUN3("" VAR23 "" VAR23 "", VAR8, VAR10);
    if (!VAR12)
    {
        return VAR24;
    }
    FUN3("", VAR15->VAR25);
    if (!VAR15->VAR26)
    {
        return VAR27;
    }
    if (VAR10)
    {
        return VAR28;
    }
    VAR16 = 0;
    for (VAR20 = 0; VAR20 < 6; VAR20++)
    {
        FUN3("" VAR23 "", VAR9[VAR20]);
        if (!(VAR9[VAR20] & VAR29))
        {
            break;
        }
        VAR16 += FUN4(VAR9[VAR20]);
    }
    VAR21 = VAR20;
    FUN3("", VAR21, VAR16);
    if (VAR16 == 0)
    {
        return VAR30;
    }
    if (VAR16 > VAR31)
    {
        return VAR32;
    }
    VAR18 = alloca(VAR16);
    VAR19 = VAR18;
    for (VAR20 = 0; VAR20 < VAR21; VAR20++)
    {
        VAR22 = FUN5(VAR12, FUN6(VAR9[VAR20]), VAR19, FUN4(VAR9[VAR20]));
        if (VAR22 < 0)
        {
            return VAR22;
        }
        VAR19 += FUN4(VAR9[VAR20]);
    }
    FUN7(&VAR15->VAR33->VAR34, VAR18, VAR16);
    return VAR30;
}