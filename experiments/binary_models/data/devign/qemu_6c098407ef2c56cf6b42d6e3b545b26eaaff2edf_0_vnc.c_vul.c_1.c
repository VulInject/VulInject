static int FUN1(VAR1 *VAR2, int VAR3)
{
    z_streamp VAR4 = &VAR2->VAR5[VAR3];
    int VAR6;
    VAR2->VAR7 = VAR2->VAR8;
    VAR2->VAR8 = VAR2->VAR9;
    if (VAR4->VAR10 != VAR2)
    {
        int VAR11;
        FUN2("", VAR3);
        FUN2("", VAR4->VAR10, VAR2);
        VAR4->VAR12 = VAR13;
        VAR4->VAR14 = VAR13;
        VAR11 = FUN3(VAR4, VAR2->VAR15, VAR16, VAR17, VAR18, VAR19);
        if (VAR11 != VAR20)
        {
            fprintf(VAR21, "");
            return -1;
        }
        VAR4->VAR10 = VAR2;
    }
    FUN4(&VAR2->VAR8, VAR2->VAR7.VAR22 + 64);
    VAR4->VAR23 = VAR2->VAR7.VAR24;
    VAR4->VAR25 = VAR2->VAR7.VAR22;
    VAR4->VAR26 = VAR2->VAR8.VAR24 + VAR2->VAR8.VAR22;
    VAR4->VAR27 = VAR2->VAR8.VAR28 - VAR2->VAR8.VAR22;
    VAR4->VAR29 = VAR30;
    VAR6 = VAR4->VAR31;
    if (FUN5(VAR4, VAR32) != VAR20)
    {
        fprintf(VAR21, "");
        return -1;
    }
    VAR2->VAR8.VAR22 = VAR2->VAR8.VAR28 - VAR4->VAR27;
    return VAR4->VAR31 - VAR6;
}