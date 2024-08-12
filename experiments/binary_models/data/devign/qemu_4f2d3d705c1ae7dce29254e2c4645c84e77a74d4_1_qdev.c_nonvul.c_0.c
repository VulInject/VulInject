void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    if (VAR7)
    {
        assert(VAR4->VAR8);
    }
    VAR2->VAR9 = VAR4;
    FUN2(&VAR4->VAR10, VAR2, VAR11);
    for (VAR6 = FUN3(VAR2)->VAR12; VAR6 && VAR6->VAR13; VAR6++)
    {
        FUN4(VAR2, VAR6, NULL);
        FUN5(VAR2, VAR6, NULL);
    }
    FUN6(VAR2, VAR2->VAR9->VAR14->VAR12);
}