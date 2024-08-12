static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    int VAR11 = 4;
    VAR12 *VAR13 = VAR2->VAR14;
    VAR15 *VAR16 = (VAR15 *)VAR3;
    VAR17 *VAR18 = (VAR17 *)VAR3;
    VAR16->VAR19 = VAR2->VAR20->VAR19;
    VAR16->VAR21 = VAR2->VAR20->VAR21;
    VAR16->VAR22 = VAR2->VAR20->VAR22;
    VAR16->VAR23 = VAR2->VAR23;
    VAR16->VAR24 = VAR2->VAR25->VAR26;
    VAR16->VAR27 = VAR2->VAR25->VAR28;
    if (VAR13->VAR29 >= 0)
    {
        VAR16->VAR21 = 1;
        VAR16->VAR22 = VAR13->VAR29;
    }
    if (VAR13->VAR30)
    {
        int VAR31;
        VAR7 *VAR32 = VAR13->VAR30;
        VAR9 = VAR13->VAR33 - 256 * 4;
        if (VAR2->VAR34 == 4)
        {
            for (VAR31 = 0; 2 * VAR31 + 1 < VAR9; VAR31++)
            {
                VAR32[2 * VAR31 + 0] = VAR8[VAR31] >> 4;
                VAR32[2 * VAR31 + 1] = VAR8[VAR31] & 15;
            }
            VAR11 = 8;
        }
        else
        {
            for (VAR31 = 0; 4 * VAR31 + 3 < VAR9; VAR31++)
            {
                VAR32[4 * VAR31 + 0] = VAR8[VAR31] >> 6;
                VAR32[4 * VAR31 + 1] = VAR8[VAR31] >> 4 & 3;
                VAR32[4 * VAR31 + 2] = VAR8[VAR31] >> 2 & 3;
                VAR32[4 * VAR31 + 3] = VAR8[VAR31] & 3;
            }
            VAR11 = 16;
        }
        VAR8 = VAR32;
    }
    if (VAR2->VAR35 == FUN2('', '', '', '') || VAR2->VAR35 == FUN2('', '', '', ''))
        VAR8 += VAR9 - VAR13->VAR33;
    if (VAR9 < VAR13->VAR33 - (VAR2->VAR36 == VAR37 ? 256 * 4 : 0))
        return -1;
    FUN3(VAR18, VAR8, VAR2->VAR36, VAR2->VAR38, VAR2->VAR39);
    if ((VAR2->VAR36 == VAR37 && VAR9 < VAR13->VAR33) || (VAR40[VAR2->VAR36].VAR41 & VAR42))
    {
        VAR16->VAR3[1] = VAR13->VAR43;
    }
    if (VAR2->VAR36 == VAR37)
    {
        const VAR7 *VAR44 = FUN4(VAR6, VAR45, NULL);
        if (VAR44)
        {
            memcpy(VAR16->VAR3[1], VAR44, VAR46);
            VAR16->VAR47 = 1;
        }
    }
    if ((VAR2->VAR36 == VAR48 || VAR2->VAR36 == VAR49 || VAR2->VAR36 == VAR50 || VAR2->VAR36 == VAR51 || VAR2->VAR36 == VAR52 || VAR2->VAR36 == VAR53 || VAR2->VAR36 == VAR37) && FUN5(VAR16->VAR54[0], VAR11) * VAR2->VAR39 <= VAR9)
        VAR16->VAR54[0] = FUN5(VAR16->VAR54[0], VAR11);
    if (VAR13->VAR55)
        FUN6(VAR2, VAR18);
    if (VAR2->VAR35 == FUN2('', '', '', '') || VAR2->VAR35 == FUN2('', '', '', '') || VAR2->VAR35 == FUN2('', '', '', '') || VAR2->VAR35 == FUN2('', '', '', ''))
        FUN7(VAR7 *, VAR18->VAR3[1], VAR18->VAR3[2]);
    if (VAR2->VAR35 == FUN8("") && VAR2->VAR36 == VAR56)
    {
        int VAR57, VAR58;
        VAR7 *VAR59 = VAR18->VAR3[0];
        for (VAR58 = 0; VAR58 < VAR2->VAR39; VAR58++)
        {
            for (VAR57 = 0; VAR57 < VAR2->VAR38; VAR57++)
                VAR59[2 * VAR57 + 1] ^= 0x80;
            VAR59 += VAR18->VAR54[0];
        }
    }
    *VAR4 = sizeof(VAR17);
    return VAR9;
}