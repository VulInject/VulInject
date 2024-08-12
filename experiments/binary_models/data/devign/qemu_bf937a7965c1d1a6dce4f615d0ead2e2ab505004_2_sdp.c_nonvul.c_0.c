static void FUN1(void *VAR1, const VAR2 *VAR3, int VAR4)
{
    struct VAR5 *VAR6 = VAR1;
    enum bt_sdp_cmd VAR7;
    uint8_t VAR8[VAR9 - VAR10], *VAR11;
    int VAR12, VAR13;
    int VAR14 = 0;
    int VAR15 = 0;
    if (VAR4 < 5)
    {
        FUN2("", VAR16, VAR4);
        return;
    }
    VAR7 = *VAR3++;
    VAR12 = (VAR3[0] << 8) | VAR3[1];
    VAR13 = (VAR3[2] << 8) | VAR3[3];
    VAR3 += 4;
    VAR4 -= 5;
    if (VAR4 != VAR13)
    {
        FUN2("", VAR16, VAR13, VAR4);
        VAR14 = VAR17;
        goto VAR18;
    }
    switch (VAR7)
    {
    case VAR19:
        VAR15 = FUN3(VAR6, VAR8, VAR3, VAR4);
        VAR7 = VAR20;
        break;
    case VAR21:
        VAR15 = FUN4(VAR6, VAR8, VAR3, VAR4);
        VAR7 = VAR22;
        break;
    case VAR23:
        VAR15 = FUN5(VAR6, VAR8, VAR3, VAR4);
        VAR7 = VAR24;
        break;
    case VAR25:
    case VAR22:
    case VAR20:
    case VAR24:
    default:
        FUN2("", VAR16, VAR7);
        VAR14 = VAR26;
        break;
    }
    if (VAR15 < 0)
    {
        VAR14 = -VAR15;
        VAR15 = 0;
    }
VAR18:
    if (VAR14)
    {
        VAR7 = VAR25;
        VAR8[VAR15++] = VAR14 >> 8;
        VAR8[VAR15++] = VAR14 & 0xff;
    }
    VAR11 = VAR6->VAR27->FUN6(VAR6->VAR27, VAR15 + VAR10);
    VAR11[0] = VAR7;
    VAR11[1] = VAR12 >> 8;
    VAR11[2] = VAR12 & 0xff;
    VAR11[3] = VAR15 >> 8;
    VAR11[4] = VAR15 & 0xff;
    memcpy(VAR11 + VAR10, VAR8, VAR15);
    VAR6->VAR27->FUN7(VAR6->VAR27);
}