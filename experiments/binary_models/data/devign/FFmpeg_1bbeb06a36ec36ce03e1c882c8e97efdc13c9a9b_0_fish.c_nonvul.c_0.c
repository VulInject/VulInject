int FUN1(void **VAR1, int argc, char *argv[])
{
    VAR2 *VAR3;
    int VAR4;
    *VAR1 = FUN2(sizeof(VAR2));
    VAR3 = (VAR2 *)*VAR1;
    VAR5 = 1;
    VAR3->VAR6 = FUN3("");
    VAR3->VAR7 = 100;
    VAR3->VAR8 = 100;
    VAR3->VAR9 = 1000000;
    VAR3->VAR10 = 10;
    while ((VAR4 = getopt(argc, argv, "")) > 0)
    {
        switch (VAR4)
        {
        case '':
            FUN4(VAR11, &VAR3->VAR12.VAR13, &VAR3->VAR14.VAR13, 360);
            break;
        case '':
            FUN4(VAR11, &VAR3->VAR12.VAR15, &VAR3->VAR14.VAR15, 255);
            break;
        case '':
            FUN4(VAR11, &VAR3->VAR12.VAR16, &VAR3->VAR14.VAR16, 255);
            break;
        case '':
            VAR3->VAR17 = 1;
            break;
        case '':
            VAR3->VAR8 = FUN5(VAR11);
            break;
        case '':
            VAR3->VAR9 = 1000000 * FUN6(VAR11);
            break;
        case '':
            VAR3->VAR7 = FUN6(VAR11) * 1000;
            if (VAR3->VAR7 > 1000 || VAR3->VAR7 < 0)
            {
                FUN7(NULL, VAR18, "", VAR11);
                return -1;
            }
            break;
        case '':
            VAR3->VAR19 = FUN5(VAR11);
            break;
        case '':
            VAR3->VAR20++;
            break;
        case '':
            VAR3->VAR6 = FUN3(VAR11);
            break;
        default:
            FUN7(NULL, VAR18, "", argv[VAR5]);
            return -1;
        }
    }
    FUN7(NULL, VAR21, "");
    FUN7(NULL, VAR21, "", VAR3->VAR12.VAR13, VAR3->VAR12.VAR15, VAR3->VAR12.VAR16, VAR3->VAR14.VAR13, VAR3->VAR14.VAR15, VAR3->VAR14.VAR16);
    FUN7(NULL, VAR21, "", VAR3->VAR7 / 10);
    return 0;
}