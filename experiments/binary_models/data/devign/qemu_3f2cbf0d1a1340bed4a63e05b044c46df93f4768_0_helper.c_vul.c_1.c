VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4)
{
    target_ulong VAR5, VAR6;
    uint64_t VAR7;
    target_phys_addr_t VAR8;
    uint32_t VAR9;
    int VAR10;
    if (VAR3->VAR11[4] & VAR12)
    {
        target_ulong VAR13;
        uint64_t VAR14, VAR15;
        if (VAR3->VAR16 & VAR17)
        {
            uint64_t VAR18, VAR19;
            int32_t VAR20;
            VAR20 = (VAR21)VAR4 >> 47;
            if (VAR20 != 0 && VAR20 != -1)
                return -1;
            VAR18 = ((VAR3->VAR11[3] & ~0xfff) + (((VAR4 >> 39) & 0x1ff) << 3)) & VAR3->VAR22;
            VAR19 = FUN2(VAR18);
            if (!(VAR19 & VAR23))
                return -1;
            VAR13 = ((VAR19 & ~0xfff) + (((VAR4 >> 30) & 0x1ff) << 3)) & VAR3->VAR22;
            VAR15 = FUN2(VAR13);
            if (!(VAR15 & VAR23))
                return -1;
        }
        else
        {
            VAR13 = ((VAR3->VAR11[3] & ~0x1f) + ((VAR4 >> 27) & 0x18)) & VAR3->VAR22;
            VAR15 = FUN2(VAR13);
            if (!(VAR15 & VAR23))
                return -1;
        }
        VAR5 = ((VAR15 & ~0xfff) + (((VAR4 >> 21) & 0x1ff) << 3)) & VAR3->VAR22;
        VAR14 = FUN2(VAR5);
        if (!(VAR14 & VAR23))
        {
            return -1;
        }
        if (VAR14 & VAR24)
        {
            VAR10 = 2048 * 1024;
            VAR7 = VAR14 & ~((VAR10 - 1) & ~0xfff);
        }
        else
        {
            VAR6 = ((VAR14 & ~0xfff) + (((VAR4 >> 12) & 0x1ff) << 3)) & VAR3->VAR22;
            VAR10 = 4096;
            VAR7 = FUN2(VAR6);
        }
        if (!(VAR7 & VAR23))
            return -1;
    }
    else
    {
        uint32_t VAR14;
        if (!(VAR3->VAR11[0] & VAR25))
        {
            VAR7 = VAR4;
            VAR10 = 4096;
        }
        else
        {
            VAR5 = ((VAR3->VAR11[3] & ~0xfff) + ((VAR4 >> 20) & 0xffc)) & VAR3->VAR22;
            VAR14 = FUN3(VAR5);
            if (!(VAR14 & VAR23))
                return -1;
            if ((VAR14 & VAR24) && (VAR3->VAR11[4] & VAR26))
            {
                VAR7 = VAR14 & ~0x003ff000;
                VAR10 = 4096 * 1024;
            }
            else
            {
                VAR6 = ((VAR14 & ~0xfff) + ((VAR4 >> 10) & 0xffc)) & VAR3->VAR22;
                VAR7 = FUN3(VAR6);
                if (!(VAR7 & VAR23))
                    return -1;
                VAR10 = 4096;
            }
        }
        VAR7 = VAR7 & VAR3->VAR22;
    }
    VAR9 = (VAR4 & VAR27) & (VAR10 - 1);
    VAR8 = (VAR7 & VAR27) + VAR9;
    return VAR8;
}