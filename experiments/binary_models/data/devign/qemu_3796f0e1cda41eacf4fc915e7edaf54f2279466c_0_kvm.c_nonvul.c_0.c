static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, uint8_t VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    uint8_t VAR8;
    uint16_t VAR9;
    VAR1 *VAR10;
    VAR11 *VAR12 = &VAR7->VAR13[VAR5 >> 4];
    int VAR14;
    FUN2(FUN3(VAR2));
    VAR8 = FUN4(VAR7, VAR4->VAR15.VAR16) & VAR17;
    VAR9 = VAR7->VAR13[VAR5 & 0x0f];
    VAR10 = FUN5(VAR9);
    if (VAR10 == NULL)
    {
        VAR14 = 3;
        goto VAR18;
    }
    switch (VAR8)
    {
    case VAR19:
        VAR14 = FUN6(VAR10);
        break;
    case VAR20:
        VAR14 = FUN7(VAR10);
        break;
    case VAR21:
        return -1;
    case VAR22:
        VAR14 = FUN8(VAR10);
        break;
    default:
        FUN9("", VAR8);
        *VAR12 &= 0xffffffff00000000UL;
        *VAR12 |= VAR23;
        VAR14 = 1;
        break;
    }
VAR18:
    FUN10(VAR2, VAR14);
    return 0;
}