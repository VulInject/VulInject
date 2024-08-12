static int FUN1(int VAR1)
{
    VAR2 *VAR3 = VAR4[VAR1];
    VAR5 *VAR6;
    VAR7 *VAR8;
    AVPacket VAR9;
    int VAR10, VAR11, VAR12;
    VAR6 = VAR3->VAR13;
    VAR10 = FUN2(VAR3, &VAR9);
    if (VAR10 == FUN3(VAR14))
    {
        VAR3->VAR15 = 1;
        return VAR10;
    }
    if (VAR10 < 0)
    {
        if (VAR10 != VAR16)
        {
            FUN4(VAR6->VAR17, VAR10);
            if (VAR18)
                FUN5(1);
        }
        VAR3->VAR19 = 1;
        for (VAR11 = 0; VAR11 < VAR3->VAR20; VAR11++)
        {
            VAR8 = VAR21[VAR3->VAR22 + VAR11];
            if (VAR8->VAR23)
                FUN6(VAR8, NULL);
            for (VAR12 = 0; VAR12 < VAR24; VAR12++)
            {
                VAR25 *VAR26 = VAR27[VAR12];
                if (VAR26->VAR28 == VAR3->VAR22 + VAR11 && (VAR26->VAR29 || VAR26->VAR30->VAR31 == VAR32))
                    FUN7(VAR26);
            }
        }
        return FUN3(VAR14);
    }
    FUN8();
    if (VAR33)
    {
        FUN9(NULL, VAR34, &VAR9, VAR35, VAR6->VAR36[VAR9.VAR37]);
    }
    if (VAR9.VAR37 >= VAR3->VAR20)
    {
        FUN10(VAR1, &VAR9);
        goto VAR38;
    }
    VAR8 = VAR21[VAR3->VAR22 + VAR9.VAR37];
    if (VAR8->VAR39)
        goto VAR38;
    if (!VAR8->VAR40 && VAR4[VAR1]->VAR13->VAR41 != VAR42 && VAR8->VAR43->VAR44 < 64)
    {
        uint64_t VAR45 = FUN11(VAR4[VAR1]->VAR13->VAR41, VAR46, VAR8->VAR43->VAR47);
        uint64_t VAR48 = VAR45 + (1LL << VAR8->VAR43->VAR44);
        VAR8->VAR40 = 1;
        if (VAR9.VAR49 != VAR42 && VAR9.VAR49 > VAR45 && VAR9.VAR49 - VAR45 > VAR48 - VAR9.VAR49)
        {
            VAR9.VAR49 -= 1LL << VAR8->VAR43->VAR44;
            VAR8->VAR40 = 0;
        }
        if (VAR9.VAR50 != VAR42 && VAR9.VAR50 > VAR45 && VAR9.VAR50 - VAR45 > VAR48 - VAR9.VAR50)
        {
            VAR9.VAR50 -= 1LL << VAR8->VAR43->VAR44;
            VAR8->VAR40 = 0;
        }
    }
    if (VAR9.VAR49 != VAR42)
        VAR9.VAR49 += FUN11(VAR3->VAR51, VAR46, VAR8->VAR43->VAR47);
    if (VAR9.VAR50 != VAR42)
        VAR9.VAR50 += FUN11(VAR3->VAR51, VAR46, VAR8->VAR43->VAR47);
    if (VAR9.VAR50 != VAR42)
        VAR9.VAR50 *= VAR8->VAR52;
    if (VAR9.VAR49 != VAR42)
        VAR9.VAR49 *= VAR8->VAR52;
    if (VAR53)
    {
        FUN12(NULL, VAR54, ""
                                  "" VAR55 "",
               VAR3->VAR22 + VAR9.VAR37, FUN13(VAR8->VAR43->VAR56->VAR57), FUN14(VAR8->VAR58), FUN15(VAR8->VAR58, &VAR46), FUN14(VAR8->VAR59), FUN15(VAR8->VAR59, &VAR46), FUN14(VAR9.VAR50), FUN15(VAR9.VAR50, &VAR8->VAR43->VAR47), FUN14(VAR9.VAR49), FUN15(VAR9.VAR49, &VAR8->VAR43->VAR47), VAR4[VAR8->VAR1]->VAR51);
    }
    if (VAR9.VAR49 != VAR42 && VAR8->VAR58 != VAR42 && !VAR60)
    {
        int64_t VAR61 = FUN11(VAR9.VAR49, VAR8->VAR43->VAR47, VAR46);
        int64_t VAR62 = VAR61 - VAR8->VAR58;
        if (VAR6->VAR63->VAR64 & VAR65)
        {
            if (VAR62 < -1LL * VAR66 * VAR67 || (VAR62 > 1LL * VAR66 * VAR67 && VAR8->VAR43->VAR56->VAR57 != VAR32) || VAR61 + 1 < VAR8->VAR50)
            {
                VAR3->VAR51 -= VAR62;
                FUN12(NULL, VAR34, "" VAR55 "" VAR55 "", VAR62, VAR3->VAR51);
                VAR9.VAR49 -= FUN11(VAR62, VAR46, VAR8->VAR43->VAR47);
                if (VAR9.VAR50 != VAR42)
                    VAR9.VAR50 -= FUN11(VAR62, VAR46, VAR8->VAR43->VAR47);
            }
        }
        else
        {
            if (VAR62 < -1LL * VAR68 * VAR67 || (VAR62 > 1LL * VAR68 * VAR67 && VAR8->VAR43->VAR56->VAR57 != VAR32))
            {
                FUN12(NULL, VAR69, "" VAR55 "" VAR55 "", VAR9.VAR49, VAR8->VAR58, VAR9.VAR37);
                VAR9.VAR49 = VAR42;
            }
            if (VAR9.VAR50 != VAR42)
            {
                int64_t VAR70 = FUN11(VAR9.VAR50, VAR8->VAR43->VAR47, VAR46);
                VAR62 = VAR70 - VAR8->VAR58;
                if (VAR62 < -1LL * VAR68 * VAR67 || (VAR62 > 1LL * VAR68 * VAR67 && VAR8->VAR43->VAR56->VAR57 != VAR32))
                {
                    FUN12(NULL, VAR69, "" VAR55 "" VAR55 "", VAR9.VAR50, VAR8->VAR58, VAR9.VAR37);
                    VAR9.VAR50 = VAR42;
                }
            }
        }
    }
    FUN16(VAR8, VAR9.VAR50);
    VAR10 = FUN6(VAR8, &VAR9);
    if (VAR10 < 0)
    {
        char VAR71[128];
        FUN17(VAR10, VAR71, sizeof(VAR71));
        FUN12(NULL, VAR72, "", VAR8->VAR1, VAR8->VAR43->VAR73, VAR71);
        if (VAR18)
            FUN5(1);
    }
VAR38:
    FUN18(&VAR9);
    return 0;
}