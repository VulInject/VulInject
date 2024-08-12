static VAR1 FUN1(uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7;
    if (!VAR5)
    {
        return VAR8;
    }
    FUN3(FUN4(VAR5), VAR3);
    VAR7 = FUN5(VAR5);
    switch (VAR3)
    {
    case VAR9:
        return VAR7->FUN6(VAR5);
    case VAR10:
        return VAR7->FUN7(VAR5);
    default:
        return VAR11;
    }
}