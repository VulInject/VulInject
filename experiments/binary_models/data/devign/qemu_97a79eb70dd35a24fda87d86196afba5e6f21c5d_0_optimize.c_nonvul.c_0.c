static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, TCGArg VAR7, TCGArg VAR8)
{
    TCGOpcode VAR9 = FUN2(VAR4->VAR10);
    tcg_target_ulong VAR11;
    VAR4->VAR10 = VAR9;
    FUN3(VAR7);
    VAR12[VAR7].VAR13 = VAR14;
    VAR12[VAR7].VAR8 = VAR8;
    VAR11 = VAR8;
    if (VAR15 > 32 && VAR9 == VAR16)
    {
        VAR11 |= ~0xffffffffull;
    }
    VAR12[VAR7].VAR11 = VAR11;
    VAR6[0] = VAR7;
    VAR6[1] = VAR8;
}