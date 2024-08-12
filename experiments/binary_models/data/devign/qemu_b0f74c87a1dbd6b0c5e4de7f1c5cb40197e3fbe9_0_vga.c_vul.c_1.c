static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    int VAR5;
    int VAR6;
    int VAR7;
    int VAR8;
    int VAR9;
    int VAR10, VAR11, VAR12;
    int VAR13;
    int VAR14;
    const int VAR15[] = {25175000, 28322000, 25175000, 25175000};
    int64_t VAR16;
    struct VAR17 *VAR18 = &VAR2->VAR19.VAR20;
    VAR3 = VAR2->VAR21[0x00] + 5;
    VAR4 = VAR2->VAR21[0x04];
    VAR5 = (VAR2->VAR21[0x05] >> 5) & 3;
    VAR6 = VAR2->VAR21[0x05] & 0x1f;
    VAR7 = (VAR2->VAR21[0x06] | (((VAR2->VAR21[0x07] & 1) | ((VAR2->VAR21[0x07] >> 4) & 2)) << 8)) + 2;
    VAR8 = VAR2->VAR21[0x10] | ((((VAR2->VAR21[0x07] >> 2) & 1) | ((VAR2->VAR21[0x07] >> 6) & 2)) << 8);
    VAR9 = VAR2->VAR21[0x11] & 0xf;
    VAR10 = (VAR2->VAR21[0x17] >> 2) & 1;
    VAR11 = (VAR2->VAR21[0x17] >> 3) & 1;
    VAR13 = (VAR2->VAR22[0x01] >> 3) & 1;
    VAR14 = (VAR2->VAR23 >> 2) & 3;
    VAR12 = (VAR2->VAR23 & 1) ? 8 : 9;
    VAR16 = VAR15[VAR14] / VAR12;
    VAR3 <<= VAR13;
    VAR18->VAR24 = VAR7 * VAR3;
    if (VAR18->VAR25)
    {
        VAR18->VAR26 = VAR27 / (VAR18->VAR24 * VAR18->VAR25);
    }
    else
    {
        VAR18->VAR26 = VAR27 / VAR16;
    }
    VAR18->VAR28 = VAR8;
    VAR18->VAR29 = VAR18->VAR28 + VAR9 + 1;
    VAR18->VAR30 = VAR4 + VAR5;
    VAR18->VAR31 = VAR18->VAR30 + VAR6 + 1;
    VAR18->VAR32 = VAR3;
    FUN2(""
           ""
           ""
           ""
           ""
           ""
           ""
           ""
           ""
           ""
           ""
           ""
           ""
           "",
           (double)VAR27 / (VAR18->VAR26 * VAR18->VAR24), VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR13, VAR14, VAR15[VAR14], VAR12, VAR18->VAR26);
}