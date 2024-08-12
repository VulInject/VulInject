static VAR1 FUN1(VAR2 *VAR3, off_t VAR4, VAR5 *VAR6, VAR5 *VAR7, int VAR8, int *VAR9)
{
    VAR10 *VAR11 = VAR3->VAR12;
    int64_t VAR13 = VAR14 | VAR15 | VAR4;
    struct
    {
        struct fiemap VAR16;
        struct fiemap_extent VAR17;
    } VAR18;
    if (VAR11->VAR19)
    {
        return -VAR20;
    }
    VAR18.VAR16.VAR21 = VAR4;
    VAR18.VAR16.VAR22 = (VAR1)VAR8 * VAR23;
    VAR18.VAR16.VAR24 = 0;
    VAR18.VAR16.VAR25 = 1;
    VAR18.VAR16.VAR26 = 0;
    if (FUN2(VAR11->VAR27, VAR28, &VAR18) == -1)
    {
        VAR11->VAR19 = true;
        return -VAR29;
    }
    if (VAR18.VAR16.VAR30 == 0)
    {
        off_t VAR31 = FUN3(VAR11->VAR27, 0, VAR32);
        *VAR7 = VAR18.VAR16.VAR21;
        *VAR6 = FUN4(VAR18.VAR16.VAR21 + VAR18.VAR16.VAR22, VAR31);
    }
    else
    {
        *VAR6 = VAR18.VAR17.VAR33;
        *VAR7 = VAR18.VAR17.VAR33 + VAR18.VAR17.VAR34;
        if (VAR18.VAR17.VAR35 & VAR36)
        {
            VAR13 |= VAR37;
        }
    }
    return VAR13;
    return -VAR20;
}