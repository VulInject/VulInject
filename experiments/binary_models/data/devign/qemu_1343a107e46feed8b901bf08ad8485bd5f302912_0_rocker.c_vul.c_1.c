static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    const MACAddr VAR5 = {.VAR6 = {0, 0, 0, 0, 0, 0}};
    const MACAddr VAR7 = {.VAR6 = {0x52, 0x54, 0x00, 0x12, 0x35, 0x01}};
    static int VAR8;
    int VAR9, VAR10 = 0;
    VAR4->VAR11[VAR12] = FUN3(VAR4);
    if (!VAR4->VAR13)
    {
        VAR4->VAR13 = FUN4(FUN5(VAR4->VAR11[VAR12]));
    }
    VAR4->VAR14 = FUN6(VAR4, VAR4->VAR13);
    if (!VAR4->VAR14)
    {
        fprintf(VAR15, ""%VAR16\"", VAR4->VAR13);
        VAR10 = -VAR17;
        goto VAR18;
    }
    FUN7(&VAR4->VAR19, FUN8(VAR4), &VAR20, VAR4, "", VAR21);
    FUN9(VAR2, VAR22, VAR23, &VAR4->VAR19);
    FUN10(&VAR4->VAR24, FUN8(VAR4), "", VAR25);
    FUN9(VAR2, VAR26, VAR23, &VAR4->VAR24);
    VAR10 = FUN11(VAR4);
    if (VAR10)
    {
        goto VAR27;
    }
    if (!VAR4->VAR28)
    {
        VAR4->VAR28 = FUN4(VAR29);
    }
    if (FUN12(VAR4->VAR28))
    {
        VAR10 = -VAR30;
        goto VAR31;
    }
    if (strlen(VAR4->VAR28) > VAR32)
    {
        fprintf(VAR15, "", VAR32);
        return -VAR17;
    }
    if (memcmp(&VAR4->VAR33, &VAR5, sizeof(VAR5)) == 0)
    {
        memcpy(&VAR4->VAR33, &VAR7, sizeof(VAR7));
        VAR4->VAR33.VAR6[4] += (VAR8++);
    }
    if (!VAR4->VAR34)
    {
        memcpy(&VAR4->VAR34, &VAR4->VAR33, sizeof(VAR4->VAR33));
    }
    if (VAR4->VAR35 > VAR36)
    {
        VAR4->VAR35 = VAR36;
    }
    VAR4->VAR37 = FUN13(VAR38 *, FUN14(VAR4));
    for (VAR9 = 0; VAR9 < FUN14(VAR4); VAR9++)
    {
        VAR38 *VAR39 = FUN15(VAR4, VAR9);
        if (VAR9 == VAR40)
        {
            FUN16(VAR39, VAR41, VAR42);
        }
        else if (VAR9 == VAR43)
        {
            FUN16(VAR39, NULL, VAR44);
        }
        else if (VAR9 % 2 == 0)
        {
            FUN16(VAR39, VAR45, FUN17((VAR9 - 2) / 2));
        }
        else if (VAR9 % 2 == 1)
        {
            FUN16(VAR39, NULL, FUN18((VAR9 - 3) / 2));
        }
        VAR4->VAR37[VAR9] = VAR39;
    }
    for (VAR9 = 0; VAR9 < VAR4->VAR35; VAR9++)
    {
        VAR46 *VAR47 = FUN19(VAR4, VAR4->VAR28, &VAR4->VAR33, VAR9, &VAR4->VAR48[VAR9]);
        VAR4->VAR49[VAR9] = VAR47;
        FUN20(VAR47, VAR4->VAR14);
    }
    FUN21(&VAR50, VAR4, VAR51);
    return 0;
VAR31:
    FUN22(VAR4);
VAR27:
    FUN23(FUN8(&VAR4->VAR24));
    FUN23(FUN8(&VAR4->VAR19));
VAR18:
    for (VAR9 = 0; VAR9 < VAR52; VAR9++)
    {
        if (VAR4->VAR11[VAR9])
        {
            FUN24(VAR4->VAR11[VAR9]);
        }
    }
    return VAR10;
}