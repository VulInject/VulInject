static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    uint32_t VAR8 = FUN2(VAR5->VAR9);
    uint32_t VAR10;
    switch (VAR8)
    {
    case VAR11:
        VAR10 = FUN3(VAR3->VAR12.VAR13);
        break;
    case VAR14:
        VAR10 = FUN4((VAR3->VAR15 - 1) | ((VAR3->VAR15 - 1) << 16));
        break;
    default:
        return VAR16 | VAR17;
    }
    VAR7->VAR18.VAR10 = VAR10;
    return VAR19;
}