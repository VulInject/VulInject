void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR2->VAR4->VAR5 = 0;
    FUN2();
    VAR3 = FUN3(VAR2, VAR6, VAR2->VAR4);
    assert(VAR3 == 0)