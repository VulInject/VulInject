static void FUN1(VAR1 *VAR2, uint32_t VAR3, VAR4 *VAR5)
{
    const char *VAR6[8] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
    };
    int VAR7[8] = {
        VAR8,
        VAR9,
        VAR10,
        VAR11,
        VAR12,
        VAR13,
        VAR14,
        VAR15,
    };
    int VAR16;
    for (VAR16 = 0; VAR16 < 8; VAR16++)
    {
        void (*VAR17)(void *VAR18, int VAR19, int VAR20) = &VAR21;
        if (VAR16 == 2 && (VAR3 & (1 << VAR16)) && (VAR2->VAR22 & VAR23))
        {
            VAR17 = &VAR24;
        }
        if (VAR3 & (1 << VAR16))
        {
            FUN2(VAR2, VAR7[VAR16], VAR6[VAR16], VAR25, VAR25, &VAR26, VAR17, 0x00000000);
        }
    }
    if (VAR2->VAR27 > 1)
    {
        FUN2(VAR2, VAR28, "", VAR25, VAR25, &VAR26, &VAR29, 0x00000000);
    }
    if (VAR2->VAR27 > 2)
    {
        FUN2(VAR2, VAR30, "", VAR25, VAR25, &VAR26, &VAR29, 0x00000000);
    }
    FUN2(VAR2, VAR31, "", VAR25, VAR25, &VAR26, VAR25, 0x00000000);
    switch (VAR2->VAR32)
    {
    case 4:
        FUN2(VAR2, VAR33, "", VAR25, VAR25, &VAR26, VAR25, VAR5[3]);
    case 3:
        FUN2(VAR2, VAR34, "", VAR25, VAR25, &VAR26, VAR25, VAR5[2]);
    case 2:
        FUN2(VAR2, VAR35, "", VAR25, VAR25, &VAR26, VAR25, VAR5[1]);
    case 1:
        FUN2(VAR2, VAR36, "", VAR25, VAR25, &VAR26, VAR25, VAR5[0]);
    case 0:
    default:
        break;
    }
    FUN3(VAR2);
}