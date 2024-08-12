int FUN1(void)
{
    int VAR1 = 0;
    int VAR2, VAR3, VAR4, VAR5;
    int VAR6, VAR7, VAR8 = 0, VAR9 = 0;
    int VAR10 = 0, VAR11 = 0;
    union
    {
        int VAR12[3];
        char VAR13[12];
    } VAR14;
    if (!FUN2())
        return 0;
    FUN3(0, VAR6, VAR14.VAR12[0], VAR14.VAR12[2], VAR14.VAR12[1]);
    if (VAR6 >= 1)
    {
        FUN3(1, VAR2, VAR3, VAR4, VAR8);
        VAR10 = ((VAR2 >> 8) & 0xf) + ((VAR2 >> 20) & 0xff);
        VAR11 = ((VAR2 >> 4) & 0xf) + ((VAR2 >> 12) & 0xf0);
        if (VAR8 & (1 << 15))
            VAR1 |= VAR15;
        if (VAR8 & (1 << 23))
            VAR1 |= VAR16;
        if (VAR8 & (1 << 25))
            VAR1 |= VAR17;
        if (VAR8 & (1 << 25))
            VAR1 |= VAR18;
        if (VAR8 & (1 << 26))
            VAR1 |= VAR19;
        if (VAR4 & 1)
            VAR1 |= VAR20;
        if (VAR4 & 0x00000200)
            VAR1 |= VAR21;
        if (VAR4 & 0x00080000)
            VAR1 |= VAR22;
        if (VAR4 & 0x00100000)
            VAR1 |= VAR23;
        if ((VAR4 & 0x18000000) == 0x18000000)
        {
            FUN4(0, VAR2, VAR5);
            if ((VAR2 & 0x6) == 0x6)
            {
                VAR1 |= VAR24;
                if (VAR4 & 0x00001000)
                    VAR1 |= VAR25;
            }
        }
    }
    if (VAR6 >= 7)
    {
        FUN3(7, VAR2, VAR3, VAR4, VAR5);
        if ((VAR1 & VAR24) && (VAR3 & 0x00000020))
            VAR1 |= VAR26;
        if (VAR3 & 0x00000008)
        {
            VAR1 |= VAR27;
            if (VAR3 & 0x00000100)
                VAR1 |= VAR28;
        }
    }
    FUN3(0x80000000, VAR7, VAR3, VAR4, VAR5);
    if (VAR7 >= 0x80000001)
    {
        FUN3(0x80000001, VAR2, VAR3, VAR4, VAR9);
        if (VAR9 & (1U << 31))
            VAR1 |= VAR29;
        if (VAR9 & (1 << 30))
            VAR1 |= VAR30;
        if (VAR9 & (1 << 23))
            VAR1 |= VAR16;
        if (VAR9 & (1 << 22))
            VAR1 |= VAR17;
        if (!FUN5(VAR14.VAR13, "", 12) && VAR1 & VAR19 && !(VAR4 & 0x00000040))
        {
            VAR1 |= VAR31;
        }
        if (VAR1 & VAR24)
        {
            if (VAR4 & 0x00000800)
                VAR1 |= VAR32;
            if (VAR4 & 0x00010000)
                VAR1 |= VAR33;
        }
    }
    if (!FUN5(VAR14.VAR13, "", 12))
    {
        if (VAR10 == 6 && (VAR11 == 9 || VAR11 == 13 || VAR11 == 14))
        {
            if (VAR1 & VAR19)
                VAR1 ^= VAR31 | VAR19;
            if (VAR1 & VAR20)
                VAR1 ^= VAR34 | VAR20;
        }
        if (VAR10 == 6 && VAR11 == 28)
            VAR1 |= VAR35;
    }
    return VAR1;
}