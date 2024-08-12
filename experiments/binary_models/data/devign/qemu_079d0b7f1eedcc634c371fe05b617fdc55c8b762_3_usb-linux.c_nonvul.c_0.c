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
            if (VAR12 == VAR15)
            {
                if (!VAR3->VAR16)
                {
                    FUN3(VAR3->VAR17, VAR3->VAR18);
                    FUN4(VAR3);
                }
                return;
            }
            FUN5("");
            return;
        }
        FUN6("", VAR5, VAR5->VAR19.VAR20, VAR5->VAR19.VAR21);
        if (VAR5->VAR22 == -1)
        {
            int VAR23;
            int VAR24 = (VAR5->VAR19.VAR25 & VAR26) ? VAR27 : VAR28;
            int VAR29 = VAR5->VAR19.VAR25 & 0xf;
            if (VAR5->VAR19.VAR20 == -VAR30)
            {
                FUN7(VAR3, VAR24, VAR29);
            }
            VAR5->VAR22 = 0;
            VAR6++;
            VAR23 = FUN8(VAR3, VAR24, VAR29, -1);
            if (VAR23 == 0 && FUN9(VAR3, VAR24, VAR29))
            {
                fprintf(VAR14, "");
            }
            continue;
        }
        VAR8 = VAR5->VAR31;
        FUN10(VAR3->VAR17, VAR3->VAR18, VAR5, VAR5->VAR19.VAR20, VAR5->VAR19.VAR21, VAR5->VAR32);
        if (VAR8)
        {
            switch (VAR5->VAR19.VAR20)
            {
            case 0:
                VAR8->VAR33 += VAR5->VAR19.VAR21;
                break;
            case -VAR30:
                FUN7(VAR3, VAR8->VAR24, VAR8->VAR29->VAR34);
                VAR8->VAR33 = VAR35;
                break;
            default:
                VAR8->VAR33 = VAR36;
                break;
            }
            if (VAR5->VAR19.VAR37 == VAR38)
            {
                FUN11(VAR3->VAR17, VAR3->VAR18, VAR8->VAR33);
                FUN12(&VAR3->VAR39, VAR8);
            }
            else if (!VAR5->VAR32)
            {
                FUN11(VAR3->VAR17, VAR3->VAR18, VAR8->VAR33);
                FUN13(&VAR3->VAR39, VAR8);
            }
        }
        FUN14(VAR5);
    }
}