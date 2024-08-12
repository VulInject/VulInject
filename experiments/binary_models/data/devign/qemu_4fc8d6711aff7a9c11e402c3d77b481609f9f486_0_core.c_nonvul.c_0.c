static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    VAR3->VAR5 = 0;
    if (!(VAR3->VAR6 & VAR7))
        return;
    VAR3->VAR8 = VAR3->VAR9 - VAR3->VAR10;
    VAR3->VAR5 = VAR3->VAR11 - VAR3->VAR9;
    VAR4 = FUN2(VAR3->VAR12);
    if (VAR4 == -1)
    {
        fprintf(VAR13, "", VAR14);
        VAR3->VAR15 = 2;
    }
    else
    {
        VAR3->VAR15 = VAR4;
    }
}