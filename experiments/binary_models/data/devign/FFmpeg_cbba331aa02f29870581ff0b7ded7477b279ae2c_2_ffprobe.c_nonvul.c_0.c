static void FUN1(VAR1 *VAR2, const char *VAR3, int64_t VAR4, const VAR5 *VAR6, int VAR7)
{
    char VAR8[128];
    if ((!VAR7 && VAR4 == VAR9) || (VAR7 && VAR4 == 0))
    {
        FUN2(VAR2, VAR3, "", VAR10);
    }
    else
    {
        double VAR11 = VAR4 * FUN3(*VAR6);
        struct unit_value VAR12;
        VAR12.VAR13.VAR11 = VAR11;
        VAR12.VAR14 = VAR15;
        FUN4(VAR8, sizeof(VAR8), VAR12);
        FUN2(VAR2, VAR3, VAR8, 0);
    }
}