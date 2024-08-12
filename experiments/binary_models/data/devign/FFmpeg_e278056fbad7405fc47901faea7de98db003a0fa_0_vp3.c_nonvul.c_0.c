static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    GetBitContext VAR6;
    int VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12;
    VAR4->VAR13 = 1;
    if (!VAR2->VAR14)
    {
        FUN2(VAR2, VAR15, "");
        return -1;
    }
    for (VAR12 = 0; VAR12 < 3; VAR12++)
    {
        VAR11 = *(VAR9++) << 8;
        VAR11 += *(VAR9++);
        FUN3(&VAR6, VAR9, VAR11);
        VAR9 += VAR11;
        VAR7 = FUN4(&VAR6, 8);
        FUN5("", VAR7);
        if (!(VAR7 & 0x80))
        {
            FUN2(VAR2, VAR15, "");
        }
        FUN6(&VAR6, 6 * 8);
        switch (VAR7)
        {
        case 0x80:
            FUN7(VAR2, &VAR6);
            break;
        case 0x81:
            break;
        case 0x82:
            FUN8(VAR2, &VAR6);
            break;
        default:
            FUN2(VAR2, VAR15, "", VAR7 & ~0x80);
            break;
        }
        if (8 * VAR11 != FUN9(&VAR6))
            FUN2(VAR2, VAR15, "", 8 * VAR11 - FUN9(&VAR6), VAR7);
    }
    FUN10(VAR2);
    return 0;
}