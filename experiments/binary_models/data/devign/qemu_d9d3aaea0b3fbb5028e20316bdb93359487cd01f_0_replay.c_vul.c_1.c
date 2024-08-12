void FUN1(VAR1 *VAR2)
{
    const char *VAR3;
    const char *VAR4;
    ReplayMode VAR5 = VAR6;
    Location VAR7;
    if (!VAR2)
    {
        return;
    }
    FUN2(&VAR7);
    FUN3(VAR2);
    VAR4 = FUN4(VAR2, "");
    if (!VAR4)
    {
        return;
    }
    else if (!strcmp(VAR4, ""))
    {
        VAR5 = VAR8;
    }
    else if (!strcmp(VAR4, ""))
    {
        VAR5 = VAR9;
    }
    else
    {
        FUN5("", VAR4);
        FUN6(1);
    }
    VAR3 = FUN4(VAR2, "");
    if (!VAR3)
    {
        FUN5("");
        FUN6(1);
    }
    FUN7(VAR3, VAR5);
    FUN8(&VAR7);
}