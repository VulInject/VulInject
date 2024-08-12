int FUN1(int VAR1, const VAR2 *VAR3, void *VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2(sizeof(VAR5));
    FUN3(VAR6->VAR7, sizeof(VAR6->VAR7), VAR3->VAR8);
    VAR6->VAR9 = VAR3->VAR9;
    VAR6->VAR10 = VAR11++;
    VAR6->VAR12 = NULL;
    VAR6->VAR13 = NULL;
    VAR6->VAR14 = NULL;
    VAR6->VAR4 = VAR4;
    VAR6->VAR3 = VAR3;
    if (VAR1 == -1)
    {
        VAR6->VAR1 = FUN4(VAR3->VAR8);
    }
    else
    {
        VAR6->VAR1 = VAR1;
    }
    FUN5(&VAR15, VAR6, VAR16);
    return 0;
}