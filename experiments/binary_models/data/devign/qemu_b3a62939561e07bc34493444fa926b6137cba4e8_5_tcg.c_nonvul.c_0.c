static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5;
    char VAR6[64];
    for (VAR5 = 0; VAR5 < VAR2->VAR7; VAR5++)
    {
        VAR4 = &VAR2->VAR8[VAR5];
        FUN2("", FUN3(VAR2, VAR6, sizeof(VAR6), VAR5));
        switch (VAR4->VAR9)
        {
        case VAR10:
            FUN2("", VAR11[VAR4->VAR12]);
            break;
        case VAR13:
            FUN2("", (int)VAR4->VAR14, VAR11[VAR4->VAR15->VAR12]);
            break;
        case VAR16:
            FUN2("" VAR17, VAR4->VAR18);
            break;
        case VAR19:
            FUN2("");
            break;
        default:
            FUN2("");
            break;
        }
        FUN2("");
    }
    for (VAR5 = 0; VAR5 < VAR20; VAR5++)
    {
        if (VAR2->VAR21[VAR5] >= 0)
        {
            FUN2("", VAR11[VAR5], FUN3(VAR2, VAR6, sizeof(VAR6), VAR2->VAR21[VAR5]));
        }
    }
}