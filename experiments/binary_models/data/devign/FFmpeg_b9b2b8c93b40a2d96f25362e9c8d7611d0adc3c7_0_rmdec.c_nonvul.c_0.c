static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    char VAR11[256];
    uint32_t VAR12;
    VAR12 = FUN2(VAR4);
    if (((VAR12 >> 16) & 0xff) == 3)
    {
        int64_t VAR13 = FUN3(VAR4);
        FUN4(VAR4, 14);
        FUN5(VAR4, VAR2->VAR14, sizeof(VAR2->VAR14));
        FUN5(VAR4, VAR2->VAR15, sizeof(VAR2->VAR15));
        FUN5(VAR4, VAR2->VAR16, sizeof(VAR2->VAR16));
        FUN5(VAR4, VAR2->VAR17, sizeof(VAR2->VAR17));
        if ((VAR13 + (VAR12 & 0xffff)) >= FUN3(VAR4) + 2)
        {
            FUN6(VAR4);
            FUN5(VAR4, VAR11, sizeof(VAR11));
        }
        if ((VAR13 + (VAR12 & 0xffff)) > FUN3(VAR4))
            FUN4(VAR4, (VAR12 & 0xffff) + VAR13 - FUN3(VAR4));
        VAR6->VAR18->VAR19 = 8000;
        VAR6->VAR18->VAR20 = 1;
        VAR6->VAR18->VAR21 = VAR22;
        VAR6->VAR18->VAR23 = VAR24;
    }
    else
    {
        int VAR25, VAR26, VAR27, VAR28;
        FUN2(VAR4);
        FUN2(VAR4);
        FUN7(VAR4);
        FUN2(VAR4);
        VAR25 = FUN7(VAR4);
        VAR9->VAR27 = VAR27 = FUN2(VAR4);
        FUN2(VAR4);
        FUN2(VAR4);
        FUN2(VAR4);
        VAR9->VAR26 = VAR26 = FUN7(VAR4);
        VAR6->VAR18->VAR29 = FUN7(VAR4);
        VAR9->VAR28 = VAR28 = FUN7(VAR4);
        FUN7(VAR4);
        if (((VAR12 >> 16) & 0xff) == 5)
        {
            FUN7(VAR4);
            FUN7(VAR4);
            FUN7(VAR4);
        }
        VAR6->VAR18->VAR19 = FUN7(VAR4);
        FUN2(VAR4);
        VAR6->VAR18->VAR20 = FUN7(VAR4);
        if (((VAR12 >> 16) & 0xff) == 5)
        {
            FUN2(VAR4);
            FUN8(VAR4, VAR11, 4);
            VAR11[4] = 0;
        }
        else
        {
            FUN5(VAR4, VAR11, sizeof(VAR11));
            FUN5(VAR4, VAR11, sizeof(VAR11));
        }
        VAR6->VAR18->VAR21 = VAR22;
        if (!strcmp(VAR11, ""))
        {
            VAR6->VAR18->VAR23 = VAR30;
            VAR6->VAR31 = VAR32;
        }
        else if (!strcmp(VAR11, ""))
        {
            VAR6->VAR18->VAR23 = VAR33;
            VAR6->VAR18->VAR34 = 0;
            VAR9->VAR35 = VAR6->VAR18->VAR29;
            VAR6->VAR18->VAR29 = VAR27;
            if (VAR9->VAR35 >= VAR36 / VAR26)
            {
                FUN9(VAR2, VAR37, "");
                return -1;
            }
            VAR9->VAR38 = FUN10(VAR9->VAR35 * VAR26);
        }
        else if ((!strcmp(VAR11, "")) || (!strcmp(VAR11, "")) || (!strcmp(VAR11, "")))
        {
            int VAR39;
            FUN7(VAR4);
            FUN6(VAR4);
            if (((VAR12 >> 16) & 0xff) == 5)
                FUN6(VAR4);
            VAR39 = FUN2(VAR4);
            if (VAR39 + VAR40 <= (unsigned)VAR39)
            {
                FUN9(VAR2, VAR37, "");
                return -1;
            }
            if (VAR28 <= 0)
            {
                FUN9(VAR2, VAR37, "");
                return -1;
            }
            if (!strcmp(VAR11, ""))
                VAR6->VAR18->VAR23 = VAR41;
            else if (!strcmp(VAR11, ""))
                VAR6->VAR18->VAR23 = VAR42;
            else
                VAR6->VAR18->VAR23 = VAR43;
            VAR6->VAR18->VAR34 = VAR39;
            VAR6->VAR18->VAR44 = FUN11(VAR6->VAR18->VAR34 + VAR40);
            FUN8(VAR4, VAR6->VAR18->VAR44, VAR6->VAR18->VAR34);
            VAR9->VAR35 = VAR6->VAR18->VAR29;
            VAR6->VAR18->VAR29 = VAR9->VAR28;
            if (VAR9->VAR35 >= VAR36 / VAR26)
            {
                FUN9(VAR2, VAR37, "");
                return -1;
            }
            VAR9->VAR38 = FUN10(VAR9->VAR35 * VAR26);
        }
        else if (!strcmp(VAR11, "") || !strcmp(VAR11, ""))
        {
            int VAR39;
            FUN7(VAR4);
            FUN6(VAR4);
            if (((VAR12 >> 16) & 0xff) == 5)
                FUN6(VAR4);
            VAR6->VAR18->VAR23 = VAR45;
            VAR39 = FUN2(VAR4);
            if (VAR39 + VAR40 <= (unsigned)VAR39)
            {
                FUN9(VAR2, VAR37, "");
                return -1;
            }
            if (VAR39 >= 1)
            {
                VAR6->VAR18->VAR34 = VAR39 - 1;
                VAR6->VAR18->VAR44 = FUN11(VAR6->VAR18->VAR34 + VAR40);
                FUN6(VAR4);
                FUN8(VAR4, VAR6->VAR18->VAR44, VAR6->VAR18->VAR34);
            }
        }
        else
        {
            VAR6->VAR18->VAR23 = VAR46;
            FUN12(VAR6->VAR18->VAR47, VAR11, sizeof(VAR6->VAR18->VAR47));
        }
        if (VAR7)
        {
            FUN6(VAR4);
            FUN6(VAR4);
            FUN6(VAR4);
            FUN5(VAR4, VAR2->VAR14, sizeof(VAR2->VAR14));
            FUN5(VAR4, VAR2->VAR15, sizeof(VAR2->VAR15));
            FUN5(VAR4, VAR2->VAR16, sizeof(VAR2->VAR16));
            FUN5(VAR4, VAR2->VAR17, sizeof(VAR2->VAR17));
        }
    }
    return 0;
}