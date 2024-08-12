static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5, int VAR6, int VAR7)
{
    int VAR8 = -1, VAR9 = sizeof(VAR8);
    if (FUN2(VAR6, VAR10, VAR11, (char *)&VAR8, (VAR12 *)&VAR9) < 0)
    {
        fprintf(VAR13, "", VAR6);
        return NULL;
    }
    switch (VAR8)
    {
    case VAR14:
        return FUN3(VAR3, VAR4, VAR5, VAR6, VAR7);
    case VAR15:
        return FUN4(VAR3, VAR4, VAR5, VAR6, VAR7);
    default:
        fprintf(VAR13, "", VAR8, VAR6);
        return FUN4(VAR3, VAR4, VAR5, VAR6, VAR7);
    }
    return NULL;
}