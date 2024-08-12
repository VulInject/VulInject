static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    const VAR10 *VAR12 = VAR11 + VAR6->VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    if (VAR6->VAR13 < 6)
        return VAR18;
    VAR14 = FUN2(VAR11);
    VAR15 = VAR11[4];
    VAR11 += 5;
    if (VAR14)
    {
        if (VAR14 < 0 || VAR14 > VAR6->VAR13 - 5)
        {
            FUN3(VAR2, VAR19, "", VAR14);
            return VAR18;
        }
        if (VAR2->FUN4(VAR2, &VAR8->VAR20) < 0)
        {
            FUN3(VAR2, VAR19, "");
            return -1;
        }
        if (VAR15 == 0 || VAR15 == 1)
        {
            GetBitContext VAR21;
            FUN5(&VAR21, VAR11, 8 * VAR14);
            for (VAR17 = 0; VAR17 < VAR2->VAR22; VAR17 += 8)
                for (VAR16 = 0; VAR16 < VAR2->VAR23; VAR16 += 8)
                    FUN6(&VAR21, VAR8->VAR20.VAR3[0] + VAR17 * VAR8->VAR20.VAR24[0] + VAR16, VAR8->VAR20.VAR24[0], &VAR8->VAR25);
            VAR11 += VAR14;
        }
        else if (VAR15 == 2)
        {
            int VAR26 = *VAR11++;
            for (VAR17 = 0; VAR17 < VAR2->VAR22; VAR17++)
                memset(VAR8->VAR20.VAR3[0] + VAR17 * VAR8->VAR20.VAR24[0], VAR26, VAR2->VAR23);
        }
        else
        {
            FUN3(VAR2, VAR27, "", VAR15);
            return VAR18;
        }
    }
    if (VAR12 - VAR11 >= VAR28 * 3)
    {
        for (VAR16 = 0; VAR16 < VAR28; VAR16++)
        {
            uint32_t VAR29 = FUN7(VAR11);
            VAR8->VAR30[VAR16] = 0xFF << 24 | VAR29 << 2 | ((VAR29 >> 4) & 0x30303);
            VAR11 += 3;
        }
        VAR8->VAR31 = 1;
    }
    if (VAR14)
    {
        VAR8->VAR20.VAR32 = 1;
        VAR8->VAR20.VAR33 = VAR34;
        VAR8->VAR20.VAR31 = VAR8->VAR31;
        VAR8->VAR31 = 0;
        memcpy(VAR8->VAR20.VAR3[1], VAR8->VAR30, VAR35);
        *VAR4 = sizeof(VAR36);
        *(VAR36 *)VAR3 = VAR8->VAR20;
    }
    return VAR6->VAR13;
}