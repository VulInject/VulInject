static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[VAR3] + (VAR2->VAR11 > 5);
    VAR8 *VAR12 = VAR2->VAR10[VAR4] + (VAR2->VAR11 > 5);
    int32_t VAR13 = VAR9[0];
    int32_t VAR14 = VAR12[0];
    int VAR15;
    int VAR16, VAR17;
    VAR5 += VAR2->VAR11 < 6;
    switch (VAR2->VAR11)
    {
    case 1:
        VAR2->VAR18.FUN2(VAR9, VAR12, VAR5);
        break;
    case 2:
        VAR2->VAR18.FUN3(VAR9, VAR12, VAR5);
        break;
    case 3:
        VAR2->VAR18.FUN4(VAR9, VAR12, VAR5);
        break;
    case 4:
        FUN5(VAR8 *, VAR9, VAR12);
        FUN5(VAR8, VAR13, VAR14);
    case 5:
        VAR16 = FUN6(VAR7);
        VAR17 = FUN7(VAR7, 10);
        VAR2->VAR18.FUN8(VAR9, VAR12, VAR5, VAR16, VAR17);
        break;
    case 6:
        FUN5(VAR8 *, VAR9, VAR12);
    case 7:
    {
        int VAR19, VAR20, VAR21, VAR22, VAR23;
        int VAR24, VAR25, VAR26;
        if (VAR5 < 256)
            return VAR27;
        VAR16 = FUN6(VAR7);
        VAR21 = 8 << FUN9(VAR7);
        VAR22 = FUN9(VAR7);
        VAR23 = FUN9(VAR7);
        for (VAR15 = 0; VAR15 < VAR21; VAR15++)
        {
            if (!(VAR15 & 3))
                VAR26 = 14 - FUN10(VAR7, 3);
            VAR2->VAR28[VAR15] = FUN7(VAR7, VAR26);
        }
        VAR20 = VAR21 / 2;
        VAR19 = VAR5 - (VAR21 - 1);
        if (VAR22)
        {
            for (VAR15 = 0; VAR15 < VAR20; VAR15++)
            {
                int32_t VAR29 = VAR9[VAR15];
                int32_t VAR30 = VAR12[VAR15];
                VAR9[VAR15] = VAR29 + VAR30;
            }
        }
        if (VAR23)
        {
            for (VAR15 = VAR19 + VAR20; VAR15 < VAR5; VAR15++)
            {
                int32_t VAR29 = VAR9[VAR15];
                int32_t VAR30 = VAR12[VAR15];
                VAR9[VAR15] = VAR29 + VAR30;
            }
        }
        for (VAR15 = 0; VAR15 < VAR21; VAR15++)
            VAR2->VAR31[VAR15] = *VAR12++ >> VAR16;
        VAR9 += VAR20;
        VAR25 = FUN11(VAR2->VAR31) - VAR21;
        for (; VAR19 > 0; VAR19 -= VAR24)
        {
            VAR24 = FUN12(VAR19, VAR25);
            for (VAR15 = 0; VAR15 < VAR24 - (VAR24 == VAR19); VAR15++)
                VAR2->VAR31[VAR21 + VAR15] = *VAR12++ >> VAR16;
            for (VAR15 = 0; VAR15 < VAR24; VAR15++)
            {
                int VAR32 = 1 << 9;
                if (VAR21 == 16)
                {
                    VAR32 += VAR2->VAR33.FUN13(&VAR2->VAR31[VAR15], VAR2->VAR28, VAR21);
                }
                else
                {
                    VAR32 += VAR2->VAR31[VAR15 + 7] * VAR2->VAR28[7] + VAR2->VAR31[VAR15 + 6] * VAR2->VAR28[6] + VAR2->VAR31[VAR15 + 5] * VAR2->VAR28[5] + VAR2->VAR31[VAR15 + 4] * VAR2->VAR28[4] + VAR2->VAR31[VAR15 + 3] * VAR2->VAR28[3] + VAR2->VAR31[VAR15 + 2] * VAR2->VAR28[2] + VAR2->VAR31[VAR15 + 1] * VAR2->VAR28[1] + VAR2->VAR31[VAR15] * VAR2->VAR28[0];
                }
                VAR32 = (FUN14(VAR32 >> 10, 13) << VAR16) - *VAR9;
                *VAR9++ = VAR32;
            }
            memmove(VAR2->VAR31, &VAR2->VAR31[VAR24], 2 * VAR21);
        }
        FUN15();
        break;
    }
    }
    if (VAR2->VAR11 > 0 && VAR2->VAR11 < 6)
    {
        VAR9[0] = VAR13;
        VAR12[0] = VAR14;
    }
    return 0;
}