void FUN1(VAR1 *VAR2)
{
    BOOL VAR3;
    VAR3 = FUN2(VAR2->VAR4);
    if (!VAR3)
    {
        FUN3(FUN4(), VAR5);
    }
    VAR2->VAR4 = 0;
    VAR3 = FUN2(VAR2->VAR6);
    if (!VAR3)
    {
        FUN3(FUN4(), VAR5);
    }
    VAR2->VAR6 = 0;
}