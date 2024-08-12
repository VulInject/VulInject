static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR7);
    target_ulong VAR8 = FUN3(VAR6, VAR4);
    if (VAR6->VAR9 || (VAR6->VAR7.VAR10->VAR11 & VAR12))
    {
        VAR6->VAR7.VAR13 = VAR14;
    }
    else if ((VAR6->VAR7.VAR10->VAR15 & VAR16) && ((VAR6->VAR7.VAR8 & VAR17) != ((VAR6->VAR7.VAR8 + VAR18 - 1) & VAR17) || (VAR6->VAR7.VAR8 & ~VAR17) == 0))
    {
        VAR6->VAR7.VAR13 = VAR14;
    }
    else if ((VAR8 - VAR6->VAR7.VAR19) >= (VAR20 - 32))
    {
        VAR6->VAR7.VAR13 = VAR14;
    }
    VAR6->VAR7.VAR8 = VAR8;
}