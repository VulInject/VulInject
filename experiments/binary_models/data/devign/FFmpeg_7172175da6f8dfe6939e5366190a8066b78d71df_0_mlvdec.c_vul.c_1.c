static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR8->VAR11[VAR6];
    int VAR12;
    while (!FUN2(VAR11))
    {
        int VAR13;
        unsigned int VAR14;
        VAR13 = FUN3(VAR11);
        VAR14 = FUN3(VAR11);
        FUN4(VAR11, 8);
        if (VAR14 < 16)
            break;
        VAR14 -= 16;
        if (VAR4 && VAR13 == FUN5('', '', '', '') && VAR14 >= 164)
        {
            VAR4->VAR15->VAR16 = FUN6(VAR11);
            VAR4->VAR15->VAR17 = FUN6(VAR11);
            if (FUN3(VAR11) != 1)
                FUN7(VAR2, "");
            FUN4(VAR11, 20);
            VAR4->VAR15->VAR18 = FUN3(VAR11);
            FUN4(VAR11, 8 + 16 + 24);
            if (FUN3(VAR11) != 0x2010100)
                FUN7(VAR2, "");
            FUN4(VAR11, 80);
            VAR4->VAR15->VAR19 = VAR20;
            VAR4->VAR15->VAR21 = FUN5('', '', '', 16);
            VAR14 -= 164;
        }
        else if (VAR5 && VAR13 == FUN5('', '', '', '') && VAR14 >= 16)
        {
            VAR12 = FUN8(VAR2, VAR11, VAR5->VAR15, 16, 0);
            VAR14 -= 16;
        }
        else if (VAR13 == FUN5('', '', '', ''))
        {
            if (VAR14 > 0)
                FUN9(VAR2, VAR11, "", VAR14);
            continue;
        }
        else if (VAR13 == FUN5('', '', '', '') && VAR14 >= 36)
        {
            FUN9(VAR2, VAR11, "", 32);
            FUN10(VAR2, VAR11, "", "" VAR22);
            VAR14 -= 36;
            if (VAR14 >= 32)
            {
                FUN9(VAR2, VAR11, "", 32);
                VAR14 -= 32;
            }
            else if (VAR13 == FUN5('', '', '', '') && VAR14 >= 48)
            {
                FUN11(VAR2, VAR11, "", "");
                FUN11(VAR2, VAR11, "", "");
                FUN11(VAR2, VAR11, "", "");
                FUN12(VAR2, VAR11, "", "");
                FUN12(VAR2, VAR11, "", "");
                FUN10(VAR2, VAR11, "", "" VAR22);
                FUN10(VAR2, VAR11, "", "" VAR23);
                FUN9(VAR2, VAR11, "", 32);
                VAR14 -= 48;
                if (VAR14 >= 32)
                {
                    FUN9(VAR2, VAR11, "", 32);
                    VAR14 -= 32;
                }
                else if (VAR4 && VAR13 == FUN5('', '', '', '') && VAR14 >= 4)
                {
                    uint64_t VAR24 = FUN3(VAR11);
                    FUN13(&VAR4->VAR25, &VAR4->VAR26, &VAR4->VAR27, FUN14(VAR11) - 20, VAR24, VAR6, 0, VAR28);
                    VAR14 -= 4;
                }
                else if (VAR5 && VAR13 == FUN5('', '', '', '') && VAR14 >= 4)
                {
                    uint64_t VAR24 = FUN3(VAR11);
                    FUN13(&VAR5->VAR25, &VAR5->VAR26, &VAR5->VAR27, FUN14(VAR11) - 20, VAR24, VAR6, 0, VAR28);
                    VAR14 -= 4;
                }
                else if (VAR4 && VAR13 == FUN5('', '', '', '') && VAR14 >= 28)
                {
                    FUN10(VAR2, VAR11, "", "" VAR23);
                    FUN10(VAR2, VAR11, "", "" VAR23);
                    FUN10(VAR2, VAR11, "", "" VAR23);
                    FUN10(VAR2, VAR11, "", "" VAR23);
                    FUN10(VAR2, VAR11, "", "" VAR23);
                    FUN10(VAR2, VAR11, "", "" VAR23);
                    FUN10(VAR2, VAR11, "", "" VAR23);
                    VAR14 -= 28;
                }
                else if (VAR13 == FUN5('', '', '', '') && VAR14 >= 20)
                {
                    char VAR29[32];
                    struct tm VAR30 = {0};
                    VAR30.VAR31 = FUN6(VAR11);
                    VAR30.VAR32 = FUN6(VAR11);
                    VAR30.VAR33 = FUN6(VAR11);
                    VAR30.VAR34 = FUN6(VAR11);
                    VAR30.VAR35 = FUN6(VAR11);
                    VAR30.VAR36 = FUN6(VAR11);
                    VAR30.VAR37 = FUN6(VAR11);
                    VAR30.VAR38 = FUN6(VAR11);
                    VAR30.VAR39 = FUN6(VAR11);
                    FUN4(VAR11, 2);
                    if (FUN15(VAR29, sizeof(VAR29), "", &VAR30))
                        FUN16(&VAR2->VAR40, "", VAR29, 0);
                    VAR14 -= 20;
                }
                else if (VAR13 == FUN5('', '', '', '') && VAR14 >= 16)
                {
                    FUN16(&VAR2->VAR40, "", FUN3(VAR11) ? "" : "", 0);
                    FUN10(VAR2, VAR11, "", "" VAR23);
                    FUN10(VAR2, VAR11, "", "" VAR23);
                    FUN10(VAR2, VAR11, "", "" VAR23);
                    VAR14 -= 16;
                    if (VAR14 >= 8)
                    {
                        FUN17(VAR2, VAR11, "", "" VAR41);
                        VAR14 -= 8;
                    }
                    else if (VAR13 == FUN5('', '', '', '') && VAR14 >= 36)
                    {
                        FUN10(VAR2, VAR11, "", "" VAR23);
                        FUN10(VAR2, VAR11, "", "" VAR23);
                        FUN10(VAR2, VAR11, "", "" VAR23);
                        FUN10(VAR2, VAR11, "", "" VAR23);
                        FUN10(VAR2, VAR11, "", "" VAR23);
                        FUN9(VAR2, VAR11, "", 16);
                        VAR14 -= 36;
                    }
                    else if (VAR13 == FUN5('', '', '', ''))
                    {
                    }
                    else if (VAR13 == FUN5('', '', '', ''))
                    {
                    }
                    else if (VAR13 == FUN5('', '', '', ''))
                    {
                    }
                    else
                    {
                        FUN18(VAR2, VAR42, "", VAR13 & 0xFF, (VAR13 >> 8) & 0xFF, (VAR13 >> 16) & 0xFF, (VAR13 >> 24) & 0xFF, VAR14);
                        FUN4(VAR11, VAR14);
                        return 0;