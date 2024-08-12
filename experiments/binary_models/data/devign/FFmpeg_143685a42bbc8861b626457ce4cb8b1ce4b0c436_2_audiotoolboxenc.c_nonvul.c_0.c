static VAR1 FUN1(AudioConverterRef VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8, void *VAR9)
{
    VAR10 *VAR11 = VAR9;
    VAR12 *VAR13 = VAR11->VAR14;
    VAR15 *VAR16;
    if (!VAR13->VAR17.VAR18)
    {
        if (VAR13->VAR19)
        {
            *VAR4 = 0;
            return 0;
        }
        else
        {
            *VAR4 = 0;
            return 1;
        }
    }
    VAR16 = FUN2(&VAR13->VAR17);
    VAR6->VAR20 = 1;
    VAR6->VAR21[0].VAR22 = VAR11->VAR23;
    VAR6->VAR21[0].VAR24 = VAR16->VAR25 * FUN3(VAR11->VAR26) * VAR11->VAR23;
    VAR6->VAR21[0].VAR27 = VAR16->VAR6[0];
    if (*VAR4 > VAR16->VAR25)
        *VAR4 = VAR16->VAR25;
    FUN4(VAR11, &VAR13->VAR28, VAR16);
    return 0;
}