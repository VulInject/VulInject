static void FUN1(VAR1 *VAR2, int VAR3, intptr_t VAR4, intptr_t VAR5)
{
    VAR1 *VAR6;
    tcg_insn_unit VAR7;
    VAR4 += VAR5;
    VAR6 = (VAR1 *)VAR4;
    switch (VAR3)
    {
    case VAR8:
        FUN2(VAR2, VAR6);
        break;
    case VAR9:
        FUN3(VAR2, VAR6);
        break;
    case VAR10:
        assert(VAR4 == (VAR11)VAR4);
        VAR7 = *VAR2;
        VAR7 = FUN4(VAR7, 0, 16, VAR4);
        *VAR2 = VAR7;
        break;
    default:
        FUN5();
    }
}