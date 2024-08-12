static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    const VAR7 *VAR9 = VAR6->VAR3 + VAR6->VAR10;
    int VAR11 = VAR6->VAR10;
    VAR12 *const VAR13 = VAR2->VAR14;
    VAR15 *const VAR16 = (VAR15 *)&VAR13->VAR17;
    VAR7 *VAR18;
    int VAR19;
    int VAR20;
    VAR21 *VAR22;
    int VAR23, VAR24, VAR25;
    if (VAR16->VAR3[0])
        VAR2->FUN2(VAR2, VAR16);
    VAR16->VAR26 = 0;
    if (VAR2->FUN3(VAR2, VAR16) < 0)
    {
        FUN4(VAR2, VAR27, "");
        return -1;
    }
    VAR16->VAR28 = VAR29;
    VAR16->VAR30 = 1;
    VAR18 = VAR13->VAR17.VAR3[0];
    if (VAR9 - VAR8 < 0x68 + 4)
        VAR8 += 0x68;
    VAR19 = FUN5(VAR8);
    VAR8 += 4;
    if (VAR19 < 0 || VAR19 > 256)
    {
        FUN4(VAR2, VAR27, "", VAR19, VAR19);
        return -1;
    }
    if (VAR9 - VAR8 < (VAR19 + 1) * 8)
        VAR22 = (VAR21 *)VAR16->VAR3[1];
    for (VAR20 = 0; VAR20 <= VAR19; VAR20++)
    {
        unsigned int VAR31;
        VAR31 = FUN6(VAR8);
        VAR8 += 2;
        if (VAR31 > 255)
        {
            FUN4(VAR2, VAR27, "", VAR31);
            VAR8 += 6;
            continue;
        }
        VAR23 = *VAR8++;
        VAR8++;
        VAR24 = *VAR8++;
        VAR8++;
        VAR25 = *VAR8++;
        VAR8++;
        VAR22[VAR31] = (VAR23 << 16) | (VAR24 << 8) | VAR25;
    }
    VAR16->VAR32 = 1;
    if (VAR9 - VAR8 < 18)
        VAR8 += 18;
    for (VAR20 = 0; VAR20 < VAR2->VAR33; VAR20++)
    {
        int VAR10, VAR34, VAR35, VAR36;
        const VAR7 *VAR37;
        VAR7 *VAR38;
        int VAR39 = 0;
        VAR38 = VAR18;
        VAR10 = FUN6(VAR8);
        VAR8 += 2;
        VAR34 = VAR10;
        VAR37 = VAR8 + VAR10;
        while (VAR34 > 0)
        {
            VAR35 = *VAR8++;
            if (VAR35 & 0x80)
            {
                VAR36 = *VAR8++;
                if ((VAR38 + (257 - VAR35)) > (VAR18 + VAR13->VAR17.VAR40[0]))
                    break;
                memset(VAR38, VAR36, 257 - VAR35);
                VAR38 += 257 - VAR35;
                VAR39 += 257 - VAR35;
                VAR34 -= 2;
            }
            else
            {
                if ((VAR38 + VAR35) > (VAR18 + VAR13->VAR17.VAR40[0]))
                    break;
                if (VAR9 - VAR8 < VAR35 + 1)
                    memcpy(VAR38, VAR8, VAR35 + 1);
                VAR38 += VAR35 + 1;
                VAR8 += VAR35 + 1;
                VAR34 -= 2 + VAR35;
                VAR39 += VAR35 + 1;
            }
        }
        VAR8 = VAR37;
        VAR18 += VAR13->VAR17.VAR40[0];
    }
    *VAR4 = sizeof(VAR15);
    *(VAR15 *)VAR3 = VAR13->VAR17;
    return VAR11;