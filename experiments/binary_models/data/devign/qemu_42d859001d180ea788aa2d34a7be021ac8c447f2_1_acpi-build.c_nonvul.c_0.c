void FUN1(VAR1 *VAR2)
{
    AcpiBuildTables VAR3;
    VAR4 *VAR5;
    if (!VAR2->VAR6)
    {
        FUN2("");
        return;
    }
    if (!VAR2->VAR7)
    {
        FUN2("");
        return;
    }
    if (!VAR8)
    {
        FUN2("");
        return;
    }
    VAR5 = FUN3(sizeof *VAR5);
    VAR5->VAR2 = VAR2;
    FUN4();
    FUN5(&VAR3);
    FUN6(VAR5->VAR2, &VAR3);
    VAR5->VAR9 = FUN7(VAR5, VAR3.VAR10, VAR11, VAR12);
    assert(VAR5->VAR9 != VAR13);
    VAR5->VAR14 = FUN7(VAR5, VAR3.VAR15, "", 0);
    FUN8(VAR2->VAR6, VAR16, VAR3.VAR17->VAR18, FUN9(VAR3.VAR17));
    if (VAR2->VAR19)
    {
        FUN10(VAR2->VAR6, VAR20, VAR21, VAR5, VAR3.VAR22->VAR18, FUN9(VAR3.VAR22));
        VAR5->VAR22 = VAR3.VAR22->VAR18;
        VAR5->VAR23 = (VAR24)-1;
    }
    else
    {
        VAR5->VAR22 = NULL;
        VAR5->VAR23 = FUN7(VAR5, VAR3.VAR22, VAR20, 0);
    }
    FUN11(VAR25, VAR5);
    FUN12(VAR5);
    FUN13(NULL, 0, &VAR26, VAR5);
    FUN14(&VAR3, false);
}