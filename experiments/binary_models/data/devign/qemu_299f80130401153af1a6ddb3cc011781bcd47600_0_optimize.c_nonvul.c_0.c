static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, TCGArg VAR7, TCGArg VAR8)
{
    if (FUN2(VAR7, VAR8))
    {
        FUN3(VAR2, VAR4);
        return;
    }
    TCGOpcode VAR9 = FUN4(VAR4->VAR10);
    tcg_target_ulong VAR11;
    VAR4->VAR10 = VAR9;
    FUN5(VAR7);
    VAR11 = VAR12[VAR8].VAR11;
    if (VAR13 > 32 && VAR9 == VAR14)
    {
        VAR11 |= ~0xffffffffull;
    }
    VAR12[VAR7].VAR11 = VAR11;
    if (VAR2->VAR12[VAR8].VAR15 == VAR2->VAR12[VAR7].VAR15)
    {
        VAR12[VAR7].VAR16 = VAR12[VAR8].VAR16;
        VAR12[VAR7].VAR17 = VAR8;
        VAR12[VAR12[VAR7].VAR16].VAR17 = VAR7;
        VAR12[VAR8].VAR16 = VAR7;
        VAR12[VAR7].VAR18 = VAR12[VAR8].VAR18;
        VAR12[VAR7].VAR19 = VAR12[VAR8].VAR19;
    }
    VAR6[0] = VAR7;
    VAR6[1] = VAR8;
}