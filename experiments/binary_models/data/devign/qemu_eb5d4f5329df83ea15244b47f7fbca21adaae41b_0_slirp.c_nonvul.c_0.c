static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    struct VAR6 *VAR7;
    for (VAR7 = VAR5->VAR8; VAR7; VAR7 = VAR7->VAR9)
        if (VAR7->VAR10 == 3)
        {
            struct socket *VAR11;
            VAR11 = FUN2(VAR5, VAR7->VAR12, FUN3(VAR7->VAR13));
            if (!VAR11)
                continue;
            FUN4(VAR2, 42);
            FUN5(VAR2, &VAR14, VAR11, NULL);
        }
    FUN4(VAR2, 0);
    FUN5(VAR2, &VAR15, VAR5, NULL);
}