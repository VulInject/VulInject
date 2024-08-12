static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7.VAR6;
    int VAR8 = 0, VAR9 = 0;
    int VAR10 = 0;
    int VAR11;
    if (VAR3)
    {
        VAR8 = FUN2(VAR6);
        VAR9 = FUN2(VAR6);
        if (VAR8 || VAR9)
        {
            VAR10 = FUN2(VAR6);
            if (VAR10)
            {
                FUN3(VAR6, 8);
                FUN3(VAR6, 5);
                FUN3(VAR6, 1);
                FUN3(VAR6, 5);
            }
            FUN3(VAR6, 4);
            FUN3(VAR6, 4);
            if (VAR10)
                FUN3(VAR6, 4);
            FUN3(VAR6, 5);
            FUN3(VAR6, 5);
            FUN3(VAR6, 5);
        }
    }
    for (VAR11 = 0; VAR11 < VAR4; VAR11++)
    {
        int VAR12 = 0;
        int VAR13 = 1;
        int VAR14 = FUN2(VAR6);
        if (!VAR14)
            VAR14 = FUN2(VAR6);
        if (VAR14)
            FUN4(VAR6);
        else
            VAR12 = FUN2(VAR6);
        if (!VAR12)
            VAR13 = FUN4(VAR6) + 1;
        if (VAR8)
            FUN5(VAR2, VAR13, VAR10);
        if (VAR9)
            FUN5(VAR2, VAR13, VAR10);
    }
}