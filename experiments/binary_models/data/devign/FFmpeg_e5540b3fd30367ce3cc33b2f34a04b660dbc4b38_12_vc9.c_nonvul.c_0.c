static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5 = 0;
    int VAR6;
    uint8_t VAR7[4], VAR8[4], VAR9, *VAR10;
    memset(VAR2->VAR11, 0, (VAR2->VAR12 + 1) << 2);
    if (VAR2->VAR13 < 5)
        VAR2->VAR14 = &VAR15[0];
    else if (VAR2->VAR13 < 13)
        VAR2->VAR14 = &VAR15[1];
    else
        VAR2->VAR14 = &VAR15[2];
    for (VAR4 = 0; VAR4 < VAR2->VAR16; VAR4++)
    {
        *((VAR17 *)VAR8) = 0x00000000;
        VAR10 = VAR2->VAR11 + 4;
        for (VAR3 = 0; VAR3 < VAR2->VAR12; VAR3++, VAR10 += 4)
        {
            FUN2(VAR18.VAR19, VAR20);
            VAR6 = FUN3(&VAR2->VAR21, 1);
            *((VAR17 *)VAR10) = *((VAR17 *)VAR8);
            *((VAR17 *)VAR8) = *((VAR17 *)VAR7);
            VAR5++;
        }
    }
    return 0;
}