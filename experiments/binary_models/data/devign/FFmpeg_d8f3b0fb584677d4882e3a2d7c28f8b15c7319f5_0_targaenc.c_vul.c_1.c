static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13 = -1, VAR14;
    VAR15 *VAR16;
    if (VAR2->VAR17 > 0xffff || VAR2->VAR18 > 0xffff)
    {
        FUN2(VAR2, VAR19, "");
        return FUN3(VAR20);
    }
    VAR12 = FUN4(VAR2->VAR21, VAR2->VAR17, VAR2->VAR18, 1);
    if ((VAR14 = FUN5(VAR4, VAR12 + 45)) < 0)
    {
        FUN2(VAR2, VAR19, "");
        return VAR14;
    }
    memset(VAR4->VAR22, 0, 12);
    FUN6(VAR4->VAR22 + 12, VAR2->VAR17);
    FUN6(VAR4->VAR22 + 14, VAR2->VAR18);
    VAR4->VAR22[17] = 0x20 | (VAR2->VAR21 == VAR23 ? 8 : 0);
    switch (VAR2->VAR21)
    {
    case VAR24:
        VAR4->VAR22[2] = VAR25;
        VAR4->VAR22[16] = 8;
        break;
    case VAR26:
        VAR4->VAR22[2] = VAR27;
        VAR4->VAR22[16] = 16;
        break;
    case VAR28:
        VAR4->VAR22[2] = VAR27;
        VAR4->VAR22[16] = 24;
        break;
    case VAR23:
        VAR4->VAR22[2] = VAR27;
        VAR4->VAR22[16] = 32;
        break;
    default:
        FUN2(VAR2, VAR19, "", FUN7(VAR2->VAR21));
        return FUN3(VAR20);
    }
    VAR11 = VAR4->VAR22[16] >> 3;
    VAR16 = VAR4->VAR22 + 18;
    FF_DISABLE_DEPRECATION_WARNINGS if (VAR2->VAR29 == VAR30) VAR9->VAR31 = 0;
    FF_ENABLE_DEPRECATION_WARNINGS if (VAR9->VAR31) VAR13 = FUN8(VAR16, VAR12, VAR6, VAR11, VAR2->VAR17, VAR2->VAR18);
    if (VAR13 >= 0)
        VAR4->VAR22[2] |= 8;
    else
        VAR13 = FUN9(VAR16, VAR6, VAR11, VAR2->VAR17, VAR2->VAR18);
    VAR16 += VAR13;
    memcpy(VAR16, "", 26);
    VAR4->VAR32 = VAR16 + 26 - VAR4->VAR22;
    VAR4->VAR33 |= VAR34;
    *VAR7 = 1;
    return 0;
}