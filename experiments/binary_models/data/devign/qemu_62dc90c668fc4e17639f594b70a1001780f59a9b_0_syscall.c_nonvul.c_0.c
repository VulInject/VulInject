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
        [VAR21] = 5,
        [VAR22] = 5,
    };
    abi_long VAR23[6];
    if (VAR2 >= 0 && VAR2 < FUN2(VAR4))
    {
        unsigned VAR24;
        assert(FUN2(VAR23) >= VAR4[VAR2]);
        for (VAR24 = 0; VAR24 < VAR4[VAR2]; ++VAR24)
        {
            if (FUN3(VAR23[VAR24], VAR3 + VAR24 * sizeof(VAR1)) != 0)
            {
                return -VAR25;
            }
        }
    }
    switch (VAR2)
    {
    case VAR5:
        return FUN4(VAR23[0], VAR23[1], VAR23[2]);
    case VAR6:
        return FUN5(VAR23[0], VAR23[1], VAR23[2]);
    case VAR7:
        return FUN6(VAR23[0], VAR23[1], VAR23[2]);
    case VAR8:
        return FUN7(FUN8(VAR23[0], VAR23[1]));
    case VAR9:
        return FUN9(VAR23[0], VAR23[1], VAR23[2], 0);
    case VAR10:
        return FUN9(VAR23[0], VAR23[1], VAR23[2], VAR23[3]);
    case VAR11:
        return FUN10(VAR23[0], VAR23[1], VAR23[2]);
    case VAR12:
        return FUN11(VAR23[0], VAR23[1], VAR23[2]);
    case VAR13:
        return FUN12(VAR23[0], VAR23[1], VAR23[2], VAR23[3]);
    case VAR14:
        return FUN13(VAR23[0], VAR23[1], VAR23[2], VAR23[3], 0, 0);
    case VAR15:
        return FUN14(VAR23[0], VAR23[1], VAR23[2], VAR23[3], 0, 0);
    case VAR16:
        return FUN13(VAR23[0], VAR23[1], VAR23[2], VAR23[3], VAR23[4], VAR23[5]);
    case VAR17:
        return FUN14(VAR23[0], VAR23[1], VAR23[2], VAR23[3], VAR23[4], VAR23[5]);
    case VAR18:
        return FUN7(FUN15(VAR23[0], VAR23[1]));
    case VAR19:
        return FUN16(VAR23[0], VAR23[1], VAR23[2], 1);
    case VAR20:
        return FUN16(VAR23[0], VAR23[1], VAR23[2], 0);
    case VAR21:
        return FUN17(VAR23[0], VAR23[1], VAR23[2], VAR23[3], VAR23[4]);
    case VAR22:
        return FUN18(VAR23[0], VAR23[1], VAR23[2], VAR23[3], VAR23[4]);
    default:
        FUN19("", VAR2);
        return -VAR26;
    }
}