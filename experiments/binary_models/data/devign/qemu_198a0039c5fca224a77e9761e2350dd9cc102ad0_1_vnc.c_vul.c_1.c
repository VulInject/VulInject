static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = VAR10->VAR14;
    while (VAR13 != NULL)
    {
        if (FUN2(VAR13, VAR15))
            FUN3(VAR13, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8);
        else
            FUN4(VAR13, VAR5, VAR6, VAR7, VAR8);
        VAR13 = VAR13->VAR16;
    }
}