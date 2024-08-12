static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8;
    uint8_t VAR9[8];
    uint16_t VAR10;
    uint64_t VAR11;
    VAR4->VAR12 = FUN2(VAR7);
    if (FUN3(VAR7, VAR9, 8) != 8)
        return FUN4(VAR13);
    VAR4->VAR14.VAR15 = FUN5(VAR9) & 0x007FFFFF;
    VAR4->VAR14.VAR16 = 0;
    VAR4->VAR14.VAR17 = (FUN5(VAR9) >> 23) & 0xFF;
    VAR4->VAR14.VAR18 = (VAR9[3] & 0x80) != 0;
    VAR4->VAR14.VAR15 -= VAR4->VAR19 * 4;
    VAR4->VAR20 = 0;
    if (!VAR4->VAR14.VAR17)
    {
        VAR4->VAR14.VAR17 = 1;
        VAR4->VAR20 = VAR4->VAR21 > 1;
    }
    for (VAR10 = 0; VAR10 < VAR4->VAR19; VAR10++)
    {
        VAR22 *VAR23 = &VAR4->VAR24[VAR10];
        if (FUN3(VAR7, VAR9, 4) != 4)
            return FUN4(VAR13);
        VAR23->VAR15 = FUN5(VAR9) & 0x007FFFFF;
        if ((VAR23->VAR15 == 0) && (VAR10 != 0))
            VAR23->VAR15 = VAR4->VAR24[VAR10 - 1].VAR15;
        VAR23->VAR25 = VAR23->VAR15 / VAR4->VAR14.VAR17;
        VAR23->VAR25 -= VAR23->VAR25 % VAR23->VAR26;
    }
    VAR11 = FUN6(VAR7);
    VAR4->VAR14.VAR11 = VAR11;
    VAR11 += VAR4->VAR14.VAR15;
    for (VAR10 = 0; VAR10 < VAR4->VAR19; VAR10++)
    {
        VAR4->VAR24[VAR10].VAR11 = VAR11;
        VAR11 += VAR4->VAR24[VAR10].VAR15;
    }
    if (VAR4->VAR14.VAR15 > 0)
    {
        if (VAR4->VAR14.VAR18)
        {
            FUN7(VAR4->VAR14.VAR27, VAR7);
            VAR4->VAR14.VAR15 -= 4;
            VAR4->VAR14.VAR11 += 4;
            if (VAR4->VAR14.VAR28 >= 0)
            {
                VAR29 *VAR30 = VAR2->VAR31[VAR4->VAR14.VAR28];
                FUN8(VAR4->VAR14.VAR28 < VAR2->VAR32);
                if (VAR30->VAR33->VAR34 < 4)
                {
                    FUN9(&VAR30->VAR33->VAR27);
                    if ((VAR8 = FUN10(VAR30->VAR33, 4)) < 0)
                        return VAR8;
                }
                memcpy(VAR30->VAR33->VAR27, VAR4->VAR14.VAR27, 4);
            }
        }
    }
    return 0;
}