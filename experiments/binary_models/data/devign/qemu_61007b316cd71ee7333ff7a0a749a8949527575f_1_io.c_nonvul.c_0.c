void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2);
    FUN3(VAR2);
    while (VAR2->VAR3 > 1)
    {
        if (VAR2->VAR4->VAR5)
        {
            FUN4(VAR2->VAR4->FUN5(VAR2), true);
        }
        else if (VAR2->VAR6)
        {
            FUN4(FUN6(VAR2->VAR6), true);
        }
        else
        {
            FUN7();
        }
    }
    FUN8(VAR2);
}