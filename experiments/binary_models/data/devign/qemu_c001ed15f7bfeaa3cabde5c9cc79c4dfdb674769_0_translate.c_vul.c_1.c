void FUN1(VAR1 *VAR2, VAR3 *VAR4, fprintf_function VAR5, int VAR6)
{
    int VAR7;
    uint32_t VAR8;
    if (!VAR2 || !VAR4)
        return;
    FUN2(VAR4, ""
                   "",
                VAR2->VAR9, VAR2->VAR10[VAR11], VAR2->VAR12, VAR2->VAR13, VAR2->VAR14, VAR2->VAR15, VAR2->VAR16, VAR2->VAR17, VAR2->VAR18);
    for (VAR7 = 0; VAR7 < 16; VAR7++)
    {
        FUN2(VAR4, "", VAR19[VAR7], VAR2->VAR20[VAR7]);
        if ((VAR7 + 1) % 4 == 0)
            FUN2(VAR4, "");
    }
    FUN2(VAR4, "");
    for (VAR7 = 0; VAR7 < 16; VAR7++)
    {
        FUN2(VAR4, "", VAR21[VAR7], VAR2->VAR10[VAR7]);
        if ((VAR7 + 1) % 4 == 0)
            FUN2(VAR4, "");
    }
    VAR8 = VAR2->VAR10[VAR22];
    FUN2(VAR4, "", VAR8);
    if (VAR8 < 256)
    {
        for (VAR7 = 0; VAR7 < 16; VAR7++)
        {
            FUN2(VAR4, "", VAR7, VAR2->VAR23[VAR8][VAR7]);
            if ((VAR7 + 1) % 4 == 0)
                FUN2(VAR4, "");
        }
    }
    FUN2(VAR4, "");
}