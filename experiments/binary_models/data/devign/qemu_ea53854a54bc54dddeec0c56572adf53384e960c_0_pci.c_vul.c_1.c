void FUN1(VAR1 *VAR2, int VAR3, int VAR4, void (*VAR5)(VAR6 *VAR7, int VAR8, void *VAR9), void *VAR9)
{
    int VAR10;
    for (VAR10 = 0; VAR10 < 32; VAR10++)
    {
        int VAR11;
        for (VAR11 = 0; VAR11 < 8; VAR11++)
        {
            VAR6 *VAR7;
            VAR7 = FUN2(VAR2, FUN3(VAR10, VAR11));
            if (!VAR7)
            {
                continue;
            }
            if (VAR3 != -1 && FUN4(VAR7, VAR12) != VAR3)
            {
                continue;
            }
            if (VAR4 != -1 && FUN4(VAR7, VAR13) != VAR4)
            {
                continue;
            }
            FUN5(VAR7, FUN3(VAR10, VAR11), VAR9);
        }
    }