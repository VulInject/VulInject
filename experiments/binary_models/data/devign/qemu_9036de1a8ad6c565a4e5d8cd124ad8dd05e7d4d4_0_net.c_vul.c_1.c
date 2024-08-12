void FUN1(VAR1 *VAR2, int VAR3, const char *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR6 = FUN2(VAR3);
    if (!VAR6)
    {
        FUN3(VAR2, "", VAR3);
        return;
    }
    for (VAR8 = VAR6->VAR9; VAR8 != NULL; VAR8 = VAR8->VAR10)
        if (!strcmp(VAR8->VAR11, VAR4))
            break;
    if (!VAR8)
    {
        FUN3(VAR2, "", VAR4);
        return;
    }
    FUN4(VAR8);
}