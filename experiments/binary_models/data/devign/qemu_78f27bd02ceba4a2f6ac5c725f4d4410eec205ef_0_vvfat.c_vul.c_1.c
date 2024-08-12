static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11;
    bool VAR12;
    const char *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17 = NULL;
    int VAR18;
    VAR19 = VAR7;
    FUN2(if (VAR20 == NULL)
         {
             VAR20 = fopen("", "");
             FUN3(VAR20, NULL);
         })
    VAR15 = FUN4(&VAR21);
    FUN5(VAR15, VAR4, &VAR17);
    if (FUN6(&VAR17))
    {
        FUN7(VAR17);
        FUN8(VAR17);
        VAR18 = -VAR22;
        goto VAR23;
    }
    VAR13 = FUN9(VAR15, "");
    if (!VAR13)
    {
        FUN10(VAR24, ""
                                                 "");
        VAR18 = -VAR22;
        goto VAR23;
    }
    VAR7->VAR25 = FUN11(VAR15, "", 0);
    VAR12 = FUN12(VAR15, "", false);
    if (VAR12)
    {
        if (!VAR7->VAR25)
        {
            VAR7->VAR25 = 12;
            VAR11 = 36;
            VAR7->VAR26 = 2;
        }
        else
        {
            VAR11 = VAR7->VAR25 == 12 ? 18 : 36;
            VAR7->VAR26 = 1;
        }
        VAR7->VAR27 = 1;
        VAR9 = 80;
        VAR10 = 2;
    }
    else
    {
        if (!VAR7->VAR25)
        {
            VAR7->VAR25 = 16;
        }
        VAR9 = VAR7->VAR25 == 12 ? 64 : 1024;
        VAR10 = 16;
        VAR11 = 63;
    }
    switch (VAR7->VAR25)
    {
    case 32:
        fprintf(VAR20, ""
                        "");
        break;
    case 16:
    case 12:
        break;
    default:
        FUN10(VAR24, ""
                                                 "");
        VAR18 = -VAR22;
        goto VAR23;
    }
    VAR7->VAR2 = VAR2;
    VAR7->VAR26 = 0x10;
    VAR7->VAR28 = 0xffffffff;
    VAR7->VAR27 = 0x40;
    VAR2->VAR29 = 1;
    VAR7->VAR30 = VAR7->VAR31 = NULL;
    VAR7->VAR32 = NULL;
    VAR7->VAR33 = NULL;
    VAR7->VAR34 = 1;
    fprintf(VAR20, "", VAR13, VAR9, VAR10, VAR11);
    VAR7->VAR35 = VAR9 * VAR10 * VAR11 - (VAR7->VAR27 - 1);
    if (FUN12(VAR15, "", false))
    {
        if (FUN13(VAR7))
        {
            VAR18 = -VAR36;
            goto VAR23;
        }
        VAR2->VAR29 = 0;
    }
    VAR2->VAR37 = VAR9 * VAR10 * VAR11;
    if (FUN14(VAR7, VAR13, VAR10, VAR11))
    {
        VAR18 = -VAR36;
        goto VAR23;
    }
    VAR7->VAR35 = VAR7->VAR38 + VAR7->VAR26 * VAR7->VAR39;
    if (VAR7->VAR27 == 0x40)
    {
        FUN15(VAR7, VAR9, VAR10, VAR11);
    }
    FUN16(&VAR7->VAR40);
    if (VAR7->VAR30)
    {
        FUN17(&VAR7->VAR41, VAR42, "", VAR2->VAR43, "");
        FUN18(VAR7->VAR41);
    }
    VAR18 = 0;
VAR23:
    FUN19(VAR15);
    return VAR18;
}