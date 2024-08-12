static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10;
    if (!VAR7->VAR11)
        return VAR12;
    if (VAR7->VAR13 && !VAR7->VAR14)
    {
        VAR9 = FUN2(VAR2, &VAR10);
        if (VAR9 < 0)
            return VAR9;
    }
    if (VAR7->VAR15 >= 0)
    {
        if (!VAR7->VAR15)
        {
            char VAR16[32];
            for (;;)
            {
                do
                {
                    if ((VAR9 = FUN3(VAR7, VAR16, sizeof(VAR16))) < 0)
                        return VAR9;
                } while (!*VAR16);
                VAR7->VAR15 = FUN4(VAR16, NULL, 16);
                FUN5(NULL, VAR17, "" VAR18 "", VAR7->VAR15);
                if (!VAR7->VAR15)
                    return 0;
                break;
            }
        }
        VAR5 = FUN6(VAR5, VAR7->VAR15);
    }
    if (VAR7->VAR19)
        return FUN7(VAR2, VAR4, VAR5);
    return FUN8(VAR2, VAR4, VAR5);
}