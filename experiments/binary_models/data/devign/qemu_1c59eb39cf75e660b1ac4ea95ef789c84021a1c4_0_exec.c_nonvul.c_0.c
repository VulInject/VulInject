void FUN1(VAR1 *VAR2)
{
    FUN2();
    if (VAR2->VAR3 == -1)
    {
        FUN3();
        return;
    }
    FUN4(&VAR4, VAR2, VAR5);
    FUN5(VAR2);
    VAR2->VAR3 = -1;
    FUN3();
}