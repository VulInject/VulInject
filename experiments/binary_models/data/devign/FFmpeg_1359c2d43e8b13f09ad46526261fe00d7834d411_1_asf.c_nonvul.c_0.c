static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = 0;
    VAR10 *VAR11 = &VAR2->VAR11;
    for (;;)
    {
        int VAR12 = 0;
        if (VAR6->VAR13 < VAR14 || VAR6->VAR15 < 1)
        {
            int VAR16 = VAR6->VAR13 + VAR6->VAR17;
            FUN2(VAR11, VAR16);
            VAR16 = FUN3(VAR2);
            if (VAR16 < 0)
                return -VAR18;
            VAR6->VAR19 = 0;
            continue;
        }
        if (VAR6->VAR19 == 0)
        {
            int VAR20 = FUN4(VAR11);
            VAR6->VAR15--;
            VAR12++;
            VAR6->VAR21 = (VAR20 & 0x80) >> 7;
            VAR6->VAR22 = VAR6->VAR23[VAR20 & 0x7f];
            FUN5(VAR6->VAR24 >> 4, VAR6->VAR25, 0);
            FUN5(VAR6->VAR24 >> 2, VAR6->VAR26, 0);
            FUN5(VAR6->VAR24, VAR6->VAR27, 0);
            if (VAR6->VAR27 > 1)
            {
                VAR6->VAR28 = FUN6(VAR11);
                VAR6->VAR29 = FUN6(VAR11);
                VAR12 += VAR6->VAR27;
            }
            else
            {
                VAR6->VAR19 = VAR6->VAR26;
                VAR6->VAR26 = 0;
                VAR6->VAR29 = VAR6->VAR30;
                if (VAR6->VAR27 == 1)
                {
                    VAR6->VAR31 = FUN4(VAR11);
                    VAR12++;
                }
            }
            if (VAR6->VAR32 & 0x01)
            {
                FUN5(VAR6->VAR33 >> 6, VAR6->VAR34, 0);
            }
            else
            {
                VAR6->VAR34 = VAR6->VAR13 - VAR12;
            }
            if (VAR6->VAR27 == 1)
            {
                VAR6->VAR35 = VAR6->VAR34;
                if (VAR6->VAR35 > VAR6->VAR13)
                {
                    VAR6->VAR15 = 0;
                    continue;
                }
            }
            VAR6->VAR13 -= VAR12;
            if (VAR6->VAR22 < 0)
            {
                VAR6->VAR19 = 0;
                FUN2(VAR11, VAR6->VAR34);
                VAR6->VAR13 -= VAR6->VAR34;
                FUN7("", VAR6->VAR34, VAR20 & 0x7f);
                continue;
            }
            VAR6->VAR9 = VAR2->VAR36[VAR6->VAR22]->VAR7;
        }
        VAR9 = VAR6->VAR9;
        if ((VAR6->VAR26 != VAR9->VAR37 || (VAR6->VAR26 && VAR6->VAR25 != VAR9->VAR38)))
        {
            FUN7("", VAR9->VAR4.VAR39, VAR6->VAR28, VAR6->VAR26, VAR9->VAR37, VAR6->VAR25, VAR9->VAR38, VAR6->VAR34);
            if (VAR9->VAR4.VAR39)
                FUN8(&VAR9->VAR4);
            VAR9->VAR37 = 0;
            if (VAR6->VAR26 != 0)
            {
                FUN2(VAR11, VAR6->VAR34);
                FUN7("", VAR6->VAR34);
                VAR6->VAR13 -= VAR6->VAR34;
                continue;
            }
        }
        if (VAR6->VAR27 == 1)
        {
            VAR6->VAR29 = VAR6->VAR19;
            VAR6->VAR19 += VAR6->VAR31;
            VAR6->VAR28 = VAR6->VAR34 = FUN4(VAR11);
            VAR6->VAR13--;
            VAR6->VAR35--;
            if (VAR6->VAR35 < VAR6->VAR28)
            {
                VAR6->VAR19 = 0;
                FUN2(VAR11, VAR6->VAR35);
                VAR6->VAR13 -= VAR6->VAR35;
                continue;
            }
            VAR6->VAR35 -= VAR6->VAR28;
        }
        if (VAR9->VAR37 == 0)
        {
            FUN9(&VAR9->VAR4, VAR6->VAR28);
            VAR9->VAR38 = VAR6->VAR25;
            VAR9->VAR4.VAR40 = VAR6->VAR29 - VAR6->VAR41.VAR42;
            VAR9->VAR4.VAR40 *= 1000;
            VAR9->VAR4.VAR22 = VAR6->VAR22;
            if (VAR6->VAR21)
                VAR9->VAR4.VAR43 |= VAR44;
        }
        VAR6->VAR13 -= VAR6->VAR34;
        if (VAR6->VAR13 < 0)
            continue;
        FUN10(VAR11, VAR9->VAR4.VAR45 + VAR6->VAR26, VAR6->VAR34);
        VAR9->VAR37 += VAR6->VAR34;
        if (VAR9->VAR37 == VAR9->VAR4.VAR39)
        {
            if (VAR9->VAR46 > 1)
            {
                char *VAR47 = FUN11(VAR9->VAR4.VAR39);
                if (VAR47)
                {
                    int VAR48 = 0;
                    while (VAR48 < VAR9->VAR4.VAR39)
                    {
                        int VAR49 = VAR48 / VAR9->VAR50;
                        int VAR51 = VAR49 / VAR9->VAR46;
                        int VAR52 = VAR49 % VAR9->VAR46;
                        int VAR53 = VAR51 + VAR52 * VAR9->VAR54 / VAR9->VAR50;
                        memcpy(VAR47 + VAR48, VAR9->VAR4.VAR45 + VAR53 * VAR9->VAR50, VAR9->VAR50);
                        VAR48 += VAR9->VAR50;
                    }
                    FUN12(VAR9->VAR4.VAR45);
                    VAR9->VAR4.VAR45 = VAR47;
                }
            }
            VAR9->VAR37 = 0;
            memcpy(VAR4, &VAR9->VAR4, sizeof(VAR3));
            VAR9->VAR4.VAR39 = 0;
            VAR9->VAR4.VAR45 = 0;
            break;
        }
    }
    return 0;
}
static int FUN13(VAR1 *VAR2)
{
    int VAR55;
    for (VAR55 = 0; VAR55 < VAR2->VAR56; VAR55++)
    {
        VAR57 *VAR58 = VAR2->VAR36[VAR55];
        FUN12(VAR58->VAR7);
        FUN12(VAR58->VAR59);
    }
    return 0;
}
static int FUN14(VAR1 *VAR2, int64_t VAR40)
{
    FUN7("", VAR40);
    return -1;
}
AVInputFormat VAR60 = {
    "",
    "",
    sizeof(VAR5),
    VAR61,
    VAR62,
    VAR63,
    VAR64,
    VAR65,
};
AVOutputFormat VAR66 = {
    "",
    "",
    "",
    "",
    sizeof(VAR5),
    VAR67,
    VAR68,
    VAR69,
    VAR70,
    VAR71,
    VAR72,
};
AVOutputFormat VAR73 = {
    "",
    "",
    "",
    "",
    sizeof(VAR5),
    VAR67,
    VAR68,
    VAR69,
    VAR74,
    VAR71,
    VAR72,
};
int FUN15(void)
{
    FUN16(&VAR60);
    FUN17(&VAR66);
    FUN17(&VAR73);
    return 0;
}