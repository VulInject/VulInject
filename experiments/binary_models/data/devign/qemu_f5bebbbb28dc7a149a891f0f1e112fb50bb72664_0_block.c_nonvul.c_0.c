VAR1 *FUN1(const char *VAR2, VAR3 **VAR4)
{
    VAR1 *VAR5;
    int VAR6;
    if (*VAR2 && !FUN2(VAR2))
    {
        FUN3(VAR4, "");
        return NULL;
    }
    if (FUN4(VAR2))
    {
        FUN3(VAR4, "", VAR2);
        return NULL;
    }
    if (FUN5(VAR2))
    {
        FUN3(VAR4, "", VAR2);
        return NULL;
    }
    VAR5 = FUN6(VAR1, 1);
    FUN7(&VAR5->VAR7);
    FUN8(VAR5->VAR2, sizeof(VAR5->VAR2), VAR2);
    if (VAR2[0] != '')
    {
        FUN9(&VAR8, VAR5, VAR9);
    }
    for (VAR6 = 0; VAR6 < VAR10; VAR6++)
    {
        FUN7(&VAR5->VAR11[VAR6]);
    }
    FUN10(VAR5);
    FUN11(&VAR5->VAR12);
    FUN12(&VAR5->VAR13);
    FUN13(&VAR5->VAR14[0]);
    FUN13(&VAR5->VAR14[1]);
    VAR5->VAR15 = 1;
    VAR5->VAR16 = FUN14();
    return VAR5;
}