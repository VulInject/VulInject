static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13;
    VAR7 *VAR14 = NULL;
    const char *VAR15 = NULL;
    BlockdevAioOptions VAR16, VAR17;
    int VAR18, VAR19;
    struct stat VAR20;
    OnOffAuto VAR21;
    VAR13 = FUN2(&VAR22, NULL, 0, &VAR23);
    FUN3(VAR13, VAR4, &VAR14);
    if (VAR14)
    {
        FUN4(VAR8, VAR14);
        VAR19 = -VAR24;
        goto VAR25;
    }
    VAR15 = FUN5(VAR13, "");
    VAR19 = FUN6(&VAR15);
    if (VAR19 != 0)
    {
        FUN7(VAR8, -VAR19, "");
        goto VAR25;
    }
    VAR17 = (VAR5 & VAR26) ? VAR27 : VAR28;
    VAR16 = FUN8(VAR29, FUN5(VAR13, ""), VAR30, VAR17, &VAR14);
    if (VAR14)
    {
        FUN4(VAR8, VAR14);
        VAR19 = -VAR24;
        goto VAR25;
    }
    VAR10->VAR31 = (VAR16 == VAR27);
    VAR21 = FUN8(VAR32, FUN5(VAR13, ""), VAR33, VAR34, &VAR14);
    if (VAR14)
    {
        FUN4(VAR8, VAR14);
        VAR19 = -VAR24;
        goto VAR25;
    }
    switch (VAR21)
    {
    case VAR35:
        VAR10->VAR36 = true;
        fprintf(VAR37, ""
                        ""
                        "");
        break;
    case VAR38:
        VAR10->VAR36 = false;
        break;
    case VAR34:
        VAR10->VAR36 = true;
        VAR10->VAR36 = false;
        break;
    default:
        FUN9();
    }
    VAR10->VAR6 = VAR6;
    FUN10(VAR5, &VAR10->VAR6);
    VAR10->VAR18 = -1;
    VAR18 = FUN11(VAR15, VAR10->VAR6, 0644);
    if (VAR18 < 0)
    {
        VAR19 = -VAR39;
        FUN7(VAR8, VAR39, "", VAR15);
        if (VAR19 == -VAR40)
        {
            VAR19 = -VAR41;
        }
        goto VAR25;
    }
    VAR10->VAR18 = VAR18;
    VAR10->VAR42 = -1;
    if (VAR10->VAR36)
    {
        VAR18 = FUN11(VAR15, VAR10->VAR6);
        if (VAR18 < 0)
        {
            VAR19 = -VAR39;
            FUN7(VAR8, VAR39, "", VAR15);
            FUN12(VAR10->VAR18);
            goto VAR25;
        }
        VAR10->VAR42 = VAR18;
    }
    VAR10->VAR43 = 0;
    VAR10->VAR44 = VAR45;
    if (VAR10->VAR31 && !(VAR10->VAR6 & VAR46))
    {
        FUN13(VAR8, ""
                         "");
        VAR19 = -VAR24;
        goto VAR25;
    }
    if (VAR10->VAR31)
    {
        FUN13(VAR8, ""
                         "");
        VAR19 = -VAR24;
        goto VAR25;
    }
    VAR10->VAR47 = true;
    VAR10->VAR48 = true;
    VAR2->VAR49 = VAR50;
    if ((VAR2->VAR6 & VAR51) != 0)
    {
        VAR10->VAR52 = true;
    }
    if (FUN14(VAR10->VAR18, &VAR20) < 0)
    {
        VAR19 = -VAR39;
        FUN7(VAR8, VAR39, "");
        goto VAR25;
    }
    if (FUN15(VAR20.VAR53))
    {
        VAR10->VAR54 = true;
        VAR10->VAR55 = true;
    }
    if (FUN16(VAR20.VAR53))
    {
        unsigned int VAR56;
        if (FUN17(VAR10->VAR18, VAR57, &VAR56) == 0 && VAR56)
        {
            VAR10->VAR54 = true;
        }
        if (!(VAR2->VAR6 & VAR51))
        {
            VAR10->VAR54 = false;
            VAR10->VAR48 = false;
        }
    }
    if (FUN18(VAR20.VAR53))
    {
        VAR10->VAR52 = true;
    }
    if (FUN19(VAR10->VAR18))
    {
        VAR10->VAR58 = true;
    }
    VAR19 = 0;
VAR25:
    if (VAR15 && (VAR5 & VAR59))
    {
        unlink(VAR15);
    }
    FUN20(VAR13);
    return VAR19;
}