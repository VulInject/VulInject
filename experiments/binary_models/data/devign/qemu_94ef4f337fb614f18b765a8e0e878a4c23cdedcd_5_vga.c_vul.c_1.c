static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    if (!FUN2(VAR2))
    {
        return;
    }
    VAR2->VAR5[VAR6] = (VAR2->VAR5[VAR6] & ~0x0c) | 0x04 | VAR7;
    VAR2->VAR8[VAR9] |= 3;
    VAR2->VAR8[VAR10] = VAR2->VAR11 >> 3;
    VAR2->VAR8[VAR12] = (VAR2->VAR13[VAR14] >> 3) - 1;
    VAR3 = VAR2->VAR13[VAR15] - 1;
    VAR2->VAR8[VAR16] = VAR3;
    VAR2->VAR8[VAR17] = (VAR2->VAR8[VAR17] & ~0x42) | ((VAR3 >> 7) & 0x02) | ((VAR3 >> 3) & 0x40);
    VAR2->VAR8[VAR18] = 0xff;
    VAR2->VAR8[VAR17] |= 0x10;
    VAR2->VAR8[VAR19] |= 0x40;
    if (VAR2->VAR13[VAR20] == 4)
    {
        VAR4 = 0;
        VAR2->VAR21[VAR22] &= ~8;
    }
    else
    {
        VAR4 = 2;
        VAR2->VAR21[VAR23] |= VAR24;
        VAR2->VAR21[VAR25] |= VAR26;
    }
    VAR2->VAR5[VAR27] = (VAR2->VAR5[VAR27] & ~0x60) | (VAR4 << 5);
    VAR2->VAR8[VAR19] &= ~0x9f;
}