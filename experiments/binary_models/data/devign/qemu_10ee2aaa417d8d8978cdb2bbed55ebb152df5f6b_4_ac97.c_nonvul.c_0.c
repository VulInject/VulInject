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
        VAR10 = VAR7->VAR19 | (VAR7->VAR20 << 8) | (VAR7->VAR21 << 16);
        FUN3("", FUN2(VAR8), VAR7->VAR19, VAR7->VAR20, VAR7->VAR21);
        break;
    case VAR22:
    case VAR23:
    case VAR24:
        VAR7 = &VAR5->VAR14[FUN2(VAR8)];
        VAR10 = VAR7->VAR25 | (VAR7->VAR26 << 16) | (VAR7->VAR27 << 24);
        FUN3("", FUN2(VAR8), VAR10, VAR7->VAR25, VAR7->VAR26, VAR7->VAR27);
        break;
    case VAR28:
        VAR10 = VAR5->VAR29;
        FUN3("", VAR10);
        break;
    case VAR30:
        VAR10 = VAR5->VAR31 | VAR32;
        FUN3("", VAR10);
        break;
    default:
        FUN3("", VAR3, VAR10);
        break;
    }
    return VAR10;
}