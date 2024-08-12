void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4, *VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    FUN2(VAR4, &VAR7->VAR9, VAR10, VAR5)
    {
        if (FUN3(VAR2, VAR4) != 0)
        {
            FUN4(VAR2)
            {
                if (FUN3(VAR2, VAR4) == 0)
                {
                    break;
                }
            }
        }
        FUN5(&VAR7->VAR9, VAR4, VAR10);
        FUN6(VAR4);
    }
    FUN7();
    FUN4(VAR2) { FUN8(VAR2, 0); }
}