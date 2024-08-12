static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9;
    uint32_t VAR10 = FUN2(VAR5->VAR10);
    if (VAR10 == 0 || VAR10 > VAR3->VAR11)
    {
        return VAR12 | VAR13;
    }
    VAR9 = &VAR3->VAR14[VAR10 - 1];
    switch (VAR5->VAR15)
    {
    case VAR16:
        return FUN3(VAR3, VAR9, VAR5, VAR7);
    case VAR17:
        return FUN4(VAR3, VAR9, VAR5, VAR7);
    case VAR18:
    case VAR19:
        return FUN5(VAR3, VAR9, VAR5, VAR7);
    default:
        return VAR20 | VAR13;
    }
}