static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR6;
    assert(FUN2(&VAR4->VAR7));
    assert(FUN2(&VAR4->VAR8));
    VAR2->VAR9.VAR10 = FUN3(0);
    *VAR6 = VAR2->VAR9;
    FUN4(VAR2);
    FUN5(VAR2);
    VAR2->VAR11 = 0;
    VAR2->VAR12 = NULL;
    memset(&VAR2->VAR13.VAR14, 0, sizeof(VAR2->VAR13.VAR14));
}