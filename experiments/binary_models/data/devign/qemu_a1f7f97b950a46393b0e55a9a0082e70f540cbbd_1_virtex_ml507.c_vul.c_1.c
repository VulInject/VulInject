static void FUN1(VAR1 *VAR2, target_ulong VAR3, hwaddr VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6.VAR7[0];
    VAR6->VAR8 = 0;
    VAR6->VAR9 = VAR10 | ((VAR11 | VAR12 | VAR13) << 4);
    VAR6->VAR14 = 1 << 31;
    VAR6->VAR15 = VAR3 & VAR16;
    VAR6->VAR17 = VAR4 & VAR16;
    VAR6->VAR18 = 0;
    VAR6 = &VAR2->VAR6.VAR7[1];
    VAR6->VAR8 = 0;
    VAR6->VAR9 = VAR10 | ((VAR11 | VAR12 | VAR13) << 4);
    VAR6->VAR14 = 1 << 31;
    VAR6->VAR15 = 0x80000000 & VAR16;
    VAR6->VAR17 = 0x80000000 & VAR16;
    VAR6->VAR18 = 0;
}