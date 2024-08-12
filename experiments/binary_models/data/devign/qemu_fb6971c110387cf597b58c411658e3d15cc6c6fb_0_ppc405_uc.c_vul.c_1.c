static void FUN1(VAR1 *VAR2)
{
    uint64_t VAR3, VAR4;
    uint32_t VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15;
    VAR13 = ((VAR2->VAR16 >> 26) & 0x3) + 1;
    if (VAR2->VAR16 & 0x80000000)
    {
        VAR14 = (((VAR2->VAR16 >> 20) - 1) & 0xF) + 1;
        VAR15 = 8 - ((VAR2->VAR16 >> 16) & 0x7);
        VAR12 = VAR13 * VAR14 * VAR15;
        VAR3 = VAR2->VAR17 * VAR12;
        if (VAR3 < 400000000 || VAR3 > 800000000)
        {
            VAR2->VAR16 &= ~0x80000000;
            goto VAR18;
        }
        VAR4 = VAR3 / VAR15;
    }
    else
    {
    VAR18:
        VAR12 = VAR13;
        VAR4 = VAR2->VAR17 * VAR12;
    }
    VAR5 = VAR4;
    if (VAR2->VAR19 & 0x00800000)
        VAR6 = VAR2->VAR17;
    else
        VAR6 = VAR5;
    VAR8 = VAR5 / VAR13;
    VAR7 = VAR8;
    VAR13 = ((VAR2->VAR16 >> 10) & 0x3) + 1;
    VAR9 = VAR8 / VAR13;
    VAR13 = ((VAR2->VAR16 >> 24) & 0x3) + 2;
    VAR10 = VAR8 / VAR13;
    VAR13 = ((VAR2->VAR20 >> 1) & 0x1F) + 1;
    VAR11 = VAR5 / VAR13;
    FUN2(&VAR2->VAR21[VAR22], VAR5);
    FUN2(&VAR2->VAR21[VAR23], VAR6);
    FUN2(&VAR2->VAR21[VAR24], VAR8);
    FUN2(&VAR2->VAR21[VAR25], VAR7);
    FUN2(&VAR2->VAR21[VAR26], VAR9);
    FUN2(&VAR2->VAR21[VAR27], VAR10);
    FUN2(&VAR2->VAR21[VAR28], VAR11);
}