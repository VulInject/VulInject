static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, const char *VAR5, VAR6 **VAR7)
{
    if (strcmp(VAR5, "") == 0)
    {
        return 0;
    }
    if (FUN2(VAR5, "", 4) == 0)
    {
        return FUN3(VAR2, &VAR5[4], VAR8, 16, VAR7);
    }
    if (FUN2(VAR5, "", 5) == 0)
    {
        return FUN3(VAR2, &VAR5[5], VAR9, 20, VAR7);
    }
    if (strcmp(VAR5, "") == 0)
    {
        return FUN4(VAR2, VAR3, VAR4, VAR7);
    }
    FUN5(VAR7, "", VAR5);
    return -VAR10;
}