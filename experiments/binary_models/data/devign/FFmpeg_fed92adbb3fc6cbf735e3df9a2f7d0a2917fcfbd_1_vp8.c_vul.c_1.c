void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11;
    VAR8->VAR12.VAR13 = -VAR14;
    VAR8->VAR15.VAR13 = ((VAR8->VAR16 - 1) << 6) + VAR14;
    for (VAR11 = 0; VAR11 < VAR8->VAR16; VAR11++)
    {
        VAR17 *VAR18 = VAR8->VAR19 + ((VAR8->VAR20 + 1) * (VAR11 + 1) + 1);
        int VAR21 = VAR11 * VAR8->VAR20;
        FUN2(VAR8->VAR22, VAR23 * 0x01010101);
        VAR8->VAR12.VAR24 = -VAR14;
        VAR8->VAR15.VAR24 = ((VAR8->VAR20 - 1) << 6) + VAR14;
        for (VAR10 = 0; VAR10 < VAR8->VAR20; VAR10++, VAR21++, VAR18++)
        {
            if (VAR11 == 0)
                FUN2((VAR18 - VAR8->VAR20 - 1)->VAR25, VAR23 * 0x01010101);
            FUN3(VAR8, VAR18, VAR10, VAR11, VAR4->VAR26->VAR27 + VAR21, VAR5 && VAR5->VAR26 ? VAR5->VAR26->VAR27 + VAR21 : NULL, 1, VAR6);
            VAR8->VAR12.VAR24 -= 64;
            VAR8->VAR15.VAR24 -= 64;
        }
        VAR8->VAR12.VAR13 -= 64;
        VAR8->VAR15.VAR13 -= 64;
    }
}