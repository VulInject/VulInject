static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    const VAR10 *VAR12 = VAR6->VAR3 + VAR6->VAR13;
    const VAR10 *VAR14;
    uint32_t VAR15, VAR16;
    VAR10 *VAR17;
    int VAR18;
    int VAR19, VAR20;
    if (VAR8->VAR21.VAR3[0])
        VAR2->FUN2(VAR2, &VAR8->VAR21);
    if ((VAR18 = VAR2->FUN3(VAR2, &VAR8->VAR21)))
    {
        FUN4(VAR2, VAR22, "");
        return VAR18;
    }
    while (VAR11 < VAR12)
    {
        VAR16 = FUN5(VAR11 + 4);
        VAR15 = FUN5(VAR11 + 8);
        VAR11 += 12;
        if (VAR12 - VAR11 < VAR16)
        {
            FUN4(VAR2, VAR22, "", VAR16);
            return -1;
        }
        if (!VAR15)
            break;
        if (VAR15 == 1)
        {
            VAR20 = FUN6(VAR16 / 3, 256);
            VAR14 = VAR11;
            for (VAR19 = 0; VAR19 < VAR20; VAR19++)
            {
                VAR8->VAR23[VAR19] = FUN7(&VAR14) << 2;
                VAR8->VAR23[VAR19] |= (VAR8->VAR23[VAR19] >> 6) & 0x333;
            }
            VAR8->VAR21.VAR24 = 1;
        }
        else if (VAR15 <= 9)
        {
            if (VAR25[VAR15 - 2](VAR8->VAR26, VAR2->VAR27, VAR2->VAR28, VAR11, VAR11 + VAR16))
            {
                FUN4(VAR2, VAR22, "", VAR29[VAR15 - 2]);
                return -1;
            }
        }
        else
        {
            FUN4(VAR2, VAR30, "", VAR15);
        }
        VAR11 += VAR16;
    }
    VAR11 = VAR8->VAR26;
    VAR17 = VAR8->VAR21.VAR3[0];
    for (VAR19 = 0; VAR19 < VAR2->VAR28; VAR19++)
    {
        memcpy(VAR17, VAR11, VAR2->VAR27);
        VAR17 += VAR8->VAR21.VAR31[0];
        VAR11 += VAR2->VAR27;
    }
    memcpy(VAR8->VAR21.VAR3[1], VAR8->VAR23, sizeof(VAR8->VAR23));
    *VAR4 = sizeof(VAR32);
    *(VAR32 *)VAR3 = VAR8->VAR21;
    return VAR6->VAR13;
}