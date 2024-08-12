static void FUN1(VAR1 *VAR2)
{
    size_t VAR3;
    VAR4 *VAR5 = FUN2(VAR2->VAR6);
    memcpy(VAR5, VAR2->VAR7.VAR8.VAR9, 6);
    VAR5[VAR10] = 0x4000;
    if (VAR2->VAR11 == VAR12 || VAR2->VAR11 == VAR13)
        VAR5[5] = 0x0100;
    VAR5[VAR14] = 1;
    uint16_t VAR15 = 0;
    for (VAR3 = 0; VAR3 < VAR16 - 1; VAR3++)
    {
        VAR15 += VAR5[VAR3];
    }
    VAR5[VAR16 - 1] = 0xbaba - VAR15;
    FUN3(VAR17, FUN4("", VAR5[VAR16 - 1]));
    memset(VAR2->VAR18, 0, sizeof(VAR2->VAR18));
    uint32_t VAR19 = FUN5(21);
    memcpy(&VAR2->VAR18[VAR20], &VAR19, sizeof(VAR19));
    assert(sizeof(VAR2->VAR21) == sizeof(VAR22));
    memcpy(&VAR2->VAR21[0], &VAR22[0], sizeof(VAR2->VAR21));
}