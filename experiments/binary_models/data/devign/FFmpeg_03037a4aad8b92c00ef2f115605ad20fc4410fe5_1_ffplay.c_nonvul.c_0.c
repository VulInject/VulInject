static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    int VAR6;
    double VAR7;
    int VAR8;
    for (;;)
    {
        if (!(VAR5 = FUN2(&VAR3->VAR9)))
            return 0;
        if ((VAR6 = FUN3(&VAR3->VAR10, NULL, &VAR5->VAR11)) < 0)
            break;
        VAR7 = 0;
        if (VAR6 && VAR5->VAR11.VAR12 == 0)
        {
            if (VAR5->VAR11.VAR7 != VAR13)
                VAR7 = VAR5->VAR11.VAR7 / (double)VAR14;
            VAR5->VAR7 = VAR7;
            VAR5->VAR15 = VAR3->VAR10.VAR16;
            if (!(VAR5->VAR17 = FUN4(VAR5->VAR11.VAR18, sizeof(VAR19 *))))
            {
                FUN5(NULL, VAR20, "");
                FUN6(1);
            }
            for (VAR8 = 0; VAR8 < VAR5->VAR11.VAR18; VAR8++)
            {
                int VAR21 = VAR5->VAR11.VAR22[VAR8]->VAR23;
                int VAR24 = VAR5->VAR11.VAR22[VAR8]->VAR25;
                int VAR26 = VAR3->VAR10.VAR27->VAR28 ? VAR3->VAR10.VAR27->VAR28 : VAR3->VAR29;
                int VAR30 = VAR3->VAR10.VAR27->VAR31 ? VAR3->VAR10.VAR27->VAR31 : VAR3->VAR32;
                int VAR33 = VAR3->VAR29 ? VAR21 * VAR3->VAR29 / VAR26 : VAR21;
                int VAR34 = VAR3->VAR32 ? VAR24 * VAR3->VAR32 / VAR30 : VAR24;
                if (!(VAR5->VAR17[VAR8] = FUN7(sizeof(VAR19))) || FUN8(VAR5->VAR17[VAR8]->VAR35, VAR5->VAR17[VAR8]->VAR36, VAR33, VAR34, VAR37, 16) < 0)
                {
                    FUN5(NULL, VAR20, "");
                    FUN6(1);
                }
                VAR3->VAR38 = FUN9(VAR3->VAR38, VAR21, VAR24, VAR39, VAR33, VAR34, VAR37, VAR40, NULL, NULL, NULL);
                if (!VAR3->VAR38)
                {
                    FUN5(NULL, VAR20, "");
                    FUN6(1);
                }
                FUN10(VAR3->VAR38, (void *)VAR5->VAR11.VAR22[VAR8]->VAR35, VAR5->VAR11.VAR22[VAR8]->VAR36, 0, VAR24, VAR5->VAR17[VAR8]->VAR35, VAR5->VAR17[VAR8]->VAR36);
                VAR5->VAR17[VAR8]->VAR23 = VAR33;
                VAR5->VAR17[VAR8]->VAR25 = VAR34;
                VAR5->VAR17[VAR8]->VAR41 = VAR5->VAR11.VAR22[VAR8]->VAR41 * VAR33 / VAR21;
                VAR5->VAR17[VAR8]->VAR42 = VAR5->VAR11.VAR22[VAR8]->VAR42 * VAR34 / VAR24;
            }
            FUN11(&VAR3->VAR9);
        }
        else if (VAR6)
        {
            FUN12(&VAR5->VAR11);
        }
    }
    return 0;
}