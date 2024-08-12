static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, target_ulong VAR5, int VAR6)
{
    hwaddr VAR7;
    target_ulong VAR8;
    int VAR9, VAR10, VAR11;
    int VAR12, VAR13;
    target_ulong VAR14, VAR15;
    VAR10 = VAR16;
    VAR4->VAR5 = VAR5;
    VAR14 = VAR2->VAR14[VAR5 >> 28];
    VAR4->VAR17 = (((VAR14 & VAR18) && (VAR10 != 0)) || ((VAR14 & VAR19) && (VAR10 == 0))) ? 1 : 0;
    VAR9 = !!(VAR14 & VAR20);
    VAR4->VAR21 = !!(VAR14 & VAR22);
    VAR8 = VAR14 & VAR23;
    VAR11 = VAR24;
    FUN2("" VAR25 "" VAR25 "" VAR25 "" VAR25 "", VAR5, (int)(VAR5 >> 28), VAR14, VAR2->VAR26, VAR2->VAR27, (int)VAR28, (int)VAR29, VAR10 != 0 ? 1 : 0, VAR6);
    VAR15 = (VAR5 & ~VAR30) >> VAR11;
    VAR7 = VAR8 ^ VAR15;
    VAR4->VAR31 = (VAR8 << 7) | (VAR15 >> 10);
    FUN2("" VAR25 "", VAR4->VAR17, VAR9, VAR4->VAR21, VAR8);
    VAR12 = -1;
    if (!VAR9)
    {
        if (VAR6 != 2 || VAR4->VAR21 == 0)
        {
            FUN2("" VAR32 "" VAR32 "" VAR32 "", VAR2->VAR33, VAR2->VAR34, VAR7);
            VAR4->VAR7[0] = VAR7;
            VAR4->VAR7[1] = ~VAR7;
            VAR4->VAR35 = (VAR36)-1ULL;
            FUN2("" VAR32 "" VAR32 "" VAR25 "" VAR25 "" VAR32 "", VAR2->VAR33, VAR2->VAR34, VAR8, VAR4->VAR31, VAR4->VAR7[0]);
            VAR12 = FUN3(VAR2, VAR4, 0, VAR6, VAR11);
            if (VAR12 < 0)
            {
                FUN2("" VAR32 "" VAR32 "" VAR25 "" VAR25 "" VAR32 "", VAR2->VAR33, VAR2->VAR34, VAR8, VAR4->VAR31, VAR4->VAR7[1]);
                VAR13 = FUN3(VAR2, VAR4, 1, VAR6, VAR11);
                if (VAR13 != -1)
                {
                    VAR12 = VAR13;
                }
            }
            if (FUN4())
            {
                hwaddr VAR37;
                uint32_t VAR38, VAR39, VAR40, VAR41;
                FUN5("" VAR32 "" VAR32 "", VAR42, VAR43 + 0x80);
                for (VAR37 = VAR42; VAR37 < (VAR42 + VAR43 + 0x80); VAR37 += 16)
                {
                    VAR38 = FUN6(VAR37);
                    VAR39 = FUN6(VAR37 + 4);
                    VAR40 = FUN6(VAR37 + 8);
                    VAR41 = FUN6(VAR37 + 12);
                    if (VAR38 != 0 || VAR39 != 0 || VAR40 != 0 || VAR41 != 0)
                    {
                        FUN5(VAR32 "", VAR37, VAR38, VAR39, VAR40, VAR41);
                    }
                }
            }
        }
        else
        {
            FUN2("");
            VAR12 = -3;
        }
    }
    else
    {
        target_ulong VAR14;
        FUN2("");
        VAR14 = VAR2->VAR14[VAR5 >> 28];
        if ((VAR14 & 0x1FF00000) >> 20 == 0x07f)
        {
            VAR4->VAR35 = ((VAR14 & 0xF) << 28) | (VAR5 & 0x0FFFFFFF);
            VAR4->VAR44 = VAR45 | VAR46 | VAR47;
            return 0;
        }
        if (VAR6 == 2)
        {
            return -4;
        }
        switch (VAR2->VAR48)
        {
        case VAR49:
            break;
        case VAR50:
            return -4;
        case VAR51:
            return -4;
        case VAR52:
            VAR4->VAR35 = VAR5;
            return 0;
        case VAR53:
            return -4;
        default:
            FUN5(""
                     "");
            return -4;
        }
        if ((VAR6 == 1 || VAR4->VAR17 != 1) && (VAR6 == 0 || VAR4->VAR17 != 0))
        {
            VAR4->VAR35 = VAR5;
            VAR12 = 2;
        }
        else
        {
            VAR12 = -2;
        }
    }
    return VAR12;
}