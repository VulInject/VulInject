static char *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2, VAR3, VAR5);
    VAR3 *VAR6;
    int VAR7;
    char VAR8[] = "";
    char VAR9[] = "";
    int VAR10 = sizeof VAR8 - 1;
    int VAR11 = sizeof VAR9 - 1;
    int VAR12;
    char *VAR13, *VAR14;
    int VAR15;
    ;
    VAR7 = 0;
    for (VAR6 = VAR4; VAR6; VAR6 = VAR6->VAR16->VAR17)
    {
        ++VAR7;
    }
    VAR12 = VAR10 + VAR11 * VAR7;
    VAR13 = malloc(VAR12 + 1);
    VAR13[VAR12] = '';
    VAR15 = snprintf(VAR8, sizeof VAR8, "", FUN3(VAR4->VAR16));
    assert(VAR15 == VAR10);
    memcpy(VAR13, VAR8, VAR10);
    VAR14 = VAR13 + VAR12;
    for (VAR6 = VAR4; VAR6; VAR6 = VAR6->VAR16->VAR17)
    {
        VAR14 -= VAR11;
        VAR15 = snprintf(VAR9, sizeof VAR9, "", FUN4(VAR6->VAR18), FUN5(VAR4->VAR18));
        assert(VAR15 == VAR11);
        memcpy(VAR14, VAR9, VAR11);
    }
    return VAR13;
}