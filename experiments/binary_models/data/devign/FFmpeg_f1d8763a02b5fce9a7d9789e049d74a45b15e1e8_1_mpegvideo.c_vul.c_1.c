static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if (VAR2->VAR6->VAR7)
    {
        assert(!VAR4->VAR8.VAR9);
        if (VAR2->VAR6->VAR7->VAR10)
        {
            VAR4->VAR8.VAR9 = FUN2(VAR2->VAR6->VAR7->VAR10);
            if (!VAR4->VAR8.VAR9)
            {
                FUN3(VAR2->VAR6, VAR11, "");
                return -1;
            }
        }
    }
    if (VAR2->VAR12 != VAR13 && VAR2->VAR12 != VAR14 && VAR2->VAR12 != VAR15)
        VAR5 = FUN4(VAR2->VAR6, &VAR4->VAR8);
    else
        VAR5 = FUN5(VAR2->VAR6, &VAR4->VAR8);
    if (VAR5 < 0 || !VAR4->VAR8.VAR16 || !VAR4->VAR8.VAR17[0])
    {
        FUN3(VAR2->VAR6, VAR11, "", VAR5, VAR4->VAR8.VAR16, VAR4->VAR8.VAR17[0]);
        FUN6(&VAR4->VAR8.VAR9);
        return -1;
    }
    if (VAR2->VAR18 && (VAR2->VAR18 != VAR4->VAR8.VAR18[0] || VAR2->VAR19 != VAR4->VAR8.VAR18[1]))
    {
        FUN3(VAR2->VAR6, VAR11, "");
        FUN7(VAR2, VAR4);
        return -1;
    }
    if (VAR4->VAR8.VAR18[1] != VAR4->VAR8.VAR18[2])
    {
        FUN3(VAR2->VAR6, VAR11, "");
        FUN7(VAR2, VAR4);
        return -1;
    }
    return 0;
}