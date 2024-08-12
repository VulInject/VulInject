static void FUN1(VAR1 *VAR2, int VAR3)
{
    FUN2(VAR2->VAR4);
    if (VAR3)
    {
        FUN3(&VAR2->VAR5.VAR2, VAR2->VAR6, VAR7, (VAR8)FUN4(VAR9, 0));
    }
    else
    {
        if (VAR2->VAR10)
        {
            FUN5(&VAR2->VAR5.VAR2, VAR2->VAR10);
        }
        VAR2->VAR6 = VAR2->VAR11->VAR12;
        FUN3(&VAR2->VAR5.VAR2, VAR2->VAR11->VAR12, VAR7, (VAR8)FUN4(VAR13, VAR14));
    }
}