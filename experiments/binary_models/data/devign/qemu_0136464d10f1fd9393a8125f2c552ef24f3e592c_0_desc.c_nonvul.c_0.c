void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5.VAR6->VAR7;
    const VAR8 *VAR9 = FUN2(VAR2);
    int VAR10 = VAR9->VAR11.VAR12;
    char *VAR13, *VAR14;
    if (VAR2->VAR14)
    {
        FUN3(VAR2, VAR10, VAR2->VAR14);
        return;
    }
    assert(VAR10 != 0 && VAR9->VAR15[VAR10] != NULL);
    VAR13 = FUN4(VAR4);
    if (VAR13)
    {
        VAR14 = FUN5("", VAR9->VAR15[VAR10], VAR13, VAR2->VAR16->VAR13);
    }
    else
    {
        VAR14 = FUN5("", VAR9->VAR15[VAR10], VAR2->VAR16->VAR13);
    }
    FUN3(VAR2, VAR10, VAR14);
    FUN6(VAR13);
    FUN6(VAR14);
}