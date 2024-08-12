static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9;
    FUN2(VAR4, VAR5, sizeof(*VAR4), &VAR10);
    VAR9 = 0;
    for (VAR8 = 1; VAR8 < VAR5; VAR8++)
    {
        int VAR11 = 0;
        int64_t VAR12 = VAR4[VAR9].VAR13 + VAR4[VAR9].VAR14;
        if (VAR4[VAR8].VAR13 <= VAR12)
        {
            VAR11 = 1;
        }
        if (!VAR11 && VAR2->VAR15->VAR16)
        {
            VAR11 = VAR2->VAR15->FUN3(VAR2, &VAR4[VAR9], &VAR4[VAR8]);
        }
        if (VAR11)
        {
            size_t VAR17;
            VAR18 *VAR19 = FUN4(sizeof(*VAR19));
            FUN5(VAR19, VAR4[VAR9].VAR19->VAR20 + VAR4[VAR8].VAR19->VAR20 + 1);
            VAR17 = (VAR4[VAR8].VAR13 - VAR4[VAR9].VAR13) << 9;
            FUN6(VAR19, VAR4[VAR9].VAR19, VAR17);
            if (VAR4[VAR8].VAR13 > VAR12)
            {
                size_t VAR21 = (VAR4[VAR8].VAR13 - VAR12) << 9;
                VAR22 *VAR23 = FUN7(VAR2, VAR21);
                memset(VAR23, 0, VAR21);
                FUN8(VAR19, VAR23, VAR21);
                VAR7->VAR24[VAR8].VAR25 = VAR23;
            }
            FUN6(VAR19, VAR4[VAR8].VAR19, VAR4[VAR8].VAR19->VAR17);
            VAR4[VAR9].VAR14 += VAR4[VAR8].VAR14;
            VAR4[VAR9].VAR19 = VAR19;
            VAR7->VAR24[VAR8].VAR26 = VAR4[VAR9].VAR19;
        }
        else
        {
            VAR9++;
            VAR4[VAR9].VAR13 = VAR4[VAR8].VAR13;
            VAR4[VAR9].VAR14 = VAR4[VAR8].VAR14;
            VAR4[VAR9].VAR19 = VAR4[VAR8].VAR19;
        }
    }
    return VAR9 + 1;
}