void FUN1(VAR1 *VAR2, VAR3 *VAR4, fprintf_function VAR5, int VAR6)
{
    int VAR7, VAR8;
    FUN2(VAR4, "", VAR2->VAR9);
    for (VAR7 = VAR8 = 0; VAR7 < 256; ++VAR7)
    {
        if (VAR10[VAR7])
        {
            FUN2(VAR4, "", VAR10[VAR7], VAR2->VAR11[VAR7], (VAR8++ % 4) == 3 ? '' : '');
        }
    }
    FUN2(VAR4, (VAR8 % 4) == 0 ? "" : "");
    for (VAR7 = VAR8 = 0; VAR7 < 256; ++VAR7)
    {
        if (VAR12[VAR7])
        {
            FUN2(VAR4, "", VAR12[VAR7], VAR2->VAR13[VAR7], (VAR8++ % 4) == 3 ? '' : '');
        }
    }
    FUN2(VAR4, (VAR8 % 4) == 0 ? "" : "");
    for (VAR7 = 0; VAR7 < 16; ++VAR7)
    {
        FUN2(VAR4, "", VAR7, VAR2->VAR14[VAR7], (VAR7 % 4) == 3 ? '' : '');
    }
}