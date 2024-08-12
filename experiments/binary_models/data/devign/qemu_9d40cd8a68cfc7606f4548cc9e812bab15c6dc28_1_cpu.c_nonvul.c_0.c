static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    VAR7 *VAR8 = &VAR4->VAR8;
    VAR6->FUN4(VAR2);
    memset(VAR8, 0, FUN5(VAR7, VAR9));
    FUN6(VAR4->VAR10, VAR11, VAR4);
    FUN6(VAR4->VAR10, VAR12, VAR4);
    VAR8->VAR13.VAR14[VAR15] = VAR4->VAR16;
    VAR8->VAR13.VAR14[VAR17] = VAR4->VAR18;
    VAR8->VAR13.VAR14[VAR19] = VAR4->VAR20;
    VAR8->VAR13.VAR14[VAR21] = VAR4->VAR22;
    VAR4->VAR23 = VAR4->VAR24 ? VAR25 : VAR26;
    VAR2->VAR27 = VAR4->VAR24;
    if (FUN7(VAR8, VAR28))
    {
        VAR8->VAR29.VAR30[VAR31] = 0x69051000 | '';
    }
    if (FUN7(VAR8, VAR32))
    {
        VAR8->VAR33 = 1;
        VAR8->VAR34 = VAR35;
        VAR8->VAR36.VAR37[1] |= VAR38 | VAR39 | VAR40;
        VAR8->VAR36.VAR41 = FUN8(VAR8->VAR36.VAR41, 20, 2, 3);
        if (FUN7(VAR8, VAR42))
        {
            VAR8->VAR34 = VAR43;
        }
        else if (FUN7(VAR8, VAR44))
        {
            VAR8->VAR34 = VAR45;
        }
        else
        {
            VAR8->VAR34 = VAR46;
        }
        VAR8->VAR47 = VAR4->VAR48;
    }
    else
    {
        VAR8->VAR36.VAR41 = FUN8(VAR8->VAR36.VAR41, 20, 4, 0xf);
    }
    VAR8->VAR49 = VAR50;
    VAR8->VAR13.VAR14[VAR51] = 1 << 30;
    if (FUN7(VAR8, VAR28))
    {
        VAR8->VAR36.VAR52 = 3;
    }
    else if (FUN7(VAR8, VAR53))
    {
        VAR8->VAR36.VAR52 = 1;
    }
    VAR8->VAR49 = VAR54;
    VAR8->VAR55 = VAR56 | VAR57 | VAR58 | VAR59;
    if (FUN7(VAR8, VAR60))
    {
        uint32_t VAR61;
        uint32_t VAR62;
        VAR63 *VAR64;
        if (FUN7(VAR8, VAR65))
        {
            VAR8->VAR66.VAR67 = true;
        }
        VAR8->VAR66.VAR68[VAR69] = VAR70;
        VAR8->VAR66.VAR68[VAR71] = VAR70;
        if (FUN7(VAR8, VAR72))
        {
            VAR8->VAR66.VAR68[VAR69] |= VAR73;
            VAR8->VAR66.VAR68[VAR71] |= VAR73;
        }
        VAR8->VAR74[14] = 0xffffffff;
        VAR64 = FUN9(0);
        if (VAR64)
        {
            VAR61 = FUN10(VAR64);
            VAR62 = FUN10(VAR64 + 4);
        }
        else
        {
            VAR61 = FUN11(VAR2->VAR75, 0);
            VAR62 = FUN11(VAR2->VAR75, 4);
        }
        VAR8->VAR74[13] = VAR61 & 0xFFFFFFFC;
        VAR8->VAR74[15] = VAR62 & ~1;
        VAR8->VAR76 = VAR62 & 1;
    }
    if (FUN12(VAR8, VAR77) & VAR78)
    {
        VAR8->VAR74[15] = 0xFFFF0000;
    }
    VAR8->VAR13.VAR14[VAR51] = 0;
    if (FUN7(VAR8, VAR79))
    {
        if (VAR4->VAR80 > 0)
        {
            if (FUN7(VAR8, VAR72))
            {
                memset(VAR8->VAR81.VAR82[VAR69], 0, sizeof(*VAR8->VAR81.VAR82[VAR69]) * VAR4->VAR80);
                memset(VAR8->VAR81.VAR83[VAR69], 0, sizeof(*VAR8->VAR81.VAR83[VAR69]) * VAR4->VAR80);
                if (FUN7(VAR8, VAR65))
                {
                    memset(VAR8->VAR81.VAR82[VAR71], 0, sizeof(*VAR8->VAR81.VAR82[VAR71]) * VAR4->VAR80);
                    memset(VAR8->VAR81.VAR83[VAR71], 0, sizeof(*VAR8->VAR81.VAR83[VAR71]) * VAR4->VAR80);
                }
            }
            else if (FUN7(VAR8, VAR84))
            {
                memset(VAR8->VAR85.VAR86, 0, sizeof(*VAR8->VAR85.VAR86) * VAR4->VAR80);
                memset(VAR8->VAR85.VAR87, 0, sizeof(*VAR8->VAR85.VAR87) * VAR4->VAR80);
                memset(VAR8->VAR85.VAR88, 0, sizeof(*VAR8->VAR85.VAR88) * VAR4->VAR80);
            }
        }
        VAR8->VAR85.VAR89[VAR69] = 0;
        VAR8->VAR85.VAR89[VAR71] = 0;
        VAR8->VAR81.VAR90[VAR69] = 0;
        VAR8->VAR81.VAR90[VAR71] = 0;
        VAR8->VAR81.VAR91[VAR69] = 0;
        VAR8->VAR81.VAR91[VAR71] = 0;
    }
    FUN13(1, &VAR8->VAR13.VAR92);
    FUN14(1, &VAR8->VAR13.VAR92);
    FUN15(1, &VAR8->VAR13.VAR92);
    FUN16(VAR93, &VAR8->VAR13.VAR94);
    FUN16(VAR93, &VAR8->VAR13.VAR92);
    if (FUN17())
    {
        FUN18(VAR4);
    }
    FUN19(VAR4);
    FUN20(VAR4);
}