void FUN1(uintptr_t VAR1, uintptr_t VAR2, uintptr_t VAR3)
{
    if (VAR4 == 64)
    {
        tcg_insn_unit VAR5, VAR6;
        intptr_t VAR7 = VAR3 - VAR1;
        intptr_t VAR8 = VAR3 - (VAR2 + 4);
        uint64_t VAR9;
        if (VAR7 == (VAR10)VAR7)
        {
            VAR5 = VAR11 | FUN2(VAR12, VAR12, VAR7);
            VAR6 = VAR13 | (VAR8 & 0x3fffffc);
        }
        else
        {
            intptr_t VAR14 = (VAR10)VAR7;
            intptr_t VAR15 = (VAR16)(VAR7 - VAR14);
            assert(VAR7 == VAR15 + VAR14);
            VAR5 = VAR17 | FUN2(VAR12, VAR12, VAR15 >> 16);
            VAR6 = VAR11 | FUN2(VAR12, VAR12, VAR14);
        }
        VAR9 = (VAR18)VAR5 << 32 | VAR6;
        VAR9 = (VAR18)VAR6 << 32 | VAR5;
        FUN3((VAR18 *)VAR2, VAR9);
        FUN4(VAR2, VAR2 + 8);
    }
    else
    {
        intptr_t VAR19 = VAR3 - VAR2;
        FUN5(FUN6(VAR19));
        FUN3((VAR20 *)VAR2, VAR13 | (VAR19 & 0x3fffffc));
        FUN4(VAR2, VAR2 + 4);
    }
}