static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    int VAR11 = 4;
    VAR12 *VAR13 = VAR2->VAR14;
    VAR15 *VAR16 = VAR3;
    VAR17 *VAR18 = VAR3;
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
    if (VAR2->VAR30 <= 0 || VAR2->VAR31 <= 0)
    {
        FUN2(VAR2, VAR32, "");
        return FUN3(VAR33);
    }
    if (VAR13->VAR34)
    {
        int VAR35;
        VAR7 *VAR36 = VAR13->VAR34;
        VAR9 = VAR13->VAR37 - 256 * 4;
        if (VAR2->VAR38 == 4)
        {
            for (VAR35 = 0; 2 * VAR35 + 1 < VAR9 && VAR35 < VAR6->VAR10; VAR35++)
            {
                VAR36[2 * VAR35 + 0] = VAR8[VAR35] >> 4;
                VAR36[2 * VAR35 + 1] = VAR8[VAR35] & 15;
            }
            VAR11 = 8;
        }
        else
        {
            for (VAR35 = 0; 4 * VAR35 + 3 < VAR9 && VAR35 < VAR6->VAR10; VAR35++)
            {
                VAR36[4 * VAR35 + 0] = VAR8[VAR35] >> 6;
                VAR36[4 * VAR35 + 1] = VAR8[VAR35] >> 4 & 3;
                VAR36[4 * VAR35 + 2] = VAR8[VAR35] >> 2 & 3;
                VAR36[4 * VAR35 + 3] = VAR8[VAR35] & 3;
            }
            VAR11 = 16;
        }
        VAR8 = VAR36;
    }
    if (VAR2->VAR39 == FUN4('', '', '', '') || VAR2->VAR39 == FUN4('', '', '', ''))
        VAR8 += VAR9 - VAR13->VAR37;
    if (VAR9 < VAR13->VAR37 - (VAR2->VAR40 == VAR41 ? 256 * 4 : 0))
        return -1;
    FUN5(VAR18, VAR8, VAR2->VAR40, VAR2->VAR30, VAR2->VAR31);
    if ((VAR2->VAR40 == VAR41 && VAR9 < VAR13->VAR37) || (VAR42[VAR2->VAR40].VAR43 & VAR44))
    {
        VAR16->VAR3[1] = VAR13->VAR45;
    }
    if (VAR2->VAR40 == VAR41)
    {
        const VAR7 *VAR46 = FUN6(VAR6, VAR47, NULL);
        if (VAR46)
        {
            memcpy(VAR16->VAR3[1], VAR46, VAR48);
            VAR16->VAR49 = 1;
        }
    }
    if ((VAR2->VAR40 == VAR50 || VAR2->VAR40 == VAR51 || VAR2->VAR40 == VAR52 || VAR2->VAR40 == VAR53 || VAR2->VAR40 == VAR54 || VAR2->VAR40 == VAR55 || VAR2->VAR40 == VAR41) && FUN7(VAR16->VAR56[0], VAR11) * VAR2->VAR31 <= VAR9)
        VAR16->VAR56[0] = FUN7(VAR16->VAR56[0], VAR11);
    if (VAR13->VAR57)
        FUN8(VAR2, VAR18);
    if (VAR2->VAR39 == FUN4('', '', '', '') || VAR2->VAR39 == FUN4('', '', '', '') || VAR2->VAR39 == FUN4('', '', '', '') || VAR2->VAR39 == FUN4('', '', '', ''))
        FUN9(VAR7 *, VAR18->VAR3[1], VAR18->VAR3[2]);
    if (VAR2->VAR39 == FUN10("") && VAR2->VAR40 == VAR58)
    {
        int VAR59, VAR60;
        VAR7 *VAR61 = VAR18->VAR3[0];
        for (VAR60 = 0; VAR60 < VAR2->VAR31; VAR60++)
        {
            for (VAR59 = 0; VAR59 < VAR2->VAR30; VAR59++)
                VAR61[2 * VAR59 + 1] ^= 0x80;
            VAR61 += VAR18->VAR56[0];
        }
    }
    *VAR4 = sizeof(VAR17);
    return VAR9;
}