static void FUN1(struct VAR1 *VAR2, const char *VAR3, int VAR4)
{
    char VAR5[1000];
    VAR6 *VAR7;
    int VAR8, VAR9;
    if (VAR4)
        snprintf(VAR5, sizeof(VAR5), "");
    else
        snprintf(VAR5, sizeof(VAR5), "", VAR3);
    VAR7 = fopen(VAR5, "");
    if (!VAR7)
    {
        FUN2(VAR5);
        return;
    }
    fprintf(VAR7, ""1.0\""VAR10-8\"");
    fprintf(VAR7, ""2\""0\""
                 ""%""\"",
            VAR2->VAR11 * 10);
    if (VAR2->VAR12 >= 0)
    {
        struct VAR13 *VAR14 = VAR2->VAR2[VAR2->VAR12];
        int VAR15 = 0;
        fprintf(VAR7, ""VAR16\""%VAR17\""
                     ""%VAR17\""
                     ""FUN3({VAR18})/FUN4(VAR16={start VAR19})\"",
                VAR2->VAR20, VAR14->VAR21);
        for (VAR8 = 0; VAR8 < VAR2->VAR22; VAR8++)
        {
            VAR14 = VAR2->VAR2[VAR8];
            if (!VAR14->VAR23)
                continue;
            fprintf(VAR7, ""%VAR17\""%VAR17\""
                         ""%VAR24\""%VAR17\""%VAR17\""
                         """,
                    VAR15, VAR14->VAR18, VAR14->VAR25, VAR14->VAR26, VAR14->VAR27);
            for (VAR9 = 0; VAR9 < VAR14->VAR28; VAR9++)
                fprintf(VAR7, "", VAR14->VAR29[VAR9]);
            fprintf(VAR7, "" />\VAR30");
            VAR15++;
        }
        VAR14 = VAR2->VAR2[VAR2->VAR12];
        for (VAR8 = 0; VAR8 < VAR14->VAR21; VAR8++)
            fprintf(VAR7, ""%VAR17\""%VAR17\"", VAR8, VAR14->VAR31[VAR8].VAR11);
        fprintf(VAR7, "");
    }
    if (VAR2->VAR32 >= 0)
    {
        struct VAR13 *VAR14 = VAR2->VAR2[VAR2->VAR32];
        int VAR15 = 0;
        fprintf(VAR7, ""VAR33\""%VAR17\""
                     ""%VAR17\""
                     ""FUN3({VAR18})/FUN4(VAR33={start VAR19})\"",
                VAR2->VAR34, VAR14->VAR21);
        for (VAR8 = 0; VAR8 < VAR2->VAR22; VAR8++)
        {
            VAR14 = VAR2->VAR2[VAR8];
            if (!VAR14->VAR35)
                continue;
            fprintf(VAR7, ""%VAR17\""%VAR17\""
                         ""%VAR24\""%VAR17\""%VAR17\""
                         ""16\""%VAR17\""
                         ""%VAR17\""",
                    VAR15, VAR14->VAR18, VAR14->VAR25, VAR14->VAR36, VAR14->VAR37, VAR14->VAR38, VAR14->VAR39);
            for (VAR9 = 0; VAR9 < VAR14->VAR28; VAR9++)
                fprintf(VAR7, "", VAR14->VAR29[VAR9]);
            fprintf(VAR7, "" />\VAR30");
            VAR15++;
        }
        VAR14 = VAR2->VAR2[VAR2->VAR32];
        for (VAR8 = 0; VAR8 < VAR14->VAR21; VAR8++)
            fprintf(VAR7, ""%VAR17\""%VAR17\"", VAR8, VAR14->VAR31[VAR8].VAR11);
        fprintf(VAR7, "");
    }
    fprintf(VAR7, "");
    fclose(VAR7);
}