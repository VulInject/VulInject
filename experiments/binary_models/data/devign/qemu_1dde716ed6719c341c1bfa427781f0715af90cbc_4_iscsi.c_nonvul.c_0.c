FUN1(struct VAR1 *VAR2, int VAR3, void *VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    FUN2(VAR2, VAR3, VAR7, VAR7->VAR8);
    FUN3(VAR7->VAR9);
    VAR7->VAR9 = NULL;
    if (VAR7->VAR8 != 0)
    {
        return;
    }
    VAR7->VAR3 = 0;
    if (VAR3 != 0)
    {
        if (VAR3 == VAR10 && VAR7->VAR11->VAR12.VAR13 == VAR14 && VAR7->VAR15-- > 0)
        {
            if (VAR7->VAR11 != NULL)
            {
                FUN4(VAR7->VAR11);
                VAR7->VAR11 = NULL;
            }
            if (FUN5(VAR7) == 0)
            {
                FUN6(VAR7->VAR16);
                return;
            }
        }
        FUN7("", FUN8(VAR2));
        VAR7->VAR3 = -VAR17;
    }
    FUN9(VAR7);
}