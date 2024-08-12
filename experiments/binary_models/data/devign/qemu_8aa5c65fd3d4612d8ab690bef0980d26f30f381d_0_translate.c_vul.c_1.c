void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    DisasContext VAR9, *VAR10 = &VAR9;
    target_ulong VAR11;
    target_ulong VAR12;
    uint32_t VAR13;
    ExitStatus VAR14;
    int VAR15;
    int VAR16;
    VAR11 = VAR4->VAR17;
    VAR9.VAR4 = VAR4;
    VAR9.VAR17 = VAR11;
    VAR9.VAR18 = VAR4->VAR19;
    VAR9.VAR20 = FUN4(VAR2, false);
    VAR9.VAR21 = VAR2->VAR21;
    VAR9.VAR22 = VAR2->VAR22;
    VAR9.VAR23 = VAR8->VAR23;
    VAR9.VAR24 = VAR25;
    VAR9.VAR26 = VAR2->VAR26;
    VAR9.VAR24 = (VAR9.VAR18 & VAR27 ? VAR28 : VAR25);
    VAR9.VAR29 = -1;
    VAR9.VAR30 = -1;
    FUN5(VAR9.VAR31);
    FUN5(VAR9.VAR32);
    FUN5(VAR9.VAR33);
    VAR15 = 0;
    VAR16 = VAR4->VAR34 & VAR35;
    if (VAR16 == 0)
    {
        VAR16 = VAR35;
        if (VAR16 > VAR36)
        {
            VAR16 = VAR36;
            if (FUN6(&VAR9, VAR11))
            {
                VAR12 = (1ULL << 41) - 1;
            }
            else
            {
                VAR12 = ~VAR37;
                FUN7(VAR4);
                FUN8();
                do
                {
                    FUN9(VAR9.VAR17);
                    VAR15++;
                    if (FUN10(FUN11(VAR8, VAR9.VAR17, VAR38)))
                    {
                        VAR14 = FUN12(&VAR9, VAR39, 0);
                        VAR9.VAR17 += 4;
                        break;
                        if (VAR15 == VAR16 && (VAR4->VAR34 & VAR40))
                        {
                            FUN13();
                            VAR13 = FUN14(VAR2, VAR9.VAR17);
                            VAR9.VAR17 += 4;
                            VAR14 = FUN15(VAR10, VAR13);
                            FUN16(VAR10);
                            if (VAR14 == VAR41 && ((VAR9.VAR17 & VAR12) == 0 || FUN17() || VAR15 >= VAR16 || VAR42 || VAR9.VAR23))
                            {
                                VAR14 = VAR43;
                            }
                            while (VAR14 == VAR41)
                                ;
                            if (VAR4->VAR34 & VAR40)
                            {
                                FUN18();
                                switch (VAR14)
                                {
                                case VAR44:
                                case VAR45:
                                    break;
                                case VAR43:
                                    if (FUN19(&VAR9, VAR9.VAR17))
                                    {
                                        FUN20(0);
                                        FUN21(VAR46, VAR9.VAR17);
                                        FUN22((VAR47)VAR9.VAR4);
                                    case VAR48:
                                        FUN21(VAR46, VAR9.VAR17);
                                    case VAR49:
                                        if (!FUN23(&VAR9))
                                        {
                                            FUN24(VAR46);
                                            break;
                                        case VAR50:
                                            if (VAR9.VAR23)
                                            {
                                                FUN25(VAR39, 0);
                                            }
                                            else
                                            {
                                                FUN22(0);
                                                break;
                                            default:
                                                FUN26();
                                                FUN27(VAR4, VAR15);
                                                VAR4->VAR51 = VAR9.VAR17 - VAR11;
                                                VAR4->VAR52 = VAR15;
                                                if (FUN28(VAR53) && FUN29(VAR11))
                                                {
                                                    FUN30();
                                                    FUN31("", FUN32(VAR11));
                                                    FUN33(VAR8, VAR11, VAR9.VAR17 - VAR11, 1);
                                                    FUN31("");
                                                    FUN34();