static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[0]->VAR8;
    int read, VAR9 = 0, VAR10, VAR11;
    int64_t VAR12 = FUN2(VAR2->VAR13);
    if (FUN3(VAR2->VAR13))
    {
        return FUN4(VAR14);
    }
    VAR10 = FUN5(VAR2->VAR13);
    VAR11 = (VAR10 >> 3) & 0x0F;
    if (VAR6->VAR15 == VAR16)
    {
        static const uint8_t VAR17[16] = {12, 13, 15, 17, 19, 20, 26, 31, 5, 0, 0, 0, 0, 0, 0, 0};
        VAR9 = VAR17[VAR11] + 1;
    }
    else if (VAR6->VAR15 == VAR18)
    {
        static const uint8_t VAR17[16] = {18, 24, 33, 37, 41, 47, 51, 59, 61, 6, 6, 0, 0, 0, 1, 1};
        VAR9 = VAR17[VAR11];
    }
    if (!VAR9 || FUN6(VAR4, VAR9))
        return FUN4(VAR14);
    VAR2->VAR7[0]->VAR8->VAR19 = VAR9 * 8 * 50;
    VAR4->VAR20 = 0;
    VAR4->VAR12 = VAR12;
    VAR4->VAR21[0] = VAR10;
    VAR4->VAR22 = VAR6->VAR15 == VAR16 ? 160 : 320;
    read = FUN7(VAR2->VAR13, VAR4->VAR21 + 1, VAR9 - 1);
    if (read != VAR9 - 1)
    {
        FUN8(VAR4);
        return FUN4(VAR14);
    }
    return 0;
}