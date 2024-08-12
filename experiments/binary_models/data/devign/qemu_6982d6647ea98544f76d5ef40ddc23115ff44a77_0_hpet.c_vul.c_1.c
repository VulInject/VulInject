static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    uint64_t VAR6, VAR7;
    FUN2("" VAR8 "", VAR3);
    VAR7 = VAR3;
    if (VAR7 >= 0x100 && VAR7 <= 0x3ff)
    {
        uint8_t VAR9 = (VAR3 - 0x100) / 0x20;
        if (VAR9 > VAR10 - 1)
        {
            FUN3("");
            return 0;
        }
        VAR11 *VAR12 = &VAR5->VAR12[VAR9];
        switch ((VAR3 - 0x100) % 0x20)
        {
        case VAR13:
            return VAR12->VAR14;
        case VAR13 + 4:
            return VAR12->VAR14 >> 32;
        case VAR15:
            return VAR12->VAR16;
        case VAR15 + 4:
            return VAR12->VAR16 >> 32;
        case VAR17:
            return VAR12->VAR18 >> 32;
        default:
            FUN2("");
            break;
        }
    }
    else
    {
        switch (VAR7)
        {
        case VAR19:
            return VAR5->VAR20;
        case VAR21:
            return VAR5->VAR20 >> 32;
        case VAR22:
            return VAR5->VAR14;
        case VAR22 + 4:
            FUN2("");
            return 0;
        case VAR23:
            if (FUN4())
                VAR6 = FUN5();
            else
                VAR6 = VAR5->VAR24;
            FUN2("" VAR8 "", VAR6);
            return VAR6;
        case VAR23 + 4:
            if (FUN4())
                VAR6 = FUN5();
            else
                VAR6 = VAR5->VAR24;
            FUN2("" VAR8 "", VAR6);
            return VAR6 >> 32;
        case VAR25:
            return VAR5->VAR26;
        default:
            FUN2("");
            break;
        }
    }
    return 0;
}