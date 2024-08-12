void FUN1(VAR1 *VAR2)
{
    AcpiBuildTables VAR3;
    VAR4 *VAR5;
    if (!VAR2->VAR6)
    {
        FUN2();
        return;
    }
    if (!VAR7)
    {
        FUN2();
        return;
    }
    VAR5 = FUN3(sizeof *VAR5);
    VAR5->VAR2 = VAR2;
    FUN4(&VAR3);
    FUN5(VAR5->VAR2, &VAR3);
    VAR5->VAR8 = FUN6(VAR5, VAR3.VAR9, VAR10, VAR11);
    assert(VAR5->VAR8 != NULL);
    VAR5->VAR12 = FUN6(VAR5, VAR3.VAR13->VAR14, "", 0);
    FUN7(VAR2->VAR6, VAR15, VAR3.VAR16->VAR17, FUN8(VAR3.VAR16));
    VAR5->VAR18 = FUN6(VAR5, VAR3.VAR19, VAR20, 0);
    FUN9(VAR21, VAR5);
    FUN10(VAR5);
    FUN11(NULL, 0, &VAR22, VAR5);
    FUN12(&VAR3, false);
}