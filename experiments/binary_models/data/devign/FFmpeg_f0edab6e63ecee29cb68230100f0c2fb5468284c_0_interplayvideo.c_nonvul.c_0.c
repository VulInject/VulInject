static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    int16_t VAR9, VAR10;
    GetByteContext VAR11;
    GetByteContext VAR12;
    FUN2(&VAR2->VAR13, 14);
    memcpy(VAR4->VAR14[1], VAR2->VAR15, VAR16);
    VAR2->VAR17 = VAR4->VAR18[0];
    VAR2->VAR19 = VAR2->VAR17 - 8;
    VAR2->VAR20 = (VAR2->VAR21->VAR22 - 8) * VAR4->VAR18[0] + (VAR2->VAR21->VAR23 - 8) * (1 + VAR2->VAR24);
    FUN3(&VAR11, VAR2->VAR25, VAR2->VAR26);
    FUN3(&VAR12, VAR2->VAR27, VAR2->VAR28);
    for (VAR5 = 0; VAR5 < 2; ++VAR5)
    {
        FUN4(&VAR11, 0, VAR29);
        FUN4(&VAR12, 0, VAR29);
        VAR10 = FUN5(&VAR12);
        for (VAR7 = 0; VAR7 < VAR2->VAR21->VAR22; VAR7 += 8)
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR21->VAR23; VAR6 += 8)
            {
                VAR2->VAR30 = VAR2->VAR31->VAR14[0] + VAR6 + VAR7 * VAR2->VAR31->VAR18[0];
                while (VAR10 <= 0 && FUN6(&VAR12) > 1)
                {
                    if (VAR10 != -0x8000 && VAR10)
                    {
                        VAR9 = FUN5(&VAR11);
                        VAR32[VAR5](VAR2, VAR4, VAR9);
                        break;
                    }
                    VAR10 = FUN5(&VAR12);
                }
                VAR10 *= 2;
            }
        }
    }
    FUN4(&VAR12, 0, VAR29);
    VAR10 = FUN5(&VAR12);
    for (VAR7 = 0; VAR7 < VAR2->VAR21->VAR22; VAR7 += 8)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR21->VAR23; VAR6 += 8)
        {
            VAR8 = 0;
            VAR2->VAR30 = VAR4->VAR14[0] + VAR6 + VAR7 * VAR4->VAR18[0];
            while (VAR10 <= 0)
            {
                if (VAR10 != -0x8000 && VAR10)
                {
                    VAR8 = 1;
                    break;
                }
                if (FUN6(&VAR12) < 2)
                    return;
                VAR10 = FUN5(&VAR12);
            }
            if (VAR8)
            {
                FUN7(VAR2, VAR2->VAR31, VAR4, 0, 0);
            }
            else
            {
                if (VAR2->VAR21->VAR33)
                    FUN7(VAR2, VAR2->VAR34, VAR4, 0, 0);
            }
            VAR10 *= 2;
        }
    }
    FUN8(VAR3 *, VAR2->VAR35, VAR2->VAR31);
    if (FUN6(&VAR2->VAR13) > 1)
    {
        FUN9(VAR2->VAR21, VAR36, "", FUN6(&VAR2->VAR13));
    }
}