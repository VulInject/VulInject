void FUN1(int VAR1)
{
    int VAR2;
    VAR2 = FUN2(VAR1, VAR3);
    assert(VAR2 != -1);
    VAR2 = FUN2(VAR1, VAR4, VAR2 | VAR5);
    assert(VAR2 != -1);
}