static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    int VAR5;
    int VAR6;
    int VAR7;
    int VAR8;
    int VAR9;
    int VAR10;
    int VAR11, VAR12;
    int VAR13;
    int VAR14;
    const int VAR15[] = {25175000, 28322000, 25175000, 25175000};
    int64_t VAR16;
    struct VAR17 *VAR18 = &VAR2->VAR19.VAR20;
    VAR3 = VAR2->VAR21[VAR22] + 5;
    VAR4 = VAR2->VAR21[VAR23];
    VAR5 = (VAR2->VAR21[VAR24] >> 5) & 3;
    VAR6 = VAR2->VAR21[VAR24] & 0x1f;
    VAR7 = (VAR2->VAR21[VAR25] | (((VAR2->VAR21[VAR26] & 1) | ((VAR2->VAR21[VAR26] >> 4) & 2)) << 8)) + 2;
    VAR8 = VAR2->VAR21[VAR27] | ((((VAR2->VAR21[VAR26] >> 2) & 1) | ((VAR2->VAR21[VAR26] >> 6) & 2)) << 8);
    VAR9 = VAR2->VAR21[VAR28] & 0xf;
    VAR13 = (VAR2->VAR29[VAR30] >> 3) & 1;
    VAR14 = (VAR2->VAR31 >> 2) & 3;
    VAR10 = (VAR2->VAR31 & 1) ? 8 : 9;
    VAR16 = VAR15[VAR14] / VAR10;
    VAR3 <<= VAR13;
    VAR18->VAR32 = VAR7 * VAR3;
    if (VAR18->VAR33)
    {
        VAR18->VAR34 = VAR35 / (VAR18->VAR32 * VAR18->VAR33);
    }
    else
    {
        VAR18->VAR34 = VAR35 / VAR16;
    }
    VAR18->VAR36 = VAR8;
    VAR18->VAR37 = VAR18->VAR36 + VAR9 + 1;
    VAR18->VAR38 = VAR4 + VAR5;
    VAR18->VAR39 = VAR18->VAR38 + VAR6 + 1;
    VAR18->VAR40 = VAR3;
    VAR11 = (VAR2->VAR21[VAR41] >> 2) & 1;
    VAR12 = (VAR2->VAR21[VAR41] >> 3) & 1;
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
           "" VAR42 ""
           "",
           (double)VAR35 / (VAR18->VAR34 * VAR18->VAR32), VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR11, VAR12, VAR13, VAR14, VAR15[VAR14], VAR10, VAR18->VAR34);
}