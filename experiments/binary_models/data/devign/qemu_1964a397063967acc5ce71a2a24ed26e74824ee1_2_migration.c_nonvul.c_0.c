static int FUN1(void *VAR1, const VAR2 *VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR1;
    int VAR8;
    FUN2("" VAR9 "", VAR5, VAR4);
    if (VAR5 <= 0)
    {
        return VAR5;
    }
    FUN3(VAR7->VAR10, VAR3, VAR5);
    VAR8 = FUN4(VAR7->VAR10);
    if (VAR8)
    {
        return VAR8;
    }
    return VAR5;
}