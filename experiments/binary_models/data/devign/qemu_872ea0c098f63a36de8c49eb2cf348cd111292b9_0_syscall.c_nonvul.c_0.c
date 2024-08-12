void FUN1(void)
{
    VAR1 *VAR2;
    const VAR3 *VAR4;
    int VAR5;
    int VAR6;
    VAR2 = VAR7;
    while (VAR2->VAR8 != 0)
    {
        if (((VAR2->VAR8 >> VAR9) & VAR10) == VAR10)
        {
            VAR4 = VAR2->VAR4;
            if (VAR4[0] != VAR11)
            {
                fprintf(VAR12, "", VAR2->VAR8);
                FUN2(1);
            }
            VAR4++;
            VAR5 = FUN3(VAR4, 0);
            VAR2->VAR8 = (VAR2->VAR8 & ~(VAR10 << VAR9)) | (VAR5 << VAR9);
        }
        for (VAR6 = 0; VAR6 < VAR13; VAR6++)
            VAR14[VAR15[VAR6]] = VAR6;
        (FUN4(VAR16) && FUN4(VAR17)) if (FUN5(VAR2->VAR8 != VAR2->VAR18)) { fprintf(VAR12, "", VAR2->VAR19, VAR2->VAR8, VAR2->VAR18); }
        VAR2++;
    }
}