FUN1(FUN2(VAR1) != VAR2)
void FUN3(MonitorEvent VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    const char *VAR8;
    VAR9 *VAR10;
    assert(VAR3 < VAR2);
    VAR8 = VAR1[VAR3];
    assert(VAR8 != NULL);
    VAR7 = FUN4();
    FUN5(VAR7);
    FUN6(VAR7, "", FUN7(VAR8));
    if (VAR5)
    {
        FUN8(VAR5);
        FUN9(VAR7, "", VAR5);
    }
    FUN10(VAR10, &VAR11, VAR12)
    {
        if (FUN11(VAR10) && FUN12(VAR10))
        {
            FUN13(VAR10, FUN14(VAR7));
        }
    }
    FUN15(VAR7);
}