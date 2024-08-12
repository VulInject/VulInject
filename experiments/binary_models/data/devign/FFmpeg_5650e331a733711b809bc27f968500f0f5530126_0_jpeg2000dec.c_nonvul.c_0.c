static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint8_t VAR5;
    if (VAR2->VAR6 - VAR2->VAR7 < 5)
        return FUN2(VAR8);
    VAR4->VAR9 = FUN3(&VAR2->VAR7) + 1;
    if (VAR4->VAR9 > VAR10)
        return VAR11;
    if (VAR4->VAR9 < VAR2->VAR12)
        VAR4->VAR13 = 1;
    else
        VAR4->VAR13 = VAR4->VAR9 - VAR2->VAR12;
    VAR4->VAR14 = FUN3(&VAR2->VAR7) + 2;
    VAR4->VAR15 = FUN3(&VAR2->VAR7) + 2;
    VAR4->VAR16 = FUN3(&VAR2->VAR7);
    if (VAR4->VAR16 != 0)
    {
        FUN4(VAR2->VAR17, VAR18, "");
        return -1;
    }
    VAR4->VAR19 = FUN3(&VAR2->VAR7);
    if ((VAR2->VAR17->VAR20 & VAR21) && (VAR4->VAR19 == VAR22))
        VAR4->VAR19 = VAR23;
    if (VAR4->VAR24 & VAR25)
    {
        int VAR26;
        for (VAR26 = 0; VAR26 < VAR4->VAR9; VAR26++)
        {
            VAR5 = FUN3(&VAR2->VAR7);
            VAR4->VAR27[VAR26] = VAR5 & 0x0F;
            VAR4->VAR28[VAR26] = (VAR5 >> 4) & 0x0F;
        }
    }
    return 0;
}