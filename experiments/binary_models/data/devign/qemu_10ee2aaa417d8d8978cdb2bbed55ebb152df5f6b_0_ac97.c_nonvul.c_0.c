static VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    VAR6 *VAR7 = NULL;
    uint32_t VAR8 = VAR3 - VAR5->VAR9[1];
    uint32_t VAR10 = ~0U;
    switch (VAR8)
    {
    case VAR11:
        FUN2("", VAR5->VAR12);
        VAR10 = VAR5->VAR12;
        VAR5->VAR12 = 1;
        break;
    case VAR13:
    case VAR14:
    case VAR15:
        VAR7 = &VAR5->VAR16[FUN3(VAR8)];
        VAR10 = VAR7->VAR17;
        FUN2("", FUN3(VAR8), VAR10);
        break;
    case VAR18:
    case VAR19:
    case VAR20:
        VAR7 = &VAR5->VAR16[FUN3(VAR8)];
        VAR10 = VAR7->VAR21;
        FUN2("", FUN3(VAR8), VAR10);
        break;
    case VAR22:
    case VAR23:
    case VAR24:
        VAR7 = &VAR5->VAR16[FUN3(VAR8)];
        VAR10 = VAR7->VAR25;
        FUN2("", FUN3(VAR8), VAR10);
        break;
    case VAR26:
    case VAR27:
    case VAR28:
        VAR7 = &VAR5->VAR16[FUN3(VAR8)];
        VAR10 = VAR7->VAR29;
        FUN2("", FUN3(VAR8), VAR10);
        break;
    case VAR30:
    case VAR31:
    case VAR32:
        VAR7 = &VAR5->VAR16[FUN3(VAR8)];
        VAR10 = VAR7->VAR33 & 0xff;
        FUN2("", FUN3(VAR8), VAR10);
        break;
    default:
        FUN2("", VAR3, VAR10);
        break;
    }
    return VAR10;
}