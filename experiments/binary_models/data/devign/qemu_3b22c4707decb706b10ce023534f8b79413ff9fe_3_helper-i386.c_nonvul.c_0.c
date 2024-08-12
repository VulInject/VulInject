static void FUN1(int VAR1, int VAR2, int VAR3, unsigned int VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8, *VAR9;
    int VAR10;
    uint32_t VAR11, VAR12;
    uint32_t VAR13, VAR14;
    VAR6 = &VAR15->VAR16;
    if (VAR1 * 4 + 3 > VAR6->VAR17)
        FUN2(VAR18, VAR1 * 8 + 2);
    VAR8 = VAR6->VAR19 + VAR1 * 4;
    VAR11 = FUN3(VAR8);
    VAR10 = FUN3(VAR8 + 2);
    VAR12 = VAR20;
    VAR9 = VAR15->VAR21[VAR22].VAR19;
    if (VAR2)
        VAR14 = VAR4;
    else
        VAR14 = VAR15->VAR23;
    VAR13 = VAR15->VAR21[VAR24].VAR10;
    VAR12 -= 2;
    FUN4(VAR9 + (VAR12 & 0xffff), FUN5());
    VAR12 -= 2;
    FUN4(VAR9 + (VAR12 & 0xffff), VAR13);
    VAR12 -= 2;
    FUN4(VAR9 + (VAR12 & 0xffff), VAR14);
    VAR20 = (VAR20 & ~0xffff) | (VAR12 & 0xffff);
    VAR15->VAR23 = VAR11;
    VAR15->VAR21[VAR24].VAR10 = VAR10;
    VAR15->VAR21[VAR24].VAR19 = (VAR7 *)(VAR10 << 4);
    VAR15->VAR25 &= ~(VAR26 | VAR27 | VAR28 | VAR29);
}