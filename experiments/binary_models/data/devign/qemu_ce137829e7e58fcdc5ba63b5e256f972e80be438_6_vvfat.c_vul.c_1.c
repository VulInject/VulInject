static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    FUN2(fprintf(VAR4, "", VAR2->VAR5.VAR6));
    for (VAR3 = 0; VAR3 < VAR2->VAR5.VAR6; VAR3++)
    {
        VAR7 *VAR8 = FUN3(&(VAR2->VAR5), VAR3);
        assert(VAR8->VAR9 || VAR8->VAR10 == VAR11);
        if (VAR8->VAR10 != VAR11)
        {
            assert(VAR8->VAR9);
            free(VAR8->VAR9);
        }
        else
            assert(VAR8->VAR9 == NULL);
    }
    VAR2->VAR5.VAR6 = 0;
}