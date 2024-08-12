FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    assert(VAR2 != NULL);
    while (VAR2->VAR5.VAR6 != NULL)
    {
        VAR4 = VAR2->VAR5.VAR6;
        FUN2(VAR4, VAR7);
        free((char *)VAR4->VAR8);
        free(VAR4);
    }
    free(VAR2);
}