static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[0]->VAR11;
    VAR12 *VAR13 = VAR2->VAR13;
    PutBitContext VAR14;
    int VAR15, VAR16;
    uint8_t VAR17[] = "";
    if (VAR9->VAR18 == VAR19)
        return FUN2(VAR2, VAR4);
    if (!VAR9->VAR20)
    {
        if (VAR4->VAR21 > 2 && VAR4->VAR22[0] == 0x56 && (VAR4->VAR22[1] >> 4) == 0xe && (FUN3(VAR4->VAR22 + 1) & 0x1FFF) + 3 == VAR4->VAR21)
            return FUN2(VAR2, VAR4);
        else
        {
            VAR23 *VAR24;
            int VAR25 = 0, VAR26;
            VAR24 = FUN4(VAR4, VAR27, &VAR25);
            if (VAR25)
            {
                if (FUN5(VAR6, VAR24, VAR25) < 0)
                    return VAR28;
                VAR26 = FUN6(VAR9, VAR25);
                if (VAR26 < 0)
                    return VAR26;
                memcpy(VAR9->VAR20, VAR24, VAR25);
            }
        }
    }
    if (VAR4->VAR21 > 0x1fff)
        goto VAR29;
    FUN7(&VAR14, VAR6->VAR30, VAR4->VAR21 + 1024 + VAR31);
    FUN8(VAR2, &VAR14);
    for (VAR15 = 0; VAR15 <= VAR4->VAR21 - 255; VAR15 += 255)
        FUN9(&VAR14, 8, 255);
    FUN9(&VAR14, 8, VAR4->VAR21 - VAR15);
    if (VAR4->VAR21 && (VAR4->VAR22[0] & 0xe1) == 0x81)
    {
        FUN9(&VAR14, 8, VAR4->VAR22[0] & 0xfe);
        FUN10(&VAR14, VAR4->VAR22 + 1, 8 * VAR4->VAR21 - 8);
    }
    else
        FUN10(&VAR14, VAR4->VAR22, 8 * VAR4->VAR21);
    FUN11(&VAR14);
    FUN12(&VAR14);
    VAR16 = FUN13(&VAR14) >> 3;
    if (VAR16 > 0x1fff)
        goto VAR29;
    VAR17[1] |= (VAR16 >> 8) & 0x1f;
    VAR17[2] |= VAR16 & 0xff;
    FUN14(VAR13, VAR17, 3);
    FUN14(VAR13, VAR6->VAR30, VAR16);
    return 0;
VAR29:
    FUN15(VAR2, VAR32, "");
    return VAR28;
}