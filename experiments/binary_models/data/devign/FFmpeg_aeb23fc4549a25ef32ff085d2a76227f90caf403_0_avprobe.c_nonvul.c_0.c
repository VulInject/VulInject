static void FUN1(const char *VAR1)
{
    int VAR2;
    VAR3 *VAR4 = VAR5.VAR6 + VAR5.VAR7 - 1;
    if (VAR4->VAR8)
        FUN2(VAR9, "");
    FUN2(VAR9, "");
    for (VAR2 = 1; VAR2 < VAR5.VAR7; VAR2++)
    {
        VAR4 = VAR5.VAR6 + VAR2;
        FUN2(VAR9, "", VAR4->VAR1);
        if (VAR4->VAR10 >= 0)
            FUN2(VAR9, "" VAR11 "", VAR4->VAR10);
    }
    FUN2(VAR9, "", VAR1);
    if (VAR4->VAR12 == VAR13)
        FUN2(VAR9, "" VAR11 "", VAR4->VAR8);
    FUN2(VAR9, "");
}