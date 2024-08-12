static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const char *VAR5 = FUN2(VAR4, "");
    VAR6 *VAR7 = FUN3(VAR2, VAR5);
    VAR8 *VAR9;
    int VAR10 = 0;
    if (VAR7)
    {
        FUN4(VAR2, "", VAR7->VAR11 ? "" : "");
        FUN5(VAR9, &VAR7->VAR12, VAR13)
        {
            VAR10++;
            FUN4(VAR2, "", VAR10, VAR9->VAR14 ? "" : "", VAR9->VAR15);
        }
    }
}