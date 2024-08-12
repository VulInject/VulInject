static VAR1 FUN1(int VAR2, abi_ulong VAR3)
{
    static const unsigned VAR4[] = {
        [VAR5] = 3,
        [VAR6] = 3,
        [VAR7] = 3,
        [VAR8] = 2,
        [VAR9] = 3,
        [VAR10] = 4,
        [VAR11] = 3,
        [VAR12] = 3,
        [VAR13] = 4,
        [VAR14] = 4,
        [VAR15] = 4,
        [VAR16] = 6,
        [VAR17] = 6,
        [VAR18] = 2,
        [VAR19] = 3,
        [VAR20] = 3,
        [VAR21] = 4,
        [VAR22] = 4,
        [VAR23] = 5,
        [VAR24] = 5,
    };
    abi_long VAR25[6];
    if (VAR2 >= 0 && VAR2 < FUN2(VAR4))
    {
        unsigned VAR26;
        assert(FUN2(VAR25) >= VAR4[VAR2]);
        for (VAR26 = 0; VAR26 < VAR4[VAR2]; ++VAR26)
        {
            if (FUN3(VAR25[VAR26], VAR3 + VAR26 * sizeof(VAR1)) != 0)
            {
                return -VAR27;
            }
        }
    }
    switch (VAR2)
    {
    case VAR5:
        return FUN4(VAR25[0], VAR25[1], VAR25[2]);
    case VAR6:
        return FUN5(VAR25[0], VAR25[1], VAR25[2]);
    case VAR7:
        return FUN6(VAR25[0], VAR25[1], VAR25[2]);
    case VAR8:
        return FUN7(FUN8(VAR25[0], VAR25[1]));
    case VAR9:
        return FUN9(VAR25[0], VAR25[1], VAR25[2], 0);
    case VAR10:
        return FUN9(VAR25[0], VAR25[1], VAR25[2], VAR25[3]);
    case VAR11:
        return FUN10(VAR25[0], VAR25[1], VAR25[2]);
    case VAR12:
        return FUN11(VAR25[0], VAR25[1], VAR25[2]);
    case VAR13:
        return FUN12(VAR25[0], VAR25[1], VAR25[2], VAR25[3]);
    case VAR14:
        return FUN13(VAR25[0], VAR25[1], VAR25[2], VAR25[3], 0, 0);
    case VAR15:
        return FUN14(VAR25[0], VAR25[1], VAR25[2], VAR25[3], 0, 0);
    case VAR16:
        return FUN13(VAR25[0], VAR25[1], VAR25[2], VAR25[3], VAR25[4], VAR25[5]);
    case VAR17:
        return FUN14(VAR25[0], VAR25[1], VAR25[2], VAR25[3], VAR25[4], VAR25[5]);
    case VAR18:
        return FUN7(FUN15(VAR25[0], VAR25[1]));
    case VAR19:
        return FUN16(VAR25[0], VAR25[1], VAR25[2], 1);
    case VAR20:
        return FUN16(VAR25[0], VAR25[1], VAR25[2], 0);
    case VAR21:
        return FUN17(VAR25[0], VAR25[1], VAR25[2], VAR25[3], 1);
    case VAR22:
        return FUN17(VAR25[0], VAR25[1], VAR25[2], VAR25[3], 0);
    case VAR23:
        return FUN18(VAR25[0], VAR25[1], VAR25[2], VAR25[3], VAR25[4]);
    case VAR24:
        return FUN19(VAR25[0], VAR25[1], VAR25[2], VAR25[3], VAR25[4]);
    default:
        FUN20("", VAR2);
        return -VAR28;
    }
}