static VAR1 FUN1(uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    if (!VAR5 || !FUN3(FUN4(VAR5), VAR6))
    {
        return VAR7;
    }
    FUN5(FUN6(VAR5), VAR3);
    switch (VAR3)
    {
    case VAR8:
        return FUN7(VAR5);
    case VAR9:
        return FUN8(VAR5);
    default:
        return VAR10;
    }
}