static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR5;
    VAR6 *VAR7 = FUN2(VAR5);
    int32_t VAR8;
    if (!VAR7->VAR9)
    {
        assert(VAR3->VAR10);
        return;
    }
    VAR3->VAR10 = 0;
    if (FUN3(!(VAR7->VAR11 & VAR12)))
    {
        return;
    }
    VAR8 = FUN4(VAR3);
    if (VAR8 == -VAR13)
    {
        return;
    }
    if (VAR8 >= VAR5->VAR14)
    {
        FUN5(VAR3->VAR15);
        VAR3->VAR10 = 1;
        return;
    }
    FUN6(VAR3->VAR16, 1);
    if (FUN4(VAR3) > 0)
    {
        FUN6(VAR3->VAR16, 0);
        FUN5(VAR3->VAR15);
        VAR3->VAR10 = 1;
    }
}