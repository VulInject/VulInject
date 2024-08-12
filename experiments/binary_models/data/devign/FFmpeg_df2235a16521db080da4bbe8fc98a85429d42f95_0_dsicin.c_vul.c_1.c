static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *cin = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    VAR9 *VAR10 = &cin->VAR11;
    int VAR12, VAR13, VAR14;
    if (cin->VAR15 == 0)
    {
        VAR12 = FUN2(cin, VAR8);
        if (VAR12)
            return VAR12;
        if ((VAR16)VAR10->VAR17 < 0)
        {
            VAR10->VAR17 = -(VAR16)VAR10->VAR17;
            VAR13 = 1;
        }
        else
        {
            VAR13 = 0;
        }
        VAR14 = (VAR13 + 3) * VAR10->VAR17 + VAR10->VAR18;
        if (FUN3(VAR4, 4 + VAR14))
            return FUN4(VAR19);
        VAR4->VAR20 = cin->VAR21;
        VAR4->VAR22 = cin->VAR23++;
        VAR4->VAR24[0] = VAR13;
        VAR4->VAR24[1] = VAR10->VAR17 & 0xFF;
        VAR4->VAR24[2] = VAR10->VAR17 >> 8;
        VAR4->VAR24[3] = VAR10->VAR25;
        if (FUN5(VAR8, &VAR4->VAR24[4], VAR14) != VAR14)
            return FUN4(VAR26);
        cin->VAR15 = VAR10->VAR27;
        return 0;
    }
    if (FUN3(VAR4, cin->VAR15))
        return FUN4(VAR19);
    VAR4->VAR20 = cin->VAR28;
    VAR4->VAR22 = cin->VAR29;
    cin->VAR29 += cin->VAR15 * 2 / cin->VAR30.VAR27;
    if (FUN5(VAR8, VAR4->VAR24, cin->VAR15) != cin->VAR15)
        return FUN4(VAR26);
    cin->VAR15 = 0;
    return 0;
}