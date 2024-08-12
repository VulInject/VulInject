static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR3;
    GetBitContext VAR9;
    VAR10 *VAR11 = VAR8->VAR11;
    int VAR12 = VAR8->VAR12;
    int VAR13 = VAR8->VAR13;
    int VAR14 = VAR8->VAR14;
    int VAR15, VAR16, VAR17;
    FUN2(&VAR9, VAR11, VAR13 * 8);
    for (VAR17 = 0; VAR17 < 3; VAR17++)
    {
        int VAR18 = VAR5->VAR19->VAR20[VAR17];
        VAR10 *VAR21 = VAR5->VAR19->VAR22[VAR17] + (VAR14 >> !!VAR17) * VAR18;
        for (VAR16 = 0; VAR16 < (VAR12 >> !!VAR17); VAR16 += 8)
        {
            for (VAR15 = 0; VAR15 < (VAR5->VAR23 >> !!VAR17); VAR15 += 8)
            {
                int VAR24;
                if ((VAR24 = FUN3(VAR5, &VAR9, VAR21 + VAR15, VAR18, VAR8->VAR25)) != 0)
                    return VAR24;
            }
            VAR21 += 8 * VAR18;
        }
    }
    return 0;
}