static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR7 *VAR14, *VAR15;
    int VAR16;
    int VAR17;
    int VAR18;
    const VAR7 *VAR19 = FUN2(VAR6, VAR20, NULL);
    if (VAR12->VAR21.VAR3[0])
        VAR2->FUN3(VAR2, &VAR12->VAR21);
    VAR12->VAR21.VAR22 = 1;
    VAR12->VAR21.VAR23 = VAR24;
    if (VAR2->FUN4(VAR2, &VAR12->VAR21) < 0)
    {
        FUN5(VAR2, VAR25, "");
        return -1;
    }
    VAR17 = *VAR8++;
    if (VAR8[0] == 127)
    {
        VAR8 += 3;
        for (VAR16 = 0; VAR16 < 127; VAR16++)
        {
            VAR12->VAR19[VAR16 + (VAR17 & 0x81)] = FUN6(VAR8);
            VAR8 += 4;
        }
        VAR8 -= 127 * 4 + 3;
    }
    if (VAR17 & VAR26)
    {
        VAR12->VAR21.VAR27 = 1;
        VAR12->VAR21.VAR28 = VAR29;
    }
    else
    {
        VAR12->VAR21.VAR27 = 0;
        VAR12->VAR21.VAR28 = VAR30;
    }
    if (VAR17 & VAR31)
    {
        VAR12->VAR21.VAR32 = 1;
        for (VAR16 = 1; VAR16 <= VAR12->VAR33; VAR16++)
        {
            VAR12->VAR19[VAR16] = FUN7(&VAR8);
        }
    }
    if (VAR19)
    {
        VAR12->VAR21.VAR32 = 1;
        memcpy(VAR12->VAR19, VAR19, VAR34);
    }
    if (VAR12->VAR35)
    {
        VAR12->VAR35 = 0;
        VAR12->VAR21.VAR32 = 1;
    }
    memcpy(VAR12->VAR21.VAR3[1], VAR12->VAR19, 1024);
    VAR18 = *VAR8++;
    if (VAR18 != 8 && VAR18 != 127)
    {
        FUN5(VAR2, VAR25, "", VAR18);
        return -1;
    }
    memset(VAR12->VAR36, 0, 320 * 200);
    switch (VAR17 & VAR37)
    {
    case 0:
    case 1:
        memcpy(VAR12->VAR36, VAR12->VAR38, 320 * 200);
        break;
    case 3:
        FUN8(VAR12, VAR8, VAR9, VAR2->VAR39, VAR2->VAR40);
        break;
    case 4:
        FUN9(VAR12, VAR8, VAR9, VAR2->VAR39, VAR2->VAR40);
        break;
    default:
        FUN5(VAR2, VAR25, "", VAR17 & VAR37);
        return -1;
    }
    VAR14 = VAR12->VAR21.VAR3[0];
    VAR15 = VAR12->VAR36;
    for (VAR16 = 0; VAR16 < VAR2->VAR40; VAR16++)
    {
        memcpy(VAR14, VAR15, VAR2->VAR39);
        VAR15 += 320;
        VAR14 += VAR12->VAR21.VAR41[0];
    }
    if (VAR12->VAR36 == VAR12->VAR42)
    {
        VAR12->VAR36 = VAR12->VAR43;
        VAR12->VAR38 = VAR12->VAR42;
    }
    else
    {
        VAR12->VAR36 = VAR12->VAR42;
        VAR12->VAR38 = VAR12->VAR43;
    }
    *VAR4 = sizeof(VAR44);
    *(VAR44 *)VAR3 = VAR12->VAR21;
    return VAR9;
}