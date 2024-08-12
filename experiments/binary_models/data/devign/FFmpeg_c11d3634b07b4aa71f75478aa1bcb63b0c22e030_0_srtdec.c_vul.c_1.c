static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    if (VAR6 >= 0 && VAR7 >= 0)
    {
        if (VAR8 >= 0 && VAR9 >= 0 && (VAR8 != VAR6 || VAR9 != VAR7) && VAR8 >= VAR6 && VAR9 >= VAR7)
        {
            const int VAR10 = VAR6 + (VAR8 - VAR6) / 2;
            const int VAR11 = VAR7 + (VAR9 - VAR7) / 2;
            const int VAR12 = VAR10 * VAR13 / 720;
            const int VAR14 = VAR11 * VAR15 / 480;
            FUN2(VAR4, "", VAR12, VAR14);
        }
        else
        {
            const int VAR12 = VAR6 * VAR13 / 720;
            const int VAR14 = VAR7 * VAR15 / 480;
            FUN2(VAR4, "", VAR12, VAR14);
        }
    }
    FUN3(VAR2, VAR4, VAR5);
}