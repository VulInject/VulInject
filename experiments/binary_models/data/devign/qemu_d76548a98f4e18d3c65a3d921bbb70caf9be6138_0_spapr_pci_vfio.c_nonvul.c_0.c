static int FUN1(VAR1 *VAR2, unsigned int VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    struct vfio_eeh_pe_op VAR7 = {.VAR8 = sizeof(VAR7)};
    int VAR9;
    switch (VAR4)
    {
    case VAR10:
        VAR7.VAR7 = VAR11;
        break;
    case VAR12:
    {
        VAR13 *VAR14;
        VAR15 *VAR16;
        VAR14 = FUN3(VAR2);
        VAR16 = FUN4(VAR14->VAR17, (VAR3 >> 16) & 0xFF, (VAR3 >> 8) & 0xFF);
        if (!VAR16 || !FUN5(FUN6(VAR16), ""))
        {
            return VAR18;
        }
        VAR7.VAR7 = VAR19;
        break;
    }
    case VAR20:
        VAR7.VAR7 = VAR21;
        break;
    case VAR22:
        VAR7.VAR7 = VAR23;
        break;
    default:
        return VAR18;
    }
    VAR9 = FUN7(&VAR6->VAR14.VAR24, VAR6->VAR25, VAR26, &VAR7);
    if (VAR9 < 0)
    {
        return VAR27;
    }
    return VAR28;
}