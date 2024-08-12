void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR3 *VAR5;
    VAR5 = FUN2(VAR2, VAR4->VAR6);
    if (VAR5)
    {
        FUN3(VAR5);
        FUN3(VAR4);
        return;
    }
    if (VAR2->VAR7 >= VAR8)
    {
        VAR5 = FUN4(&VAR2->VAR9);
        FUN5(&VAR2->VAR9, VAR5, VAR10);
        VAR2->VAR7--;
        FUN3(VAR5);
    }
    VAR2->VAR7++;
    FUN6(&VAR2->VAR9, VAR4, VAR10);
}