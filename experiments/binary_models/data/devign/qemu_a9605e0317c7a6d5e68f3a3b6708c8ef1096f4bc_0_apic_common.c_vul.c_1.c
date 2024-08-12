static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    static VAR7 *VAR8;
    static int VAR9;
    if (VAR9 >= VAR10)
    {
        return -1;
    }
    VAR4->VAR11 = VAR9++;
    VAR6 = FUN3(VAR4);
    VAR6->FUN4(VAR4);
    FUN5(VAR2, &VAR4->VAR12);
    if (!VAR8 && VAR4->VAR13 & VAR14)
    {
        VAR8 = FUN6("", -1, NULL);
    }
    VAR4->VAR8 = VAR8;
    if (VAR15 && VAR6->VAR16)
    {
        VAR6->FUN7(VAR4, true);
    }
    return 0;
}