static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8->VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14 = VAR4->VAR15->VAR16;
    uint32_t VAR17 = 1 << 0;
    CFDataRef VAR18;
    OSStatus VAR19;
    if (!VAR7->VAR20)
        return VAR21;
    VAR18 = FUN2(VAR22, VAR7->VAR23, VAR7->VAR20);
    VAR19 = FUN3(VAR11->VAR24, 0, VAR18, NULL);
    if (VAR19 == VAR25)
        VAR19 = FUN4(VAR11->VAR24, VAR17);
    FUN5(VAR18);
    if (!VAR7->VAR14)
        return VAR26;
    if (VAR19 != VAR25)
    {
        FUN6(VAR2, VAR27, "", VAR19);
        return VAR26;
    }
    FUN7(&VAR14->VAR28[0]);
    VAR14->VAR28[0] = FUN8((VAR29 *)VAR7->VAR14, sizeof(VAR7->VAR14), VAR30, NULL, VAR31);
    if (!VAR14->VAR28[0])
        return FUN9(VAR32);
    VAR14->VAR33[3] = (VAR29 *)VAR7->VAR14;
    VAR7->VAR14 = NULL;
    return 0;
}