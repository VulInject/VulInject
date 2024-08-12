static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR4;
    VAR7 *VAR8 = FUN2();
    if (!VAR8)
    {
        VAR4->VAR9.VAR10 = FUN3(VAR11);
        return;
    }
    if ((VAR8->VAR12 >> VAR8->VAR13) >= 0x10000)
    {
        VAR4->VAR9.VAR10 = FUN3(VAR14);
        return;
    }
    VAR6->VAR15 = FUN3(VAR8->VAR12 ? 1 : 0);
    VAR6->VAR16 = FUN3(VAR8->VAR12 >> VAR8->VAR13);
    VAR6->VAR17 = FUN3(VAR8->VAR12 >> VAR8->VAR13);
    VAR4->VAR9.VAR10 = FUN3(VAR18);
}