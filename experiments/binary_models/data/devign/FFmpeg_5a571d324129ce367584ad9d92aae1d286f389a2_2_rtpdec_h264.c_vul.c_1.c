static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < 32; VAR3++)
    {
        if (VAR2->VAR4[VAR3])
            FUN2(NULL, VAR5, "", VAR2->VAR4[VAR3], VAR3);
    }
    assert(VAR2);
    assert(VAR2->VAR6 == VAR7);
    VAR2->VAR6 = VAR8;
    FUN3(VAR2);
}