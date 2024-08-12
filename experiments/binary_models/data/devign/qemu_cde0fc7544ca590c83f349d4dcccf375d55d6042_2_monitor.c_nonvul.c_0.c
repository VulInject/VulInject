static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    if (FUN2(VAR2))
    {
        if (VAR5 && !FUN3(VAR2))
        {
            FUN4(VAR6);
            FUN5("", VAR4->VAR7);
        }
        if (!VAR5 && FUN3(VAR2))
        {
            FUN5("", VAR4->VAR7);
        }
        if (FUN6(VAR2) > 0 && strcmp(VAR4->VAR7, "") != 0)
        {
            FUN5("", VAR4->VAR7, FUN6(VAR2));
        }
    }
    else
    {
        assert(!FUN3(VAR2));
        FUN7(VAR2->VAR8);
        VAR2->VAR8 = NULL;
    }
}