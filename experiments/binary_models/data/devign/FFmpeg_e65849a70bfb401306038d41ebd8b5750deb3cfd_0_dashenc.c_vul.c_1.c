static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8 = 0, VAR9 = 1;
    if (VAR6->VAR10)
    {
        VAR8 = FUN2(VAR2->VAR11 - VAR6->VAR10, 0);
        VAR9 = FUN2(VAR2->VAR12 - VAR6->VAR10, 1);
    }
    if (VAR6->VAR13)
    {
        int VAR14 = VAR6->VAR15 ? VAR2->VAR16->VAR17[0]->VAR18.VAR19 : VAR20;
        FUN3(VAR4, ""%VAR21\"", VAR14);
        if (!VAR6->VAR15)
            FUN3(VAR4, ""%VAR21\"", VAR6->VAR22);
        FUN3(VAR4, ""%VAR23\""%VAR23\""%VAR21\"", VAR6->VAR24, VAR6->VAR25, VAR6->VAR15 ? VAR9 : 1);
        if (VAR6->VAR15)
        {
            FUN3(VAR4, "");
            for (VAR7 = VAR8; VAR7 < VAR2->VAR11;)
            {
                VAR26 *VAR27 = VAR2->VAR28[VAR7];
                int VAR29 = 0;
                FUN3(VAR4, "");
                if (VAR7 == VAR8)
                    FUN3(VAR4, ""%""\"", VAR27->VAR30);
                FUN3(VAR4, ""%VAR21\"", VAR27->VAR31);
                while (VAR7 + VAR29 + 1 < VAR2->VAR11 && VAR2->VAR28[VAR7 + VAR29 + 1]->VAR31 == VAR27->VAR31)
                    VAR29++;
                if (VAR29 > 0)
                    FUN3(VAR4, ""%VAR21\"", VAR29);
                FUN3(VAR4, "");
                VAR7 += 1 + VAR29;
            }
            FUN3(VAR4, "");
        }
        FUN3(VAR4, "");
    }
    else if (VAR6->VAR32)
    {
        FUN3(VAR4, "", VAR2->VAR33);
        FUN3(VAR4, ""%VAR21\""%VAR21\""%VAR21\"", VAR20, VAR6->VAR22, VAR9);
        FUN3(VAR4, ""%""-%""\"", VAR2->VAR34, VAR2->VAR34 + VAR2->VAR35 - 1);
        for (VAR7 = VAR8; VAR7 < VAR2->VAR11; VAR7++)
        {
            VAR26 *VAR27 = VAR2->VAR28[VAR7];
            FUN3(VAR4, ""%""-%""\"", VAR27->VAR36, VAR27->VAR36 + VAR27->VAR37 - 1);
            if (VAR27->VAR38)
                FUN3(VAR4, ""%""-%""\"", VAR27->VAR36, VAR27->VAR36 + VAR27->VAR38 - 1);
            FUN3(VAR4, "");
        }
        FUN3(VAR4, "");
    }
    else
    {
        FUN3(VAR4, ""%VAR21\""%VAR21\""%VAR21\"", VAR20, VAR6->VAR22, VAR9);
        FUN3(VAR4, ""%VAR23\"", VAR2->VAR33);
        for (VAR7 = VAR8; VAR7 < VAR2->VAR11; VAR7++)
        {
            VAR26 *VAR27 = VAR2->VAR28[VAR7];
            FUN3(VAR4, ""%VAR23\"", VAR27->VAR39);
        }
        FUN3(VAR4, "");
    }
}