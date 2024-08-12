static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    AVPacket VAR4, *VAR5 = &VAR4;
    int VAR6, VAR7, VAR8;
    VAR9 *VAR10 = FUN2();
    double VAR11;
    for (;;)
    {
        while (VAR3->VAR12 && !VAR3->VAR13.VAR14)
        {
            FUN3(10);
        }
        if (FUN4(&VAR3->VAR13, VAR5, 1) < 0)
            break;
        if (VAR5->VAR15 == VAR16.VAR15)
        {
            FUN5(VAR3->VAR17->VAR18);
            FUN6(VAR3->VAR19);
            for (VAR8 = 0; VAR8 < VAR20; VAR8++)
            {
                if (VAR3->VAR21[VAR8].VAR22)
                {
                    FUN7(VAR3->VAR21[VAR8].VAR22);
                    VAR3->VAR21[VAR8].VAR22 = 0;
                    FUN8(VAR3, 1);
                }
            }
            while (VAR3->VAR23 && !VAR3->VAR13.VAR14)
            {
                FUN9(VAR3->VAR24, VAR3->VAR19);
            }
            FUN10(VAR3->VAR19);
            VAR3->VAR25 = VAR3->VAR26 = VAR27;
            continue;
        }
        VAR3->VAR17->VAR18->VAR28 = VAR5->VAR11;
        VAR6 = FUN11(VAR3->VAR17->VAR18, VAR10, &VAR7, VAR5);
        if (VAR5->VAR29 != VAR30)
        {
            VAR3->VAR31 += VAR5->VAR29 <= VAR3->VAR25;
            VAR3->VAR25 = VAR5->VAR29;
        }
        if (VAR10->VAR28 != VAR30)
        {
            VAR3->VAR32 += VAR10->VAR28 <= VAR3->VAR26;
            VAR3->VAR26 = VAR10->VAR28;
        }
        if ((VAR33 == 1 || VAR33 && VAR3->VAR32 < VAR3->VAR31 || VAR5->VAR29 == VAR30) && VAR10->VAR28 != VAR30)
            VAR11 = VAR10->VAR28;
        else if (VAR5->VAR29 != VAR30)
            VAR11 = VAR5->VAR29;
        else
            VAR11 = 0;
        VAR11 *= FUN12(VAR3->VAR17->VAR34);
        if (VAR7)
        {
            if (FUN13(VAR3, VAR10, VAR11) < 0)
                goto VAR35;
        }
        FUN14(VAR5);
        if (VAR36)
            if (VAR37)
                FUN15(VAR37);
    }
VAR35:
    FUN16(VAR10);
    return 0;
}