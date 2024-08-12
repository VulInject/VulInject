static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4, VAR5, VAR6, VAR7, VAR8;
    uint32_t VAR9, VAR10;
    uint64_t VAR11, VAR12;
    int VAR13, VAR14;
    VAR11 = 0;
    if ((VAR2->VAR15[1] & 0x80000000) && !(VAR2->VAR15[1] & 0x40000000))
    {
        VAR13 = (((VAR2->VAR15[1] >> 20) - 1) & 0xF) + 1;
        FUN2("" VAR16 "", (VAR2->VAR15[1] >> 20) & 0xF, VAR13);
        VAR14 = 8 - ((VAR2->VAR15[1] >> 16) & 0x7);
        FUN2("" VAR16 "", (VAR2->VAR15[1] >> 16) & 0x7, VAR14);
        VAR11 = VAR2->VAR17 * VAR13 * VAR14;
        if (VAR11 < 500000000UL || VAR11 > 1000000000UL)
        {
            FUN2("" VAR18 "", VAR11);
            VAR2->VAR15[1] &= ~0x80000000;
            goto VAR19;
        }
        VAR12 = VAR11 / VAR14;
        VAR2->VAR20 |= 0x00000001;
    }
    else
    {
    VAR19:
        VAR12 = VAR2->VAR17;
        if (VAR2->VAR15[1] & 0x40000000)
        {
            VAR2->VAR20 &= ~0x00000001;
        }
    }
    VAR14 = ((VAR2->VAR15[0] >> 20) & 0x3) + 1;
    FUN2("" VAR16 "", (VAR2->VAR15[0] >> 20) & 0x3, VAR14);
    VAR3 = VAR12 / VAR14;
    VAR14 = ((VAR2->VAR15[0] >> 16) & 0x3) + 1;
    FUN2("" VAR16 "", (VAR2->VAR15[0] >> 16) & 0x3, VAR14);
    VAR4 = VAR3 / VAR14;
    VAR14 = ((VAR2->VAR15[0] >> 12) & 0x3) + 1;
    FUN2("" VAR16 "", (VAR2->VAR15[0] >> 12) & 0x3, VAR14);
    VAR5 = VAR4 / VAR14;
    VAR14 = ((VAR2->VAR15[0] >> 8) & 0x3) + 2;
    FUN2("" VAR16 "", (VAR2->VAR15[0] >> 8) & 0x3, VAR14);
    VAR6 = VAR4 / VAR14;
    VAR14 = ((VAR2->VAR15[0] >> 4) & 0x3) + 1;
    FUN2("" VAR16 "", (VAR2->VAR15[0] >> 4) & 0x3, VAR14);
    VAR7 = VAR4 / VAR14;
    VAR14 = (VAR2->VAR15[0] & 0x3) + 1;
    FUN2("" VAR16 "", VAR2->VAR15[0] & 0x3, VAR14);
    VAR8 = VAR4 / VAR14;
    VAR14 = ((VAR2->VAR21 - 1) & 0x7F) + 1;
    FUN2("" VAR16 "", VAR2->VAR21 & 0x7F, VAR14);
    VAR9 = VAR12 / VAR14;
    VAR14 = (((VAR2->VAR21 >> 8) - 1) & 0x7F) + 1;
    FUN2("" VAR16 "", (VAR2->VAR21 >> 8) & 0x7F, VAR14);
    VAR10 = VAR12 / VAR14;
    FUN2("" VAR22 "" VAR18 "" VAR18 "", VAR2->VAR17, VAR11, VAR12);
    FUN2("" VAR22 "" VAR22 "" VAR22 "" VAR22 "" VAR22 "" VAR22 "" VAR22 "" VAR22 "", VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10);
    FUN3(&VAR2->VAR23[VAR24], VAR3);
    FUN3(&VAR2->VAR23[VAR25], VAR4);
    FUN3(&VAR2->VAR23[VAR26], VAR5);
    FUN3(&VAR2->VAR23[VAR27], VAR6);
    FUN3(&VAR2->VAR23[VAR28], VAR7);
    FUN3(&VAR2->VAR23[VAR29], VAR8);
    FUN3(&VAR2->VAR23[VAR30], VAR9);
    FUN3(&VAR2->VAR23[VAR31], VAR10);
}