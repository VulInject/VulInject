static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    int VAR6 = 0;
    while (1)
    {
        VAR7 *VAR8;
        int VAR9 = FUN2(VAR3->VAR10, VAR11, &VAR5);
        if (VAR9 < 0)
        {
            if (VAR12 == VAR13)
            {
                if (VAR6 > 2)
                {
                    fprintf(VAR14, "", VAR6);
                }
                return;
            }
            if (VAR12 == VAR15 && !VAR3->VAR16)
            {
                FUN3(VAR3);
                return;
            }
            FUN4("", VAR12);
            return;
        }
        FUN4("", VAR5, VAR5->VAR17.VAR18, VAR5->VAR17.VAR19);
        if (VAR5->VAR20 == -1)
        {
            int VAR21;
            if (VAR5->VAR17.VAR18 == -VAR22)
            {
                FUN5(VAR3, VAR5->VAR17.VAR23 & 0xf);
            }
            VAR5->VAR20 = 0;
            VAR6++;
            VAR21 = FUN6(VAR3, VAR5->VAR17.VAR23 & 0xf, -1);
            if (VAR21 == 0 && FUN7(VAR3, VAR5->VAR17.VAR23 & 0xf))
            {
                fprintf(VAR14, "");
            }
            continue;
        }
        VAR8 = VAR5->VAR24;
        if (VAR8)
        {
            switch (VAR5->VAR17.VAR18)
            {
            case 0:
                VAR8->VAR25 += VAR5->VAR17.VAR19;
                break;
            case -VAR22:
                FUN5(VAR3, VAR8->VAR26);
                VAR8->VAR25 = VAR27;
                break;
            default:
                VAR8->VAR25 = VAR28;
                break;
            }
            if (VAR5->VAR17.VAR29 == VAR30)
            {
                FUN8(&VAR3->VAR31, VAR8);
            }
            else if (!VAR5->VAR32)
            {
                FUN9(&VAR3->VAR31, VAR8);
            }
        }
        FUN10(VAR5);
    }
}