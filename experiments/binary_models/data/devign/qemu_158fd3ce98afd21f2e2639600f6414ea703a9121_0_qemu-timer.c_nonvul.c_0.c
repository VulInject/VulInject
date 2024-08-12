void FUN1(void)
{
    VAR1->VAR2 = 0;
    FUN2(VAR3);
    FUN2(VAR4);
    FUN2(VAR5);
    if (VAR1->VAR6)
    {
        VAR1->VAR6 = 0;
        FUN3(VAR1);
    }
}