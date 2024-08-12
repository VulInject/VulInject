VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5, const unsigned int VAR6[4], int VAR7, const char *VAR8)
{
    VAR9 *VAR10 = FUN2(VAR11 * sizeof(*VAR10));
    target_phys_addr_t VAR12[VAR11];
    target_phys_addr_t VAR13[VAR11];
    VAR1 *VAR14;
    VAR15 *VAR16;
    VAR15 *VAR17;
    VAR15 *VAR18;
    if (VAR8 == NULL)
    {
        VAR8 = "";
    }
    VAR14 = FUN3(VAR8);
    if (!VAR14)
    {
        fprintf(VAR19, "");
        FUN4(1);
    }
    FUN5(VAR14, NULL, NULL);
    VAR17 = FUN6(sizeof(VAR15) * VAR20);
    VAR17[VAR21] = ((VAR15 *)VAR14->VAR22)[VAR23];
    VAR17[VAR24] = ((VAR15 *)VAR14->VAR22)[VAR25];
    VAR16 = FUN7(VAR14, VAR17, 0x0C0, 0, 1);
    memset(VAR12, 0, sizeof(VAR12));
    memset(VAR13, 0, sizeof(VAR13));
    *VAR3 = FUN8(*VAR3, VAR11, VAR10, VAR12, VAR13, VAR26);
    FUN9(VAR14, VAR16[14], VAR11, VAR10, VAR12, VAR13, VAR7);
    VAR18 = FUN2(sizeof(VAR15) * 4);
    VAR18[0] = VAR16[VAR6[0]];
    VAR18[1] = VAR16[VAR6[1]];
    VAR18[2] = VAR16[VAR6[2]];
    VAR18[3] = VAR16[VAR6[3]];
    *VAR5 = FUN10(VAR14, VAR18, VAR27, VAR28, VAR29, VAR30);
    if (!*VAR5)
        FUN11("");
    FUN12(VAR31, VAR32);
    if (VAR33[0] != NULL)
    {
        FUN13(0xef600300, 0, VAR16[0], VAR34, VAR33[0], 1, 1);
    }
    if (VAR33[1] != NULL)
    {
        FUN13(0xef600400, 0, VAR16[1], VAR34, VAR33[1], 1, 1);
    }
    return VAR14;
}