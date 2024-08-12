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
    int VAR25, VAR26 = 0;
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
    VAR9->VAR44 = FUN21(VAR9);
    if (VAR9->VAR42 == VAR45 && (VAR5 & VAR46) && VAR9->VAR44)
    {
        FUN2(VAR7, "");
        VAR26 = -VAR47;
        goto VAR31;
    }
    FUN22(VAR9, &VAR23);
    if (VAR23 != NULL)
    {
        FUN5(VAR7, VAR23);
        VAR26 = -VAR28;
        goto VAR31;
    }
    VAR2->VAR48 = FUN23(VAR9->VAR49, VAR9);
    VAR2->VAR50 = VAR9->VAR51;
    if (VAR9->VAR42 != VAR45 && VAR9->VAR42 != VAR52)
    {
        VAR2->VAR53 = 1;
    }
    VAR15 = FUN19(VAR9->VAR12, VAR9->VAR39, 1, VAR54, (void **)&VAR19, VAR7);
    if (VAR15 == NULL)
    {
        VAR26 = -VAR28;
        goto VAR31;
    }
    for (VAR25 = 0; VAR25 < VAR19->VAR55; VAR25++)
    {
        struct VAR14 *VAR56;
        struct VAR57 *VAR58;
        struct VAR59 *VAR60;
        switch (VAR19->VAR61[VAR25])
        {
        case VAR62:
            VAR56 = FUN19(VAR9->VAR12, VAR9->VAR39, 1, VAR62, (void **)&VAR58, VAR7);
            if (VAR56 == NULL)
            {
                VAR26 = -VAR28;
                goto VAR31;
            }
            memcpy(&VAR9->VAR63, VAR58, sizeof(struct VAR57));
            FUN20(VAR56);
            break;
        case VAR64:
            VAR56 = FUN19(VAR9->VAR12, VAR9->VAR39, 1, VAR64, (void **)&VAR60, VAR7);
            if (VAR56 == NULL)
            {
                VAR26 = -VAR28;
                goto VAR31;
            }
            memcpy(&VAR9->VAR65, VAR60, sizeof(struct VAR59));
            FUN20(VAR56);
            break;
        default:
            break;
        }
    }
    FUN20(VAR15);
    VAR15 = NULL;
    FUN24(VAR2, VAR9->VAR40);
    if (VAR9->VAR65.VAR66 * VAR9->VAR51 >= 4 * 1024 && VAR9->VAR65.VAR66 * VAR9->VAR51 <= 16 * 1024 * 1024)
    {
        VAR9->VAR67 = (VAR9->VAR65.VAR66 * VAR9->VAR51) >> VAR68;
        if (VAR9->VAR69 && !(VAR2->VAR70 & VAR71))
        {
            VAR9->VAR72 = FUN25(VAR9);
            if (VAR9->VAR72 == NULL)
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