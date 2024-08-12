void FUN1(void)
{
    VAR1 *VAR2;
    const VAR3 *VAR4;
    int VAR5;
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR7; VAR6++)
    {
        VAR8[VAR9[VAR6]] = VAR6;
    }
    VAR2 = VAR10;
    while (VAR2->VAR11 != 0)
    {
        if (((VAR2->VAR11 >> VAR12) & VAR13) == VAR13)
        {
            VAR4 = VAR2->VAR4;
            if (VAR4[0] != VAR14)
            {
                fprintf(VAR15, "", VAR2->VAR11);
                FUN2(1);
            }
            VAR4++;
            VAR5 = FUN3(VAR4, 0);
            VAR2->VAR11 = (VAR2->VAR11 & ~(VAR13 << VAR12)) | (VAR5 << VAR12);
        }
        (FUN4(VAR16) && FUN4(VAR17)) if (FUN5(VAR2->VAR11 != VAR2->VAR18)) { fprintf(VAR15, "", VAR2->VAR19, VAR2->VAR11, VAR2->VAR18); }
        VAR2++;
    }