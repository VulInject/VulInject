int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    int VAR9 = FUN2(VAR4, "", 0);
    const char *VAR10 = FUN3(VAR4, "");
    VAR8 = FUN4(VAR10);
    if (!VAR8)
    {
        FUN5(VAR11, VAR10);
        return -1;
    }
    return FUN6(VAR2, VAR8, VAR9);
}