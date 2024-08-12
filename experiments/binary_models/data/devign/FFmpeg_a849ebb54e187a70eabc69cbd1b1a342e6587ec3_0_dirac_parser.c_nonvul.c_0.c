static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    VAR7 *VAR8;
    static const uint8_t VAR9[] = {0x00, 0x10, 0x20, 0x30, 0x08, 0x48, 0xC8, 0xE8};
    if (VAR5 < 0 || VAR4->VAR10 - 13 < VAR5)
        return 0;
    VAR8 = VAR4->VAR11 + VAR5;
    VAR2->VAR12 = VAR8[4];
    VAR2->VAR13 = FUN2(VAR8 + 5);
    VAR2->VAR14 = FUN2(VAR8 + 9);
    for (VAR6 = 0; VAR6 < 8; VAR6++)
        if (VAR9[VAR6] == VAR2->VAR12)
            break;
    if (VAR6 == 8)
        return 0;
    if (VAR2->VAR12 == 0x10 && VAR2->VAR13 == 0)
        VAR2->VAR13 = 13;
    if ((VAR2->VAR13 && VAR2->VAR13 < 13) || (VAR2->VAR14 && VAR2->VAR14 < 13))
        return 0;
    return 1;
}