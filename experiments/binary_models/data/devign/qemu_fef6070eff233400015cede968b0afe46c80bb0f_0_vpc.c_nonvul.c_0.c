static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    uint8_t VAR6[1024];
    VAR7 *VAR8 = (VAR7 *)VAR6;
    char *VAR9;
    int VAR10;
    uint16_t VAR11 = 0;
    uint8_t VAR12 = 0;
    uint8_t VAR13 = 0;
    int64_t VAR14;
    int64_t VAR15;
    int VAR16;
    int VAR17 = -VAR18;
    VAR4 *VAR19 = NULL;
    VAR20 *VAR21 = NULL;
    VAR15 = FUN2(VAR3, VAR22, 0);
    VAR9 = FUN3(VAR3, VAR23);
    if (VAR9)
    {
        if (!strcmp(VAR9, ""))
        {
            VAR16 = VAR24;
        }
        else if (!strcmp(VAR9, ""))
        {
            VAR16 = VAR25;
        }
        else
        {
            VAR17 = -VAR26;
            goto VAR27;
        }
    }
    else
    {
        VAR16 = VAR24;
    }
    VAR17 = FUN4(VAR1, VAR3, &VAR19);
    if (VAR17 < 0)
    {
        FUN5(VAR5, VAR19);
        goto VAR27;
    }
    VAR17 = FUN6(&VAR21, VAR1, NULL, NULL, VAR28 | VAR29, NULL, &VAR19);
    if (VAR17 < 0)
    {
        FUN5(VAR5, VAR19);
        goto VAR27;
    }
    VAR14 = VAR15 / VAR30;
    for (VAR10 = 0; VAR14 > (VAR31)VAR11 * VAR12 * VAR13; VAR10++)
    {
        if (FUN7(VAR14 + VAR10, &VAR11, &VAR12, &VAR13))
        {
            VAR17 = -VAR32;
            goto VAR27;
        }
    }
    VAR14 = (VAR31)VAR11 * VAR12 * VAR13;
    memset(VAR6, 0, 1024);
    memcpy(VAR8->VAR33, "", 8);
    memcpy(VAR8->VAR34, "", 4);
    memcpy(VAR8->VAR35, "", 4);
    VAR8->VAR36 = FUN8(0x02);
    VAR8->VAR37 = FUN8(0x00010000);
    if (VAR16 == VAR24)
    {
        VAR8->VAR38 = FUN9(VAR39);
    }
    else
    {
        VAR8->VAR38 = FUN9(0xFFFFFFFFFFFFFFFFULL);
    }
    VAR8->VAR40 = FUN8(FUN10(NULL) - VAR41);
    VAR8->VAR42 = FUN11(0x0005);
    VAR8->VAR43 = FUN11(0x0003);
    if (VAR16 == VAR24)
    {
        VAR8->VAR44 = FUN9(VAR14 * 512);
        VAR8->VAR45 = FUN9(VAR14 * 512);
    }
    else
    {
        VAR8->VAR44 = FUN9(VAR15);
        VAR8->VAR45 = FUN9(VAR15);
    }
    VAR8->VAR11 = FUN11(VAR11);
    VAR8->VAR12 = VAR12;
    VAR8->VAR13 = VAR13;
    VAR8->VAR46 = FUN8(VAR16);
    FUN12(VAR8->VAR47);
    VAR8->VAR48 = FUN8(FUN13(VAR6, VAR39));
    if (VAR16 == VAR24)
    {
        VAR17 = FUN14(VAR21, VAR6, VAR14);
    }
    else
    {
        VAR17 = FUN15(VAR21, VAR6, VAR15);
    }
VAR27:
    FUN16(VAR21);
    FUN17(VAR9);
    return VAR17;
}