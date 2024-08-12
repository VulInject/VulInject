static void FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    char *VAR9;
    size_t VAR10 = FUN2(VAR11, FUN3());
    if (FUN4(VAR2) || !VAR7->VAR12)
    {
        VAR2->VAR13.VAR14 = 1;
        VAR7->VAR15 = 1;
        return;
    }
    VAR2->VAR13.VAR14 = 0;
    VAR7->VAR15 = 0;
    if (FUN5(VAR3, &VAR2->VAR13.VAR14) < 0)
    {
        VAR2->VAR13.VAR14 = 0;
    }
    if (VAR7->VAR16)
    {
        struct dioattr VAR17;
        if (FUN6(NULL, VAR3, VAR18, &VAR17) >= 0)
        {
            VAR2->VAR13.VAR14 = VAR17.VAR19;
        }
    }
    if (!VAR7->VAR15)
    {
        size_t VAR20;
        VAR9 = FUN7(VAR10, 2 * VAR10);
        for (VAR20 = 512; VAR20 <= VAR10; VAR20 <<= 1)
        {
            if (FUN8(VAR3, VAR9 + VAR20, VAR10))
            {
                VAR7->VAR15 = VAR20;
                break;
            }
        }
        FUN9(VAR9);
    }
    if (!VAR2->VAR13.VAR14)
    {
        size_t VAR20;
        VAR9 = FUN7(VAR7->VAR15, VAR10);
        for (VAR20 = 512; VAR20 <= VAR10; VAR20 <<= 1)
        {
            if (FUN8(VAR3, VAR9, VAR20))
            {
                VAR2->VAR13.VAR14 = VAR20;
                break;
            }
        }
        FUN9(VAR9);
    }
    if (!VAR7->VAR15 || !VAR2->VAR13.VAR14)
    {
        FUN10(VAR5, ""
                         "");
    }
}