static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2->VAR5;
    VAR6 *VAR7 = &(VAR4->VAR7[0]);
    int VAR8;
    memset(VAR2->VAR5, 0, 512);
    VAR4->VAR9 = FUN2(0xbe1afdfa);
    VAR7->VAR10 = 0x80;
    VAR8 = FUN3(VAR2->VAR11, &VAR7->VAR12, VAR2->VAR13 - 1);
    VAR8 |= FUN3(VAR2->VAR11, &VAR7->VAR14, VAR2->VAR15);
    VAR7->VAR16 = FUN2(VAR2->VAR13 - 1);
    VAR7->VAR17 = FUN2(VAR2->VAR15 - VAR2->VAR13 + 1);
    VAR7->VAR18 = VAR2->VAR19 == 12 ? 0x1 : VAR2->VAR19 == 16 ? (VAR8 ? 0xe : 0x06)
                                                                     : (VAR8 ? 0xc : 0x0b);
    VAR4->VAR20[0] = 0x55;
    VAR4->VAR20[1] = 0xaa;
}