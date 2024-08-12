static unsigned long FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4)
{
    unsigned int VAR5, VAR6, VAR7, VAR8;
    unsigned long VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    unsigned char *VAR16, *VAR17;
    VAR17 = VAR3;
    VAR17 += 18;
    VAR9 = FUN2(*(VAR18 *)VAR17);
    VAR17 += 2;
    VAR11 = FUN3(*(VAR19 *)VAR17);
    VAR17 += 4;
    VAR10 = *VAR17++;
    VAR17 += 3;
    VAR6 = FUN2(*(VAR18 *)VAR17);
    VAR17 += 2;
    VAR5 = FUN2(*(VAR18 *)VAR17);
    VAR17 += 2;
    VAR8 = ((VAR6 >> 2) + 3) & 0x7ffc;
    VAR7 = ((VAR5 >> 2) + 3) & 0x7ffc;
    VAR12 = FUN3(*(VAR19 *)VAR17);
    VAR17 += 4;
    VAR13 = FUN3(*(VAR19 *)VAR17);
    VAR17 += 4;
    VAR14 = FUN3(*(VAR19 *)VAR17);
    VAR17 += 8;
    VAR16 = VAR17;
    if (VAR11 == 0x80)
        return 4;
    if (VAR9 & 0x200)
    {
        VAR2->VAR20 = VAR2->VAR21 + 1;
        VAR2->VAR22 = VAR2->VAR21;
    }
    else
    {
        VAR2->VAR20 = VAR2->VAR21;
        VAR2->VAR22 = VAR2->VAR21 + 1;
    }
    VAR17 = VAR3 + 16 + VAR12;
    VAR15 = FUN3(*(VAR19 *)VAR17);
    VAR17 += 4;
    FUN4(VAR2, VAR2->VAR20->VAR23, VAR2->VAR22->VAR23, VAR5, VAR6, VAR17 + VAR15 * 2, VAR10, VAR16, VAR17, FUN5(VAR5, 160));
    if (!(VAR2->VAR24->VAR25 & VAR26))
    {
        VAR17 = VAR3 + 16 + VAR13;
        VAR15 = FUN3(*(VAR19 *)VAR17);
        VAR17 += 4;
        FUN4(VAR2, VAR2->VAR20->VAR27, VAR2->VAR22->VAR27, VAR7, VAR8, VAR17 + VAR15 * 2, VAR10, VAR16, VAR17, FUN5(VAR7, 40));
        VAR17 = VAR3 + 16 + VAR14;
        VAR15 = FUN3(*(VAR19 *)VAR17);
        VAR17 += 4;
        FUN4(VAR2, VAR2->VAR20->VAR28, VAR2->VAR22->VAR28, VAR7, VAR8, VAR17 + VAR15 * 2, VAR10, VAR16, VAR17, FUN5(VAR7, 40));
    }
    return 8;