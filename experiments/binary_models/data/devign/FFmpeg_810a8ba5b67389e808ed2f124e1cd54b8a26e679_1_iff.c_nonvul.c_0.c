static void FUN1(VAR1 *VAR2, const VAR1 *VAR3, const VAR1 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9 = FUN2(VAR5, 16) >> 3;
    int VAR10 = VAR9 * VAR7;
    int VAR11 = (VAR5 + 7) / 8;
    unsigned VAR12, VAR13;
    GetByteContext VAR14, VAR15;
    PutByteContext VAR16;
    int VAR17;
    if (VAR4 - VAR3 <= 4 * VAR7)
        return;
    FUN3(&VAR16, VAR2, VAR8);
    FUN4(&VAR15, VAR3, VAR7 * 4);
    for (VAR17 = 0; VAR17 < VAR7; VAR17++)
    {
        VAR13 = FUN5(&VAR15);
        if (!VAR13)
            continue;
        if (VAR13 >= VAR4 - VAR3)
            continue;
        FUN4(&VAR14, VAR3 + VAR13, VAR4 - (VAR3 + VAR13));
        VAR12 = FUN6(&VAR14);
        while (VAR12 && FUN7(&VAR14) >= 6)
        {
            int16_t VAR18 = FUN6(&VAR14);
            unsigned VAR19 = FUN5(&VAR14);
            FUN8(&VAR16, (VAR19 / VAR11) * VAR10 + (VAR19 % VAR11) + VAR17 * VAR9, VAR20);
            if (VAR18 >= 0)
            {
                uint16_t VAR21 = FUN6(&VAR14);
                while (VAR18 && FUN9(&VAR16) > 0)
                {
                    FUN10(&VAR16, VAR21);
                    FUN11(&VAR16, VAR10 - 2);
                    VAR18--;
                }
            }
            else
            {
                VAR18 = -VAR18;
                while (VAR18 && FUN7(&VAR14) > 0)
                {
                    FUN10(&VAR16, FUN6(&VAR14));
                    FUN11(&VAR16, VAR10 - 2);
                    VAR18--;
                }
            }
            VAR12--;
        }
    }
}