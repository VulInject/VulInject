static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    static bool VAR9;
    VAR10 *VAR11;
    FUN4(VAR6, &VAR8->VAR12, VAR8->VAR13);
    if (!VAR9)
    {
        VAR11 = FUN5();
        if (VAR11)
        {
            FUN6(VAR11, "", FUN7(&VAR8->VAR13, sizeof(VAR8->VAR13)), sizeof(VAR8->VAR13));
            VAR9 = true;
        }
    }
}