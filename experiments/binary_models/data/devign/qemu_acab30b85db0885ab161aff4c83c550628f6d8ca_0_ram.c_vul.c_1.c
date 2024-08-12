static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    int VAR5 = 0, VAR6 = 0, VAR7 = 0;
    static uint64_t VAR8;
    int VAR9 = 0;
    bool VAR10 = FUN2() >= VAR11;
    bool VAR12 = FUN2() >= VAR13;
    VAR8++;
    if (VAR4 != 4)
    {
        VAR6 = -VAR14;
    }
    if (!FUN3())
    {
        VAR7 |= VAR15;
    }
    FUN4();
    if (VAR10)
    {
        VAR6 = FUN5(VAR2);
    }
    while (!VAR10 && !VAR6 && !(VAR5 & VAR16))
    {
        ram_addr_t VAR17, VAR18;
        void *VAR19 = NULL;
        uint8_t VAR20;
        VAR17 = FUN6(VAR2);
        VAR5 = VAR17 & ~VAR21;
        VAR17 &= VAR21;
        if (VAR5 & VAR7)
        {
            if (VAR5 & VAR7 & VAR15)
            {
                FUN7("");
            }
            VAR6 = -VAR14;
            break;
        }
        if (VAR5 & (VAR22 | VAR23 | VAR15 | VAR24))
        {
            VAR25 *VAR26 = FUN8(VAR2, VAR5);
            VAR19 = FUN9(VAR26, VAR17);
            if (!VAR19)
            {
                FUN7("" VAR27, VAR17);
                VAR6 = -VAR14;
                break;
            }
            FUN10(VAR26, VAR19);
            FUN11(VAR26->VAR28, (VAR29)VAR17, VAR5, VAR19);
        }
        switch (VAR5 & ~VAR30)
        {
        case VAR31:
            VAR18 = VAR17;
            while (!VAR6 && VAR18)
            {
                VAR25 *VAR26;
                char VAR32[256];
                ram_addr_t VAR33;
                VAR9 = FUN12(VAR2);
                FUN13(VAR2, (VAR34 *)VAR32, VAR9);
                VAR32[VAR9] = 0;
                VAR33 = FUN6(VAR2);
                VAR26 = FUN14(VAR32);
                if (VAR26)
                {
                    if (VAR33 != VAR26->VAR35)
                    {
                        VAR36 *VAR37 = NULL;
                        VAR6 = FUN15(VAR26, VAR33, &VAR37);
                        if (VAR37)
                        {
                            FUN16(VAR37);
                        }
                    }
                    if (VAR12 && VAR26->VAR38 != VAR39)
                    {
                        uint64_t VAR40 = FUN6(VAR2);
                        if (VAR40 != VAR26->VAR38)
                        {
                            FUN7(""
                                         "" VAR41,
                                         VAR32, VAR26->VAR38, VAR40);
                            VAR6 = -VAR14;
                        }
                    }
                    FUN17(VAR2, VAR42, VAR26->VAR28);
                }
                else
                {
                    FUN7(""%VAR43\""
                                 "",
                                 VAR32);
                    VAR6 = -VAR14;
                }
                VAR18 -= VAR33;
            }
            break;
        case VAR22:
            VAR20 = FUN12(VAR2);
            FUN18(VAR19, VAR20, VAR44);
            break;
        case VAR23:
            FUN13(VAR2, VAR19, VAR44);
            break;
        case VAR15:
            VAR9 = FUN19(VAR2);
            if (VAR9 < 0 || VAR9 > FUN20(VAR44))
            {
                FUN7("", VAR9);
                VAR6 = -VAR14;
                break;
            }
            FUN21(VAR2, VAR19, VAR9);
            break;
        case VAR24:
            if (FUN22(VAR2, VAR17, VAR19) < 0)
            {
                FUN7("" VAR27, VAR17);
                VAR6 = -VAR14;
                break;
            }
            break;
        case VAR16:
            break;
        default:
            if (VAR5 & VAR45)
            {
                FUN17(VAR2, VAR46, NULL);
            }
            else
            {
                FUN7("", VAR5);
                VAR6 = -VAR14;
            }
        }
        if (!VAR6)
        {
            VAR6 = FUN23(VAR2);
        }
    }
    FUN24();
    FUN25();
    FUN26(VAR6, VAR8);
    return VAR6;
}