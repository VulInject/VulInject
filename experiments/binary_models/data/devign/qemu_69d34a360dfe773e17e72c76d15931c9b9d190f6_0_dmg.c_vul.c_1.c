static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    off_t VAR7, VAR8, VAR9, VAR10;
    uint32_t VAR11;
    uint32_t VAR12 = 1, VAR13 = 1, VAR14;
    int64_t VAR15;
    VAR2->VAR16 = 1;
    VAR5->VAR17 = 0;
    VAR5->VAR18 = VAR5->VAR19 = VAR5->VAR20 = VAR5->VAR21 = NULL;
    VAR15 = FUN2(VAR2->VAR22);
    if (VAR15 < 0)
    {
        goto VAR23;
    }
    VAR15 -= 0x1d8;
    VAR7 = FUN3(VAR2, VAR15);
    if (VAR7 == 0)
    {
        goto VAR23;
    }
    if (FUN4(VAR2, VAR7) != 0x100)
    {
        goto VAR23;
    }
    VAR11 = FUN4(VAR2, VAR7 + 4);
    if (VAR11 == 0)
    {
        goto VAR23;
    }
    VAR8 = VAR7 + VAR11;
    VAR15 = VAR7 + 0x100;
    VAR9 = VAR10 = 0;
    while (VAR15 < VAR8)
    {
        uint32_t VAR24;
        VAR11 = FUN4(VAR2, VAR15);
        if (VAR11 == 0)
            goto VAR23;
        VAR15 += 4;
        VAR24 = FUN4(VAR2, VAR15);
        if (VAR24 == 0x6d697368 && VAR11 >= 244)
        {
            int VAR25, VAR26;
            VAR15 += 4;
            VAR15 += 200;
            VAR26 = (VAR11 - 204) / 40;
            VAR25 = sizeof(VAR27) * (VAR5->VAR17 + VAR26);
            VAR5->VAR28 = FUN5(VAR5->VAR28, VAR25 / 2);
            VAR5->VAR18 = FUN5(VAR5->VAR18, VAR25);
            VAR5->VAR19 = FUN5(VAR5->VAR19, VAR25);
            VAR5->VAR20 = FUN5(VAR5->VAR20, VAR25);
            VAR5->VAR21 = FUN5(VAR5->VAR21, VAR25);
            for (VAR14 = VAR5->VAR17; VAR14 < VAR5->VAR17 + VAR26; VAR14++)
            {
                VAR5->VAR28[VAR14] = FUN4(VAR2, VAR15);
                VAR15 += 4;
                if (VAR5->VAR28[VAR14] != 0x80000005 && VAR5->VAR28[VAR14] != 1 && VAR5->VAR28[VAR14] != 2)
                {
                    if (VAR5->VAR28[VAR14] == 0xffffffff)
                    {
                        VAR9 = VAR5->VAR18[VAR14 - 1] + VAR5->VAR19[VAR14 - 1];
                        VAR10 = VAR5->VAR20[VAR14 - 1] + VAR5->VAR21[VAR14 - 1];
                    }
                    VAR26--;
                    VAR14--;
                    VAR15 += 36;
                    continue;
                }
                VAR15 += 4;
                VAR5->VAR20[VAR14] = VAR10 + FUN3(VAR2, VAR15);
                VAR15 += 8;
                VAR5->VAR21[VAR14] = FUN3(VAR2, VAR15);
                VAR15 += 8;
                VAR5->VAR18[VAR14] = VAR9 + FUN3(VAR2, VAR15);
                VAR15 += 8;
                VAR5->VAR19[VAR14] = FUN3(VAR2, VAR15);
                VAR15 += 8;
                if (VAR5->VAR19[VAR14] > VAR12)
                    VAR12 = VAR5->VAR19[VAR14];
                if (VAR5->VAR21[VAR14] > VAR13)
                    VAR13 = VAR5->VAR21[VAR14];
            }
            VAR5->VAR17 += VAR26;
        }
    }
    VAR5->VAR29 = FUN6(VAR12 + 1);
    VAR5->VAR30 = FUN6(512 * VAR13);
    if (FUN7(&VAR5->VAR31) != VAR32)
        goto VAR23;
    VAR5->VAR33 = VAR5->VAR17;
    FUN8(&VAR5->VAR34);
    return 0;
VAR23:
    return -1;
}