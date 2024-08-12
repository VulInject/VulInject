static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2, VAR4);
    const char *VAR8;
    VAR8 = FUN3(VAR5, "", 2) == 0 ? "" VAR9 : "" VAR10;
    if (sscanf(VAR5, VAR8, VAR7) != 1)
        return -VAR11;
    return 0;
}