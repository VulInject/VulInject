static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15;
    int VAR16, VAR17, VAR18;
    int VAR19 = 0;
    VAR12->VAR8 = VAR8;
    VAR12->VAR10 = VAR9;
    VAR12->VAR20.VAR21 = 1;
    VAR12->VAR20.VAR22 = VAR23 | VAR24 | VAR25 | VAR26;
    if (VAR2->FUN2(VAR2, &VAR12->VAR20))
    {
        FUN3(VAR12->VAR2, VAR27, "");
        return -1;
    }
    if (VAR12->VAR10 < 8)
        goto VAR28;
    VAR16 = 4;
    VAR14 = FUN4(&VAR12->VAR8[VAR16]);
    VAR16 += 2;
    if (VAR14 & 0x0008)
    {
        if (VAR12->VAR10 < 14)
            goto VAR28;
        VAR15 = FUN4(&VAR12->VAR8[VAR16]);
        VAR16 += 4;
        VAR17 = FUN4(&VAR12->VAR8[VAR16]);
        VAR16 += 4;
    }
    else
    {
        VAR15 = 0;
        VAR17 = VAR12->VAR2->VAR17;
    }
    VAR18 = VAR12->VAR20.VAR29[0] * VAR15;
    switch (VAR2->VAR30)
    {
    case 1:
    case 33:
        FUN5(VAR12, VAR16, VAR18, VAR17);
        break;
    case 2:
    case 34:
        FUN6(VAR12, VAR16, VAR18, VAR17, 2);
        VAR19 = 1;
        break;
    case 4:
    case 36:
        FUN6(VAR12, VAR16, VAR18, VAR17, 4);
        VAR19 = 1;
        break;
    case 8:
    case 40:
        FUN7(VAR12, VAR16, VAR18, VAR17);
        VAR19 = 1;
        break;
    case 16:
        FUN8(VAR12, VAR16, VAR18, VAR17);
        break;
    case 24:
        FUN9(VAR12, VAR16, VAR18, VAR17);
        break;
    case 32:
        FUN10(VAR12, VAR16, VAR18, VAR17);
        break;
    default:
        FUN3(VAR12->VAR2, VAR27, "", VAR2->VAR30);
        break;
    }
    if (VAR19)
    {
        const VAR7 *VAR31 = FUN11(VAR6, VAR32, NULL);
        if (VAR31)
        {
            VAR12->VAR20.VAR33 = 1;
            memcpy(VAR12->VAR31, VAR31, VAR34);
        }
        memcpy(VAR12->VAR20.VAR3[1], VAR12->VAR31, VAR34);
    }
VAR28:
    *VAR4 = sizeof(VAR35);
    *(VAR35 *)VAR3 = VAR12->VAR20;
    return VAR9;
}