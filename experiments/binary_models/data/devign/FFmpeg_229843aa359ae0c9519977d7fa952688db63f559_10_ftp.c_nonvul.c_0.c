static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR3->VAR8;
    int VAR9;
    int64_t VAR10, VAR11;
    FUN2(VAR3, "" VAR12 "", VAR4, VAR5);
    switch (VAR5)
    {
    case VAR13:
        return VAR7->VAR14;
    case VAR15:
        VAR10 = VAR4;
        break;
    case VAR16:
        VAR10 = VAR7->VAR17 + VAR4;
        break;
    case VAR18:
        if (VAR7->VAR14 < 0)
            return FUN3(VAR19);
        VAR10 = VAR7->VAR14 + VAR4;
        break;
    default:
        return FUN3(VAR20);
    }
    if (VAR3->VAR21)
        return FUN3(VAR19);
    if (VAR10 < 0)
    {
        FUN4(VAR3, VAR22, "");
        return FUN3(VAR20);
    }
    VAR11 = VAR7->VAR14 != -1 ? FUN5(VAR10, VAR7->VAR14) : VAR10;
    if (VAR11 != VAR7->VAR17)
    {
        if ((VAR9 = FUN6(VAR3)) < 0)
            return VAR9;
        VAR7->VAR17 = VAR11;
    }
    return VAR10;
}