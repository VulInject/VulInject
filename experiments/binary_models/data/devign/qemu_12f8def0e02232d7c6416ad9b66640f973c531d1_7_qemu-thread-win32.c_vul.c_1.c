void FUN1(VAR1 *VAR2)
{
    BOOLEAN VAR3;
    if (VAR2->VAR4 == 0)
    {
        return;
    }
    VAR2->VAR5 = 0;
    VAR3 = FUN2(VAR2->VAR6, VAR2->VAR4, NULL);
    if (!VAR3)
    {
        FUN3(FUN4(), VAR7);
    }
    FUN5(VAR2->VAR8, VAR9);
}