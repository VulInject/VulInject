static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    int64_t VAR5;
    int VAR6 = 0;
    av_unused double VAR7;
    int VAR8;
    AVRational VAR9;
    int VAR10;
    int VAR11;
    if (!VAR2->VAR12)
        if (!(VAR2->VAR12 = FUN2()))
            return FUN3(VAR13);
    for (;;)
    {
        if (VAR2->VAR14.VAR15 != VAR2->VAR16.VAR17)
            VAR2->VAR18 = VAR6 = 0;
        if (!VAR6)
            FUN4(VAR2->VAR12);
        if (VAR2->VAR19)
            return -1;
        while (VAR2->VAR18 || VAR6)
        {
            if (!VAR2->VAR18)
            {
                VAR6 = 0;
                VAR9 = (VAR20){1, VAR2->VAR12->VAR21};
                VAR5 = FUN5(VAR2->VAR12->VAR22, FUN6(VAR2->VAR12));
                VAR11 = FUN7(VAR2->VAR23.VAR24, VAR2->VAR23.VAR25, VAR2->VAR12->VAR26, FUN6(VAR2->VAR12)) || VAR2->VAR23.VAR22 != VAR5 || VAR2->VAR23.VAR27 != VAR2->VAR12->VAR21 || VAR2->VAR16.VAR17 != VAR2->VAR28;
                if (VAR11)
                {
                    char VAR29[1024], VAR30[1024];
                    FUN8(VAR29, sizeof(VAR29), -1, VAR2->VAR23.VAR22);
                    FUN8(VAR30, sizeof(VAR30), -1, VAR5);
                    FUN9(NULL, VAR31, "", VAR2->VAR23.VAR27, VAR2->VAR23.VAR25, FUN10(VAR2->VAR23.VAR24), VAR29, VAR2->VAR28, VAR2->VAR12->VAR21, FUN6(VAR2->VAR12), FUN10(VAR2->VAR12->VAR26), VAR30, VAR2->VAR16.VAR17);
                    VAR2->VAR23.VAR24 = VAR2->VAR12->VAR26;
                    VAR2->VAR23.VAR25 = FUN6(VAR2->VAR12);
                    VAR2->VAR23.VAR22 = VAR5;
                    VAR2->VAR23.VAR27 = VAR2->VAR12->VAR21;
                    VAR2->VAR28 = VAR2->VAR16.VAR17;
                    if ((VAR10 = FUN11(VAR2, VAR32, 1)) < 0)
                        return VAR10;
                }
                if ((VAR10 = FUN12(VAR2->VAR33, VAR2->VAR12)) < 0)
                    return VAR10;
            }
            if ((VAR10 = FUN13(VAR2->VAR34, VAR2->VAR12, 0)) < 0)
            {
                if (VAR10 == FUN3(VAR35))
                {
                    VAR2->VAR18 = 0;
                    continue;
                }
                if (VAR10 == VAR36)
                    VAR2->VAR16.VAR37 = VAR2->VAR16.VAR17;
                return VAR10;
            }
            VAR2->VAR18 = 1;
            VAR9 = VAR2->VAR34->VAR38[0]->VAR39;
            VAR3 = FUN14(NULL, FUN6(VAR2->VAR12), VAR2->VAR12->VAR40, VAR2->VAR12->VAR26, 1);
            VAR5 = (VAR2->VAR12->VAR22 && FUN6(VAR2->VAR12) == FUN15(VAR2->VAR12->VAR22)) ? VAR2->VAR12->VAR22 : FUN16(FUN6(VAR2->VAR12));
            VAR8 = FUN17(VAR2, VAR2->VAR12->VAR40);
            if (VAR2->VAR12->VAR26 != VAR2->VAR41.VAR24 || VAR5 != VAR2->VAR41.VAR22 || VAR2->VAR12->VAR21 != VAR2->VAR41.VAR27 || (VAR8 != VAR2->VAR12->VAR40 && !VAR2->VAR42))
            {
                FUN18(&VAR2->VAR42);
                VAR2->VAR42 = FUN19(NULL, VAR2->VAR43.VAR22, VAR2->VAR43.VAR24, VAR2->VAR43.VAR27, VAR5, VAR2->VAR12->VAR26, VAR2->VAR12->VAR21, 0, NULL);
                if (!VAR2->VAR42 || FUN20(VAR2->VAR42) < 0)
                {
                    FUN9(NULL, VAR44, "", VAR2->VAR12->VAR21, FUN10(VAR2->VAR12->VAR26), FUN6(VAR2->VAR12), VAR2->VAR43.VAR27, FUN10(VAR2->VAR43.VAR24), VAR2->VAR43.VAR25);
                    break;
                }
                VAR2->VAR41.VAR22 = VAR5;
                VAR2->VAR41.VAR25 = FUN6(VAR2->VAR12);
                VAR2->VAR41.VAR27 = VAR2->VAR12->VAR21;
                VAR2->VAR41.VAR24 = VAR2->VAR12->VAR26;
            }
            if (VAR2->VAR42)
            {
                const VAR45 **VAR46 = (const VAR45 **)VAR2->VAR12->VAR47;
                VAR45 **VAR48 = &VAR2->VAR49;
                int VAR50 = (VAR51)VAR8 * VAR2->VAR43.VAR27 / VAR2->VAR12->VAR21 + 256;
                int VAR52 = FUN14(NULL, VAR2->VAR43.VAR25, VAR50, VAR2->VAR43.VAR24, 0);
                int VAR53;
                if (VAR52 < 0)
                {
                    FUN9(NULL, VAR44, "");
                    break;
                }
                if (VAR8 != VAR2->VAR12->VAR40)
                {
                    if (FUN21(VAR2->VAR42, (VAR8 - VAR2->VAR12->VAR40) * VAR2->VAR43.VAR27 / VAR2->VAR12->VAR21, VAR8 * VAR2->VAR43.VAR27 / VAR2->VAR12->VAR21) < 0)
                    {
                        FUN9(NULL, VAR44, "");
                        break;
                    }
                }
                FUN22(&VAR2->VAR49, &VAR2->VAR54, VAR52);
                if (!VAR2->VAR49)
                    return FUN3(VAR13);
                VAR53 = FUN23(VAR2->VAR42, VAR48, VAR50, VAR46, VAR2->VAR12->VAR40);
                if (VAR53 < 0)
                {
                    FUN9(NULL, VAR44, "");
                    break;
                }
                if (VAR53 == VAR50)
                {
                    FUN9(NULL, VAR55, "");
                    FUN20(VAR2->VAR42);
                }
                VAR2->VAR56 = VAR2->VAR49;
                VAR4 = VAR53 * VAR2->VAR43.VAR25 * FUN24(VAR2->VAR43.VAR24);
            }
            else
            {
                VAR2->VAR56 = VAR2->VAR12->VAR57[0];
                VAR4 = VAR3;
            }
            VAR7 = VAR2->VAR58;
            if (VAR2->VAR12->VAR59 != VAR60)
                VAR2->VAR58 = VAR2->VAR12->VAR59 * FUN25(VAR9) + (double)VAR2->VAR12->VAR40 / VAR2->VAR12->VAR21;
            else
                VAR2->VAR58 = VAR61;
            VAR2->VAR62 = VAR2->VAR16.VAR17;
            {
                static double VAR63;
                FUN26("", VAR2->VAR58 - VAR63, VAR2->VAR58, VAR7);
                VAR63 = VAR2->VAR58;
            }
            return VAR4;
        }
        if ((VAR6 = FUN27(&VAR2->VAR16, VAR2->VAR12, NULL)) < 0)
            return -1;
        if (VAR2->VAR16.VAR64)
            VAR2->VAR18 = 0;
    }
}