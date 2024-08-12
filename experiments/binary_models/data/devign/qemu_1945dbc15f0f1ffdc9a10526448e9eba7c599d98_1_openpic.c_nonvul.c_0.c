static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    int VAR6;
    VAR5 = &VAR2->VAR5[VAR3];
    if (!VAR5->VAR7)
    {
        FUN2("", VAR8, VAR3);
        return;
    }
    if (VAR5->VAR9 & VAR10)
    {
        FUN2("", VAR8, VAR3);
        return;
    }
    if (FUN3(VAR5->VAR9) == 0)
    {
        FUN2("", VAR8, VAR3);
        return;
    }
    if (VAR5->VAR9 & VAR11)
    {
        FUN2("", VAR8, VAR3);
        return;
    }
    if (VAR5->VAR12 == 0x00000000)
    {
        FUN2("", VAR8, VAR3);
        return;
    }
    if (VAR5->VAR12 == (1 << VAR5->VAR13))
    {
        FUN4(VAR2, VAR5->VAR13, VAR3);
    }
    else if (!(VAR5->VAR9 & VAR14))
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR15; VAR6++)
        {
            if (VAR5->VAR12 & (1 << VAR6))
            {
                FUN4(VAR2, VAR6, VAR3);
            }
        }
    }
    else
    {
        for (VAR6 = VAR5->VAR13 + 1; VAR6 != VAR5->VAR13; VAR6++)
        {
            if (VAR6 == VAR2->VAR15)
                VAR6 = 0;
            if (VAR5->VAR12 & (1 << VAR6))
            {
                FUN4(VAR2, VAR6, VAR3);
                VAR5->VAR13 = VAR6;
                break;
            }
        }
    }
}