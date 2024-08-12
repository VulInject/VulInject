void FUN1(VAR1)(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5, uint32_t VAR6)
{
    uint32_t VAR7 = FUN2(VAR4, 9, 3);
    uint32_t VAR8 = FUN2(VAR4, 6, 3);
    uint32_t VAR9 = FUN2(VAR4, 3, 3);
    uint32_t VAR10 = FUN2(VAR4, 0, 3);
    int16_t VAR11 = VAR3->VAR12[VAR7];
    int16_t VAR13 = VAR3->VAR12[VAR8];
    int16_t VAR14 = VAR3->VAR12[VAR9];
    int16_t VAR15 = VAR3->VAR12[VAR10];
    int16_t VAR16, VAR17;
    uintptr_t VAR18 = FUN3();
    VAR16 = FUN4(VAR3, VAR5, VAR18);
    VAR17 = FUN4(VAR3, VAR6, VAR18);
    if (VAR16 == VAR11 && VAR17 == VAR13)
    {
        FUN5(VAR3, VAR5, VAR14, VAR18);
        FUN5(VAR3, VAR6, VAR15, VAR18);
    }
    if (VAR11 != VAR16)
    {
        VAR3->VAR19 = VAR16;
        VAR3->VAR20 = VAR11;
    }
    else
    {
        VAR3->VAR19 = VAR17;
        VAR3->VAR20 = VAR13;
    }
    VAR3->VAR21 = VAR22;
    VAR3->VAR12[VAR7] = FUN6(VAR3->VAR12[VAR7], 0, 16, VAR16);
    VAR3->VAR12[VAR8] = FUN6(VAR3->VAR12[VAR8], 0, 16, VAR17);
}