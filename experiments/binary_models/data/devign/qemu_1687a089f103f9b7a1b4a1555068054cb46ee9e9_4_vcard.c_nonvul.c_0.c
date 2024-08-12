FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR3 *VAR5;
    if (VAR2 == NULL)
    {
        return;
    }
    VAR2->VAR6--;
    if (VAR2->VAR6 != 0)
    {
        return;
    }
    if (VAR2->VAR7)
    {
        (*VAR2->VAR7)(VAR2->VAR8);
        VAR2->VAR7 = 0;
        VAR2->VAR8 = 0;
    }
    for (VAR4 = VAR2->VAR9; VAR4; VAR4 = VAR5)
    {
        VAR5 = VAR4->VAR10;
        FUN2(VAR4);
    }
    FUN3(VAR2->VAR11);
    FUN4(VAR2);
}