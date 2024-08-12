static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7 = FUN3(VAR2);
    if (VAR5->VAR8)
    {
        FUN4(VAR5->VAR8, VAR3);
    }
    if (VAR7->VAR9)
    {
        FUN5(VAR7->VAR9, VAR3, &VAR10);
    }
}