VAR1 *FUN1(void)
{
    VAR1 *VAR2;
    int VAR3;
    VAR2 = FUN2(VAR1, 1);
    FUN3(&VAR2->VAR4);
    for (VAR3 = 0; VAR3 < VAR5; VAR3++)
    {
        FUN3(&VAR2->VAR6[VAR3]);
    }
    FUN4(&VAR2->VAR7);
    VAR2->VAR8 = 1;
    VAR2->VAR9 = FUN5();
    FUN6(&VAR10, VAR2, VAR11);
    return VAR2;