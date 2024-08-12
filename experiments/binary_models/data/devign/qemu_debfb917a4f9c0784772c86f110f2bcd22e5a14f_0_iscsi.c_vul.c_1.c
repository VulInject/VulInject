static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    struct VAR11 *VAR12 = NULL;
    struct VAR13 *VAR13 = NULL;
    struct VAR14 *VAR15 = NULL;
    struct VAR16 *VAR17 = NULL;
    struct VAR18 *VAR19;
    char *VAR20 = NULL;
    VAR21 *VAR22;
    VAR6 *VAR23 = NULL;
    const char *VAR24;
    int VAR25, VAR26;
    if ((VAR27 % 512) != 0)
    {
        FUN2(VAR7, ""
                         ""
                         "",
                   VAR27);
        return -VAR28;
    }
    VAR22 = FUN3(&VAR29, NULL, 0, &VAR30);
    FUN4(VAR22, VAR4, &VAR23);
    if (VAR23)
    {
        FUN5(VAR7, VAR23);
        VAR26 = -VAR28;
        goto VAR31;
    }
    VAR24 = FUN6(VAR22, "");
    VAR13 = FUN7(VAR12, VAR24);
    if (VAR13 == NULL)
    {
        FUN2(VAR7, "", VAR24);
        VAR26 = -VAR28;
        goto VAR31;
    }
    memset(VAR9, 0, sizeof(VAR8));
    VAR20 = FUN8(VAR13->VAR32);
    VAR12 = FUN9(VAR20);
    if (VAR12 == NULL)
    {
        FUN2(VAR7, "");
        VAR26 = -VAR33;
        goto VAR31;
    }
    if (FUN10(VAR12, VAR13->VAR32))
    {
        FUN2(VAR7, "");
        VAR26 = -VAR28;
        goto VAR31;
    }
    if (VAR13->VAR34 != NULL)
    {
        VAR26 = FUN11(VAR12, VAR13->VAR34, VAR13->VAR35);
        if (VAR26 != 0)
        {
            FUN2(VAR7, "");
            VAR26 = -VAR28;
            goto VAR31;
        }
    }
    FUN12(VAR12, VAR13->VAR32, &VAR23);
    if (VAR23 != NULL)
    {
        FUN5(VAR7, VAR23);
        VAR26 = -VAR28;
        goto VAR31;
    }
    if (FUN13(VAR12, VAR36) != 0)
    {
        FUN2(VAR7, "");
        VAR26 = -VAR28;
        goto VAR31;
    }
    FUN14(VAR12, VAR37);
    FUN15(VAR12, VAR13->VAR32, &VAR23);
    if (VAR23 != NULL)
    {
        FUN5(VAR7, VAR23);
        VAR26 = -VAR28;
        goto VAR31;
    }
    if (FUN16(VAR12, VAR13->VAR38, VAR13->VAR39) != 0)
    {
        FUN2(VAR7, "", FUN17(VAR12));
        VAR26 = -VAR28;
        goto VAR31;
    }
    VAR9->VAR12 = VAR12;
    VAR9->VAR40 = FUN18(VAR2);
    VAR9->VAR39 = VAR13->VAR39;
    VAR9->VAR41 = true;
    VAR15 = FUN19(VAR9->VAR12, VAR9->VAR39, 0, 0, (void **)&VAR17, VAR7);
    if (VAR15 == NULL)
    {
        VAR26 = -VAR28;
        goto VAR31;
    }
    VAR9->VAR42 = VAR17->VAR43;
    FUN20(VAR15);
    VAR15 = NULL;
    if (VAR9->VAR42 == VAR44 && (VAR5 & VAR45) && FUN21(VAR9))
    {
        FUN2(VAR7, "");
        VAR26 = -VAR46;
        goto VAR31;
    }
    FUN22(VAR9, &VAR23);
    if (VAR23 != NULL)
    {
        FUN5(VAR7, VAR23);
        VAR26 = -VAR28;
        goto VAR31;
    }
    VAR2->VAR47 = FUN23(VAR9->VAR48, VAR9);
    VAR2->VAR49 = VAR9->VAR50;
    if (VAR9->VAR42 != VAR44 && VAR9->VAR42 != VAR51)
    {
        VAR2->VAR52 = 1;
    }
    VAR15 = FUN19(VAR9->VAR12, VAR9->VAR39, 1, VAR53, (void **)&VAR19, VAR7);
    if (VAR15 == NULL)
    {
        VAR26 = -VAR28;
        goto VAR31;
    }
    for (VAR25 = 0; VAR25 < VAR19->VAR54; VAR25++)
    {
        struct VAR14 *VAR55;
        struct VAR56 *VAR57;
        struct VAR58 *VAR59;
        switch (VAR19->VAR60[VAR25])
        {
        case VAR61:
            VAR55 = FUN19(VAR9->VAR12, VAR9->VAR39, 1, VAR61, (void **)&VAR57, VAR7);
            if (VAR55 == NULL)
            {
                VAR26 = -VAR28;
                goto VAR31;
            }
            memcpy(&VAR9->VAR62, VAR57, sizeof(struct VAR56));
            FUN20(VAR55);
            break;
        case VAR63:
            VAR55 = FUN19(VAR9->VAR12, VAR9->VAR39, 1, VAR63, (void **)&VAR59, VAR7);
            if (VAR55 == NULL)
            {
                VAR26 = -VAR28;
                goto VAR31;
            }
            memcpy(&VAR9->VAR64, VAR59, sizeof(struct VAR58));
            FUN20(VAR55);
            break;
        default:
            break;
        }
    }
    FUN20(VAR15);
    VAR15 = NULL;
    FUN24(VAR2, VAR9->VAR40);
    if (VAR9->VAR64.VAR65 * VAR9->VAR50 >= 4 * 1024 && VAR9->VAR64.VAR65 * VAR9->VAR50 <= 16 * 1024 * 1024)
    {
        VAR9->VAR66 = (VAR9->VAR64.VAR65 * VAR9->VAR50) >> VAR67;
        if (VAR9->VAR68 && !(VAR2->VAR69 & VAR70))
        {
            VAR9->VAR71 = FUN25(VAR9);
            if (VAR9->VAR71 == NULL)
            {
                VAR26 = -VAR33;
            }
        }
    }
VAR31:
    FUN26(VAR22);
    FUN27(VAR20);
    if (VAR13 != NULL)
    {
        FUN28(VAR13);
    }
    if (VAR15 != NULL)
    {
        FUN20(VAR15);
    }
    if (VAR26)
    {
        if (VAR12 != NULL)
        {
            FUN29(VAR12);
        }
        memset(VAR9, 0, sizeof(VAR8));
    }
    return VAR26;
}