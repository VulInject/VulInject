void FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < 16; VAR3++)
    {
        FUN2(VAR2, VAR3, 0);
    }
    assert(VAR2->VAR4 == 0);
    if (VAR2->VAR5 && !VAR2->VAR6.VAR7->VAR8[0])
    {
        FUN3(VAR2, &VAR2->VAR6);
        if (VAR2->VAR9[0]->VAR7->VAR10[0])
            FUN4(VAR2, &VAR2->VAR6, VAR2->VAR9[0]);
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        FUN5(VAR2, VAR2->VAR9[VAR3], 0);
        VAR2->VAR9[VAR3] = NULL;
    }
    VAR2->VAR5 = 0;
    memset(VAR2->VAR11, 0, sizeof(VAR2->VAR11));
}