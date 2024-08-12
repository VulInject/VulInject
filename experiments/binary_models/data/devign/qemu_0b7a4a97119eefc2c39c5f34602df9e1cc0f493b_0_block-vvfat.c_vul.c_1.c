static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = (VAR4 *)&(VAR2->VAR6[(VAR2->VAR7 - 1) * 0x200]);
    unsigned int VAR8;
    unsigned int VAR9;
    memset(&(VAR2->VAR6[0]), 0, 0x40 * 0x200);
    VAR2->VAR10 = 0xfc;
    VAR2->VAR11 = 0x10;
    VAR2->VAR12 = VAR2->VAR11 * 0x200;
    VAR2->VAR9 = malloc(VAR2->VAR12);
    FUN2(&(VAR2->VAR13), sizeof(VAR14));
    FUN2(&(VAR2->VAR15), sizeof(VAR16));
    FUN2(&(VAR2->VAR17), sizeof(VAR18));
    {
        VAR16 *VAR19 = FUN3(&(VAR2->VAR15));
        VAR19->VAR20 = 0x28;
        snprintf(VAR19->VAR21, 11, "");
    }
    if (FUN4(VAR2, VAR3, 0))
        return -1;
    VAR2->VAR22 = VAR2->VAR15.VAR23 / 0x10;
    VAR2->VAR24 = VAR2->VAR7 + VAR2->VAR10 * 2 + VAR2->VAR22;
    VAR2->VAR25 = (VAR2->VAR26 - VAR2->VAR24) / VAR2->VAR11;
    FUN5(VAR2);
    VAR9 = VAR2->VAR22 / VAR2->VAR11;
    assert(VAR2->VAR22 % VAR2->VAR11 == 0);
    if (VAR2->VAR27 > 0)
    {
        VAR14 *VAR13 = FUN6(&(VAR2->VAR13), VAR2->VAR27 - 1);
        VAR13->VAR28 = VAR9;
    }
    for (VAR8 = 1; VAR8 < VAR2->VAR13.VAR23; VAR8++)
    {
        VAR14 *VAR13 = FUN6(&(VAR2->VAR13), VAR8);
        VAR16 *VAR29 = FUN6(&(VAR2->VAR15), VAR13->VAR30);
        if (VAR13->VAR31 == VAR32)
        {
            int VAR8;
            fprintf(VAR33, "", VAR13->VAR34, (int)VAR13->VAR35, (int)VAR13->VAR28);
            assert(VAR13->VAR35 < VAR13->VAR28);
            for (VAR8 = VAR13->VAR35; VAR8 < VAR13->VAR28 - 1; VAR8++)
                FUN7(VAR2, VAR8, VAR8 + 1);
            FUN7(VAR2, VAR8, 0x7fffffff);
        }
        else
        {
            unsigned int VAR36 = VAR9 + VAR13->VAR28 / VAR2->VAR12;
            if (VAR36 >= VAR2->VAR25)
            {
                fprintf(VAR33, "", VAR2->VAR37);
                return -1;
            }
            VAR13->VAR35 = VAR9;
            VAR13->VAR31 = VAR38;
            VAR13->VAR39 = 0;
            VAR29->VAR40 = FUN8(VAR13->VAR28);
            if (VAR29->VAR40 == 0)
            {
                VAR29->VAR35 = 0;
                VAR13->VAR28 = VAR9;
                continue;
            }
            VAR29->VAR35 = FUN9(VAR9);
            VAR13->VAR28 = VAR36 + 1;
            for (; VAR9 < VAR36; VAR9++)
                FUN7(VAR2, VAR9, VAR9 + 1);
            FUN7(VAR2, VAR9, 0x7fffffff);
            VAR9++;
        }
    }
    VAR2->VAR41 = 0;
    VAR5->VAR42[0] = 0xeb;
    VAR5->VAR42[1] = 0x3e;
    VAR5->VAR42[2] = 0x90;
    memcpy(VAR5->VAR21, "", 8);
    VAR5->VAR43 = FUN9(0x200);
    VAR5->VAR11 = VAR2->VAR11;
    VAR5->VAR44 = FUN9(1);
    VAR5->VAR45 = 0x2;
    VAR5->VAR46 = FUN9(VAR2->VAR47 * 0x10);
    VAR5->VAR48 = 0;
    VAR5->VAR49 = (VAR2->VAR7 == 1 ? 0xf0 : 0xf8);
    VAR5->VAR10 = FUN9(VAR2->VAR10);
    VAR5->VAR50 = FUN9(0x3f);
    VAR5->VAR51 = FUN9(0x10);
    VAR5->VAR52 = FUN8(VAR2->VAR7 == 1 ? 0 : 0x3f);
    VAR5->VAR53 = FUN8(VAR2->VAR26);
    VAR5->VAR54.VAR55.VAR56 = 0x80;
    VAR5->VAR54.VAR55.VAR57 = 0;
    VAR5->VAR54.VAR55.VAR58 = 0x29;
    VAR5->VAR54.VAR55.VAR59 = FUN8(0xfabe1afd);
    memcpy(VAR5->VAR54.VAR55.VAR60, "", 11);
    memcpy(VAR5->VAR37, (VAR2->VAR37 == 12 ? "" : VAR2->VAR37 == 16 ? ""
                                                                                     : ""),
           8);
    VAR5->VAR61[0] = 0x55;
    VAR5->VAR61[1] = 0xaa;
    return 0;
}