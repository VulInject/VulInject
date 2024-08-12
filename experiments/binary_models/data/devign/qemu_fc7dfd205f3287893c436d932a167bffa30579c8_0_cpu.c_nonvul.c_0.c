static void FUN1(VAR1 *VAR2, FeatureWord VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    int VAR7;
    char **VAR8;
    VAR9 *VAR10 = &VAR11[VAR3];
    if (!VAR10->VAR12[VAR4])
    {
        return;
    }
    VAR8 = FUN3(VAR10->VAR12[VAR4], "", 0);
    assert(!strchr(VAR8[0], ''));
    FUN4(VAR2, VAR8[0], &VAR2->VAR13.VAR14[VAR3], VAR4);
    for (VAR7 = 1; VAR8[VAR7]; VAR7++)
    {
        assert(!strchr(VAR8[VAR7], ''));
        FUN5(VAR6, VAR8[VAR7], VAR6, VAR8[0], &VAR15);
    }
    FUN6(VAR8);
}