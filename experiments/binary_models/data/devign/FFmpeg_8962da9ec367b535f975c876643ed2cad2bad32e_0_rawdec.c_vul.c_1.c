static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = FUN2(VAR2->VAR9);
    VAR10 *VAR11 = VAR2->VAR12;
    const VAR13 *VAR14 = VAR6->VAR3;
    int VAR15 = VAR6->VAR16;
    int VAR17 = 4;
    int VAR18, VAR19;
    int VAR20 = !VAR6->VAR14 || VAR11->VAR21 || VAR11->VAR22;
    VAR23 *VAR24 = VAR3;
    VAR25 *VAR26 = VAR3;
    VAR24->VAR27 = VAR28;
    VAR24->VAR29 = 1;
    VAR24->VAR30 = VAR2->VAR30;
    VAR24->VAR31 = VAR2->VAR32->VAR33;
    FUN3(VAR24, VAR2->VAR32->VAR34);
    FUN4(VAR24, VAR2->VAR32->VAR35);
    if (VAR11->VAR36 >= 0)
    {
        VAR24->VAR37 = 1;
        VAR24->VAR38 = VAR11->VAR36;
    }
    if ((VAR18 = FUN5(VAR2->VAR39, VAR2->VAR40, 0, VAR2)) < 0)
        return VAR18;
    if (VAR20)
        VAR24->VAR14[0] = FUN6(VAR11->VAR41);
    else
        VAR24->VAR14[0] = FUN7(VAR6->VAR14);
    if (!VAR24->VAR14[0])
        return FUN8(VAR42);
    if (VAR11->VAR21)
    {
        int VAR43;
        VAR13 *VAR44 = VAR24->VAR14[0]->VAR3;
        VAR15 = VAR11->VAR41 - VAR45;
        if (VAR2->VAR46 == 4)
        {
            for (VAR43 = 0; 2 * VAR43 + 1 < VAR15 && VAR43 < VAR6->VAR16; VAR43++)
            {
                VAR44[2 * VAR43 + 0] = VAR14[VAR43] >> 4;
                VAR44[2 * VAR43 + 1] = VAR14[VAR43] & 15;
            }
            VAR17 = 8;
        }
        else
        {
            FUN9(VAR2->VAR46 == 2);
            for (VAR43 = 0; 4 * VAR43 + 3 < VAR15 && VAR43 < VAR6->VAR16; VAR43++)
            {
                VAR44[4 * VAR43 + 0] = VAR14[VAR43] >> 6;
                VAR44[4 * VAR43 + 1] = VAR14[VAR43] >> 4 & 3;
                VAR44[4 * VAR43 + 2] = VAR14[VAR43] >> 2 & 3;
                VAR44[4 * VAR43 + 3] = VAR14[VAR43] & 3;
            }
            VAR17 = 16;
        }
        VAR14 = VAR44;
    }
    else if (VAR20)
    {
        memcpy(VAR24->VAR14[0]->VAR3, VAR14, FUN10(VAR15, VAR11->VAR41));
        VAR14 = VAR24->VAR14[0]->VAR3;
    }
    if (VAR2->VAR47 == FUN11('', '', '', '') || VAR2->VAR47 == FUN11('', '', '', ''))
        VAR14 += VAR15 - VAR11->VAR41;
    VAR19 = VAR11->VAR41 - (VAR2->VAR9 == VAR48 ? VAR45 : 0);
    if (VAR15 < VAR19)
    {
        FUN12(VAR2, VAR49, "", VAR15, VAR19);
        FUN13(&VAR24->VAR14[0]);
        return FUN8(VAR50);
    }
    if ((VAR18 = FUN14(VAR26, VAR14, VAR2->VAR9, VAR2->VAR39, VAR2->VAR40)) < 0)
    {
        FUN13(&VAR24->VAR14[0]);
        return VAR18;
    }
    if (VAR2->VAR9 == VAR48)
    {
        const VAR13 *VAR51 = FUN15(VAR6, VAR52, NULL);
        if (VAR51)
        {
            FUN13(&VAR11->VAR53);
            VAR11->VAR53 = FUN6(VAR45);
            if (!VAR11->VAR53)
            {
                FUN13(&VAR24->VAR14[0]);
                return FUN8(VAR42);
            }
            memcpy(VAR11->VAR53->VAR3, VAR51, VAR45);
            VAR24->VAR54 = 1;
        }
    }
    if ((VAR2->VAR9 == VAR55 || VAR2->VAR9 == VAR56 || VAR2->VAR9 == VAR57 || VAR2->VAR9 == VAR58 || VAR2->VAR9 == VAR59 || VAR2->VAR9 == VAR60 || VAR2->VAR9 == VAR48) && FUN16(VAR24->VAR61[0], VAR17) * VAR2->VAR40 <= VAR15)
        VAR24->VAR61[0] = FUN16(VAR24->VAR61[0], VAR17);
    if (VAR2->VAR9 == VAR62 && VAR2->VAR47 == FUN11('', '', '', '') && FUN16(VAR24->VAR61[0], VAR17) * VAR2->VAR40 + FUN16(VAR24->VAR61[1], VAR17) * ((VAR2->VAR40 + 1) / 2) <= VAR15)
    {
        int VAR63 = FUN16(VAR24->VAR61[0], VAR17);
        VAR24->VAR3[1] += (VAR63 - VAR24->VAR61[0]) * VAR2->VAR40;
        VAR24->VAR61[0] = VAR63;
        VAR24->VAR61[1] = FUN16(VAR24->VAR61[1], VAR17);
    }
    if ((VAR2->VAR9 == VAR48 && VAR15 < VAR11->VAR41) || (VAR8->VAR64 & VAR65))
    {
        VAR24->VAR14[1] = FUN7(VAR11->VAR53);
        if (!VAR24->VAR14[1])
        {
            FUN13(&VAR24->VAR14[0]);
            return FUN8(VAR42);
        }
        VAR24->VAR3[1] = VAR24->VAR14[1]->VAR3;
    }
    if (VAR2->VAR9 == VAR55 && ((VAR24->VAR61[0] + 3) & ~3) * VAR2->VAR40 <= VAR15)
        VAR24->VAR61[0] = (VAR24->VAR61[0] + 3) & ~3;
    if (VAR11->VAR66)
        FUN17(VAR2, VAR26);
    if (VAR2->VAR47 == FUN11('', '', '', '') || VAR2->VAR47 == FUN11('', '', '', '') || VAR2->VAR47 == FUN11('', '', '', '') || VAR2->VAR47 == FUN11('', '', '', ''))
        FUN18(VAR13 *, VAR26->VAR3[1], VAR26->VAR3[2]);
    if (VAR2->VAR47 == FUN19("") && (VAR2->VAR39 + 1) * (VAR2->VAR40 + 1) * 3 / 2 == VAR15)
    {
        VAR26->VAR3[1] = VAR26->VAR3[1] + (VAR2->VAR39 + 1) * (VAR2->VAR40 + 1) - VAR2->VAR39 * VAR2->VAR40;
        VAR26->VAR3[2] = VAR26->VAR3[2] + ((VAR2->VAR39 + 1) * (VAR2->VAR40 + 1) - VAR2->VAR39 * VAR2->VAR40) * 5 / 4;
    }
    if (VAR2->VAR47 == FUN19("") && VAR2->VAR9 == VAR67)
    {
        int VAR68, VAR69;
        VAR13 *VAR70 = VAR26->VAR3[0];
        for (VAR69 = 0; VAR69 < VAR2->VAR40; VAR69++)
        {
            for (VAR68 = 0; VAR68 < VAR2->VAR39; VAR68++)
                VAR70[2 * VAR68 + 1] ^= 0x80;
            VAR70 += VAR26->VAR61[0];
        }
    }
    if (VAR2->VAR47 == FUN19("") && VAR2->VAR9 == VAR67)
    {
        int VAR68, VAR69;
        VAR13 *VAR70 = VAR26->VAR3[0];
        for (VAR69 = 0; VAR69 < VAR2->VAR40; VAR69++)
        {
            for (VAR68 = 0; VAR68 < VAR2->VAR39 - 1; VAR68 += 2)
                FUN18(VAR13, VAR70[2 * VAR68 + 1], VAR70[2 * VAR68 + 3]);
            VAR70 += VAR26->VAR61[0];
        }
    }
    if (VAR2->VAR71 > VAR72)
    {
        VAR24->VAR37 = 1;
        if (VAR2->VAR71 == VAR73 || VAR2->VAR71 == VAR74)
            VAR24->VAR38 = 1;
    }
    *VAR4 = 1;
    return VAR15;
}