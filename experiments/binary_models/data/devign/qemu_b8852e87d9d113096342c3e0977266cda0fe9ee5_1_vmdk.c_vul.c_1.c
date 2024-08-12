static int FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    char VAR4[VAR5], VAR6[VAR5];
    char *VAR7, *VAR8;
    if (FUN2(VAR2->VAR9, 0x200, VAR4, VAR5) != VAR5)
        return -1;
    VAR8 = strstr(VAR4, "");
    FUN3(VAR6, sizeof(VAR6), VAR8);
    if ((VAR7 = strstr(VAR4, "")) != NULL)
    {
        VAR7 += sizeof("");
        snprintf(VAR7, sizeof(VAR4) - (VAR7 - VAR4), "", VAR3);
        FUN4(VAR4, sizeof(VAR4), VAR6);
    }
    if (FUN5(VAR2->VAR9, 0x200, VAR4, VAR5) != VAR5)
        return -1;
    return 0;
}