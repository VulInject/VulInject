static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, const char *VAR5, VAR6 *VAR7, bool VAR8)
{
    int VAR9 = 0;
    int64_t VAR10;
    VAR9 = FUN2(VAR2, VAR3 << VAR11, VAR7, VAR4 << VAR11);
    if (VAR9 < 0)
    {
        FUN3("" VAR12 "", FUN4(VAR3), VAR5, strerror(-VAR9));
        return VAR9;
    }
    VAR10 = FUN5(VAR7, VAR4 * VAR13);
    if (VAR10 >= 0)
    {
        FUN6(VAR8, "" VAR12 "", FUN4(VAR3) + VAR10);
        return 1;
    }
    return 0;
}