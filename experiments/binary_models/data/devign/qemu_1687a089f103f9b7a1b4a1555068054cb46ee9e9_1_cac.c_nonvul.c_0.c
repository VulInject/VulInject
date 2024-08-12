FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    if (VAR2 == NULL)
    {
        return;
    }
    VAR4 = &(VAR2->VAR5.VAR6);
    if (VAR4->VAR7 != NULL)
    {
        FUN2(VAR4->VAR7);
    }
    if (VAR4->VAR8 != NULL)
    {
        FUN2(VAR4->VAR8);
    }
    if (VAR4->VAR9 != NULL)
    {
        FUN3(VAR4->VAR9);
    }
    FUN2(VAR2);
}