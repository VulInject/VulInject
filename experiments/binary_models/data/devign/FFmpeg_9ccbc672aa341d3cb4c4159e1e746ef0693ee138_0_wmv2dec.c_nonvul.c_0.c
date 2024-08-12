int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = (VAR3 *)VAR2;
    int VAR5;
    {
        int VAR6;
        for (VAR6 = 0; VAR6 < VAR2->VAR7.VAR8 * 8; VAR6++)
            FUN2("", FUN3(&VAR2->VAR7));
        FUN2("");
        return -1;
    }
    if (VAR2->VAR9 == 0)
        FUN4(VAR4);
    VAR2->VAR10 = FUN3(&VAR2->VAR7) + 1;
    if (VAR2->VAR10 == VAR11)
    {
        VAR5 = FUN5(&VAR2->VAR7, 7);
        FUN6(VAR2->VAR12, VAR13, "", VAR5);
    }
    VAR2->VAR14 = VAR2->VAR15 = FUN5(&VAR2->VAR7, 5);
    if (VAR2->VAR15 <= 0)
        return -1;
    return 0;
}