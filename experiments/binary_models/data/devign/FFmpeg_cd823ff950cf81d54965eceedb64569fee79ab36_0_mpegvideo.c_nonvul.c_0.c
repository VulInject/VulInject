static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if (VAR2->VAR6->VAR7)
    {
        assert(!VAR4->VAR8);
        if (VAR2->VAR6->VAR7->VAR9)
        {
            VAR4->VAR8 = FUN2(VAR2->VAR6->VAR7->VAR9);
            if (!VAR4->VAR8)
            {
                FUN3(VAR2->VAR6, VAR10, "");
                return -1;
            }
        }
    }
    VAR5 = VAR2->VAR6->FUN4(VAR2->VAR6, (VAR11 *)VAR4);
    if (VAR5 < 0 || !VAR4->VAR12 || !VAR4->VAR13 || !VAR4->VAR14[0])
    {
        FUN3(VAR2->VAR6, VAR10, "", VAR5, VAR4->VAR12, VAR4->VAR13, VAR4->VAR14[0]);
        FUN5(&VAR4->VAR8);
        return -1;
    }
    if (VAR2->VAR15 && (VAR2->VAR15 != VAR4->VAR15[0] || VAR2->VAR16 != VAR4->VAR15[1]))
    {
        FUN3(VAR2->VAR6, VAR10, "");
        FUN6(VAR2, VAR4);
        return -1;
    }
    if (VAR4->VAR15[1] != VAR4->VAR15[2])
    {
        FUN3(VAR2->VAR6, VAR10, "");
        FUN6(VAR2, VAR4);
        return -1;
    }
    return 0;
}