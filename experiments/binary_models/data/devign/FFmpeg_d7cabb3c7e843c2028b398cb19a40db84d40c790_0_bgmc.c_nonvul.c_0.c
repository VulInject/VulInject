int FUN1(VAR1 *VAR2, VAR3 **VAR4, int **VAR5)
{
    *VAR4 = FUN2(sizeof(**VAR4) * VAR6 * 16 * VAR7);
    *VAR5 = FUN2(sizeof(**VAR5) * VAR6);
    if (!*VAR4 || !*VAR5)
    {
        FUN3(VAR4, VAR5);
        FUN4(VAR2, VAR8, "");
        return FUN5(VAR9);
    }
    else
    {
        memset(*VAR5, -1, sizeof(**VAR5) * VAR6);
    }
    return 0;
}