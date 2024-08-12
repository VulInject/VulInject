static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    PutBitContext VAR7;
    int VAR8, VAR9;
    uint8_t VAR10[] = "";
    VAR11 *VAR12 = NULL;
    if (VAR2->VAR13[0]->VAR14->VAR15 == VAR16)
        return FUN2(VAR2, VAR4);
    if (VAR4->VAR17 > 2 && VAR4->VAR18[0] == 0xff && (VAR4->VAR18[1] >> 4) == 0xf)
    {
        FUN3(VAR2, VAR19, "");
        return VAR20;
    }
    if (VAR4->VAR17 > 0x1fff)
        goto VAR21;
    VAR12 = FUN4(VAR4->VAR17 + 1024);
    if (!VAR12)
        return FUN5(VAR22);
    FUN6(&VAR7, VAR12, VAR4->VAR17 + 1024);
    FUN7(VAR2, &VAR7);
    for (VAR8 = 0; VAR8 <= VAR4->VAR17 - 255; VAR8 += 255)
        FUN8(&VAR7, 8, 255);
    FUN8(&VAR7, 8, VAR4->VAR17 - VAR8);
    if (VAR4->VAR17 && (VAR4->VAR18[0] & 0xe1) == 0x81)
    {
        FUN8(&VAR7, 8, VAR4->VAR18[0] & 0xfe);
        FUN9(&VAR7, VAR4->VAR18 + 1, 8 * VAR4->VAR17 - 8);
    }
    else
        FUN9(&VAR7, VAR4->VAR18, 8 * VAR4->VAR17);
    FUN10(&VAR7);
    FUN11(&VAR7);
    VAR9 = FUN12(&VAR7) >> 3;
    if (VAR9 > 0x1fff)
        goto VAR21;
    VAR10[1] |= (VAR9 >> 8) & 0x1f;
    VAR10[2] |= VAR9 & 0xff;
    FUN13(VAR6, VAR10, 3);
    FUN13(VAR6, VAR12, VAR9);
    FUN14(VAR12);
    return 0;
VAR21:
    FUN3(VAR2, VAR19, "");
    FUN14(VAR12);
    return VAR20;
}