void FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3;
    FUN2(VAR2);
    while ((VAR3 = FUN3(&VAR2->VAR4)))
    {
        FUN4(&VAR2->VAR4, VAR5);
        FUN5(VAR3, NULL);
    }
}