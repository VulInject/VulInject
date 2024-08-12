void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = &VAR2->VAR8;
    DisasContext VAR9, *VAR10 = &VAR9;
    target_ulong VAR11;
    target_ulong VAR12;
    int VAR13;
    int VAR14;
    VAR11 = VAR4->VAR15;
    VAR10->VAR4 = VAR4;
    VAR10->VAR16 = VAR17;
    VAR10->VAR15 = VAR11;
    VAR10->VAR18 = VAR6->VAR18;
    VAR10->VAR19 = 0;
    VAR10->VAR20 = 1;
    VAR10->VAR21 = FUN3(VAR8, VAR22) && !FUN4(VAR8, 3);
    VAR10->VAR23 = 0;
    VAR10->VAR24 = 0;
    VAR10->VAR25 = 0;
    VAR10->VAR26 = 0;
    VAR10->VAR27 = FUN5(VAR4->VAR28);
    VAR10->VAR29 = FUN6(VAR10->VAR27);
    VAR10->VAR30 = (VAR10->VAR29 == 0);
    VAR10->VAR31 = FUN7(VAR4->VAR28);
    VAR10->VAR32 = 0;
    VAR10->VAR33 = 0;
    VAR10->VAR34 = VAR2->VAR34;
    VAR10->VAR35 = VAR8->VAR35;
    VAR10->VAR36 = FUN8(VAR4->VAR28);
    VAR10->VAR37 = FUN9(VAR4->VAR28);
    VAR10->VAR38 = false;
    VAR10->VAR39 = (FUN10(VAR8) == VAR10->VAR29);
    FUN11(VAR10);
    VAR12 = (VAR11 & VAR40) + VAR41;
    VAR13 = 0;
    VAR14 = VAR4->VAR42 & VAR43;
    if (VAR14 == 0)
    {
        VAR14 = VAR43;
    }
    if (VAR14 > VAR44)
    {
        VAR14 = VAR44;
    }
    FUN12(VAR4);
    FUN13();
    do
    {
        FUN14(VAR10->VAR15, 0);
        VAR13++;
        if (FUN15(!FUN16(&VAR6->VAR45)))
        {
            VAR46 *VAR47;
            FUN17(VAR47, &VAR6->VAR45, VAR48)
            {
                if (VAR47->VAR15 == VAR10->VAR15)
                {
                    if (VAR47->VAR28 & VAR49)
                    {
                        FUN18(VAR50);
                        VAR10->VAR16 = VAR51;
                    }
                    else
                    {
                        FUN19(VAR10, 0, VAR52);
                        VAR10->VAR15 += 4;
                        goto VAR53;
                    }
                    break;
                }
            }
        }
        if (VAR13 == VAR14 && (VAR4->VAR42 & VAR54))
        {
            FUN20();
        }
        if (VAR10->VAR36 && !VAR10->VAR37)
        {
            assert(VAR13 == 1);
            FUN21(VAR55, FUN22(VAR10->VAR39, 0, 0), FUN23(VAR10));
            VAR10->VAR16 = VAR56;
            break;
        }
        FUN24(VAR8, VAR10);
        if (FUN25())
        {
            fprintf(VAR57, "" VAR58 "", VAR10->VAR15);
        }
    } while (!VAR10->VAR16 && !FUN26() && !VAR6->VAR18 && !VAR59 && !VAR10->VAR36 && VAR10->VAR15 < VAR12 && VAR13 < VAR14);
    if (VAR4->VAR42 & VAR54)
    {
        FUN27();
    }
    if (FUN15(VAR6->VAR18 || VAR10->VAR36) && VAR10->VAR16 != VAR56)
    {
        assert(VAR10->VAR16 != VAR60);
        if (VAR10->VAR16 != VAR61)
        {
            FUN28(VAR10->VAR15);
        }
        if (VAR6->VAR18)
        {
            FUN29(VAR52);
        }
        else
        {
            FUN30(VAR10);
        }
    }
    else
    {
        switch (VAR10->VAR16)
        {
        case VAR17:
            FUN31(VAR10, 1, VAR10->VAR15);
            break;
        default:
        case VAR51:
            FUN28(VAR10->VAR15);
        case VAR61:
            FUN32(0);
            break;
        case VAR60:
        case VAR56:
        case VAR62:
            break;
        case VAR63:
            FUN28(VAR10->VAR15);
            FUN33(VAR50);
            break;
        case VAR64:
            FUN28(VAR10->VAR15);
            FUN34(VAR50);
            break;
        case VAR65:
            FUN28(VAR10->VAR15);
            FUN35(VAR50);
            FUN32(0);
            break;
        }
    }
VAR53:
    FUN36(VAR4, VAR13);
    if (FUN37(VAR66))
    {
        FUN38("");
        FUN38("", FUN39(VAR11));
        FUN40(VAR6, VAR11, VAR10->VAR15 - VAR11, 4 | (VAR10->VAR24 << 1));
        FUN38("");
    }
    VAR4->VAR67 = VAR10->VAR15 - VAR11;
    VAR4->VAR68 = VAR13;
}