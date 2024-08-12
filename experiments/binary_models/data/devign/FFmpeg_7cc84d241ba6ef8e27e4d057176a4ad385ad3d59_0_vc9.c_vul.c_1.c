static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR4;
    VAR6 *VAR5 = &VAR2->VAR5;
    int VAR7 = 0;
    uint8_t VAR8[4], VAR9[4], VAR10, *VAR11;
    memset(VAR2->VAR12, 0, VAR5->VAR13 << 2);
    if (VAR2->VAR14 < 5)
        VAR2->VAR15 = &VAR16[0];
    else if (VAR2->VAR14 < 13)
        VAR2->VAR15 = &VAR16[1];
    else
        VAR2->VAR15 = &VAR16[2];
    for (VAR5->VAR17 = 0; VAR5->VAR17 < VAR5->VAR18; VAR5->VAR17++)
    {
        *((VAR19 *)VAR9) = 0x00000000;
        VAR11 = VAR2->VAR12 + 4;
        for (VAR5->VAR20 = 0; VAR5->VAR20 < VAR5->VAR21; VAR5->VAR20++, VAR11 += 4)
        {
            FUN2(VAR22.VAR23, VAR24);
            VAR5->VAR25 = FUN3(VAR4, 1);
            FUN4(VAR5->VAR26, VAR27, ""
                                           "",
                   VAR7, VAR11[0], VAR11[1], VAR11[2], VAR11[3], VAR9[0], VAR9[1], VAR9[2], VAR9[3], VAR8[0], VAR8[1], VAR8[2], VAR8[3]);
            *((VAR19 *)VAR11) = *((VAR19 *)VAR9);
            *((VAR19 *)VAR9) = *((VAR19 *)VAR8);
            VAR7++;
        }
    }
    return 0;
}