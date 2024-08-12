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
    VAR4->VAR23 = VAR4->VAR24;
    VAR2->VAR25 = VAR4->VAR24;
    if (FUN7(VAR8, VAR26))
    {
        VAR8->VAR27.VAR28[VAR29] = 0x69051000 | '';
    }
    if (FUN7(VAR8, VAR30))
    {
        VAR8->VAR31 = 1;
        VAR8->VAR32 = VAR33;
        VAR8->VAR34.VAR35[1] |= VAR36 | VAR37 | VAR38;
        VAR8->VAR34.VAR39 = FUN8(VAR8->VAR34.VAR39, 20, 2, 3);
        if (FUN7(VAR8, VAR40))
        {
            VAR8->VAR32 = VAR41;
        }
        else if (FUN7(VAR8, VAR42))
        {
            VAR8->VAR32 = VAR43;
        }
        else
        {
            VAR8->VAR32 = VAR44;
        }
        VAR8->VAR45 = VAR4->VAR46;
    }
    else
    {
        VAR8->VAR34.VAR39 = FUN8(VAR8->VAR34.VAR39, 20, 4, 0xf);
    }
    VAR8->VAR47 = VAR48;
    VAR8->VAR13.VAR14[VAR49] = 1 << 30;
    if (FUN7(VAR8, VAR26))
    {
        VAR8->VAR34.VAR50 = 3;
    }
    else if (FUN7(VAR8, VAR51))
    {
        VAR8->VAR34.VAR50 = 1;
    }
    VAR8->VAR47 = VAR52;
    VAR8->VAR53 = VAR54 | VAR55 | VAR56 | VAR57;
    if (FUN7(VAR8, VAR58))
    {
        uint32_t VAR59;
        uint32_t VAR60;
        VAR61 *VAR62;
        VAR8->VAR53 &= ~(VAR56 | VAR57);
        VAR8->VAR63.VAR64 = VAR65;
        VAR8->VAR66[14] = 0xffffffff;
        VAR62 = FUN9(0);
        if (VAR62)
        {
            VAR59 = FUN10(VAR62);
            VAR60 = FUN10(VAR62 + 4);
        }
        else
        {
            VAR59 = FUN11(VAR2->VAR67, 0);
            VAR60 = FUN11(VAR2->VAR67, 4);
        }
        VAR8->VAR66[13] = VAR59 & 0xFFFFFFFC;
        VAR8->VAR66[15] = VAR60 & ~1;
        VAR8->VAR68 = VAR60 & 1;
    }
    if (FUN12(VAR8, VAR69) & VAR70)
    {
        VAR8->VAR66[15] = 0xFFFF0000;
    }
    VAR8->VAR13.VAR14[VAR49] = 0;
    FUN13(1, &VAR8->VAR13.VAR71);
    FUN14(1, &VAR8->VAR13.VAR71);
    FUN15(1, &VAR8->VAR13.VAR71);
    FUN16(VAR72, &VAR8->VAR13.VAR73);
    FUN16(VAR72, &VAR8->VAR13.VAR71);
    if (FUN17())
    {
        FUN18(VAR4);
    }
    FUN19(VAR4);
    FUN20(VAR4);
}