static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR3 *VAR5;
    FUN2(VAR4, &VAR2->VAR6, VAR7, VAR5)
    {
        if (VAR4->VAR8)
        {
            close(VAR4->VAR9);
            FUN3(VAR4->VAR10);
            FUN4(VAR4, VAR7);
            FUN3(VAR4);
        }
    }
    if (FUN5(&VAR2->VAR6) && FUN5(&VAR2->VAR11))
    {
        FUN4(VAR2, VAR7);
        FUN3(VAR2);
    }
}