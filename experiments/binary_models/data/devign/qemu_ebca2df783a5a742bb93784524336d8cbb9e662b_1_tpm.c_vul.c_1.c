static void FUN1(gpointer VAR1, gpointer VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    assert(VAR6->VAR7 != NULL);
    VAR6->FUN4(VAR4, (VAR8 *)VAR1);
    FUN5(VAR4->VAR9);
}