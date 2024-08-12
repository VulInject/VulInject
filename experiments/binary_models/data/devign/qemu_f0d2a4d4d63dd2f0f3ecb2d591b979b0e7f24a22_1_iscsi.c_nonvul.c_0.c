FUN1(struct VAR1 *VAR2, int VAR3, void *VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    FUN2(VAR2, VAR3, VAR7, VAR7->VAR8);
    if (VAR7->VAR8 != 0)
    {
        return;
    }
    VAR7->VAR3 = 0;
    if (VAR3 != 0)
    {
        if (VAR3 == VAR9 && VAR7->VAR10->VAR11.VAR12 == VAR13 && VAR7->VAR14-- > 0)
        {
            FUN3(VAR7->VAR10);
            VAR7->VAR10 = NULL;
            if (FUN4(VAR7) == 0)
            {
                FUN5(VAR7->VAR15);
                return;
            }
        }
        FUN6("", FUN7(VAR2));
        VAR7->VAR3 = -VAR16;
    }
    FUN8(VAR7);
}