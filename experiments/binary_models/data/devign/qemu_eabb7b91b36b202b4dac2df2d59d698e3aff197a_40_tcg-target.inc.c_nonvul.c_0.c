void FUN1(uintptr_t VAR1, uintptr_t VAR2)
{
    tcg_insn_unit VAR3, VAR4;
    uint64_t VAR5;
    intptr_t VAR6 = VAR2 - VAR1;
    if (FUN2(VAR6))
    {
        VAR3 = VAR7 | (VAR6 & 0x3fffffc);
        VAR4 = VAR8;
    }
    else if (VAR9)
    {
        intptr_t VAR10, VAR11;
        VAR6 = VAR2 - (VAR12)VAR13;
        VAR10 = (VAR14)VAR6;
        VAR11 = (VAR15)(VAR6 - VAR10);
        FUN3(VAR6 == VAR11 + VAR10);
        VAR3 = VAR16 | FUN4(VAR17, VAR18, VAR11 >> 16);
        VAR4 = VAR19 | FUN4(VAR17, VAR17, VAR10);
    }
    else
    {
        FUN3(VAR20 == 32 || VAR2 == (VAR15)VAR2);
        VAR3 = VAR16 | FUN4(VAR17, 0, VAR2 >> 16);
        VAR4 = VAR21 | FUN5(VAR17, VAR17, VAR2);
    }
    VAR5 = (VAR22)VAR3 << 32 | VAR4;
    VAR5 = (VAR22)VAR4 << 32 | VAR3;
    *(VAR22 *)VAR1 = VAR5;
    FUN6(VAR1, VAR1 + 8);
}