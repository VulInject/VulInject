static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR3 *VAR7 = FUN2(VAR2);
    int VAR8 = FUN3(VAR4);
    if (VAR7->VAR9)
    {
        FUN4(VAR6, "");
        return;
    }
    FUN5(VAR7, &VAR7->VAR10, VAR11)
    {
        if (FUN3(VAR7) == VAR8)
        {
            FUN4(VAR6, "", VAR8);
            return;
        }
    }
    FUN6(&FUN2(VAR2)->VAR10, VAR4, VAR11);
}