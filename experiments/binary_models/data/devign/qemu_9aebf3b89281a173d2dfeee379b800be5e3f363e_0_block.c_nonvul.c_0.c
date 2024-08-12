static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    if (!VAR3)
    {
        return;
    }
    if (!FUN2(VAR3))
    {
        FUN3(VAR5, "");
        return;
    }
    if (FUN4(VAR3))
    {
        FUN3(VAR5, "", VAR3);
        return;
    }
    if (FUN5(VAR3))
    {
        FUN3(VAR5, "");
        return;
    }
    FUN6(VAR2->VAR3, sizeof(VAR2->VAR3), VAR3);
    FUN7(&VAR6, VAR2, VAR7);
}