static inline VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, TCGMemOp VAR6)
{
    uint32_t VAR7;
    switch (VAR6)
    {
    case VAR8:
        VAR7 = FUN2(VAR3, VAR5);
        break;
    case VAR9:
        VAR7 = FUN3(VAR3, VAR5);
        break;
    case VAR10:
    case VAR11:
        VAR7 = FUN4(VAR3, VAR5);
        break;
    default:
        FUN5();
    }
    return VAR7;
}