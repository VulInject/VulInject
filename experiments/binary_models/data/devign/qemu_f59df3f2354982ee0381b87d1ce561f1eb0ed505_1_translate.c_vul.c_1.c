static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    const VAR15 *VAR16;
    VAR6 = (VAR5 >> 8) & 0xf;
    if (FUN2(VAR2, VAR17) && ((VAR2->VAR18.VAR19 ^ 0x3fff) & (1 << VAR6)))
        return 1;
    switch (VAR6)
    {
    case 0:
    case 1:
        if (FUN2(VAR2, VAR20))
        {
            return FUN3(VAR2, VAR4, VAR5);
        }
        else if (FUN2(VAR2, VAR17))
        {
            return FUN4(VAR2, VAR4, VAR5);
            return 1;
        default:
            break;
            VAR7 = (VAR5 & (1 << 25)) == 0;
            if (!VAR7 && ((VAR5 & (1 << 4)) == 0))
            {
                return 1;
                VAR9 = VAR5 & 0xf;
                if (VAR7)
                {
                    VAR8 = 0;
                    VAR10 = (VAR5 >> 4) & 0xf;
                    VAR11 = 0;
                    VAR14 = (VAR5 >> 16) & 0xf;
                }
                else
                {
                    VAR8 = (VAR5 >> 16) & 0xf;
                    VAR10 = (VAR5 >> 21) & 7;
                    VAR11 = (VAR5 >> 5) & 7;
                    VAR14 = 0;
                    VAR12 = (VAR5 >> 20) & 1;
                    VAR13 = (VAR5 >> 12) & 0xf;
                    VAR16 = FUN5(VAR4->VAR21, FUN6(VAR6, VAR7, VAR8, VAR9, VAR10, VAR11));
                    if (VAR16)
                    {
                        if (!FUN7(VAR4->VAR22, VAR16, VAR12))
                        {
                            return 1;
                            switch (VAR16->VAR23 & ~(VAR24 & ~VAR25))
                            {
                            case VAR26:
                                return 0;
                            case VAR27:
                                if (VAR12)
                                {
                                    return 1;
                                    VAR4->VAR28 = VAR29;
                                    return 0;
                                default:
                                    break;
                                    if (VAR30 && (VAR16->VAR23 & VAR31))
                                    {
                                        FUN8();
                                        if (VAR12)
                                        {
                                            if (VAR7)
                                            {
                                                TCGv_i64 VAR32;
                                                TCGv_i32 VAR33;
                                                if (VAR16->VAR23 & VAR34)
                                                {
                                                    VAR32 = FUN9(VAR16->VAR35);
                                                }
                                                else if (VAR16->VAR36)
                                                {
                                                    VAR32 = FUN10();
                                                    FUN11(VAR32, VAR37, VAR38);
                                                }
                                                else
                                                {
                                                    VAR32 = FUN10();
                                                    FUN12(VAR32, VAR37, VAR16->VAR39);
                                                    VAR33 = FUN13();
                                                    FUN14(VAR33, VAR32);
                                                    FUN15(VAR4, VAR13, VAR33);
                                                    FUN16(VAR32, VAR32, 32);
                                                    VAR33 = FUN13();
                                                    FUN14(VAR33, VAR32);
                                                    FUN17(VAR32);
                                                    FUN15(VAR4, VAR14, VAR33);
                                                }
                                                else
                                                {
                                                    TCGv_i32 VAR33;
                                                    if (VAR16->VAR23 & VAR34)
                                                    {
                                                        VAR33 = FUN18(VAR16->VAR35);
                                                    }
                                                    else if (VAR16->VAR36)
                                                    {
                                                        VAR33 = FUN13();
                                                        FUN19(VAR33, VAR37, VAR38);
                                                    }
                                                    else
                                                    {
                                                        VAR33 = FUN20(VAR16->VAR39);
                                                        if (VAR13 == 15)
                                                        {
                                                            if (VAR16->VAR23 & VAR34)
                                                            {
                                                                return 0;
                                                                if (VAR7)
                                                                {
                                                                    TCGv_i32 VAR40, VAR41;
                                                                    TCGv_i64 VAR32 = FUN10();
                                                                    VAR40 = FUN21(VAR4, VAR13);
                                                                    VAR41 = FUN21(VAR4, VAR14);
                                                                    FUN22(VAR32, VAR40, VAR41);
                                                                    FUN23(VAR40);
                                                                    FUN23(VAR41);
                                                                    if (VAR16->VAR42)
                                                                    {
                                                                        TCGv_ptr VAR38 = FUN24(VAR16);
                                                                        FUN25(VAR37, VAR38, VAR32);
                                                                    }
                                                                    else
                                                                    {
                                                                        FUN26(VAR32, VAR37, VAR16->VAR39);
                                                                        FUN17(VAR32);
                                                                    }
                                                                    else
                                                                    {
                                                                        if (VAR16->VAR42)
                                                                        {
                                                                            TCGv_i32 VAR33;
                                                                            VAR33 = FUN21(VAR4, VAR13);
                                                                            FUN27(VAR37, VAR38, VAR33);
                                                                            FUN23(VAR33);
                                                                        }
                                                                        else
                                                                        {
                                                                            TCGv_i32 VAR33 = FUN21(VAR4, VAR13);
                                                                            FUN28(VAR33, VAR16->VAR39);
                                                                            if (VAR30 && (VAR16->VAR23 & VAR31))
                                                                            {
                                                                                FUN29();
                                                                                FUN30(VAR4);
                                                                            }
                                                                            else if (!VAR12 && !(VAR16->VAR23 & VAR43))
                                                                            {