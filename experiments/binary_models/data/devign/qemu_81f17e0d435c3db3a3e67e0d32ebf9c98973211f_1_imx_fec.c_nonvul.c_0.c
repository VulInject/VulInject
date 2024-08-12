static void FUN1(VAR1 *VAR2)
{
    int VAR3 = 0, VAR4 = 0;
    uint8_t VAR5[VAR6];
    VAR7 *VAR8 = VAR5;
    uint32_t VAR9 = VAR2->VAR10;
    while (VAR4++ < VAR11)
    {
        IMXFECBufDesc VAR12;
        int VAR13;
        FUN2(&VAR12, VAR9);
        FUN3("", VAR9, VAR12.VAR14, VAR12.VAR15, VAR12.VAR16);
        if ((VAR12.VAR14 & VAR17) == 0)
        {
            FUN3("");
            break;
        }
        VAR13 = VAR12.VAR15;
        if (VAR3 + VAR13 > VAR6)
        {
            VAR13 = VAR6 - VAR3;
            VAR2->VAR18[VAR19] |= VAR20;
        }
        FUN4(&VAR21, VAR12.VAR16, VAR8, VAR13);
        VAR8 += VAR13;
        VAR3 += VAR13;
        if (VAR12.VAR14 & VAR22)
        {
            FUN5(FUN6(VAR2->VAR23), VAR5, VAR3);
            VAR8 = VAR5;
            VAR3 = 0;
            VAR2->VAR18[VAR19] |= VAR24;
        }
        VAR2->VAR18[VAR19] |= VAR25;
        VAR12.VAR14 &= ~VAR17;
        FUN7(&VAR12, VAR9);
        if ((VAR12.VAR14 & VAR26) != 0)
        {
            VAR9 = VAR2->VAR18[VAR27];
        }
        else
        {
            VAR9 += sizeof(VAR12);
        }
    }
    VAR2->VAR10 = VAR9;
    FUN8(VAR2);
}