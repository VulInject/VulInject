static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR6;
    if (VAR2 < 0)
    {
        VAR7 *VAR8 = VAR6->VAR9.VAR10;
        BlockErrorAction VAR11;
        FUN2(VAR8, VAR4->VAR12, VAR4->VAR13);
        VAR11 = FUN3(VAR6, true, -VAR2);
        if (VAR11 == VAR14 && VAR6->VAR2 >= 0)
        {
            VAR6->VAR2 = VAR2;
        }
        FUN4(VAR4, VAR2);
        return;
    }
    FUN5(VAR6->VAR15, VAR4->VAR12, &VAR4->VAR16, VAR4->VAR13, VAR17, VAR4);
}