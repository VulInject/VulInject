static int FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, const char *VAR5, VAR6 **VAR7)
{
    nbd_option VAR8;
    FUN2(sizeof(VAR8) != 16);
    if (VAR4 == -1)
    {
        VAR8.VAR9 = VAR4 = strlen(VAR5);
    }
    FUN3("" VAR10 "" VAR10, VAR3, VAR4);
    FUN4(&VAR8.VAR11, VAR12);
    FUN5(&VAR8.VAR13, VAR3);
    FUN5(&VAR8.VAR9, VAR4);
    if (FUN6(VAR2, &VAR8, sizeof(VAR8), VAR7) < 0)
    {
        FUN7(VAR7, "");
        return -1;
    }
    if (VAR4 && FUN6(VAR2, (char *)VAR5, VAR4, VAR7) < 0)
    {
        FUN7(VAR7, "");
        return -1;
    }
    return 0;
}