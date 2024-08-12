static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    KLVPacket VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    while ((VAR9 = FUN2(&VAR5, VAR2->VAR10)) == 0)
    {
        FUN3(VAR2, "", VAR5.VAR11);
        FUN4(VAR2, VAR12, "" VAR13 "" VAR14 "", VAR5.VAR15, VAR5.VAR16);
        if (FUN5(VAR5.VAR11, VAR17))
        {
            VAR9 = FUN6(VAR2, VAR4, &VAR5);
            if (VAR9 < 0)
            {
                FUN4(VAR2, VAR18, "");
                return VAR9;
            }
            return 0;
        }
        if (FUN5(VAR5.VAR11, VAR19) || FUN5(VAR5.VAR11, VAR20) || FUN5(VAR5.VAR11, VAR21))
        {
            int VAR22 = FUN7(VAR2, &VAR5);
            int64_t VAR23, VAR24;
            VAR25 *VAR26;
            VAR27 *VAR28;
            VAR29 *VAR30;
            if (VAR22 < 0)
            {
                FUN4(VAR2, VAR18, "" VAR31 "", FUN8(VAR5.VAR11 + 12));
                goto VAR32;
            }
            VAR26 = VAR2->VAR33[VAR22];
            VAR28 = VAR26->VAR8;
            if (VAR2->VAR33[VAR22]->VAR34 == VAR35)
                goto VAR32;
            VAR24 = FUN9(VAR2->VAR10) + VAR5.VAR15;
            VAR23 = FUN10(VAR7, VAR5.VAR16);
            if (VAR23 >= 0 && VAR24 > VAR23)
            {
                FUN11(VAR2, ""
                                         ""
                                         "",
                                      VAR7->VAR36);
                VAR5.VAR15 = VAR23 - FUN9(VAR2->VAR10);
            }
            if (VAR5.VAR11[12] == 0x06 && VAR5.VAR11[13] == 0x01 && VAR5.VAR11[14] == 0x10)
            {
                VAR9 = FUN12(VAR2->VAR10, VAR2->VAR33[VAR22], VAR4, VAR5.VAR15);
                if (VAR9 < 0)
                {
                    FUN4(VAR2, VAR18, "");
                    return VAR9;
                }
            }
            else
            {
                VAR9 = FUN13(VAR2->VAR10, VAR4, VAR5.VAR15);
                if (VAR9 < 0)
                    return VAR9;
            }
            VAR4->VAR37 = VAR22;
            VAR4->VAR38 = VAR5.VAR16;
            VAR30 = VAR26->VAR39;
            if (VAR30->VAR40 == VAR41 && VAR23 >= 0)
            {
                VAR42 *VAR43 = &VAR7->VAR44[0];
                if (VAR7->VAR45 >= 1 && VAR7->VAR36 < VAR43->VAR46)
                {
                    VAR4->VAR47 = VAR7->VAR36 + VAR43->VAR48;
                    VAR4->VAR49 = VAR43->VAR50[VAR7->VAR36];
                }
                else if (VAR28->VAR51)
                {
                    VAR4->VAR49 = VAR7->VAR36;
                }
            }
            else if (VAR30->VAR40 == VAR52)
            {
                VAR9 = FUN14(VAR7, VAR30, VAR4);
                if (VAR9 < 0)
                    return VAR9;
            }
            FUN15(VAR2->VAR10, VAR24, VAR53);
            return 0;
        }
        else
        VAR32:
            FUN16(VAR2->VAR10, VAR5.VAR15);
    }
    return FUN17(VAR2->VAR10) ? VAR54 : VAR9;
}