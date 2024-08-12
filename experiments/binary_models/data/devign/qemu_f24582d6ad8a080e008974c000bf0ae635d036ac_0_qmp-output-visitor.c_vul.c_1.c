void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5;
    FUN2(VAR4, &VAR2->VAR6, VAR7, VAR5)
    {
        FUN3(&VAR2->VAR6, VAR4, VAR7);
        if (VAR4->VAR8)
        {
            FUN4(VAR4->VAR8);
        }
        FUN5(VAR4);
    }
    FUN5(VAR2);
}