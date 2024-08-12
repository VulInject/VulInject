static void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
    {
        VAR2->VAR3 = false;
        VAR2->VAR4 = true;
        FUN2(&VAR5);
    }
    FUN3(VAR2);
    VAR2->VAR6 = false;
}