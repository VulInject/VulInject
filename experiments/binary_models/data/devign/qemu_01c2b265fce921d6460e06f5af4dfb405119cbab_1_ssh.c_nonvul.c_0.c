FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, size_t VAR5, VAR6 **VAR7)
{
    const char *VAR8;
    VAR8 = FUN2(VAR2->VAR9, VAR4);
    if (!VAR8)
    {
        FUN3(VAR7, VAR2, "");
        return -VAR10;
    }
    if (FUN4((unsigned char *)VAR8, VAR5, VAR3) != 0)
    {
        FUN5(VAR7, "", VAR3);
        return -VAR11;
    }
    return 0;
}