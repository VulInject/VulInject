static void FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5)
{
    if (FUN2(VAR2, VAR6, VAR5))
    {
        return;
    }
    if (!FUN3(VAR2))
    {
        FUN4(VAR5, "", FUN5(VAR2));
        return;
    }
    if (FUN6(VAR2) && !FUN7(VAR2))
    {
        FUN8(VAR2, VAR3);
        if (!VAR3)
        {
            FUN4(VAR5, "", FUN5(VAR2));
            return;
        }
    }
    FUN9(VAR2);
}