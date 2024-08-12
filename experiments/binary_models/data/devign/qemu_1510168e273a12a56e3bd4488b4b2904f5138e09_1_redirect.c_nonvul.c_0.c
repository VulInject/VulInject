static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    FUN2(VAR3->VAR5);
    if (VAR3->VAR3.VAR6)
    {
        FUN3(&VAR3->VAR3);
        VAR3->VAR7 = FUN4(VAR8) + 200;
    }
    FUN5(VAR3);
    memset(VAR3->VAR9, 0, sizeof(VAR3->VAR9));
    for (VAR4 = 0; VAR4 < VAR10; VAR4++)
    {
        FUN6(&VAR3->VAR9[VAR4].VAR11);
    }
    FUN7(&VAR3->VAR3);
    VAR3->VAR12.VAR13 = VAR14;
}