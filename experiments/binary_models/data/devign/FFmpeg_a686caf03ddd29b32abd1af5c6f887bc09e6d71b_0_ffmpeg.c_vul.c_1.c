static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int *VAR9, VAR3 *VAR10)
{
    int VAR11, VAR12, VAR13;
    VAR7 *VAR14, *VAR15;
    AVPicture VAR16, VAR17;
    static VAR18 *VAR19;
    VAR18 *VAR20 = NULL, *VAR21 = NULL;
    VAR22 *VAR23, *VAR24;
    VAR23 = &VAR4->VAR25->VAR26;
    VAR24 = &VAR6->VAR25->VAR26;
    VAR11 = 1;
    *VAR9 = 0;
    if (VAR10)
    {
        double VAR27, VAR28, VAR29;
        VAR27 = VAR10->VAR30 - ((double)VAR10->VAR31 * VAR2->VAR32 / VAR2->VAR33);
        VAR28 = VAR4->VAR30 - ((double)VAR4->VAR31 * VAR2->VAR32 / VAR2->VAR33);
        VAR29 = VAR27 - VAR28;
        if (VAR29 < -VAR34)
            VAR11 = 2;
        else if (VAR29 > VAR34)
            VAR11 = 0;
    }
    else
    {
        double VAR28;
        VAR28 = (double)(VAR4->VAR25->VAR35.VAR36) * VAR2->VAR32 / VAR2->VAR33 - (VAR4->VAR30 - VAR4->VAR37);
        if (VAR28 < 100 && VAR28 > -100 && VAR4->VAR37)
        {
            if (VAR28 < -VAR34)
                VAR11 = 2;
            else if (VAR28 > VAR34)
                VAR11 = 0;
        }
        else
        {
            VAR4->VAR37 -= VAR28;
            if (!VAR4->VAR37)
                VAR4->VAR37 = 0.000001;
        }
    }
    static char *VAR38[] = {"", "", ""};
    if (VAR10)
        fprintf(VAR39, "", (double)VAR10->VAR30, (double)VAR10->VAR25->VAR35.VAR36 * VAR2->VAR32 / VAR2->VAR33);
    fprintf(VAR39, "", (double)VAR4->VAR30, (double)VAR4->VAR25->VAR35.VAR36 * VAR2->VAR32 / VAR2->VAR33, VAR38[VAR11]);
    if (VAR11 <= 0)
        return;
    if (!VAR19)
        VAR19 = FUN2(VAR40);
    if (!VAR19)
        return;
    if (VAR23->VAR41 != VAR24->VAR41)
    {
        int VAR42;
        VAR42 = FUN3(VAR23->VAR41, VAR24->VAR43, VAR24->VAR44);
        VAR20 = FUN2(VAR42);
        if (!VAR20)
            return;
        VAR15 = &VAR16;
        FUN4(VAR15, VAR20, VAR23->VAR41, VAR24->VAR43, VAR24->VAR44);
        if (FUN5(VAR15, VAR23->VAR41, VAR8, VAR24->VAR41, VAR24->VAR43, VAR24->VAR44) < 0)
        {
            fprintf(VAR39, "");
            goto VAR45;
        }
    }
    else
    {
        VAR15 = VAR8;
    }
    if (VAR4->VAR46)
    {
        VAR14 = &VAR4->VAR47;
        FUN6(VAR4->VAR48, VAR14, VAR15);
    }
    else if (VAR4->VAR49)
    {
        VAR17.VAR50[0] = VAR15->VAR50[0] + (VAR4->VAR51 * VAR15->VAR52[0]) + VAR4->VAR53;
        VAR17.VAR50[1] = VAR15->VAR50[1] + ((VAR4->VAR51 >> 1) * VAR15->VAR52[1]) + (VAR4->VAR53 >> 1);
        VAR17.VAR50[2] = VAR15->VAR50[2] + ((VAR4->VAR51 >> 1) * VAR15->VAR52[2]) + (VAR4->VAR53 >> 1);
        VAR17.VAR52[0] = VAR15->VAR52[0];
        VAR17.VAR52[1] = VAR15->VAR52[1];
        VAR17.VAR52[2] = VAR15->VAR52[2];
        VAR14 = &VAR17;
    }
    else
    {
        VAR14 = VAR15;
    }
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        if (VAR2->VAR54->VAR55 & VAR56)
        {
            FUN7(VAR2, VAR4->VAR57, (VAR18 *)VAR14, sizeof(VAR7));
        }
        else
        {
            AVFrame VAR58;
            memset(&VAR58, 0, sizeof(VAR59));
            *(VAR7 *)&VAR58 = *VAR14;
            if (VAR60)
            {
                VAR58.VAR61 = VAR6->VAR25->VAR61;
            }
            else
                VAR58.VAR61 = VAR4->VAR25->VAR61;
            VAR13 = FUN8(VAR23, VAR19, VAR40, &VAR58);
            FUN7(VAR2, VAR4->VAR57, VAR19, VAR13);
            *VAR9 = VAR13;
            if (VAR4->VAR62 && VAR23->VAR63)
            {
                fprintf(VAR4->VAR62, "", VAR23->VAR63);
            }
        }
        VAR4->VAR64++;
    }
VAR45:
    FUN9(VAR20);
    FUN9(VAR21);
}