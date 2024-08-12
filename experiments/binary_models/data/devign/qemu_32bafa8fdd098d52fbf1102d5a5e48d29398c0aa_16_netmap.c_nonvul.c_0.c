int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    const VAR8 *VAR9 = VAR2->VAR10.VAR11.VAR12;
    struct VAR13 *VAR14;
    VAR4 *VAR15;
    VAR6 *VAR16 = NULL;
    VAR17 *VAR18;
    VAR14 = FUN2(VAR9, &VAR16);
    if (VAR16)
    {
        FUN3(VAR7, VAR16);
        return -1;
    }
    VAR15 = FUN4(&VAR19, VAR5, "", VAR3);
    VAR18 = FUN5(VAR17, VAR15, VAR15);
    VAR18->VAR14 = VAR14;
    VAR18->VAR20 = FUN6(VAR14->VAR21, 0);
    VAR18->VAR22 = FUN7(VAR14->VAR21, 0);
    VAR18->VAR23 = 0;
    FUN8(VAR18->VAR24, sizeof(VAR18->VAR24), VAR9->VAR24);
    FUN9(VAR18, true);
    return 0;
}