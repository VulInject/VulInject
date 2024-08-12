int FUN1(int VAR1, const struct VAR2 *VAR3, struct VAR2 *VAR4)
{
    struct VAR5 *VAR6;
    if (VAR1 < 1 || VAR1 > VAR7)
        return -VAR8;
    VAR6 = &VAR9[VAR1 - 1];
    fprintf(VAR10, "", VAR1, (int)VAR3, (int)VAR4);
    if (VAR4)
    {
        VAR4->VAR11 = FUN2(VAR6->VAR12.VAR11);
        VAR4->VAR13 = FUN2(VAR6->VAR12.VAR13);
        VAR4->VAR14 = FUN2(VAR6->VAR12.VAR14);
        VAR4->VAR15 = VAR6->VAR12.VAR15;
    }
    if (VAR3)
    {
        VAR6->VAR12.VAR11 = FUN2(VAR3->VAR11);
        VAR6->VAR12.VAR13 = FUN2(VAR3->VAR13);
        VAR6->VAR12.VAR14 = FUN2(VAR3->VAR14);
        VAR6->VAR12.VAR15 = VAR3->VAR15;
    }
    return 0;
}