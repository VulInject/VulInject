int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR4->VAR5)
    {
        FUN2(VAR4->VAR5);
        VAR4->VAR5 = NULL;
    }
    if (VAR4->VAR6)
    {
        FUN3(VAR4->VAR6);
        VAR4->VAR6 = NULL;
    }
    return 0;