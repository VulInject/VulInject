static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    VAR6 *VAR7 = VAR5->VAR7;
    uint32_t VAR8;
    FUN2("", (int)VAR3);
    if (VAR3 >= VAR9)
    {
        return FUN3(VAR7, VAR3 - VAR9);
    }
    switch (VAR3 >> 2)
    {
    case VAR10:
        VAR8 = VAR11;
        break;
    case VAR12:
        VAR8 = VAR5->VAR13;
        break;
    case VAR14:
        VAR8 = VAR7->FUN4(VAR7);
        VAR8 |= (1 << VAR15);
        break;
    case VAR16:
        VAR8 = VAR7->VAR17;
        break;
    case VAR18:
        VAR8 = FUN5(VAR7, VAR7->VAR19);
        break;
    case VAR20:
        VAR8 = FUN6(VAR7, VAR7->VAR19);
        break;
    case VAR21:
        VAR8 = VAR7->VAR19;
        break;
    case VAR22:
        VAR8 = VAR7->VAR23;
        break;
    case VAR24:
        VAR8 = VAR5->VAR25;
        break;
    case VAR26:
        VAR8 = VAR7->VAR27;
        break;
    default:
        FUN7("", (int)VAR3);
        return 0;
    }
    return VAR8;
}