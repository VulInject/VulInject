static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    char VAR4[256];
    char VAR5[16384];
    int VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    VAR12 *VAR13 = &VAR8->VAR13;
    while (FUN2(&VAR3, VAR4, sizeof(VAR4), VAR5, sizeof(VAR5)))
    {
        FUN3(VAR11, VAR8->VAR14, VAR4, VAR5);
        for (VAR6 = 0; VAR15[VAR6].VAR16; ++VAR6)
        {
            if (!FUN4(VAR4, VAR15[VAR6].VAR16))
            {
                if (VAR15[VAR6].VAR17 == VAR18)
                {
                    *(int *)((char *)VAR13 + VAR15[VAR6].VAR19) = FUN5(VAR5);
                }
                else if (VAR15[VAR6].VAR17 == VAR20)
                    *(char **)((char *)VAR13 + VAR15[VAR6].VAR19) = FUN6(VAR5);
            }
        }
    }
}