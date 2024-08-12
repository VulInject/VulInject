static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR4 *VAR7;
    char VAR8[VAR9], VAR10[VAR11];
    char *VAR12 = NULL;
    uint32_t VAR13;
    uint32_t VAR14 = 0;
    int VAR15 = 0, VAR16;
    VAR7 = FUN2(sizeof(VAR4));
    memcpy(VAR7, VAR5, sizeof(VAR4));
    FUN3(VAR8, sizeof(VAR8), VAR5->VAR17);
    VAR14 = FUN4(VAR3, NULL, 10);
    if (VAR14)
    {
        VAR10[0] = 0;
    }
    else
    {
        FUN3(VAR10, sizeof(VAR10), VAR5->VAR17);
    }
    VAR15 = FUN5(VAR5, VAR8, VAR14, VAR10, &VAR13, 1);
    if (VAR15)
    {
        FUN6("");
        goto VAR18;
    }
    VAR16 = FUN7(VAR5->VAR19, VAR5->VAR20);
    if (VAR16 < 0)
    {
        FUN6("");
        VAR15 = VAR16;
        goto VAR18;
    }
    VAR12 = FUN2(VAR21);
    VAR15 = FUN8(VAR16, VAR12, FUN9(VAR13), VAR5->VAR22.VAR23, VAR21, 0, VAR5->VAR24);
    FUN10(VAR16);
    if (VAR15)
    {
        goto VAR18;
    }
    memcpy(&VAR5->VAR22, VAR12, sizeof(VAR5->VAR22));
    if (!VAR5->VAR22.VAR25)
    {
        FUN6("");
        VAR15 = -VAR26;
        goto VAR18;
    }
    VAR5->VAR27 = true;
    FUN11(VAR12);
    FUN11(VAR7);
    return 0;
VAR18:
    memcpy(VAR5, VAR7, sizeof(VAR4));
    FUN11(VAR12);
    FUN11(VAR7);
    FUN6("");
    return VAR15;
}