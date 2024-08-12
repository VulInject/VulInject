static int FUN1(void)
{
    int VAR1, VAR2;
    VAR3 *VAR4, *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    int VAR12 = 0;
    int64_t VAR13;
    if (!(VAR11 = FUN2(VAR14)))
        FUN3(1);
    VAR1 = FUN4();
    if (VAR1 < 0)
        goto VAR15;
    FUN5(NULL, VAR16, "");
    FUN6();
    VAR13 = FUN7();
    for (; VAR17 == 0;)
    {
        int VAR18, VAR19, VAR20 = 1;
        AVPacket VAR21;
        int64_t VAR22;
        VAR22 = VAR23;
        for (VAR2 = 0; VAR2 < VAR24; VAR2++)
        {
            VAR25 *VAR26;
            VAR7 = VAR27[VAR2];
            VAR26 = VAR28[VAR7->VAR18];
            VAR5 = VAR28[VAR7->VAR18]->VAR29;
            if (VAR7->VAR30 || (VAR5->VAR31 && FUN8(VAR5->VAR31) >= VAR26->VAR32))
                continue;
            if (VAR7->VAR33 > VAR7->VAR34)
            {
                int VAR35;
                for (VAR35 = 0; VAR35 < VAR26->VAR29->VAR36; VAR35++)
                    VAR27[VAR26->VAR37 + VAR35]->VAR30 = 1;
                continue;
            }
            VAR20 = 0;
        }
        if (VAR20)
            break;
        VAR18 = -1;
        for (VAR2 = 0; VAR2 < VAR38; VAR2++)
        {
            int64_t VAR39;
            VAR9 = VAR40[VAR2];
            VAR39 = VAR9->VAR41;
            if (VAR9->VAR42 || VAR11[VAR9->VAR18])
                continue;
            if (!VAR43[VAR9->VAR18]->VAR44)
            {
                if (VAR39 < VAR22)
                {
                    VAR22 = VAR39;
                    VAR18 = VAR9->VAR18;
                }
            }
        }
        if (VAR18 < 0)
        {
            if (VAR12)
            {
                VAR12 = 0;
                memset(VAR11, 0, VAR14);
                FUN9(10000);
                continue;
            }
            break;
        }
        VAR4 = VAR43[VAR18]->VAR29;
        VAR1 = FUN10(VAR4, &VAR21);
        if (VAR1 == FUN11(VAR45))
        {
            VAR11[VAR18] = 1;
            VAR12++;
            continue;
        }
        if (VAR1 < 0)
        {
            VAR43[VAR18]->VAR44 = 1;
            for (VAR2 = 0; VAR2 < VAR43[VAR18]->VAR36; VAR2++)
            {
                VAR9 = VAR40[VAR43[VAR18]->VAR19 + VAR2];
                if (VAR9->VAR46)
                    FUN12(VAR9, NULL);
            }
            if (VAR47)
                break;
            else
                continue;
        }
        VAR12 = 0;
        memset(VAR11, 0, VAR14);
        if (VAR48)
        {
            FUN13(NULL, VAR49, &VAR21, VAR50, VAR4->VAR51[VAR21.VAR52]);
        }
        if (VAR21.VAR52 >= VAR43[VAR18]->VAR36)
            goto VAR53;
        VAR19 = VAR43[VAR18]->VAR19 + VAR21.VAR52;
        VAR9 = VAR40[VAR19];
        if (VAR9->VAR42)
            goto VAR53;
        if (VAR21.VAR54 != VAR55)
            VAR21.VAR54 += FUN14(VAR43[VAR9->VAR18]->VAR56, VAR57, VAR9->VAR58->VAR59);
        if (VAR21.VAR60 != VAR55)
            VAR21.VAR60 += FUN14(VAR43[VAR9->VAR18]->VAR56, VAR57, VAR9->VAR58->VAR59);
        if (VAR21.VAR60 != VAR55)
            VAR21.VAR60 *= VAR9->VAR61;
        if (VAR21.VAR54 != VAR55)
            VAR21.VAR54 *= VAR9->VAR61;
        if (VAR21.VAR54 != VAR55 && VAR9->VAR62 != VAR55 && (VAR4->VAR63->VAR64 & VAR65))
        {
            int64_t VAR66 = FUN14(VAR21.VAR54, VAR9->VAR58->VAR59, VAR57);
            int64_t VAR67 = VAR66 - VAR9->VAR62;
            if ((FUN15(VAR67) > 1LL * VAR68 * VAR69 || VAR66 + 1 < VAR9->VAR41) && !VAR70)
            {
                VAR43[VAR9->VAR18]->VAR56 -= VAR67;
                FUN5(NULL, VAR49, "" VAR71 "" VAR71 "", VAR67, VAR43[VAR9->VAR18]->VAR56);
                VAR21.VAR54 -= FUN14(VAR67, VAR57, VAR9->VAR58->VAR59);
                if (VAR21.VAR60 != VAR55)
                    VAR21.VAR60 -= FUN14(VAR67, VAR57, VAR9->VAR58->VAR59);
            }
        }
        if (FUN12(VAR9, &VAR21) < 0 || FUN16() < 0)
        {
            FUN5(NULL, VAR72, "", VAR9->VAR18, VAR9->VAR58->VAR73);
            if (VAR74)
                FUN3(1);
            FUN17(&VAR21);
            continue;
        }
    VAR53:
        FUN17(&VAR21);
        FUN18(0, VAR13);
    }
    for (VAR2 = 0; VAR2 < VAR38; VAR2++)
    {
        VAR9 = VAR40[VAR2];
        if (!VAR43[VAR9->VAR18]->VAR44 && VAR9->VAR46)
        {
            FUN12(VAR9, NULL);
        }
    }
    FUN16();
    FUN19();
    FUN20();
    for (VAR2 = 0; VAR2 < VAR75; VAR2++)
    {
        VAR5 = VAR28[VAR2]->VAR29;
        FUN21(VAR5);
    }
    FUN18(1, VAR13);
    for (VAR2 = 0; VAR2 < VAR24; VAR2++)
    {
        VAR7 = VAR27[VAR2];
        if (VAR7->VAR76)
        {
            FUN22(&VAR7->VAR58->VAR77->VAR78);
            FUN23(VAR7->VAR58->VAR77);
        }
    }
    for (VAR2 = 0; VAR2 < VAR38; VAR2++)
    {
        VAR9 = VAR40[VAR2];
        if (VAR9->VAR46)
        {
            FUN23(VAR9->VAR58->VAR77);
        }
    }
    VAR1 = 0;
VAR15:
    FUN22(&VAR11);
    if (VAR27)
    {
        for (VAR2 = 0; VAR2 < VAR24; VAR2++)
        {
            VAR7 = VAR27[VAR2];
            if (VAR7)
            {
                if (VAR7->VAR79)
                    FUN22(&VAR7->VAR58->VAR77->VAR80);
                if (VAR7->VAR81)
                {
                    fclose(VAR7->VAR81);
                    VAR7->VAR81 = NULL;
                }
                FUN24(VAR7->VAR82);
                FUN22(&VAR7->VAR58->VAR77->VAR83);
                FUN25(VAR7->VAR84);
                if (VAR7->VAR85)
                    FUN26(&VAR7->VAR85);
                FUN27(&VAR7->VAR86);
            }
        }
    }
    return VAR1;
}