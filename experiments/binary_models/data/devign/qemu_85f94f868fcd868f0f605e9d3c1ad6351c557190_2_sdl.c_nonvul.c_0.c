static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    if (FUN2() && (FUN3() || VAR7))
    {
        VAR5 = VAR8->VAR9 - 1;
        VAR6 = VAR8->VAR10 - 1;
        if (VAR11 && (VAR4->VAR12.VAR13 == 0 || VAR4->VAR12.VAR14 == 0 || VAR4->VAR12.VAR13 == VAR5 || VAR4->VAR12.VAR14 == VAR6))
        {
            FUN4();
        }
        if (!VAR11 && (VAR4->VAR12.VAR13 > 0 && VAR4->VAR12.VAR13 < VAR5 && VAR4->VAR12.VAR14 > 0 && VAR4->VAR12.VAR14 < VAR6))
        {
            FUN5();
        }
    }
    if (VAR11 || FUN3() || VAR7)
    {
        FUN6(VAR4->VAR12.VAR15, VAR4->VAR12.VAR16, 0, VAR4->VAR12.VAR13, VAR4->VAR12.VAR14, VAR4->VAR12.VAR17);
    }
}