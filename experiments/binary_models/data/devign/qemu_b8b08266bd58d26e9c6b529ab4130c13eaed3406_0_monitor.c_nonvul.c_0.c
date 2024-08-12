static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2(VAR4);
    assert(VAR6 != NULL);
    FUN3(VAR6, '');
    FUN4(VAR2, FUN5(VAR6));
    FUN6(VAR6);
}