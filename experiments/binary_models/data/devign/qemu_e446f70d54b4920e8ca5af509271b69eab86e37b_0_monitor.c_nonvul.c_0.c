VAR1 *FUN1(bool VAR2, int64_t VAR3, bool VAR4, const char *VAR5, VAR6 **VAR7)
{
    int VAR8;
    VAR9 *VAR10 = VAR11;
    VAR1 *VAR12;
    VAR8 = FUN2(VAR10->VAR13);
    if (VAR8 == -1)
    {
        FUN3(VAR7, VAR14);
        goto VAR15;
    }
    VAR12 = FUN4(VAR8, VAR2, VAR3, VAR4, VAR5, VAR7);
    if (VAR12)
    {
        return VAR12;
    }
VAR15:
    if (VAR8 != -1)
    {
        close(VAR8);
    }
    return NULL;
}