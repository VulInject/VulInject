static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    char *VAR7;
    char VAR8[VAR9];
    char VAR10[1024];
    if (FUN2(VAR5->VAR11, 0x200, VAR8, VAR9) != VAR9)
        return -1;
    if ((VAR7 = strstr(VAR8, "")) != 0)
    {
        char *VAR12;
        struct stat VAR13;
        VAR7 += sizeof("") + 1;
        if ((VAR12 = strchr(VAR7, '')) == 0)
            return -1;
        strncpy(VAR5->VAR11->VAR14, VAR7, VAR12 - VAR7);
        if (FUN3(VAR5->VAR11->VAR14, &VAR13) != 0)
        {
            FUN4(VAR10, sizeof(VAR10), VAR3, VAR5->VAR11->VAR14);
        }
        else
        {
            strcpy(VAR10, VAR5->VAR11->VAR14);
        }
        VAR5->VAR11->VAR15 = FUN5("");
        if (!VAR5->VAR11->VAR15)
        {
        VAR16:
            FUN6(VAR5->VAR11);
            return -1;
        }
        if (FUN7(VAR5->VAR11->VAR15, VAR10, 0) < 0)
            goto VAR16;
    }
    return 0;
}