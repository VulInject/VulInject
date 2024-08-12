static int FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 = FUN2(VAR4, VAR5, VAR2);
    if (VAR2->VAR3 == NULL)
    {
        FUN3(VAR2->VAR6);
        FUN4(VAR2);
        return 0;
    }
    FUN5(VAR2->VAR6);
    FUN6(VAR2);
    return 1;
}