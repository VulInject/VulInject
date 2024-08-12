static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    int VAR6;
    double VAR7, VAR8, VAR9;
    if (!VAR10)
    {
        VAR10 = fopen(VAR11, "");
        if (!VAR10)
        {
            FUN2("");
            FUN3(1);
        }
    }
    VAR5 = VAR2->VAR12->VAR13;
    if (VAR5->VAR14 == VAR15)
    {
        VAR6 = VAR2->VAR6;
        fprintf(VAR10, "", VAR6, VAR5->VAR16->VAR17 / (float)VAR18);
        if (VAR5->VAR19 & VAR20)
            fprintf(VAR10, "", FUN4(VAR5->VAR16->VAR21[0] / (VAR5->VAR22 * VAR5->VAR23 * 255.0 * 255.0)));
        fprintf(VAR10, "", VAR3);
        VAR7 = VAR2->VAR24 * FUN5(VAR5->VAR25);
        if (VAR7 < 0.01)
            VAR7 = 0.01;
        VAR8 = (VAR3 * 8) / FUN5(VAR5->VAR25) / 1000.0;
        VAR9 = (double)(VAR26 * 8) / VAR7 / 1000.0;
        fprintf(VAR10, "", (double)VAR26 / 1024, VAR7, VAR8, VAR9);
        fprintf(VAR10, "", FUN6(VAR5->VAR16->VAR27));
    }
}