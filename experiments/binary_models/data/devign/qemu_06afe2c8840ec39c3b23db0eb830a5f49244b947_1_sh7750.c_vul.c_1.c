static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    uint16_t VAR6;
    switch (VAR2)
    {
    case VAR7:
    case VAR8:
    case VAR9:
    case VAR10:
    case VAR11:
    case VAR12:
        FUN2("", VAR2);
        return;
    case VAR13:
        VAR6 = FUN3(VAR5);
        VAR5->VAR14 = VAR3;
        VAR5->VAR15 = FUN4(VAR3);
        VAR5->VAR16 = FUN5(VAR3);
        FUN6(VAR5, VAR6);
        return;
    case VAR17:
        VAR6 = FUN7(VAR5);
        VAR5->VAR18 = VAR3;
        VAR5->VAR19 = FUN4(VAR3);
        VAR5->VAR20 = FUN5(VAR3);
        FUN8(VAR5, VAR6);
        return;
    case VAR21:
        VAR5->VAR22->VAR23 = VAR3;
        return;
    case VAR24:
        VAR5->VAR22->VAR25 = VAR3;
        return;
    case VAR26:
        VAR5->VAR22->VAR27 = VAR3;
        return;
    case VAR28:
        VAR5->VAR22->VAR29 = VAR3 & 0x0000000f;
        return;
    case VAR30:
        VAR5->VAR22->VAR31 = VAR3;
        return;
    case VAR32:
        VAR5->VAR22->VAR33 = VAR3;
        return;
    case VAR34:
        VAR5->VAR22->VAR35 = VAR3 & 0x000007ff;
        return;
    case VAR36:
        VAR5->VAR22->VAR37 = VAR3 & 0x000007ff;
        return;
    case VAR38:
        VAR5->VAR22->VAR39 = VAR3 & 0x000007ff;
        return;
    case VAR40:
        VAR5->VAR41 = VAR3;
        return;
    default:
        FUN9("", VAR2);
        assert(0);
    }