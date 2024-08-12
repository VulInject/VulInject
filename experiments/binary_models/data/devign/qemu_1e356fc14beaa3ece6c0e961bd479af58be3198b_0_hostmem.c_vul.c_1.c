static void FUN1(VAR1 *VAR2, bool VAR3, VAR4 **VAR5)
{
    VAR4 *VAR6 = NULL;
    VAR7 *VAR8 = FUN2(VAR2);
    if (VAR8->VAR9)
    {
        if (VAR3)
        {
            FUN3(VAR5, "");
            return;
        }
    }
    if (!FUN4(&VAR8->VAR10))
    {
        VAR8->VAR11 = VAR3;
        return;
    }
    if (VAR3 && !VAR8->VAR11)
    {
        int VAR12 = FUN5(&VAR8->VAR10);
        void *VAR13 = FUN6(&VAR8->VAR10);
        uint64_t VAR14 = FUN4(&VAR8->VAR10);
        FUN7(VAR12, VAR13, VAR14, &VAR6);
        if (VAR6)
        {
            FUN8(VAR5, VAR6);
            return;
        }
        VAR8->VAR11 = true;
    }
}