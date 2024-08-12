static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const char *VAR5 = FUN2(VAR4, "");
    VAR6 *VAR7;
    FUN3(VAR7, &VAR2->VAR8, VAR9)
    {
        if (strcmp(VAR7->VAR10, VAR5) != 0)
        {
            continue;
        }
        FUN4(VAR7, VAR9);
        close(VAR7->VAR11);
        FUN5(VAR7->VAR10);
        FUN5(VAR7);
        return;
    }
    FUN6(VAR2, "", VAR5);
}