static int FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    VAR5 *VAR6;
    AVPacket VAR7;
    int VAR8, VAR9, VAR10;
    int VAR11;
    VAR11 = FUN2();
    if (VAR11 == -2)
    {
        FUN3();
        return FUN4(VAR12);
    }
    if (VAR11 < 0)
    {
        if (FUN5())
        {
            FUN6();
            FUN7(10000);
            return FUN4(VAR12);
        }
        FUN8(NULL, VAR13, "");
        return VAR14;
    }
    VAR2 = VAR15[VAR11];
    VAR4 = VAR2->VAR16;
    VAR8 = FUN9(VAR2, &VAR7);
    if (VAR8 == FUN4(VAR12))
    {
        VAR2->VAR17 = 1;
        return VAR8;
    }
    if (VAR8 < 0)
    {
        if (VAR8 != VAR14)
        {
            FUN10(VAR4->VAR18, VAR8);
            if (VAR19)
                FUN11(1);
        }
        VAR2->VAR20 = 1;
        for (VAR9 = 0; VAR9 < VAR2->VAR21; VAR9++)
        {
            VAR6 = VAR22[VAR2->VAR23 + VAR9];
            if (VAR6->VAR24)
                FUN12(VAR6, NULL);
            FUN3();
        }
        if (VAR25)
            return VAR14;
        else
            return FUN4(VAR12);
    }
    FUN6();
    if (VAR26)
    {
        FUN13(NULL, VAR27, &VAR7, VAR28, VAR4->VAR29[VAR7.VAR30]);
    }
    if (VAR7.VAR30 >= VAR2->VAR21)
    {
        FUN14(VAR11, &VAR7);
        goto VAR31;
    }
    VAR6 = VAR22[VAR2->VAR23 + VAR7.VAR30];
    if (VAR6->VAR32)
        goto VAR31;
    if (!VAR6->VAR33 && VAR15[VAR11]->VAR16->VAR34 != VAR35 && VAR6->VAR36->VAR37 < 64)
    {
        uint64_t VAR38 = FUN15(VAR15[VAR11]->VAR16->VAR34, VAR39, VAR6->VAR36->VAR40);
        uint64_t VAR41 = VAR38 + (1LL << VAR6->VAR36->VAR37);
        VAR6->VAR33 = 1;
        if (VAR7.VAR42 != VAR35 && VAR7.VAR42 > VAR38 && VAR7.VAR42 - VAR38 > VAR41 - VAR7.VAR42)
        {
            VAR7.VAR42 -= 1LL << VAR6->VAR36->VAR37;
            VAR6->VAR33 = 0;
        }
        if (VAR7.VAR43 != VAR35 && VAR7.VAR43 > VAR38 && VAR7.VAR43 - VAR38 > VAR41 - VAR7.VAR43)
        {
            VAR7.VAR43 -= 1LL << VAR6->VAR36->VAR37;
            VAR6->VAR33 = 0;
        }
    }
    if (VAR7.VAR42 != VAR35)
        VAR7.VAR42 += FUN15(VAR2->VAR44, VAR39, VAR6->VAR36->VAR40);
    if (VAR7.VAR43 != VAR35)
        VAR7.VAR43 += FUN15(VAR2->VAR44, VAR39, VAR6->VAR36->VAR40);
    if (VAR7.VAR43 != VAR35)
        VAR7.VAR43 *= VAR6->VAR45;
    if (VAR7.VAR42 != VAR35)
        VAR7.VAR42 *= VAR6->VAR45;
    if (VAR46)
    {
        FUN8(NULL, VAR47, ""
                                  "" VAR48 "",
               VAR2->VAR23 + VAR7.VAR30, FUN16(VAR6->VAR36->VAR49->VAR50), FUN17(VAR6->VAR51), FUN18(VAR6->VAR51, &VAR39), FUN17(VAR6->VAR52), FUN18(VAR6->VAR52, &VAR39), FUN17(VAR7.VAR43), FUN18(VAR7.VAR43, &VAR6->VAR36->VAR40), FUN17(VAR7.VAR42), FUN18(VAR7.VAR42, &VAR6->VAR36->VAR40), VAR15[VAR6->VAR11]->VAR44);
    }
    if (VAR7.VAR42 != VAR35 && VAR6->VAR51 != VAR35 && !VAR53)
    {
        int64_t VAR54 = FUN15(VAR7.VAR42, VAR6->VAR36->VAR40, VAR39);
        int64_t VAR55 = VAR54 - VAR6->VAR51;
        if (VAR4->VAR56->VAR57 & VAR58)
        {
            if (VAR55 < -1LL * VAR59 * VAR60 || (VAR55 > 1LL * VAR59 * VAR60 && VAR6->VAR36->VAR49->VAR50 != VAR61) || VAR54 + 1 < VAR6->VAR43)
            {
                VAR2->VAR44 -= VAR55;
                FUN8(NULL, VAR27, "" VAR48 "" VAR48 "", VAR55, VAR2->VAR44);
                VAR7.VAR42 -= FUN15(VAR55, VAR39, VAR6->VAR36->VAR40);
                if (VAR7.VAR43 != VAR35)
                    VAR7.VAR43 -= FUN15(VAR55, VAR39, VAR6->VAR36->VAR40);
            }
        }
        else
        {
            if (VAR55 < -1LL * VAR62 * VAR60 || (VAR55 > 1LL * VAR62 * VAR60 && VAR6->VAR36->VAR49->VAR50 != VAR61))
            {
                FUN8(NULL, VAR63, "" VAR48 "" VAR48 "", VAR7.VAR42, VAR6->VAR51, VAR7.VAR30);
                VAR7.VAR42 = VAR35;
            }
            if (VAR7.VAR43 != VAR35)
            {
                int64_t VAR64 = FUN15(VAR7.VAR43, VAR6->VAR36->VAR40, VAR39);
                VAR55 = VAR64 - VAR6->VAR51;
                if (VAR55 < -1LL * VAR62 * VAR60 || (VAR55 > 1LL * VAR62 * VAR60 && VAR6->VAR36->VAR49->VAR50 != VAR61))
                {
                    FUN8(NULL, VAR63, "" VAR48 "" VAR48 "", VAR7.VAR43, VAR6->VAR51, VAR7.VAR30);
                    VAR7.VAR43 = VAR35;
                }
            }
        }
    }
    FUN19(VAR6, VAR7.VAR43);
    if ((VAR8 = FUN12(VAR6, &VAR7)) < 0 || ((VAR8 = FUN3()) < 0 && VAR8 != VAR14))
    {
        char VAR65[128];
        FUN20(VAR8, VAR65, sizeof(VAR65));
        FUN8(NULL, VAR66, "", VAR6->VAR11, VAR6->VAR36->VAR67, VAR65);
        if (VAR19)
            FUN11(1);
        FUN21(&VAR7);
        return FUN4(VAR12);
    }
VAR31:
    FUN21(&VAR7);
    return 0;
}