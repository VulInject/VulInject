static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    switch (VAR3 & 0x3f)
    {
    case VAR6:
        return VAR5->VAR7;
    case VAR8:
        return VAR5->VAR9;
    case VAR10:
        return VAR5->VAR11;
    case VAR12:
        return VAR5->VAR13;
    case VAR14:
        return VAR5->VAR15;
    case VAR16:
        return VAR5->VAR17;
    case VAR18:
        return VAR5->VAR19;
    case VAR20:
        return VAR5->VAR21;
    case VAR22:
        return VAR5->VAR23;
    case VAR24:
    case VAR25:
        return VAR5->VAR26;
    default:
        FUN2("" VAR27 "", (unsigned long)VAR3);
    }
    return 0;
}