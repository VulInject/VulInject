static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7 = FUN3(VAR2);
    uint32_t VAR8 = 0, VAR9 = 0, VAR10 = 0, VAR11 = 0;
    VAR7->VAR12 = true;
    FUN4(0x0, 0, &VAR8, &VAR9, &VAR10, &VAR11);
    FUN5(VAR13.VAR14, VAR9, VAR11, VAR10);
    FUN4(0x1, 0, &VAR8, &VAR9, &VAR10, &VAR11);
    VAR13.VAR15 = ((VAR8 >> 8) & 0x0F) + ((VAR8 >> 20) & 0xFF);
    VAR13.VAR16 = ((VAR8 >> 4) & 0x0F) | ((VAR8 & 0xF0000) >> 12);
    VAR13.VAR17 = VAR8 & 0x0F;
    FUN6(VAR13.VAR18);
    VAR7->VAR19 = &VAR13;
    VAR13.VAR20 = true;
    VAR5->VAR21 = VAR22;