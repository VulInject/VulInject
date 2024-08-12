static unsigned int FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, 0);
    if (VAR2->VAR3 == 15)
        return 2;
    switch (VAR2->VAR3 & 7)
    {
    case 2:
        FUN3(fprintf(VAR4, ""));
        FUN4(VAR2);
        FUN5();
        VAR2->VAR5 = VAR6;
        break;
    case 5:
        FUN3(fprintf(VAR4, ""));
        FUN4(VAR2);
        FUN6();
        VAR2->VAR5 = VAR6;
        break;
    case 6:
        FUN3(fprintf(VAR4, "", VAR2->VAR7));
        FUN4(VAR2);
        FUN7(VAR8, VAR2->VAR9 + 2);
        FUN8(VAR10, FUN9(VAR2->VAR7 + 16));
        FUN10(VAR11);
        VAR2->VAR5 = VAR6;
        break;
    default:
        FUN11("", VAR2->VAR3);
        FUN12();
        break;
    }
    return 2;
}