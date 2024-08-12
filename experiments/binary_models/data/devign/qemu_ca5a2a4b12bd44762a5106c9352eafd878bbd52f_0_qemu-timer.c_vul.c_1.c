void FUN1(void)
{
    if (VAR1->VAR2)
    {
        VAR1->VAR2 = 0;
        FUN2(VAR1);
    }
    VAR1->VAR3 = 0;
    if (VAR4)
    {
        FUN3(VAR5);
    }
    FUN3(VAR6);
    FUN3(VAR7);
}