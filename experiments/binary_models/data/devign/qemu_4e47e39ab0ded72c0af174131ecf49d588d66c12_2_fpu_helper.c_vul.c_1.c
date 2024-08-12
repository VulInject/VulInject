void FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    floatx80 VAR9;
    target_ulong VAR10;
    if (VAR3 & 0xf)
    {
        FUN2(VAR2, VAR11);
    }
    VAR2->VAR12 = FUN3(VAR2, VAR3);
    VAR6 = FUN3(VAR2, VAR3 + 2);
    VAR7 = FUN3(VAR2, VAR3 + 4);
    VAR2->VAR13 = (VAR6 >> 11) & 7;
    VAR2->VAR6 = VAR6 & ~0x3800;
    VAR7 ^= 0xff;
    for (VAR5 = 0; VAR5 < 8; VAR5++)
    {
        VAR2->VAR14[VAR5] = ((VAR7 >> VAR5) & 1);
    }
    VAR10 = VAR3 + 0x20;
    for (VAR5 = 0; VAR5 < 8; VAR5++)
    {
        VAR9 = FUN4(VAR2, VAR10);
        FUN5(VAR5) = VAR9;
        VAR10 += 16;
    }
    if (VAR2->VAR15[4] & VAR16)
    {
        VAR2->VAR17 = FUN6(VAR2, VAR3 + 0x18);
        if (VAR2->VAR18 & VAR19)
        {
            VAR8 = 16;
        }
        else
        {
            VAR8 = 8;
        }
        VAR10 = VAR3 + 0xa0;
        if (!(VAR2->VAR20 & VAR21) || (VAR2->VAR18 & VAR22) || !(VAR2->VAR18 & VAR23))
        {
            for (VAR5 = 0; VAR5 < VAR8; VAR5++)
            {
                VAR2->VAR24[VAR5].FUN7(0) = FUN8(VAR2, VAR10);
                VAR2->VAR24[VAR5].FUN7(1) = FUN8(VAR2, VAR10 + 8);
                VAR10 += 16;
            }
        }
    }
}