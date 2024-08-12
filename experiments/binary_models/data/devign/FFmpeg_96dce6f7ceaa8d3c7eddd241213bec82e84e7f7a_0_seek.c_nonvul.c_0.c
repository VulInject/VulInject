static void FUN1(VAR1 *VAR2)
{
    while (VAR2)
    {
        VAR1 *VAR3 = VAR2;
        VAR2 = VAR3->VAR4;
        FUN2(&VAR3->VAR5);
        FUN3(VAR3);
    }
}