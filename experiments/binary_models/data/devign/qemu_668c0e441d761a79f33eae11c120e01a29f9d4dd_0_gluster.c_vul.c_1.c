static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    if (VAR2 == NULL)
    {
        return;
    }
    FUN2(VAR4, &VAR5, VAR6)
    {
        if (VAR4->VAR7.VAR2 == VAR2)
        {
            if (--VAR4->VAR7.VAR8)
            {
                return;
            }
            FUN3(VAR4, VAR6);
            FUN4(VAR4->VAR7.VAR2);
            FUN5(VAR4->VAR7.VAR9);
            FUN5(VAR4);
        }
    }
}