static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5, VAR6;
    uint32_t VAR7 = 0;
    for (VAR6 = FUN2(&VAR4->VAR8); VAR6 > 24; VAR6 -= 1)
    {
        VAR7 = ((VAR7 << 1) | FUN3(&VAR4->VAR8, 1)) & 0x000FFFFF;
        if (VAR7 == 0x10)
            break;
    }
    if (VAR7 != 0x10)
    {
        FUN4(VAR4->VAR9, VAR10, "");
        return -1;
    }
    VAR6 = FUN3(&VAR4->VAR8, 5);
    if (VAR6 < (VAR4->VAR11 & 31))
        VAR6 += 32;
    VAR4->VAR11 = (VAR4->VAR11 & ~31) + VAR6;
    VAR4->VAR9->VAR12 = (VAR13){1001, 30000};
    FUN5(&VAR4->VAR8);
    FUN5(&VAR4->VAR8);
    FUN5(&VAR4->VAR8);
    VAR5 = FUN6(&VAR4->VAR8);
    if (VAR5 == 0)
    {
        VAR4->VAR14 = 176;
        VAR4->VAR15 = 144;
        VAR4->VAR16 = 11;
        VAR4->VAR17 = 9;
    }
    else
    {
        VAR4->VAR14 = 352;
        VAR4->VAR15 = 288;
        VAR4->VAR16 = 22;
        VAR4->VAR17 = 18;
    }
    VAR4->VAR18 = VAR4->VAR16 * VAR4->VAR17;
    FUN5(&VAR4->VAR8);
    FUN5(&VAR4->VAR8);
    while (FUN6(&VAR4->VAR8) != 0)
    {
        FUN7(&VAR4->VAR8, 8);
        if (FUN2(&VAR4->VAR8) <= 0)
            return VAR19;
    }
    VAR4->VAR20 = VAR21;
    VAR2->VAR22 = 0;
    return 0;
}