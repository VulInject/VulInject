static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10;
    int VAR11, VAR12, VAR13;
    VAR14 *VAR15 = VAR4->VAR16->VAR17;
    VAR14 *VAR18 = VAR6->VAR16->VAR17;
    int VAR19 = FUN2(VAR15->VAR20);
    int VAR21 = FUN2(VAR18->VAR20);
    VAR9 *VAR22 = VAR8->VAR23[0];
    int VAR24 = VAR8->VAR25 * VAR18->VAR26 * VAR21;
    if (FUN3(VAR18, VAR15, VAR8->VAR25) < 0)
    {
        FUN4(NULL, VAR27, "");
        FUN5(1);
    }
    if (VAR15->VAR26 != VAR18->VAR26 || VAR15->VAR28 != VAR18->VAR28)
        VAR4->VAR29 = 1;
    VAR13 = VAR4->VAR30 != VAR18->VAR20 || VAR4->VAR31 != VAR18->VAR26 || VAR4->VAR32 != VAR18->VAR28;
    if ((VAR4->VAR29 && !VAR4->VAR33) || VAR13)
    {
        if (VAR13)
        {
            FUN4(NULL, VAR34, "", VAR6->VAR35, VAR6->VAR16->VAR36, VAR4->VAR32, FUN6(VAR4->VAR30), VAR4->VAR31, VAR18->VAR28, FUN6(VAR18->VAR20), VAR18->VAR26);
            VAR4->VAR30 = VAR18->VAR20;
            VAR4->VAR31 = VAR18->VAR26;
            VAR4->VAR32 = VAR18->VAR28;
            if (VAR4->VAR33)
                FUN7(VAR4->VAR33);
        }
        if (VAR37 <= 1 && VAR4->VAR30 == VAR15->VAR20 && VAR4->VAR31 == VAR15->VAR26 && VAR4->VAR32 == VAR15->VAR28)
        {
            VAR4->VAR33 = NULL;
            VAR4->VAR29 = 0;
        }
        else if (VAR4->VAR29)
        {
            if (VAR18->VAR20 != VAR38)
                FUN4(NULL, VAR39, "");
            VAR4->VAR33 = FUN8(VAR15->VAR26, VAR18->VAR26, VAR15->VAR28, VAR18->VAR28, VAR15->VAR20, VAR18->VAR20, 16, 10, 0, 0.8);
            if (!VAR4->VAR33)
            {
                FUN4(NULL, VAR27, "", VAR18->VAR26, VAR18->VAR28, VAR15->VAR26, VAR15->VAR28);
                FUN5(1);
            }
        }
    }
    if (!VAR4->VAR29 && VAR18->VAR20 != VAR15->VAR20 && FUN9(VAR15->VAR20, VAR18->VAR20) != VAR4->VAR40)
    {
        if (VAR4->VAR41)
            FUN10(VAR4->VAR41);
        VAR4->VAR41 = FUN11(VAR15->VAR20, 1, VAR18->VAR20, 1, NULL, 0);
        if (!VAR4->VAR41)
        {
            FUN4(NULL, VAR27, "", FUN6(VAR18->VAR20), FUN6(VAR15->VAR20));
            FUN5(1);
        }
        VAR4->VAR40 = FUN9(VAR15->VAR20, VAR18->VAR20);
    }
    if (VAR37 > 0)
    {
        double VAR42 = FUN12(VAR4, VAR6->VAR43) * VAR15->VAR28 - VAR4->VAR44 - FUN13(VAR4->VAR45) / (VAR15->VAR26 * VAR19);
        int VAR46 = VAR42 * VAR18->VAR28 / VAR15->VAR28;
        int VAR47 = VAR46 * VAR21 * VAR18->VAR26;
        if (FUN14(VAR42) > 50)
        {
            if (VAR6->VAR48 || FUN14(VAR42) > VAR49 * VAR15->VAR28)
            {
                if (VAR47 < 0)
                {
                    VAR47 = FUN15(VAR47, -VAR24);
                    VAR24 += VAR47;
                    VAR22 -= VAR47;
                    FUN4(NULL, VAR50, "", -VAR47 / (VAR21 * VAR18->VAR26));
                    if (!VAR24)
                        return;
                    VAR6->VAR48 = 0;
                }
                else
                {
                    FUN16(&VAR51, &VAR52, VAR47 + VAR24);
                    if (!VAR51)
                    {
                        FUN4(NULL, VAR27, "");
                        FUN5(1);
                    }
                    if (FUN3(VAR18, VAR15, VAR8->VAR25 + VAR46) < 0)
                    {
                        FUN4(NULL, VAR27, "");
                        FUN5(1);
                    }
                    VAR6->VAR48 = 0;
                    FUN17(VAR51, VAR18->VAR20, VAR47);
                    memcpy(VAR51 + VAR47, VAR22, VAR24);
                    VAR22 = VAR51;
                    VAR24 += VAR47;
                    FUN4(NULL, VAR50, "", VAR46);
                }
            }
            else if (VAR37 > 1)
            {
                int VAR53 = FUN18(VAR42, -VAR37, VAR37);
                FUN19(VAR4->VAR29);
                FUN4(NULL, VAR50, "", VAR42, VAR53, VAR15->VAR28);
                FUN20(*(struct VAR54 **)VAR4->VAR33, VAR53, VAR15->VAR28);
            }
        }
    }
    else if (VAR37 == 0)
        VAR4->VAR44 = FUN21(FUN12(VAR4, VAR6->VAR43) * VAR15->VAR28) - FUN13(VAR4->VAR45) / (VAR15->VAR26 * VAR19);
    if (VAR4->VAR29)
    {
        VAR10 = VAR55;
        VAR11 = FUN22(VAR4->VAR33, (short *)VAR10, (short *)VAR22, VAR24 / (VAR18->VAR26 * VAR21));
        VAR11 = VAR11 * VAR15->VAR26 * VAR19;
    }
    else
    {
        VAR10 = VAR22;
        VAR11 = VAR24;
    }
    if (!VAR4->VAR29 && VAR18->VAR20 != VAR15->VAR20)
    {
        const void *VAR56[6] = {VAR10};
        void *VAR57[6] = {VAR55};
        int VAR58[6] = {VAR21};
        int VAR59[6] = {VAR19};
        int VAR60 = VAR11 / VAR58[0];
        if (FUN23(VAR4->VAR41, VAR57, VAR59, VAR56, VAR58, VAR60) < 0)
        {
            FUN24("");
            if (VAR61)
                FUN5(1);
            return;
        }
        VAR10 = VAR55;
        VAR11 = VAR60 * VAR19;
    }
    if (!(VAR15->VAR17->VAR62 & VAR63))
    {
        if (FUN25(VAR4->VAR45, FUN13(VAR4->VAR45) + VAR11) < 0)
        {
            FUN4(NULL, VAR27, "");
            FUN5(1);
        }
        FUN26(VAR4->VAR45, VAR10, VAR11, NULL);
        VAR12 = VAR15->VAR64 * VAR19 * VAR15->VAR26;
        while (FUN13(VAR4->VAR45) >= VAR12)
        {
            FUN27(VAR4->VAR45, VAR55, VAR12, NULL);
            FUN28(VAR2, VAR4, VAR55, VAR12);
        }
    }
    else
    {
        FUN28(VAR2, VAR4, VAR10, VAR11);
    }
}