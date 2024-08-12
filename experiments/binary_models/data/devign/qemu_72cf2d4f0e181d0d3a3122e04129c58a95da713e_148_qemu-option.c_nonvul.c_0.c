void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    for (;;)
    {
        VAR4 = FUN2(&VAR2->VAR5);
        if (VAR4 == NULL)
            break;
        FUN3(VAR4);
    }
    FUN4(&VAR2->VAR6->VAR5, VAR2, VAR7);
    FUN5(VAR2);
}