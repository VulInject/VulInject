void FUN1(void)
{
    VAR1 *VAR2 = FUN2(FUN3());
    VAR3 *VAR4 = FUN4(VAR2);
    AcpiBuildTables VAR5;
    VAR6 *VAR7;
    if (!VAR2->VAR8)
    {
        FUN5("");
        return;
    }
    if (!VAR4->VAR9)
    {
        FUN5("");
        return;
    }
    if (!VAR10)
    {
        FUN5("");
        return;
    }
    VAR7 = FUN6(sizeof *VAR7);
    FUN7();
    FUN8(&VAR5);
    FUN9(&VAR5, FUN10(VAR2));
    VAR7->VAR11 = FUN11(VAR7, VAR5.VAR12, VAR13, VAR14);
    assert(VAR7->VAR11 != NULL);
    VAR7->VAR15 = FUN11(VAR7, VAR5.VAR16->VAR17, "", 0);
    FUN12(VAR2->VAR8, VAR18, VAR5.VAR19->VAR20, FUN13(VAR5.VAR19));
    if (!VAR4->VAR21)
    {
        uint32_t VAR22 = FUN13(VAR5.VAR23);
        VAR7->VAR23 = FUN14(VAR5.VAR23->VAR20, VAR22);
        FUN15(VAR2->VAR8, VAR24, VAR25, VAR7, VAR7->VAR23, VAR22);
        VAR7->VAR26 = NULL;
    }
    else
    {
        VAR7->VAR23 = NULL;
        VAR7->VAR26 = FUN11(VAR7, VAR5.VAR23, VAR24, 0);
    }
    FUN16(VAR27, VAR7);
    FUN17(VAR7);
    FUN18(NULL, 0, &VAR28, VAR7);
    FUN19(&VAR5, false);
}