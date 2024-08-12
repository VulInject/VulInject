static VAR1 FUN1(int VAR2, int VAR3, abi_ulong VAR4)
{
    struct flock64 VAR5;
    struct f_owner_ex VAR6;
    struct VAR7 *VAR8;
    abi_long VAR9;
    int VAR10 = FUN2(VAR3);
    if (VAR10 == -VAR11)
        return VAR10;
    switch (VAR3)
    {
    case VAR12:
        VAR9 = FUN3(&VAR5, VAR4);
        if (VAR9)
        {
            return VAR9;
        }
        VAR9 = FUN4(FUN5(VAR2, VAR10, &VAR5));
        if (VAR9 == 0)
        {
            VAR9 = FUN6(VAR4, &VAR5);
        }
        break;
    case VAR13:
    case VAR14:
        VAR9 = FUN3(&VAR5, VAR4);
        if (VAR9)
        {
            return VAR9;
        }
        VAR9 = FUN4(FUN5(VAR2, VAR10, &VAR5));
        break;
    case VAR15:
        VAR9 = FUN7(&VAR5, VAR4);
        if (VAR9)
        {
            return VAR9;
        }
        VAR9 = FUN4(FUN5(VAR2, VAR10, &VAR5));
        if (VAR9 == 0)
        {
            VAR9 = FUN8(VAR4, &VAR5);
        }
        break;
    case VAR16:
    case VAR17:
        VAR9 = FUN7(&VAR5, VAR4);
        if (VAR9)
        {
            return VAR9;
        }
        VAR9 = FUN4(FUN5(VAR2, VAR10, &VAR5));
        break;
    case VAR18:
        VAR9 = FUN4(FUN5(VAR2, VAR10, VAR4));
        if (VAR9 >= 0)
        {
            VAR9 = FUN9(VAR9, VAR19);
        }
        break;
    case VAR20:
        VAR9 = FUN4(FUN5(VAR2, VAR10, FUN10(VAR4, VAR19)));
        break;
    case VAR21:
        VAR9 = FUN4(FUN5(VAR2, VAR10, &VAR6));
        if (VAR9 >= 0)
        {
            if (!FUN11(VAR22, VAR8, VAR4, 0))
                return -VAR23;
            VAR8->VAR24 = FUN12(VAR6.VAR24);
            VAR8->VAR25 = FUN12(VAR6.VAR25);
            FUN13(VAR8, VAR4, 1);
        }
        break;
    case VAR26:
        if (!FUN11(VAR27, VAR8, VAR4, 1))
            return -VAR23;
        VAR6.VAR24 = FUN12(VAR8->VAR24);
        VAR6.VAR25 = FUN12(VAR8->VAR25);
        FUN13(VAR8, VAR4, 0);
        VAR9 = FUN4(FUN5(VAR2, VAR10, &VAR6));
        break;
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
        VAR9 = FUN4(FUN5(VAR2, VAR10, VAR4));
        break;
    default:
        VAR9 = FUN4(FUN5(VAR2, VAR3, VAR4));
        break;
    }
    return VAR9;
}