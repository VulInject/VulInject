static void FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    char *VAR9;
    if (VAR2->VAR10 || !VAR7->VAR11)
    {
        VAR2->VAR12 = 1;
        VAR7->VAR13 = 1;
        return;
    }
    VAR2->VAR12 = 0;
    VAR7->VAR13 = 0;
    if (FUN2(VAR3, &VAR2->VAR12) < 0)
    {
        VAR2->VAR12 = 0;
    }
    if (VAR7->VAR14)
    {
        struct dioattr VAR15;
        if (FUN3(NULL, VAR3, VAR16, &VAR15) >= 0)
        {
            VAR2->VAR12 = VAR15.VAR17;
        }
    }
    if (!VAR7->VAR13)
    {
        size_t VAR18;
        VAR9 = FUN4(VAR19, 2 * VAR19);
        for (VAR18 = 512; VAR18 <= VAR19; VAR18 <<= 1)
        {
            if (pread(VAR3, VAR9 + VAR18, VAR19, 0) >= 0)
            {
                VAR7->VAR13 = VAR18;
                break;
            }
        }
        FUN5(VAR9);
    }
    if (!VAR2->VAR12)
    {
        size_t VAR18;
        VAR9 = FUN4(VAR7->VAR13, VAR19);
        for (VAR18 = 512; VAR18 <= VAR19; VAR18 <<= 1)
        {
            if (pread(VAR3, VAR9, VAR18, 0) >= 0)
            {
                VAR2->VAR12 = VAR18;
                break;
            }
        }
        FUN5(VAR9);
    }
    if (!VAR7->VAR13 || !VAR2->VAR12)
    {
        FUN6(VAR5, ""
                         "");
    }
}