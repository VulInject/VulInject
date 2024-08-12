static void FUN1(VAR1 *VAR2, S390Opcode VAR3, int VAR4, TCGReg VAR5, int VAR6, VAR7 *VAR8)
{
    tcg_target_long VAR9;
    if (VAR8->VAR10)
    {
        VAR9 = VAR8->VAR11.VAR12 - VAR2->VAR13;
    }
    else
    {
        VAR9 = VAR2->VAR13[1];
        FUN2(VAR2, VAR2->VAR13 + 1, VAR14, VAR8, -2);
    }
    FUN3(VAR2, (VAR3 & 0xff00) | (VAR5 << 4) | VAR4);
    FUN3(VAR2, VAR9);
    FUN3(VAR2, (VAR6 << 8) | (VAR3 & 0xff));
}