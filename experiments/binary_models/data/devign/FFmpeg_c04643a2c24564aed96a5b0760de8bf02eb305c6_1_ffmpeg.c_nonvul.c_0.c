void FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    AVFormatParameters VAR4, *VAR5 = &VAR4;
    int VAR6, VAR7, VAR8, VAR9;
    memset(VAR5, 0, sizeof(*VAR5));
    VAR5->VAR10 = VAR11;
    VAR5->VAR12 = VAR13;
    VAR5->VAR14 = VAR14;
    VAR5->VAR15 = VAR16;
    VAR5->VAR17 = VAR18;
    VAR6 = FUN2(&VAR3, VAR1, VAR19, 0, VAR5);
    if (VAR6 < 0)
    {
        FUN3(VAR1, VAR6);
        FUN4(1);
    }
    VAR8 = FUN5(VAR3);
    if (VAR8 < 0)
    {
        fprintf(VAR20, "", VAR1);
        FUN4(1);
    }
    for (VAR7 = 0; VAR7 < VAR3->VAR21; VAR7++)
    {
        VAR22 *VAR23 = &VAR3->VAR24[VAR7]->VAR25;
        switch (VAR23->VAR26)
        {
        case VAR27:
            VAR13 = VAR23->VAR12;
            VAR11 = VAR23->VAR10;
            break;
        case VAR28:
            VAR18 = VAR23->VAR17;
            VAR16 = VAR23->VAR15;
            VAR9 = VAR3->VAR24[VAR7]->VAR29;
            if (VAR23->VAR14 != VAR9)
            {
                fprintf(VAR20, "", VAR7, (float)VAR23->VAR14 / VAR30, (float)VAR9 / VAR30);
            }
            VAR14 = VAR9;
            break;
        default:
            FUN6();
        }
    }
    VAR31[VAR32] = VAR3;
    FUN7(VAR3, VAR32, VAR1, 0);
    VAR32++;
    VAR19 = NULL;
    VAR33 = NULL;
}