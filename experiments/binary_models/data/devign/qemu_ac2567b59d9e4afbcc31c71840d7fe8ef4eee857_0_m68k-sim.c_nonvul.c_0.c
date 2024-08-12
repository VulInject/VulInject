void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    VAR5 = (VAR4 *)(VAR2->VAR6[7] + 4);
    switch (VAR3)
    {
    case VAR7:
        FUN2(FUN3(0));
    case VAR8:
        FUN4(VAR2, read(FUN3(0), (void *)FUN3(1), FUN3(2)));
        break;
    case VAR9:
        FUN4(VAR2, write(FUN3(0), (void *)FUN3(1), FUN3(2)));
        break;
    case VAR10:
        FUN4(VAR2, open((char *)FUN3(0), FUN5(FUN3(1)), FUN3(2)));
        break;
    case VAR11:
    {
        int VAR12 = FUN3(0);
        if (VAR12 > 2)
            FUN4(VAR2, close(VAR12));
        else
            FUN4(VAR2, 0);
        break;
    }
    case VAR13:
    {
        int32_t VAR14;
        VAR14 = FUN6((VAR15)FUN3(0));
        if (VAR14 == -VAR16)
            VAR14 = -1;
        FUN4(VAR2, VAR14);
    }
    break;
    case VAR17:
    {
        struct stat VAR18;
        int VAR19;
        struct VAR20 *VAR21;
        VAR19 = FUN4(VAR2, FUN7(FUN3(0), &VAR18));
        if (VAR19 == 0)
        {
            VAR21 = (struct VAR20 *)FUN3(1);
            VAR21->VAR22 = FUN8(VAR18.VAR23);
            VAR21->VAR24 = FUN8(VAR18.VAR25);
            VAR21->VAR26 = FUN9(VAR18.VAR27);
            VAR21->VAR28 = FUN8(VAR18.VAR29);
            VAR21->VAR30 = FUN8(VAR18.VAR31);
            VAR21->VAR32 = FUN8(VAR18.VAR33);
            VAR21->VAR34 = FUN8(VAR18.VAR35);
            VAR21->VAR36 = FUN9(VAR18.VAR37);
            VAR21->VAR38 = FUN9(VAR18.VAR39);
            VAR21->VAR40 = FUN9(VAR18.VAR41);
            VAR21->VAR42 = FUN9(VAR18.VAR43);
            VAR21->VAR44 = FUN9(VAR18.VAR45);
            VAR21->VAR46 = FUN9(VAR18.VAR47);
        }
    }
    break;
    case VAR48:
        FUN4(VAR2, FUN10(FUN3(0)));
        break;
    case VAR49:
        FUN4(VAR2, FUN11(FUN3(0), (VAR50)FUN3(1), FUN3(2)));
        break;
    default:
        FUN12(VAR2, "", VAR3);
    }
}