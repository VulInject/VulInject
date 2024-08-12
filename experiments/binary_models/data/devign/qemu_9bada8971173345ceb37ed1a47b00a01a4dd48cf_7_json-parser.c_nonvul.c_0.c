static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5;
    VAR5 = FUN2(VAR3);
    assert(VAR5 && VAR5->VAR6 == VAR7);
    if (!strcmp(VAR5->VAR8, ""))
    {
        return FUN3(FUN4(true));
    }
    else if (!strcmp(VAR5->VAR8, ""))
    {
        return FUN3(FUN4(false));
    }
    else if (!strcmp(VAR5->VAR8, ""))
    {
        return FUN5();
    }
    FUN6(VAR3, VAR5, "", VAR5->VAR8);
    return NULL;
}