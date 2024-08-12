static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6;
    if (VAR4->VAR7 != VAR8 && VAR4->VAR7 != VAR9 && VAR4->VAR7 != VAR10)
        VAR4->VAR7 = VAR8;
    VAR6 = FUN3(&VAR2->VAR11, &VAR4->VAR12);
    if (!VAR6)
    {
        return -1;
    }
    VAR6->VAR13 = VAR4->VAR13 == VAR14 ? VAR4->VAR12.VAR15 + 1 : VAR4->VAR13;
    FUN4(VAR4, VAR6);
    VAR4->VAR13 = VAR6->VAR13;
    return 0;
}