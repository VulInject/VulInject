void FUN1(VAR1 *VAR2)
{
    if (VAR2 && VAR2->VAR3 && VAR2->VAR4 > 0)
    {
        FUN2(VAR2);
        VAR2->VAR3 = false;
        FUN3(VAR2);
    }
}