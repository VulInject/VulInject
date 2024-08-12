void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
    {
        FUN2(&VAR2->VAR3->VAR4, VAR2, VAR5);
    }
    else
    {
        if (VAR2->VAR6)
        {
            FUN3(VAR2->VAR6);
        }
        FUN2(&VAR7, VAR2, VAR5);
        if (VAR2->VAR8)
        {
            VAR2->VAR8->VAR8 = NULL;
        }
    }
    if (VAR2->VAR9->VAR10)
    {
        VAR2->VAR9->FUN4(VAR2);
    }
    FUN5(VAR2->VAR11);
    FUN5(VAR2->VAR12);
    FUN5(VAR2);
}