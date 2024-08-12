static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, target_ulong VAR5, int VAR6)
{
    hwaddr VAR7;
    target_ulong VAR8;
    int VAR9, VAR10;
    int VAR11, VAR12;
    VAR9 = VAR13;
    VAR4->VAR5 = VAR5;
    VAR14 *VAR15;
    target_ulong VAR16;
    int VAR17;
    FUN2("");
    VAR15 = FUN3(VAR2, VAR5);
    if (!VAR15)
    {
        return -5;
    }
    if (VAR15->VAR8 & VAR18)
    {
        VAR8 = (VAR15->VAR8 & VAR19) >> VAR20;
        VAR17 = 40;
    }
    else
    {
        VAR8 = (VAR15->VAR8 & VAR19) >> VAR21;
        VAR17 = 28;
    }
    VAR10 = (VAR15->VAR8 & VAR22) ? VAR23 : VAR24;
    VAR4->VAR25 = !!(VAR9 ? (VAR15->VAR8 & VAR26) : (VAR15->VAR8 & VAR27));
    VAR4->VAR28 = !!(VAR15->VAR8 & VAR29);
    VAR16 = VAR5 & ((1ULL << VAR17) - (1ULL << VAR10));
    if (VAR15->VAR8 & VAR18)
    {
        VAR7 = VAR8 ^ (VAR8 << 25) ^ (VAR16 >> VAR10);
    }
    else
    {
        VAR7 = VAR8 ^ (VAR16 >> VAR10);
    }
    VAR4->VAR30 = (VAR15->VAR8 & VAR31) | ((VAR16 >> 16) & ((1ULL << VAR17) - 0x80));
    FUN2("" VAR32 "", VAR4->VAR25, VAR4->VAR28, VAR8);
    VAR11 = -1;
    if (VAR6 != 2 || VAR4->VAR28 == 0)
    {
        FUN2("" VAR33 "" VAR33 "" VAR33 "", VAR2->VAR34, VAR2->VAR35, VAR7);
        VAR4->VAR7[0] = VAR7;
        VAR4->VAR7[1] = ~VAR7;
        VAR4->VAR36 = (VAR37)-1ULL;
        FUN2("" VAR33 "" VAR33 "" VAR32 "" VAR32 "" VAR33 "", VAR2->VAR34, VAR2->VAR35, VAR8, VAR4->VAR30, VAR4->VAR7[0]);
        VAR11 = FUN4(VAR2, VAR4, 0, VAR6, VAR10);
        if (VAR11 < 0)
        {
            FUN2("" VAR33 "" VAR33 "" VAR32 "" VAR32 "" VAR33 "", VAR2->VAR34, VAR2->VAR35, VAR8, VAR4->VAR30, VAR4->VAR7[1]);
            VAR12 = FUN4(VAR2, VAR4, 1, VAR6, VAR10);
            if (VAR12 != -1)
            {
                VAR11 = VAR12;
            }
        }
    }
    else
    {
        FUN2("");
        VAR11 = -3;
    }
    return VAR11;
}