void FUN1(void)
{
    FUN2(&VAR1.VAR2);
    if (VAR1.VAR3)
    {
        VAR1.VAR4 = FUN3();
        VAR1.VAR5 = FUN4();
        VAR1.VAR3 = 0;
    }
    FUN5(&VAR1.VAR2);
}