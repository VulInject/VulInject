static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    int VAR19;
    VAR20 *VAR21;
    VAR8 = 0;
    for (VAR15 = 0; VAR15 < 3; VAR15++)
    {
        VAR16 = VAR4->VAR22[VAR15];
        if (VAR16 == 0)
            continue;
        VAR17 = VAR4->VAR23[VAR15];
        VAR13 = VAR24[VAR17][0];
        VAR9 = VAR24[VAR17][1];
        VAR21 = &VAR25[VAR13];
        if (!VAR13)
        {
            memset(&VAR4->VAR26[VAR8], 0, sizeof(*VAR4->VAR26) * VAR16);
            VAR8 += 2 * VAR16;
            continue;
        }
        for (; VAR16 > 0; VAR16--)
        {
            int VAR27;
            if (FUN2(&VAR2->VAR28) >= VAR7)
                break;
            VAR12 = FUN3(&VAR2->VAR28, VAR21->VAR29, 7, 3);
            if (!VAR12)
            {
                VAR4->VAR26[VAR8] = VAR4->VAR26[VAR8 + 1] = 0;
                VAR8 += 2;
                continue;
            }
            VAR11 = VAR12 >> 4;
            VAR12 = VAR12 & 0x0f;
            VAR27 = VAR6[VAR8];
            FUN4("", VAR15, VAR4->VAR22[VAR15] - VAR16, VAR11, VAR12, VAR27);
            if (VAR11)
            {
                if (VAR11 == 15)
                    VAR11 += FUN5(&VAR2->VAR28, VAR9);
                VAR14 = FUN6(VAR11, VAR27);
                if (VAR11 < 15)
                {
                    VAR14 = VAR30[VAR27][VAR11];
                }
                else
                {
                    VAR11 += FUN5(&VAR2->VAR28, VAR9);
                    VAR14 = FUN6(VAR11, VAR27);
                }
                if (FUN7(&VAR2->VAR28))
                    VAR14 = -VAR14;
            }
            else
            {
                VAR14 = 0;
            }
            VAR4->VAR26[VAR8++] = VAR14;
            if (VAR12)
            {
                if (VAR12 == 15)
                    VAR12 += FUN5(&VAR2->VAR28, VAR9);
                VAR14 = FUN6(VAR12, VAR27);
                if (VAR12 < 15)
                {
                    VAR14 = VAR30[VAR27][VAR12];
                }
                else
                {
                    VAR12 += FUN5(&VAR2->VAR28, VAR9);
                    VAR14 = FUN6(VAR12, VAR27);
                }
                if (FUN7(&VAR2->VAR28))
                    VAR14 = -VAR14;
            }
            else
            {
                VAR14 = 0;
            }
            VAR4->VAR26[VAR8++] = VAR14;
        }
    }
    VAR21 = &VAR31[VAR4->VAR32];
    VAR19 = 0;
    while (VAR8 <= 572)
    {
        VAR18 = FUN2(&VAR2->VAR28);
        if (VAR18 >= VAR7)
        {
            if (VAR18 > VAR7 && VAR19)
            {
                VAR8 -= 4;
                FUN8(&VAR2->VAR28, VAR2->VAR28.VAR33 + 4 * (VAR19 >> 5), VAR2->VAR28.VAR34 - (VAR19 & (~31)));
                FUN9(&VAR2->VAR28, VAR19 & 31);
            }
            break;
        }
        VAR19 = VAR18;
        VAR10 = FUN3(&VAR2->VAR28, VAR21->VAR29, VAR21->VAR35, 1);
        FUN4("", VAR4->VAR32, VAR10);
        VAR4->VAR26[VAR8 + 0] = VAR4->VAR26[VAR8 + 1] = VAR4->VAR26[VAR8 + 2] = VAR4->VAR26[VAR8 + 3] = 0;
        while (VAR10)
        {
            const static int VAR36[16] = {3, 3, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
            int VAR18 = VAR8 + VAR36[VAR10];
            VAR10 ^= 8 >> VAR36[VAR10];
            VAR14 = VAR37[VAR6[VAR18]];
            if (FUN7(&VAR2->VAR28))
                VAR14 = -VAR14;
            VAR4->VAR26[VAR18] = VAR14;
        }
        VAR8 += 4;
    }
    memset(&VAR4->VAR26[VAR8], 0, sizeof(*VAR4->VAR26) * (576 - VAR8));
    return 0;
}