VAR1 *FUN1(const char *VAR2, VAR3 **VAR4)
{
    VAR1 *VAR5;
    int VAR6;
    if (FUN2(VAR2))
    {
        FUN3(VAR4, "", VAR2);
        return NULL;
    }
    if (FUN4(VAR2))
    {
        FUN3(VAR4, "", VAR2);
        return NULL;
    }
    VAR5 = FUN5(sizeof(VAR1));
    FUN6(&VAR5->VAR7);
    FUN7(VAR5->VAR2, sizeof(VAR5->VAR2), VAR2);
    if (VAR2[0] != '')
    {
        FUN8(&VAR8, VAR5, VAR9);
    }
    for (VAR6 = 0; VAR6 < VAR10; VAR6++)
    {
        FUN6(&VAR5->VAR11[VAR6]);
    }
    FUN9(VAR5);
    FUN10(&VAR5->VAR12);
    FUN11(&VAR5->VAR13);
    FUN12(&VAR5->VAR14[0]);
    FUN12(&VAR5->VAR14[1]);
    VAR5->VAR15 = 1;
    VAR5->VAR16 = FUN13();
    return VAR5;
}