static int FUN1(VAR1 *VAR2, uint8_t VAR3, uint64_t VAR4, VAR5 *VAR6)
{
    SigpInfo VAR7 = {
        .VAR4 = VAR4,
        .VAR6 = VAR6,
    };
    if (VAR2 == NULL)
    {
        return VAR8;
    }
    if (VAR2->VAR9.VAR10 != 0 && VAR3 != VAR11 && VAR3 != VAR12)
    {
        return VAR13;
    }
    switch (VAR3)
    {
    case VAR14:
        FUN2(FUN3(VAR2), VAR15, FUN4(&VAR7));
        break;
    case VAR16:
        FUN2(FUN3(VAR2), VAR17, FUN4(&VAR7));
        break;
    case VAR18:
        FUN2(FUN3(VAR2), VAR19, FUN4(&VAR7));
        break;
    case VAR20:
        FUN2(FUN3(VAR2), VAR21, FUN4(&VAR7));
        break;
    case VAR22:
        FUN2(FUN3(VAR2), VAR23, FUN4(&VAR7));
        break;
    case VAR24:
        FUN2(FUN3(VAR2), VAR25, FUN4(&VAR7));
        break;
    case VAR26:
        FUN2(FUN3(VAR2), VAR27, FUN4(&VAR7));
        break;
    case VAR12:
        FUN2(FUN3(VAR2), VAR28, FUN4(&VAR7));
        break;
    case VAR11:
        FUN2(FUN3(VAR2), VAR29, FUN4(&VAR7));
        break;
    default:
        FUN5(&VAR7, VAR30);
    }
    return VAR7.VAR31;
}