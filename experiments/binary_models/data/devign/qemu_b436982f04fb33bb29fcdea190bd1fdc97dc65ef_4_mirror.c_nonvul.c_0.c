static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR6;
    FUN2(FUN3(VAR6->VAR7.VAR8));
    if (VAR2 < 0)
    {
        BlockErrorAction VAR9;
        FUN4(VAR6->VAR10, VAR4->VAR11 >> VAR12, VAR4->VAR13 >> VAR12);
        VAR9 = FUN5(VAR6, false, -VAR2);
        if (VAR9 == VAR14 && VAR6->VAR2 >= 0)
        {
            VAR6->VAR2 = VAR2;
        }
    }
    FUN6(VAR4, VAR2);
    FUN7(FUN3(VAR6->VAR7.VAR8));
}