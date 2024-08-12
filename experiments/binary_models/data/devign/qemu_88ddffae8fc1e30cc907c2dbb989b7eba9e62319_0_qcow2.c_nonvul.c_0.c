static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, void **VAR5, int VAR6, bool *VAR7, VAR8 **VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    QCowExtension VAR13;
    uint64_t VAR14;
    int VAR15;
    Qcow2BitmapHeaderExt VAR16;
    if (VAR7 != NULL)
    {
        *VAR7 = false;
    }
    FUN2("", VAR3, VAR4);
    VAR14 = VAR3;
    while (VAR14 < VAR4)
    {
        if (VAR14 > VAR11->VAR17)
            FUN2("", VAR14);
        FUN2("", VAR14);
        VAR15 = FUN3(VAR2->VAR18, VAR14, &VAR13, sizeof(VAR13));
        if (VAR15 < 0)
        {
            FUN4(VAR9, -VAR15, ""
                                         "" VAR19,
                             VAR14);
            return 1;
        }
        FUN5(&VAR13.VAR20);
        FUN5(&VAR13.VAR21);
        VAR14 += sizeof(VAR13);
        FUN2("", VAR13.VAR20);
        if (VAR14 > VAR4 || VAR13.VAR21 > VAR4 - VAR14)
        {
            FUN6(VAR9, "");
            return -VAR22;
        }
        switch (VAR13.VAR20)
        {
        case VAR23:
            return 0;
        case VAR24:
            if (VAR13.VAR21 >= sizeof(VAR2->VAR25))
            {
                FUN6(VAR9, "" VAR26 "", VAR13.VAR21, sizeof(VAR2->VAR25));
                return 2;
            }
            VAR15 = FUN3(VAR2->VAR18, VAR14, VAR2->VAR25, VAR13.VAR21);
            if (VAR15 < 0)
            {
                FUN4(VAR9, -VAR15, ""
                                             "");
                return 3;
            }
            VAR2->VAR25[VAR13.VAR21] = '';
            VAR11->VAR27 = FUN7(VAR2->VAR25);
            FUN2("", VAR2->VAR25);
            break;
        case VAR28:
            if (VAR5 != NULL)
            {
                void *VAR29 = FUN8(VAR13.VAR21 + 2 * sizeof(VAR30));
                VAR15 = FUN3(VAR2->VAR18, VAR14, VAR29, VAR13.VAR21);
                if (VAR15 < 0)
                {
                    FUN4(VAR9, -VAR15, ""
                                                 "");
                    return VAR15;
                }
                *VAR5 = VAR29;
            }
            break;
        case VAR31:
        {
            unsigned int VAR32 = 0;
            if (VAR11->VAR33 != VAR34)
            {
                FUN6(VAR9, ""
                                 "");
                return -VAR22;
            }
            if (VAR13.VAR21 != sizeof(VAR35))
            {
                FUN6(VAR9, ""
                                 "",
                           VAR13.VAR21, sizeof(VAR35));
                return -VAR22;
            }
            VAR15 = FUN3(VAR2->VAR18, VAR14, &VAR11->VAR36, VAR13.VAR21);
            if (VAR15 < 0)
            {
                FUN4(VAR9, -VAR15, "");
                return VAR15;
            }
            FUN9(&VAR11->VAR36.VAR14);
            FUN9(&VAR11->VAR36.VAR37);
            if ((VAR11->VAR36.VAR14 % VAR11->VAR17) != 0)
            {
                FUN6(VAR9, "" VAR19 ""
                                 "",
                           VAR11->VAR36.VAR14, VAR11->VAR17);
                return -VAR22;
            }
            if (VAR6 & VAR38)
            {
                VAR32 |= VAR39;
            }
            VAR11->VAR40 = FUN10(VAR11->VAR41, "", VAR42, VAR2, VAR32, VAR9);
            if (!VAR11->VAR40)
            {
                return -VAR22;
            }
        }
        break;
        case VAR43:
            if (VAR13.VAR21 != sizeof(VAR16))
            {
                FUN4(VAR9, -VAR15, ""
                                             "");
                return -VAR22;
            }
            if (!(VAR11->VAR44 & VAR45))
            {
                FUN11(""
                             ""
                             ""
                             ""
                             "");
                if (VAR7 != NULL)
                {
                    *VAR7 = true;
                }
                break;
            }
            VAR15 = FUN3(VAR2->VAR18, VAR14, &VAR16, VAR13.VAR21);
            if (VAR15 < 0)
            {
                FUN4(VAR9, -VAR15, ""
                                             "");
                return VAR15;
            }
            if (VAR16.VAR46 != 0)
            {
                FUN4(VAR9, -VAR15, ""
                                             "");
                return -VAR22;
            }
            FUN5(&VAR16.VAR47);
            FUN9(&VAR16.VAR48);
            FUN9(&VAR16.VAR49);
            if (VAR16.VAR47 > VAR50)
            {
                FUN6(VAR9, "" VAR26 ""
                                 "",
                           VAR16.VAR47, VAR50);
                return -VAR22;
            }
            if (VAR16.VAR47 == 0)
            {
                FUN6(VAR9, "");
                return -VAR22;
            }
            if (VAR16.VAR49 & (VAR11->VAR17 - 1))
            {
                FUN6(VAR9, ""
                                 "");
                return -VAR22;
            }
            if (VAR16.VAR48 > VAR51)
            {
                FUN6(VAR9, ""
                                 "" VAR19 ""
                                 "",
                           VAR16.VAR48, VAR51);
                return -VAR22;
            }
            VAR11->VAR47 = VAR16.VAR47;
            VAR11->VAR49 = VAR16.VAR49;
            VAR11->VAR48 = VAR16.VAR48;
            FUN2(""
                   "" VAR19 "" VAR26 "",
                   VAR11->VAR49, VAR11->VAR47);
            break;
        default:
        {
            VAR52 *VAR53;
            VAR53 = FUN8(sizeof(*VAR53) + VAR13.VAR21);
            VAR53->VAR20 = VAR13.VAR20;
            VAR53->VAR21 = VAR13.VAR21;
            FUN12(&VAR11->VAR54, VAR53, VAR55);
            VAR15 = FUN3(VAR2->VAR18, VAR14, VAR53->VAR56, VAR53->VAR21);
            if (VAR15 < 0)
            {
                FUN4(VAR9, -VAR15, ""
                                             "");
                return VAR15;
            }
        }
        break;
        }
        VAR14 += ((VAR13.VAR21 + 7) & ~7);
    }
    return 0;
}