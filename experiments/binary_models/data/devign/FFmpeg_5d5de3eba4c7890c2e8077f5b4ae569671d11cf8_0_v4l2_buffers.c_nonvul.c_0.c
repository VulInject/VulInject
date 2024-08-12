static void FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = FUN2(VAR5);
    if (FUN3(&VAR5->VAR8, 1) == 1)
    {
        FUN4(&VAR7->VAR9, 1, VAR10);
        if (VAR7->VAR11)
        {
            if (!FUN5(&VAR7->VAR9))
                FUN6(&VAR7->VAR12);
        }
        else
        {
            if (VAR7->VAR13)
            {
                VAR5->VAR14 = VAR15;
            }
            else if (VAR5->VAR16->VAR17)
                FUN7(VAR5);
        }
        FUN8(&VAR5->VAR18);
    }
}