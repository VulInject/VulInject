void FUN1(void)
{
    VAR1 *VAR2 = NULL;
    while ((VAR2 = FUN2(VAR2)))
    {
        VAR3 *VAR4 = FUN3(VAR2->VAR5);
        FUN4(VAR4);
        FUN5(VAR2);
        FUN6(VAR4);
    }
}