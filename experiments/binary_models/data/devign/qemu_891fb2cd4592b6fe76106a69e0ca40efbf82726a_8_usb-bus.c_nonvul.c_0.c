int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = VAR2->VAR6;
    assert(VAR6 != NULL);
    assert(!VAR2->VAR7);
    FUN3(VAR4->VAR8, VAR6->VAR9);
    if (!(VAR6->VAR10 & VAR2->VAR10))
    {
        FUN4(""
                     "",
                     VAR2->VAR11, VAR4->VAR12.VAR13);
        return -1;
    }
    VAR2->VAR7++;
    FUN5(VAR6);
    return 0;
}