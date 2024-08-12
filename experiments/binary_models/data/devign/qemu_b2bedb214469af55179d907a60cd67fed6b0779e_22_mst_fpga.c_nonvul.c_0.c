FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    VAR3 &= 0xffffffff;
    switch (VAR2)
    {
    case VAR6:
        VAR5->VAR7 = VAR3;
        break;
    case VAR8:
        VAR5->VAR9 = VAR3;
        break;
    case VAR10:
        VAR5->VAR11 = VAR3;
        break;
    case VAR12:
        VAR5->VAR13 = VAR3;
        break;
    case VAR14:
        VAR5->VAR15 = VAR3;
        break;
    case VAR16:
        VAR5->VAR17 = VAR3;
        break;
    case VAR18:
        VAR5->VAR19 = VAR3;
        break;
    case VAR20:
        VAR5->VAR21 = VAR3;
        break;
    case VAR22:
        VAR5->VAR23 = (VAR3 & 0xFEEFF);
        FUN2(VAR5->VAR24, VAR5->VAR25 & VAR5->VAR23);
        break;
    case VAR26:
        VAR5->VAR25 = (VAR3 & 0xFEEFF);
        FUN2(VAR5->VAR24, VAR5->VAR25 & VAR5->VAR23);
        break;
    case VAR27:
        VAR5->VAR28 = (VAR3 & 0x1f) | (VAR5->VAR28 & ~0x1f);
        break;
    case VAR29:
        VAR5->VAR30 = (VAR3 & 0x1f) | (VAR5->VAR30 & ~0x1f);
        break;
    default:
        FUN3(""
               "" VAR31 "",
               VAR2);
    }
}