char *FUN1(int VAR1, const char *VAR2)
{
    int VAR3;
    const char *VAR4;
    char *VAR5;
    if (FUN2(VAR2, VAR6) == 0)
    {
        return FUN3(VAR2);
    }
    switch (VAR1)
    {
    case VAR7:
        VAR4 = "";
        break;
    case VAR8:
        VAR4 = "";
        break;
    default:
        FUN4();
    }
    VAR3 = strlen(VAR9) + strlen(VAR2) + strlen(VAR4) + 2;
    VAR5 = FUN5(VAR3);
    snprintf(VAR5, VAR3, "", VAR9, VAR4, VAR2);
    if (FUN2(VAR5, VAR6))
    {
        FUN6(VAR5);
        return NULL;
    }
    return VAR5;
}