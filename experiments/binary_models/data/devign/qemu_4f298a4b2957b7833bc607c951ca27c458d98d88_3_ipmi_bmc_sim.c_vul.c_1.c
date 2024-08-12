static void FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, VAR3 *VAR6, unsigned int *VAR7, unsigned int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11.VAR12;
    VAR13 *VAR14 = FUN2(VAR10);
    VAR15 *VAR16;
    VAR3 *VAR17;
    uint8_t VAR18, VAR19, VAR20, VAR21;
    FUN3(3);
    if (VAR4[2] != 0)
    {
        VAR6[2] = VAR22;
        return;
    }
    FUN3(10);
    if (VAR4[3] != 0x40)
    {
        VAR6[2] = 0x83;
        return;
    }
    VAR4 += 3;
    VAR5 -= 3;
    if (FUN4(VAR4, VAR5, 0) != 0 || VAR4[3] != 0x20)
    {
        return;
    }
    VAR18 = VAR4[1] >> 2;
    VAR19 = VAR4[4] & 0x3;
    VAR20 = VAR4[1] & 0x3;
    VAR21 = VAR4[4] >> 2;
    if (VAR19 != 2)
    {
        return;
    }
    VAR16 = FUN5(sizeof(*VAR16));
    VAR16->VAR17[0] = ((VAR18 | 1) << 2) | VAR19;
    VAR16->VAR17[1] = FUN4(VAR16->VAR17, 1, 0);
    VAR16->VAR17[2] = VAR4[0];
    VAR16->VAR17[3] = (VAR21 << 2) | VAR20;
    VAR16->VAR17[4] = VAR4[5];
    VAR16->VAR17[5] = 0;
    VAR16->VAR23 = 6;
    if ((VAR4[1] >> 2) != VAR24 || VAR4[5] != VAR25)
    {
        VAR16->VAR17[5] = VAR26;
        goto VAR27;
    }
    VAR17 = VAR16->VAR17 + VAR16->VAR23;
    VAR17[0] = 0;
    VAR17[1] = 0;
    VAR17[2] = 0;
    VAR17[3] = 0;
    VAR17[4] = 0x51;
    VAR17[5] = 0;
    VAR17[6] = 0;
    VAR17[7] = 0;
    VAR17[8] = 0;
    VAR17[9] = 0;
    VAR17[10] = 0;
    VAR16->VAR23 += 11;
VAR27:
    VAR16->VAR17[VAR16->VAR23] = FUN4(VAR16->VAR17, VAR16->VAR23, 0);
    VAR16->VAR23++;
    FUN6(&VAR2->VAR28);
    FUN7(&VAR2->VAR29, VAR16, VAR30);
    VAR2->VAR31 |= VAR32;
    VAR14->FUN8(VAR10, 1, FUN9(VAR2));
    FUN10(&VAR2->VAR28);
}