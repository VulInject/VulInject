void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    uint64_t VAR8;
    int VAR9;
    uint16_t VAR10;
    uint16_t VAR11;
    VAR12 *VAR13 = &VAR2->VAR13;
    uint8_t VAR14[VAR15];
    FUN2("");
    VAR9 = (VAR3 >> 20) & 0x00f;
    VAR8 = VAR13->VAR16[VAR9];
    if (VAR8 & 0xfff)
    {
        FUN3(VAR13, VAR17, 4);
        return;
    }
    if (FUN4(VAR2, VAR8, VAR9, VAR14, sizeof(VAR4)))
    {
        return;
    }
    VAR5 = (VAR4 *)VAR14;
    VAR10 = FUN5(VAR5->VAR10);
    if ((VAR10 < 16) || (VAR10 > 4088) || (VAR10 & 7))
    {
        FUN3(VAR13, VAR18, 4);
        return;
    }
    memset((char *)VAR5 + VAR10, 0, VAR15 - VAR10);
    VAR7 = (void *)((char *)VAR5 + VAR10);
    VAR11 = FUN5(VAR5->VAR11);
    FUN6(VAR11, VAR10);
    switch (VAR11)
    {
    case VAR19:
        FUN7(VAR5, VAR7);
        break;
    case VAR20:
        FUN8(VAR5, VAR7);
        break;
    case VAR21:
        FUN9(VAR5, VAR7);
        break;
    case VAR22:
        FUN10(VAR5, VAR7);
        break;
    default:
        FUN11(VAR7);
        break;
    }
    if (!FUN12(VAR2, VAR8 + VAR10, VAR9, VAR7, FUN5(VAR7->VAR10)))
    {
        FUN13(VAR2, 0);
    }
}