static int FUN1(const char *VAR1, VAR2 *VAR3)
{
    uint8_t VAR4[1024];
    struct VAR5 *VAR6 = (struct VAR5 *)VAR4;
    VAR2 *VAR7;
    int VAR8, VAR9;
    uint16_t VAR10 = 0;
    uint8_t VAR11 = 0;
    uint8_t VAR12 = 0;
    int64_t VAR13;
    int64_t VAR14;
    int VAR15;
    int VAR16 = -VAR17;
    VAR14 = FUN2(VAR3, VAR18)->VAR19.VAR20;
    VAR7 = FUN2(VAR3, VAR21);
    if (VAR7 && VAR7->VAR19.VAR22)
    {
        if (!strcmp(VAR7->VAR19.VAR22, ""))
        {
            VAR15 = VAR23;
        }
        else if (!strcmp(VAR7->VAR19.VAR22, ""))
        {
            VAR15 = VAR24;
        }
        else
        {
            return -VAR25;
        }
    }
    else
    {
        VAR15 = VAR23;
    }
    VAR8 = FUN3(VAR1, VAR26 | VAR27 | VAR28 | VAR29, 0644);
    if (VAR8 < 0)
    {
        return -VAR17;
    }
    VAR13 = VAR14 / VAR30;
    for (VAR9 = 0; VAR13 > (VAR31)VAR10 * VAR11 * VAR12; VAR9++)
    {
        if (FUN4(VAR13 + VAR9, &VAR10, &VAR11, &VAR12))
        {
            VAR16 = -VAR32;
            goto VAR33;
        }
    }
    VAR13 = (VAR31)VAR10 * VAR11 * VAR12;
    memset(VAR4, 0, 1024);
    memcpy(VAR6->VAR34, "", 8);
    memcpy(VAR6->VAR35, "", 4);
    memcpy(VAR6->VAR36, "", 4);
    VAR6->VAR37 = FUN5(0x02);
    VAR6->VAR38 = FUN5(0x00010000);
    if (VAR15 == VAR23)
    {
        VAR6->VAR39 = FUN6(VAR40);
    }
    else
    {
        VAR6->VAR39 = FUN6(0xFFFFFFFFFFFFFFFFULL);
    }
    VAR6->VAR41 = FUN5(FUN7(NULL) - VAR42);
    VAR6->VAR43 = FUN8(0x0005);
    VAR6->VAR44 = FUN8(0x0003);
    if (VAR15 == VAR23)
    {
        VAR6->VAR45 = FUN6(VAR13 * 512);
        VAR6->VAR46 = FUN6(VAR13 * 512);
    }
    else
    {
        VAR6->VAR45 = FUN6(VAR14);
        VAR6->VAR46 = FUN6(VAR14);
    }
    VAR6->VAR10 = FUN8(VAR10);
    VAR6->VAR11 = VAR11;
    VAR6->VAR12 = VAR12;
    VAR6->VAR47 = FUN5(VAR15);
    FUN9(VAR6->VAR48);
    VAR6->VAR49 = FUN5(FUN10(VAR4, VAR40));
    if (VAR15 == VAR23)
    {
        VAR16 = FUN11(VAR8, VAR4, VAR13);
    }
    else
    {
        VAR16 = FUN12(VAR8, VAR4, VAR14);
    }
VAR33:
    FUN13(VAR8);
    return VAR16;
}