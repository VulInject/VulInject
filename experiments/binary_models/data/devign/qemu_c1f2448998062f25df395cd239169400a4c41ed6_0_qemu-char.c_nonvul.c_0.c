static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    GPollFD VAR6;
    int VAR7;
    VAR6.VAR8 = FUN2(VAR4->VAR8);
    VAR6.VAR9 = VAR10;
    VAR6.VAR11 = 0;
    do
    {
        VAR7 = FUN3(&VAR6, 1, 0);
    } while (VAR7 == -1 && VAR12 == VAR13);
    assert(VAR7 >= 0);
    if (VAR6.VAR11 & VAR14)
    {
        FUN4(VAR2, 0);
    }
    else
    {
        FUN4(VAR2, 1);
    }
}