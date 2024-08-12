static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR4->VAR2 = VAR2;
    VAR4->VAR6 = (VAR2->VAR6 + 3) & ~3;
    VAR4->VAR7 = (VAR2->VAR7 + 3) & ~3;
    VAR4->VAR8 = -1;
    if ((VAR2->VAR9 == NULL) || (VAR2->VAR10 == 40))
    {
        VAR4->VAR11 = 0;
        VAR2->VAR12 = VAR13;
    }
    else
    {
        VAR4->VAR11 = 1;
        VAR2->VAR12 = VAR14;
    }
    VAR4->VAR15.VAR16[0] = NULL;
    return 0;
}