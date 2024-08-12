static int FUN1(void *VAR1, VAR2 *VAR3, int VAR4, enum AVIODataMarkerType VAR5, int64_t VAR6)
{
    char VAR7[30], VAR8[5] = {0};
    const char *VAR9;
    switch (VAR5)
    {
    case VAR10:
        VAR9 = "";
        break;
    case VAR11:
        VAR9 = "";
        break;
    case VAR12:
        VAR9 = "";
        break;
    case VAR13:
        VAR9 = "";
        break;
    case VAR14:
        VAR9 = "";
        break;
    }
    if (VAR6 == VAR15)
        snprintf(VAR7, sizeof(VAR7), "");
    else
        snprintf(VAR7, sizeof(VAR7), "" VAR16, VAR6);
    if (VAR5 != VAR13 && VAR5 != VAR14 && (VAR5 != VAR10 || VAR17 == 0) && VAR4 >= 8)
        memcpy(VAR8, &VAR3[4], 4);
    else
        snprintf(VAR8, sizeof(VAR8), "");
    FUN2("", VAR4, VAR7, VAR9, VAR8);
    return FUN3(VAR1, VAR3, VAR4);