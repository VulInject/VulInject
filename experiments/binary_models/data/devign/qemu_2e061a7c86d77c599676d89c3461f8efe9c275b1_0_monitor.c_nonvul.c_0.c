static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    const VAR7 *VAR8;
    VAR6 = FUN2();
    for (VAR8 = VAR9; VAR8->VAR10 != NULL; VAR8++)
    {
        FUN3(VAR6, FUN4(VAR8->VAR10));
    }
    for (VAR8 = VAR11; VAR8->VAR10 != NULL; VAR8++)
    {
        char VAR12[128];
        snprintf(VAR12, sizeof(VAR12), "", VAR8->VAR10);
        FUN3(VAR6, FUN4(VAR12));
    }
    *VAR4 = FUN5(VAR6);
}