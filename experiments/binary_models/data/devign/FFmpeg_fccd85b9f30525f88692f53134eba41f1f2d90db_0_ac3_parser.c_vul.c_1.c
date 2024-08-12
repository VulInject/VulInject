static int FUN1(uint64_t VAR1, VAR2 *VAR3, int *VAR4, int *VAR5)
{
    int VAR6;
    union
    {
        uint64_t VAR7;
        uint8_t VAR8[8];
    } VAR9 = {FUN2(VAR1)};
    AC3HeaderInfo VAR10, *VAR11 = &VAR10;
    GetBitContext VAR12;
    FUN3(&VAR12, VAR9.VAR8 + 8 - VAR13, 54);
    VAR6 = FUN4(&VAR12, &VAR11);
    if (VAR6 < 0)
        return 0;
    VAR3->VAR14 = VAR10.VAR14;
    VAR3->VAR15 = VAR10.VAR15;
    VAR3->VAR16 = VAR10.VAR16;
    VAR3->VAR17 = VAR10.VAR17;
    VAR3->VAR18 = VAR10.VAR19 * 256;
    VAR3->VAR20 = VAR10.VAR21;
    if (VAR10.VAR21 == 0x7 && VAR10.VAR16 > 1)
        VAR3->VAR20 = VAR22;
    if (VAR10.VAR23 > 10)
        VAR3->VAR24 = VAR25;
    else if (VAR3->VAR24 == VAR26)
        VAR3->VAR24 = VAR27;
    *VAR4 = (VAR10.VAR28 != VAR29);
    *VAR5 = (VAR10.VAR28 != VAR30);
    return VAR10.VAR31;
}