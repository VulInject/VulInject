static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7;
    const char *VAR8 = FUN2(VAR4, "");
    VAR5 = !strcmp(VAR8, "");
    FUN3(VAR7, &VAR9, VAR10)
    {
        if (!VAR5)
            if (strcmp(FUN4(VAR7->VAR11), VAR8))
                continue;
        FUN5(VAR7->VAR11);
    }
}