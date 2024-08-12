static VAR1 FUN1(AudioConverterRef VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8, void *VAR9)
{
    VAR10 *VAR11 = VAR9;
    VAR12 *VAR13 = VAR11->VAR14;
    if (VAR13->VAR15)
    {
        *VAR4 = 0;
        if (VAR8)
        {
            *VAR8 = &VAR13->VAR16;
            VAR13->VAR16.VAR17 = 0;
        }
        return 0;
    }
    FUN2(&VAR13->VAR18, &VAR13->VAR19);
    VAR13->VAR19.VAR6 = 0;
    VAR13->VAR19.VAR20 = 0;
    if (!VAR13->VAR18.VAR6)
    {
        *VAR4 = 0;
        return 1;
    }
    VAR6->VAR21 = 1;
    VAR6->VAR22[0].VAR23 = 0;
    VAR6->VAR22[0].VAR17 = VAR13->VAR18.VAR20;
    VAR6->VAR22[0].VAR24 = VAR13->VAR18.VAR6;
    *VAR4 = 1;
    if (VAR8)
    {
        *VAR8 = &VAR13->VAR16;
        VAR13->VAR16.VAR17 = VAR13->VAR18.VAR20;
    }
    return 0;