static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    static VAR6 *VAR7 = NULL;
    static INT64 VAR8 = 0;
    struct VAR9 *VAR10;
    time_t VAR11;
    char VAR12[40];
    VAR13 *VAR14;
    int VAR15;
    INT64 VAR16;
    double VAR17, VAR18, VAR19;
    if (!VAR7)
    {
        VAR11 = FUN2(NULL);
        VAR10 = FUN3(&VAR11);
        sprintf(VAR12, "", VAR10->VAR20, VAR10->VAR21, VAR10->VAR22);
        VAR7 = fopen(VAR12, "");
        if (!VAR7)
        {
            FUN4("");
            FUN5(1);
        }
    }
    VAR16 = VAR23;
    VAR14 = &VAR2->VAR24->VAR25;
    VAR8 += VAR5;
    if (VAR14->VAR26 == VAR27)
    {
        VAR15 = VAR4->VAR15;
        fprintf(VAR7, "", VAR15, VAR14->VAR28);
        if (VAR29)
            fprintf(VAR7, "", VAR14->VAR30);
        fprintf(VAR7, "", VAR5);
        if (!VAR4->VAR31 && VAR4->VAR32 < VAR16)
        {
            VAR16 = VAR4->VAR32;
        }
        VAR17 = (double)VAR16 / 1000000.0;
        if (VAR17 < 0.01)
            VAR17 = 0.01;
        VAR18 = (double)(VAR5 * 8) * VAR14->VAR33 / VAR34 / 1000.0;
        VAR19 = (double)(VAR8 * 8) / VAR17 / 1000.0;
        fprintf(VAR7, "", (double)VAR8 / 1024, VAR17, VAR18, VAR19);
        fprintf(VAR7, "", VAR14->VAR35 == 1 ? "" : "");
    }
}