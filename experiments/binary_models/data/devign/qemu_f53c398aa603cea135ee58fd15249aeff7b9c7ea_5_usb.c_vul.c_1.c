void FUN1(VAR1 *VAR2)
{
    assert(VAR2->VAR3 != NULL);
    FUN2(VAR2->VAR3->VAR4, VAR2);
    VAR2->VAR3 = NULL;
}