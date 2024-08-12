static int FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    char VAR4[VAR5], VAR6[VAR5];
    char *VAR7, *VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    memset(VAR4, 0, sizeof(VAR4));
    if (FUN2(VAR2->VAR12, VAR10->VAR13, VAR4, VAR5) != VAR5)
    {
        return -VAR14;
    }
    VAR8 = strstr(VAR4, "");
    FUN3(VAR6, sizeof(VAR6), VAR8);
    VAR7 = strstr(VAR4, "");
    if (VAR7 != NULL)
    {
        VAR7 += sizeof("");
        snprintf(VAR7, sizeof(VAR4) - (VAR7 - VAR4), "", VAR3);
        FUN4(VAR4, sizeof(VAR4), VAR6);
    }
    if (FUN5(VAR2->VAR12, VAR10->VAR13, VAR4, VAR5) < 0)
    {
        return -VAR14;
    }
    return 0;
}