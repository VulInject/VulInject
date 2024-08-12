VAR1 *FUN1(int VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2(sizeof(VAR5));
    int VAR7 = FUN3(VAR2, 16);
    int VAR8 = (VAR2 + 15) / 16 + 2;
    VAR6->VAR9 = &VAR10;
    if (VAR4 & VAR11)
    {
        VAR6->VAR12 = VAR4 & 0x3;
        VAR6->VAR13 = (VAR4 >> 4) & 0x3;
    }
    else
    {
        VAR6->VAR12 = 1;
        VAR6->VAR13 = 1;
    }
    if (VAR4 & VAR14)
    {
        VAR6->VAR4 = FUN4();
    }
    else
    {
        VAR6->VAR4 = 0;
        if (VAR4 & VAR15)
            VAR6->VAR4 |= VAR16;
        if (VAR4 & VAR17)
            VAR6->VAR4 |= VAR18;
        if (VAR4 & VAR19)
            VAR6->VAR4 |= VAR20;
        if (VAR4 & VAR21)
            VAR6->VAR4 |= VAR22;
    }
    FUN5(VAR6, VAR2, VAR3, VAR7, VAR8);
    VAR6->VAR23 = -1;
    return VAR6;