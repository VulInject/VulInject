VAR1 FUN1(VAR2 *VAR3, vaddr VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    VAR7 *VAR8 = &VAR6->VAR8;
    target_ulong VAR9, VAR10;
    uint64_t VAR11;
    hwaddr VAR12;
    uint32_t VAR13;
    int VAR14;
    if (!(VAR8->VAR15[0] & VAR16))
    {
        VAR11 = VAR4 & VAR8->VAR17;
        VAR14 = 4096;
    }
    else if (VAR8->VAR15[4] & VAR18)
    {
        target_ulong VAR19;
        uint64_t VAR20, VAR21;
        if (VAR8->VAR22 & VAR23)
        {
            uint64_t VAR24, VAR25;
            int32_t VAR26;
            VAR26 = (VAR27)VAR4 >> 47;
            if (VAR26 != 0 && VAR26 != -1)
                return -1;
            VAR24 = ((VAR8->VAR15[3] & ~0xfff) + (((VAR4 >> 39) & 0x1ff) << 3)) & VAR8->VAR17;
            VAR25 = FUN3(VAR24);
            if (!(VAR25 & VAR28))
                return -1;
            VAR19 = ((VAR25 & ~0xfff & ~(VAR29 | VAR30)) + (((VAR4 >> 30) & 0x1ff) << 3)) & VAR8->VAR17;
            VAR21 = FUN3(VAR19);
            if (!(VAR21 & VAR28))
                return -1;
        }
        else
        {
            VAR19 = ((VAR8->VAR15[3] & ~0x1f) + ((VAR4 >> 27) & 0x18)) & VAR8->VAR17;
            VAR21 = FUN3(VAR19);
            if (!(VAR21 & VAR28))
                return -1;
        }
        VAR9 = ((VAR21 & ~0xfff & ~(VAR29 | VAR30)) + (((VAR4 >> 21) & 0x1ff) << 3)) & VAR8->VAR17;
        VAR20 = FUN3(VAR9);
        if (!(VAR20 & VAR28))
        {
            return -1;
        }
        if (VAR20 & VAR31)
        {
            VAR14 = 2048 * 1024;
            VAR11 = VAR20 & ~((VAR14 - 1) & ~0xfff);
        }
        else
        {
            VAR10 = ((VAR20 & ~0xfff & ~(VAR29 | VAR30)) + (((VAR4 >> 12) & 0x1ff) << 3)) & VAR8->VAR17;
            VAR14 = 4096;
            VAR11 = FUN3(VAR10);
        }
        VAR11 &= ~(VAR29 | VAR30);
        if (!(VAR11 & VAR28))
            return -1;
    }
    else
    {
        uint32_t VAR20;
        VAR9 = ((VAR8->VAR15[3] & ~0xfff) + ((VAR4 >> 20) & 0xffc)) & VAR8->VAR17;
        VAR20 = FUN4(VAR9);
        if (!(VAR20 & VAR28))
            return -1;
        if ((VAR20 & VAR31) && (VAR8->VAR15[4] & VAR32))
        {
            VAR11 = VAR20 & ~0x003ff000;
            VAR14 = 4096 * 1024;
        }
        else
        {
            VAR10 = ((VAR20 & ~0xfff) + ((VAR4 >> 10) & 0xffc)) & VAR8->VAR17;
            VAR11 = FUN4(VAR10);
            if (!(VAR11 & VAR28))
                return -1;
            VAR14 = 4096;
        }
        VAR11 = VAR11 & VAR8->VAR17;
    }
    VAR13 = (VAR4 & VAR33) & (VAR14 - 1);
    VAR12 = (VAR11 & VAR33) + VAR13;
    return VAR12;
}