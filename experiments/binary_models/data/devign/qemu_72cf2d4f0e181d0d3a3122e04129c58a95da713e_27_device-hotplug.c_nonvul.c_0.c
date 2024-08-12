void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5;
    struct VAR6 *VAR7;
    FUN2(VAR5, &VAR8, VAR9)
    {
        VAR7 = VAR5->VAR10;
        if (VAR7)
        {
            if (VAR7->private && FUN3(VAR7->private, VAR3))
            {
                FUN4(VAR7);
                FUN5(VAR7);
            }
        }
    }
}