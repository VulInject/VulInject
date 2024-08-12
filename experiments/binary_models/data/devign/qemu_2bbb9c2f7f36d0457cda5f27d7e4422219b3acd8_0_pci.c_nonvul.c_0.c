void FUN1(VAR1 *VAR2, int VAR3, pcibus_t VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9;
    uint32_t VAR10;
    uint64_t VAR11;
    assert(VAR3 >= 0);
    assert(VAR3 < VAR12);
    if (VAR4 & (VAR4 - 1))
    {
        fprintf(VAR13, ""
                        "" VAR14 "",
                VAR5, VAR4);
        FUN2(1);
    }
    VAR9 = &VAR2->VAR15[VAR3];
    VAR9->VAR10 = VAR16;
    VAR9->VAR4 = VAR4;
    VAR9->VAR17 = VAR4;
    VAR9->VAR5 = VAR5;
    VAR9->VAR7 = VAR7;
    VAR11 = ~(VAR4 - 1);
    VAR10 = FUN3(VAR2, VAR3);
    if (VAR3 == VAR18)
    {
        VAR11 |= VAR19;
    }
    FUN4(VAR2->VAR20 + VAR10, VAR5);
    if (!(VAR9->VAR5 & VAR21) && VAR9->VAR5 & VAR22)
    {
        FUN5(VAR2->VAR11 + VAR10, VAR11);
        FUN5(VAR2->VAR23 + VAR10, ~0ULL);
    }
    else
    {
        FUN4(VAR2->VAR11 + VAR10, VAR11 & 0xffffffff);
        FUN4(VAR2->VAR23 + VAR10, 0xffffffff);
    }
}