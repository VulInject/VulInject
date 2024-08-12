static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = NULL;
    int VAR6;
    int VAR7 = 0;
    do
    {
        if (FUN2(VAR2, VAR3) == VAR8)
        {
            VAR7++;
            assert(VAR7 < VAR9);
            if (VAR7 > VAR9)
            {
                FUN3("");
                FUN4(VAR2, VAR3, VAR10);
                break;
            }
        }
        switch (FUN2(VAR2, VAR3))
        {
        case VAR11:
            VAR6 = FUN5(VAR2, VAR3);
            break;
        case VAR12:
            VAR6 = FUN6(VAR2, VAR3);
            break;
        case VAR8:
            VAR5 = FUN7(VAR2, VAR3);
            VAR6 = VAR5 ? 1 : 0;
            break;
        case VAR13:
            VAR6 = FUN8(VAR2, VAR3);
            break;
        case VAR14:
            VAR6 = FUN9(VAR2, VAR3);
            break;
        case VAR15:
            VAR6 = FUN10(VAR5, VAR3);
            break;
        case VAR16:
            VAR6 = FUN11(VAR5, VAR3);
            break;
        case VAR17:
            VAR6 = FUN12(VAR5, VAR3);
            break;
        case VAR18:
            VAR7 = 0;
            VAR6 = FUN13(VAR5, VAR3);
            break;
        case VAR19:
            assert(VAR5 != NULL);
            VAR6 = FUN14(VAR5, VAR3);
            break;
        case VAR20:
            assert(VAR5 != NULL);
            VAR6 = FUN15(VAR5, VAR3);
            break;
        default:
            fprintf(VAR21, "");
            VAR6 = -1;
            assert(0);
            break;
        }
        if (VAR6 < 0)
        {
            fprintf(VAR21, "");
            FUN16(VAR2);
            VAR6 = 0;
            assert(0);
        }
    } while (VAR6);
    FUN17(VAR2);
}