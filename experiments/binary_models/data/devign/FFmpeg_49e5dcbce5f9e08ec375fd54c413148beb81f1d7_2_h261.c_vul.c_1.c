int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5, VAR6;
    static int VAR7 = 0;
    uint32_t VAR8;
    FUN2(&VAR4->VAR9);
    VAR8 = (VAR2->VAR10 << (12 - (8 - VAR2->VAR11))) | FUN3(&VAR4->VAR9, 20 - 8 - (8 - VAR2->VAR11));
    for (VAR6 = VAR4->VAR9.VAR12 - FUN4(&VAR4->VAR9); VAR6 > 24; VAR6 -= 1)
    {
        VAR8 = ((VAR8 << 1) | FUN3(&VAR4->VAR9, 1)) & 0x000FFFFF;
        if (VAR8 == 0x10)
            break;
    }
    if (VAR8 != 0x10)
    {
        FUN5(VAR4->VAR13, VAR14, "");
        return -1;
    }
    VAR4->VAR15 = FUN3(&VAR4->VAR9, 5);
    FUN6(&VAR4->VAR9);
    FUN6(&VAR4->VAR9);
    FUN6(&VAR4->VAR9);
    VAR5 = FUN7(&VAR4->VAR9);
    if (VAR5 == 0)
    {
        VAR4->VAR16 = 176;
        VAR4->VAR17 = 144;
        VAR4->VAR18 = 11;
        VAR4->VAR19 = 9;
    }
    else
    {
        VAR4->VAR16 = 352;
        VAR4->VAR17 = 288;
        VAR4->VAR18 = 22;
        VAR4->VAR19 = 18;
    }
    VAR4->VAR20 = VAR4->VAR18 * VAR4->VAR19;
    FUN6(&VAR4->VAR9);
    FUN6(&VAR4->VAR9);
    while (FUN7(&VAR4->VAR9) != 0)
    {
        FUN8(&VAR4->VAR9, 8);
    }
    if (VAR7 > 1)
        VAR4->VAR21 = VAR22;
    else
        VAR4->VAR21 = VAR23;
    VAR7++;
    VAR2->VAR24 = 0;
    return 0;
}