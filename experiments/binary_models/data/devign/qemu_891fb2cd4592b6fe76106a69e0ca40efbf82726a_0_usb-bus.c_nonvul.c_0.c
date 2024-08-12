int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = VAR2->VAR6;
    assert(VAR6 != NULL);
    assert(VAR2->VAR7);
    FUN3(VAR4->VAR8, VAR6->VAR9);
    FUN4(VAR6);
    VAR2->VAR7--;
    return 0;
}