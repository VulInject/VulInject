static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, VAR6 **VAR7)
{
    VAR6 *VAR8 = NULL;
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = FUN3(VAR4);
    VAR13 *VAR14 = FUN4(VAR12);
    VAR15 *VAR16 = VAR14->FUN5(VAR12);
    uint64_t VAR17 = FUN6(VAR16);
    uint64_t VAR18 = FUN7(VAR16);
    uint64_t VAR19;
    if (VAR18 % VAR20)
    {
        FUN8(&VAR8, ""
                               "",
                   VAR20 / VAR21);
        goto VAR22;
    }
    FUN9(VAR4, &VAR10->VAR23, VAR16, VAR17, &VAR8);
    if (VAR8)
    {
        goto VAR22;
    }
    VAR19 = FUN10(FUN11(VAR12), VAR24, &VAR8);
    if (VAR8)
    {
        FUN12(VAR4, &VAR10->VAR23, VAR16);
        goto VAR22;
    }
    FUN13(VAR4, VAR19, VAR18, VAR5, &VAR25);
VAR22:
    FUN14(VAR7, VAR8);
}