VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 **VAR7, const unsigned int VAR8[4], int VAR9, const char *VAR10)
{
    VAR2 *VAR11 = FUN2(VAR12 * sizeof(*VAR11));
    target_phys_addr_t VAR13[VAR12];
    target_phys_addr_t VAR14[VAR12];
    VAR1 *VAR15;
    VAR16 *VAR17;
    VAR16 *VAR18;
    VAR16 *VAR19;
    if (VAR10 == NULL)
    {
        VAR10 = "";
    }
    VAR15 = FUN3(VAR10);
    if (!VAR15)
    {
        fprintf(VAR20, "");
        FUN4(1);
    }
    FUN5(VAR15, 400000000, 0);
    FUN6(VAR15, NULL, NULL);
    VAR18 = FUN7(sizeof(VAR16) * VAR21);
    VAR18[VAR22] = ((VAR16 *)VAR15->VAR23)[VAR24];
    VAR18[VAR25] = ((VAR16 *)VAR15->VAR23)[VAR26];
    VAR17 = FUN8(VAR15, VAR18, 0x0C0, 0, 1);
    memset(VAR13, 0, sizeof(VAR13));
    memset(VAR14, 0, sizeof(VAR14));
    *VAR5 = FUN9(*VAR5, VAR12, VAR11, VAR13, VAR14, VAR27);
    FUN10(VAR15, VAR17[14], VAR12, VAR11, VAR13, VAR14, VAR9);
    VAR19 = FUN2(sizeof(VAR16) * 4);
    VAR19[0] = VAR17[VAR8[0]];
    VAR19[1] = VAR17[VAR8[1]];
    VAR19[2] = VAR17[VAR8[2]];
    VAR19[3] = VAR17[VAR8[3]];
    *VAR7 = FUN11(VAR15, VAR19, VAR28, VAR29, VAR30, VAR31);
    if (!*VAR7)
        FUN12("");
    FUN13(VAR32, VAR33);
    if (VAR34[0] != NULL)
    {
        FUN14(VAR3, 0xef600300, 0, VAR17[0], VAR35, VAR34[0], VAR36);
    }
    if (VAR34[1] != NULL)
    {
        FUN14(VAR3, 0xef600400, 0, VAR17[1], VAR35, VAR34[1], VAR36);
    }
    return VAR15;
}