static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = FUN2();
    int64_t VAR6;
    double VAR7;
    int VAR8;
    VAR9 *VAR10 = FUN3();
    VAR11 *VAR12 = NULL;
    int64_t VAR13;
    int VAR14 = VAR3->VAR15->VAR16->VAR17;
    int VAR18 = VAR3->VAR15->VAR16->VAR19;
    if ((VAR8 = FUN4(VAR10, VAR3, VAR20)) < 0)
        goto VAR21;
    VAR12 = VAR3->VAR22;
    for (;;)
    {
        AVPacket VAR23;
        VAR24 *VAR25;
        AVRational VAR26;
        while (VAR3->VAR27 && !VAR3->VAR28.VAR29)
            FUN5(10);
        if (VAR14 != VAR3->VAR15->VAR16->VAR17 || VAR18 != VAR3->VAR15->VAR16->VAR19)
        {
            FUN6(NULL, "", VAR14, VAR18, VAR3->VAR15->VAR16->VAR17, VAR3->VAR15->VAR16->VAR19);
            FUN7(&VAR10);
            VAR10 = FUN3();
            if ((VAR8 = FUN4(VAR10, VAR3, VAR20)) < 0)
                goto VAR21;
            VAR12 = VAR3->VAR22;
            VAR14 = VAR3->VAR15->VAR16->VAR17;
            VAR18 = VAR3->VAR15->VAR16->VAR19;
        }
        VAR8 = FUN8(VAR12, VAR5, &VAR25, &VAR26);
        if (VAR25)
        {
            VAR6 = VAR25->VAR7;
            VAR13 = VAR25->VAR13;
            VAR5->VAR30 = VAR25;
        }
        if (FUN9(VAR26, VAR3->VAR15->VAR31))
        {
            av_unused int64_t VAR32 = VAR6;
            VAR6 = FUN10(VAR6, VAR26, VAR3->VAR15->VAR31);
            FUN6(NULL, ""
                          "" VAR33 "" VAR33 "",
                    VAR26.VAR34, VAR26.VAR35, VAR32, VAR3->VAR15->VAR31.VAR34, VAR3->VAR15->VAR31.VAR35, VAR6);
        }
        VAR8 = FUN11(VAR3, VAR5, &VAR6, &VAR23);
        if (VAR8 < 0)
            goto VAR21;
        if (!VAR8)
            continue;
        VAR7 = VAR6 * FUN12(VAR3->VAR15->VAR31);
        VAR8 = FUN13(VAR3, VAR5, VAR7, VAR13);
        VAR8 = FUN13(VAR3, VAR5, VAR7, VAR23.VAR13);
        FUN14(&VAR23);
        if (VAR8 < 0)
            goto VAR21;
        if (VAR36)
            if (VAR37)
                FUN15(VAR37);
    }
VAR21:
    FUN7(&VAR10);
    FUN16(VAR5);
    return 0;
}