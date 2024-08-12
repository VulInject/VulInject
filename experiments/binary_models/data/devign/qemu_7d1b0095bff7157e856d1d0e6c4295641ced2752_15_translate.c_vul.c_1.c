static void FUN1(int VAR1, int VAR2)
{
    TCGv VAR3;
    TCGv VAR4;
    int VAR5;
    switch (VAR1)
    {
    case 0:
        VAR3 = FUN2(VAR6);
        FUN3(VAR7, VAR3, 0, VAR2);
        break;
    case 1:
        VAR3 = FUN2(VAR6);
        FUN3(VAR8, VAR3, 0, VAR2);
        break;
    case 2:
        VAR3 = FUN2(VAR9);
        FUN3(VAR8, VAR3, 0, VAR2);
        break;
    case 3:
        VAR3 = FUN2(VAR9);
        FUN3(VAR7, VAR3, 0, VAR2);
        break;
    case 4:
        VAR3 = FUN2(VAR10);
        FUN3(VAR11, VAR3, 0, VAR2);
        break;
    case 5:
        VAR3 = FUN2(VAR10);
        FUN3(VAR12, VAR3, 0, VAR2);
        break;
    case 6:
        VAR3 = FUN2(VAR13);
        FUN3(VAR11, VAR3, 0, VAR2);
        break;
    case 7:
        VAR3 = FUN2(VAR13);
        FUN3(VAR12, VAR3, 0, VAR2);
        break;
    case 8:
        VAR5 = FUN4();
        VAR3 = FUN2(VAR9);
        FUN3(VAR7, VAR3, 0, VAR5);
        FUN5(VAR3);
        VAR3 = FUN2(VAR6);
        FUN3(VAR8, VAR3, 0, VAR2);
        FUN6(VAR5);
        break;
    case 9:
        VAR3 = FUN2(VAR9);
        FUN3(VAR7, VAR3, 0, VAR2);
        FUN5(VAR3);
        VAR3 = FUN2(VAR6);
        FUN3(VAR7, VAR3, 0, VAR2);
        break;
    case 10:
        VAR3 = FUN2(VAR13);
        VAR4 = FUN2(VAR10);
        FUN7(VAR3, VAR3, VAR4);
        FUN5(VAR4);
        FUN3(VAR12, VAR3, 0, VAR2);
        break;
    case 11:
        VAR3 = FUN2(VAR13);
        VAR4 = FUN2(VAR10);
        FUN7(VAR3, VAR3, VAR4);
        FUN5(VAR4);
        FUN3(VAR11, VAR3, 0, VAR2);
        break;
    case 12:
        VAR5 = FUN4();
        VAR3 = FUN2(VAR6);
        FUN3(VAR7, VAR3, 0, VAR5);
        FUN5(VAR3);
        VAR3 = FUN2(VAR13);
        VAR4 = FUN2(VAR10);
        FUN7(VAR3, VAR3, VAR4);
        FUN5(VAR4);
        FUN3(VAR12, VAR3, 0, VAR2);
        FUN6(VAR5);
        break;
    case 13:
        VAR3 = FUN2(VAR6);
        FUN3(VAR7, VAR3, 0, VAR2);
        FUN5(VAR3);
        VAR3 = FUN2(VAR13);
        VAR4 = FUN2(VAR10);
        FUN7(VAR3, VAR3, VAR4);
        FUN5(VAR4);
        FUN3(VAR11, VAR3, 0, VAR2);
        break;
    default:
        fprintf(VAR14, "", VAR1);
        FUN8();
    }
    FUN5(VAR3);
}