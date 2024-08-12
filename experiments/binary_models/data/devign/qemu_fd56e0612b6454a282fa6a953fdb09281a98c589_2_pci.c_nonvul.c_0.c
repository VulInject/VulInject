void FUN1(VAR1 *VAR2, int VAR3, uint8_t VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    uint32_t VAR9;
    uint64_t VAR10;
    pcibus_t VAR11 = FUN2(VAR6);
    assert(VAR3 >= 0);
    assert(VAR3 < VAR12);
    if (VAR11 & (VAR11 - 1))
    {
        fprintf(VAR13, ""
                        "" VAR14 "",
                VAR4, VAR11);
        FUN3(1);
    }
    VAR8 = &VAR2->VAR15[VAR3];
    VAR8->VAR9 = VAR16;
    VAR8->VAR11 = VAR11;
    VAR8->VAR4 = VAR4;
    VAR8->VAR6 = VAR6;
    VAR8->VAR17 = VAR4 & VAR18 ? FUN4(VAR2)->VAR19 : FUN4(VAR2)->VAR20;
    VAR10 = ~(VAR11 - 1);
    if (VAR3 == VAR21)
    {
        VAR10 |= VAR22;
    }
    VAR9 = FUN5(VAR2, VAR3);
    FUN6(VAR2->VAR23 + VAR9, VAR4);
    if (!(VAR8->VAR4 & VAR18) && VAR8->VAR4 & VAR24)
    {
        FUN7(VAR2->VAR10 + VAR9, VAR10);
        FUN7(VAR2->VAR25 + VAR9, ~0ULL);
    }
    else
    {
        FUN6(VAR2->VAR10 + VAR9, VAR10 & 0xffffffff);
        FUN6(VAR2->VAR25 + VAR9, 0xffffffff);
    }
}