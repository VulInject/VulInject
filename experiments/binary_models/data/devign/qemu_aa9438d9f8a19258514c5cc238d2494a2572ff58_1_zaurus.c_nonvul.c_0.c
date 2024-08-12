static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    VAR3 &= 0xffff;
    switch (VAR2 & 0x3f)
    {
    case VAR6:
        VAR5->VAR7 = VAR3;
        break;
    case VAR8:
        VAR5->VAR9 = VAR3;
        break;
    case VAR10:
        VAR5->VAR11 = VAR3;
        if (VAR3 & 0x80)
            VAR5->VAR11 |= 0x8040;
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
        FUN2(VAR5);
        break;
    case VAR22:
    case VAR23:
        VAR5->VAR24 = VAR3 & VAR5->VAR21;
        FUN2(VAR5);
        break;
    default:
        FUN3("" VAR25 "", (unsigned long)VAR2);
    }
}