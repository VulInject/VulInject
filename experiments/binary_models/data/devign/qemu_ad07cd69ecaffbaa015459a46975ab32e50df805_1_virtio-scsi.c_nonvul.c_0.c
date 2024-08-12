static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    assert(!VAR4->VAR7);
    VAR4->VAR8++;
    FUN4(&VAR4->VAR9.VAR10);
    VAR4->VAR8--;
    VAR6->VAR11 = VAR12;
    VAR6->VAR13 = VAR14;
    VAR4->VAR15 = false;
}