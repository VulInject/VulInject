static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    VAR15 *VAR16 = VAR4->VAR17->VAR18;
    VAR15 *VAR19 = VAR6->VAR17->VAR18;
    int VAR20 = FUN2(VAR16->VAR21);
    int VAR22 = FUN2(VAR19->VAR21);
    VAR9 *VAR23 = VAR8->VAR24[0];
    int VAR25 = VAR8->VAR26 * VAR19->VAR27 * VAR22;
    int VAR28 = 0;
    int VAR29 = VAR8->VAR30[0];
    FUN3(VAR4, VAR6);
    if (FUN4(VAR19, VAR16, VAR8->VAR26, &VAR28) < 0)
    {
        FUN5(NULL, VAR31, "");
        FUN6(1);
    }
    if (VAR32 > 1 || VAR16->VAR27 != VAR19->VAR27 || VAR16->VAR33 != VAR19->VAR33 || VAR16->VAR34 != VAR19->VAR34 || VAR19->VAR21 != VAR16->VAR21)
        VAR4->VAR35 = 1;
    VAR13 = VAR4->VAR36 != VAR19->VAR21 || VAR4->VAR37 != VAR19->VAR27 || VAR4->VAR38 != VAR19->VAR33 || VAR4->VAR39 != VAR19->VAR34;
    if ((VAR4->VAR35 && !VAR4->VAR40) || VAR13)
    {
        if (VAR13)
        {
            FUN5(NULL, VAR41, "" VAR42 "" VAR42 "", VAR6->VAR43, VAR6->VAR17->VAR44, VAR4->VAR39, FUN7(VAR4->VAR36), VAR4->VAR37, VAR4->VAR38, VAR19->VAR34, FUN7(VAR19->VAR21), VAR19->VAR27, VAR19->VAR33);
            VAR4->VAR36 = VAR19->VAR21;
            VAR4->VAR37 = VAR19->VAR27;
            VAR4->VAR38 = VAR19->VAR33;
            VAR4->VAR39 = VAR19->VAR34;
            if (VAR4->VAR40)
                FUN8(VAR4->VAR40);
        }
        if (VAR32 <= 1 && VAR4->VAR36 == VAR16->VAR21 && VAR4->VAR37 == VAR16->VAR27 && VAR4->VAR38 == VAR16->VAR33 && VAR4->VAR39 == VAR16->VAR34)
        {
            VAR4->VAR35 = 0;
        }
        else if (VAR4->VAR35)
        {
            if (!VAR4->VAR40)
            {
                VAR4->VAR40 = FUN9();
                if (!VAR4->VAR40)
                {
                    FUN5(NULL, VAR31, "");
                    FUN6(1);
                }
            }
            FUN10(VAR4->VAR40, "", VAR19->VAR33, 0);
            FUN10(VAR4->VAR40, "", VAR19->VAR21, 0);
            FUN10(VAR4->VAR40, "", VAR19->VAR34, 0);
            FUN10(VAR4->VAR40, "", VAR16->VAR33, 0);
            FUN10(VAR4->VAR40, "", VAR16->VAR21, 0);
            FUN10(VAR4->VAR40, "", VAR16->VAR34, 0);
            if (VAR32 > 1)
                FUN10(VAR4->VAR40, "", 1, 0);
            if (FUN2(VAR19->VAR21) <= 2 && FUN2(VAR16->VAR21) <= 2)
            {
                FUN10(VAR4->VAR40, "", VAR45, 0);
            }
            VAR14 = FUN11(VAR4->VAR40);
            if (VAR14 < 0)
            {
                FUN5(NULL, VAR31, "");
                FUN6(1);
            }
        }
    }
    if (VAR32 > 0)
    {
        double VAR46 = FUN12(VAR4, VAR6->VAR47) * VAR16->VAR34 - VAR4->VAR48 - FUN13(VAR4->VAR49) / (VAR16->VAR27 * VAR20);
        int VAR50 = VAR46 * VAR19->VAR34 / VAR16->VAR34;
        int VAR51 = VAR50 * VAR22 * VAR19->VAR27;
        if (FUN14(VAR46) > 50)
        {
            if (VAR6->VAR52 || FUN14(VAR46) > VAR53 * VAR16->VAR34)
            {
                if (VAR51 < 0)
                {
                    VAR51 = FUN15(VAR51, -VAR25);
                    VAR25 += VAR51;
                    VAR23 -= VAR51;
                    FUN5(NULL, VAR54, "", -VAR51 / (VAR22 * VAR19->VAR27));
                    if (!VAR25)
                        return;
                    VAR6->VAR52 = 0;
                }
                else
                {
                    FUN16(&VAR55, &VAR56, VAR51 + VAR25);
                    if (!VAR55)
                    {
                        FUN5(NULL, VAR31, "");
                        FUN6(1);
                    }
                    if (FUN4(VAR19, VAR16, VAR8->VAR26 + VAR50, &VAR28) < 0)
                    {
                        FUN5(NULL, VAR31, "");
                        FUN6(1);
                    }
                    VAR6->VAR52 = 0;
                    FUN17(VAR55, VAR19->VAR21, VAR51);
                    memcpy(VAR55 + VAR51, VAR23, VAR25);
                    VAR23 = VAR55;
                    VAR25 += VAR51;
                    VAR29 = VAR56;
                    FUN5(NULL, VAR54, "", VAR50);
                }
            }
            else if (VAR32 > 1)
            {
                int VAR57 = FUN18(VAR46, -VAR32, VAR32);
                FUN5(NULL, VAR54, "", VAR46, VAR57, VAR16->VAR34);
                FUN19(VAR4->VAR40, VAR57, VAR16->VAR34);
            }
        }
    }
    else if (VAR32 == 0)
        VAR4->VAR48 = FUN20(FUN12(VAR4, VAR6->VAR47) * VAR16->VAR34) - FUN13(VAR4->VAR49) / (VAR16->VAR27 * VAR20);
    if (VAR4->VAR35)
    {
        VAR10 = VAR58;
        VAR11 = FUN21(VAR4->VAR40, (void **)&VAR10, VAR59, VAR28, (void **)&VAR23, VAR29, VAR25 / (VAR19->VAR27 * VAR22));
        VAR11 = VAR11 * VAR16->VAR27 * VAR20;
    }
    else
    {
        VAR10 = VAR23;
        VAR11 = VAR25;
    }
    if (!(VAR16->VAR18->VAR60 & VAR61))
    {
        if (FUN22(VAR4->VAR49, FUN13(VAR4->VAR49) + VAR11) < 0)
        {
            FUN5(NULL, VAR31, "");
            FUN6(1);
        }
        FUN23(VAR4->VAR49, VAR10, VAR11, NULL);
        VAR12 = VAR16->VAR62 * VAR20 * VAR16->VAR27;
        while (FUN13(VAR4->VAR49) >= VAR12)
        {
            FUN24(VAR4->VAR49, VAR58, VAR12, NULL);
            FUN25(VAR2, VAR4, VAR58, VAR12);
        }
    }
    else
    {
        FUN25(VAR2, VAR4, VAR10, VAR11);
    }
}