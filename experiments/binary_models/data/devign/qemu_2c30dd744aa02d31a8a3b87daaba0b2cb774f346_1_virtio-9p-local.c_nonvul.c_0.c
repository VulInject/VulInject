static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    const char *VAR5 = FUN2(VAR2, "");
    const char *VAR6 = FUN2(VAR2, "");
    if (!VAR5)
    {
        fprintf(VAR7, ""
                        ""
                        "");
        return -1;
    }
    if (!strcmp(VAR5, ""))
    {
        VAR4->VAR8 |= VAR9;
    }
    else if (!strcmp(VAR5, "") || !strcmp(VAR5, ""))
    {
        VAR4->VAR8 |= VAR10;
    }
    else if (!strcmp(VAR5, ""))
    {
        VAR4->VAR8 |= VAR11;
    }
    else if (!strcmp(VAR5, ""))
    {
        VAR4->VAR8 |= VAR12;
    }
    else
    {
        fprintf(VAR7, ""
                        "",
                VAR5);
        return -1;
    }
    if (!VAR6)
    {
        fprintf(VAR7, "");
        return -1;
    }
    VAR4->VAR6 = FUN3(VAR6);
    return 0;
}