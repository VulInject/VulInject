bool FUN1(VAR1 *VAR2)
{
    while (!FUN2(&VAR2->VAR3))
    {
        VAR4 *VAR5;
        int VAR6;
        VAR5 = FUN3(&VAR2->VAR3);
        FUN4(&VAR2->VAR3, VAR5, VAR7);
        VAR6 = FUN5(VAR2, VAR5->VAR8, VAR5->VAR9, VAR5->VAR10, VAR5->VAR11);
        if (VAR6 == 0)
        {
            VAR2->VAR12++;
            FUN6(&VAR2->VAR3, VAR5, VAR7);
            return false;
        }
        if (VAR5->VAR13)
        {
            VAR5->FUN7(VAR5->VAR8, VAR6);
        }
        FUN8(VAR5);
    }
    return true;