static VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    VAR6 *VAR7 = NULL;
    uint32_t VAR8 = VAR3 - VAR5->VAR9[1];
    uint32_t VAR10 = ~0U;
    switch (VAR8)
    {
    case VAR11:
    case VAR12:
    case VAR13:
        VAR7 = &VAR5->VAR14[FUN2(VAR8)];
        VAR10 = VAR7->VAR15;
        FUN3("", FUN2(VAR8), VAR10);
        break;
    case VAR16:
    case VAR17:
    case VAR18:
        VAR7 = &VAR5->VAR14[FUN2(VAR8)];
        VAR10 = VAR7->VAR19;
        FUN3("", FUN2(VAR8), VAR10);
        break;
    default:
        FUN3("", VAR3, VAR10);
        break;
    }
    return VAR10;
}