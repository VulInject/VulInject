int FUN1(int VAR1, char *VAR2, size_t VAR3)
{
    int VAR4 = 0;
    const char *VAR5 = NULL;
    switch (VAR1)
    {
    case VAR6:
        VAR5 = "";
        break;
    case VAR7:
        VAR5 = "";
        break;
    case VAR8:
        VAR5 = "";
        break;
    case VAR9:
        VAR5 = "";
        break;
    }
    if (VAR5)
    {
        FUN2(VAR2, VAR5, VAR3);
    }
    else
    {
        VAR4 = FUN3(FUN4(VAR1), VAR2, VAR3);
        VAR4 = -1;
        if (VAR4 < 0)
            snprintf(VAR2, VAR3, "", VAR1);
    }
    return VAR4;
}