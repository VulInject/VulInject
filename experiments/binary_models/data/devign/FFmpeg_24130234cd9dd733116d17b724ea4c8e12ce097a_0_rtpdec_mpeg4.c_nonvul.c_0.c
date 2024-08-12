static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const char *VAR7, const char *VAR8)
{
    VAR9 *VAR10 = VAR4->VAR11;
    int VAR12, VAR13;
    if (!strcmp(VAR7, ""))
    {
        VAR12 = FUN2(VAR10, VAR8);
        if (VAR12 < 0)
            return VAR12;
    }
    if (VAR10->VAR14 == VAR15)
    {
        for (VAR13 = 0; VAR16[VAR13].VAR17; ++VAR13)
        {
            if (!FUN3(VAR7, VAR16[VAR13].VAR17))
            {
                if (VAR16[VAR13].VAR18 == VAR19)
                {
                    int VAR20 = FUN4(VAR8);
                    if (VAR20 > 32)
                    {
                        FUN5(VAR2, VAR21, "", VAR7, VAR20);
                        return VAR22;
                    }
                    *(int *)((char *)VAR6 + VAR16[VAR13].VAR23) = VAR20;
                }
                else if (VAR16[VAR13].VAR18 == VAR24)
                {
                    char *VAR20 = FUN6(VAR8);
                    if (!VAR20)
                        return FUN7(VAR25);
                    *(char **)((char *)VAR6 + VAR16[VAR13].VAR23) = VAR20;
                }
            }
        }
    }
    return 0;
}