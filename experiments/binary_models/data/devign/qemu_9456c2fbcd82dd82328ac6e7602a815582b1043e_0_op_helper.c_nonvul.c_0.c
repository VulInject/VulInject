void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    uint8_t VAR5;
    int VAR6;
    VAR5 = VAR2->VAR7 & 0xFF;
    VAR6 = (VAR2->VAR8 & ~0x80000000) % VAR2->VAR4->VAR9;
    VAR4 = &VAR2->VAR4->VAR10.VAR11.VAR4[VAR6];
    if (VAR5 != VAR4->VAR5)
        FUN2(VAR2, 1);
    FUN3(VAR2, VAR2->VAR4->VAR9);
    if (VAR4->VAR12)
    {
        VAR2->VAR7 = 1 << VAR13;
        VAR2->VAR14 = 0;
        VAR2->VAR15 = 0;
        VAR2->VAR16 = 0;
    }
    else
    {
        VAR2->VAR7 = VAR4->VAR17 | VAR4->VAR5;
        VAR2->VAR14 = VAR4->VAR18;
        VAR2->VAR15 = VAR4->VAR19 | (VAR4->VAR20 << 1) | (VAR4->VAR21 << 2) | ((VAR22)VAR4->VAR23 << VAR24) | ((VAR22)VAR4->VAR25 << VAR26) | (VAR4->VAR27 << 3) | (VAR4->VAR28[0] >> 6);
        VAR2->VAR16 = VAR4->VAR19 | (VAR4->VAR29 << 1) | (VAR4->VAR30 << 2) | ((VAR22)VAR4->VAR31 << VAR24) | ((VAR22)VAR4->VAR32 << VAR26) | (VAR4->VAR33 << 3) | (VAR4->VAR28[1] >> 6);
    }
}