int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    assert(VAR2 != NULL);
    VAR2->VAR5 = *VAR4;
    if (!FUN2(VAR2))
    {
        return -1;
    }
    FUN3(VAR2->VAR6, FUN4(VAR7) + 1000);
    return 0;
}