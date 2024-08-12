static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    VAR4->VAR2 = VAR2;
    VAR4->VAR7 = VAR2->VAR7;
    FUN2(&VAR4->VAR8, VAR2);
    VAR4->VAR9 = VAR2->VAR9;
    VAR4->VAR10 = VAR2->VAR10;
    assert(VAR4->VAR9 > 0 && VAR4->VAR10 > 0);
    for (VAR6 = 0; VAR6 < 3; VAR6++)
    {
        VAR4->VAR11[VAR6] = FUN3(VAR2->VAR9 + 16);
    }
    return 0;
}