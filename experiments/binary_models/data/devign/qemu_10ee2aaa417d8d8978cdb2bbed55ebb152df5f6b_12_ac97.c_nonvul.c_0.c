static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = NULL;
    uint32_t VAR8 = VAR2 - VAR5->VAR9[1];
    switch (VAR8)
    {
    case VAR10:
    case VAR11:
    case VAR12:
        VAR7 = &VAR5->VAR13[FUN2(VAR8)];
        VAR7->VAR14 |= VAR3 & ~(VAR15 | VAR16);
        FUN3(VAR5, VAR7, VAR7->VAR14 & ~(VAR3 & VAR16));
        FUN4("", FUN2(VAR8), VAR3, VAR7->VAR14);
        break;
    default:
        FUN4("", VAR2, VAR3);
        break;
    }
}