static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = NULL;
    int VAR6;
    do
    {
        switch (FUN2(VAR2, VAR3))
        {
        case VAR7:
            VAR6 = FUN3(VAR2, VAR3);
            break;
        case VAR8:
            VAR6 = FUN4(VAR2, VAR3);
            break;
        case VAR9:
            VAR5 = FUN5(VAR2, VAR3);
            VAR6 = VAR5 ? 1 : 0;
            break;
        case VAR10:
            VAR6 = FUN6(VAR2, VAR3);
            break;
        case VAR11:
            VAR6 = FUN7(VAR2, VAR3);
            break;
        case VAR12:
            VAR6 = FUN8(VAR5, VAR3);
            break;
        case VAR13:
            VAR6 = FUN9(VAR5, VAR3);
            break;
        case VAR14:
            VAR6 = FUN10(VAR5, VAR3);
            break;
        case VAR15:
            VAR6 = FUN11(VAR5, VAR3);
            break;
        case VAR16:
            assert(VAR5 != NULL);
            VAR6 = FUN12(VAR5, VAR3);
            break;
        case VAR17:
            assert(VAR5 != NULL);
            VAR6 = FUN13(VAR5, VAR3);
            break;
        default:
            fprintf(VAR18, "");
            VAR6 = -1;
            assert(0);
            break;
        }
        if (VAR6 < 0)
        {
            fprintf(VAR18, "");
            FUN14(VAR2);
            VAR6 = 0;
        }
    } while (VAR6);
    FUN15(VAR2);
}