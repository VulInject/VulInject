static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    int VAR8;
    VAR9 *VAR10;
    for (VAR8 = 0; VAR8 < VAR2->VAR11; VAR8++)
    {
        VAR2->VAR12[VAR8]->VAR13 = VAR8;
        VAR10 = VAR2->VAR12[VAR8]->VAR10;
        VAR7 = &VAR4->VAR12[VAR8];
        memset(VAR7, 0, sizeof(VAR6));
        VAR7->VAR14 = VAR8;
        VAR7->VAR15 = VAR10->VAR15;
        VAR7->VAR16 = VAR10;
        switch (VAR10->VAR17)
        {
        case VAR18:
            VAR4->VAR19 = VAR7;
            VAR7->VAR20 = (float)VAR10->VAR21 / (float)VAR10->VAR22;
            VAR7->VAR23 = 1024;
            VAR7->VAR24 = 0;
            VAR7->VAR25 = VAR7->VAR24;
            break;
        case VAR26:
            VAR4->VAR27 = VAR7;
            VAR7->VAR20 = (float)VAR10->VAR28.VAR29 / (float)VAR10->VAR28.VAR14;
            VAR7->VAR23 = 4096;
            VAR7->VAR24 = 0;
            VAR7->VAR25 = VAR7->VAR24;
            break;
        default:
            return -1;
            if (FUN2(VAR2, 0, 0))
                return VAR30;
            FUN3(VAR2->VAR31);
            return 0