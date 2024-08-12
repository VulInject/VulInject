static void FUN1(VAR1 *VAR2, hwaddr VAR3, VAR1 *VAR4)
{
    assert(!VAR4->VAR5);
    VAR4->VAR5 = VAR2;
    VAR4->VAR6 = VAR3;
    FUN2(VAR4);
}