static int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    unsigned char VAR6[VAR7];
    size_t VAR8, VAR9;
    unsigned char VAR10[8];
    time_t VAR11 = FUN2(NULL);
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15 = NULL;
    if (!VAR2->VAR16->VAR17)
    {
        FUN3("");
        goto VAR18;
    }
    if (VAR2->VAR16->VAR19 < VAR11)
    {
        FUN3("");
        goto VAR18;
    }
    memcpy(VAR6, VAR2->VAR20, VAR7);
    VAR9 = strlen(VAR2->VAR16->VAR17);
    for (VAR8 = 0; VAR8 < sizeof(VAR10); VAR8++)
        VAR10[VAR8] = VAR8 < VAR9 ? VAR2->VAR16->VAR17[VAR8] : 0;
    VAR13 = FUN4(VAR21, VAR22, VAR10, FUN5(VAR10), &VAR15);
    if (!VAR13)
    {
        FUN3("", FUN6(VAR15));
        FUN7(VAR15);
        goto VAR18;
    }
    if (FUN8(VAR13, VAR2->VAR20, VAR6, VAR7, &VAR15) < 0)
    {
        FUN3("", FUN6(VAR15));
        FUN7(VAR15);
        goto VAR18;
    }
    if (memcmp(VAR6, VAR4, VAR7) != 0)
    {
        FUN3("");
        goto VAR18;
    }
    else
    {
        FUN3("");
        FUN9(VAR2, 0);
        FUN10(VAR2);
        FUN11(VAR2);
    }
    FUN12(VAR13);
    return 0;
VAR18:
    FUN9(VAR2, 1);
    if (VAR2->VAR23 >= 8)
    {
        static const char VAR15[] = "";
        FUN9(VAR2, sizeof(VAR15));
        FUN13(VAR2, VAR15, sizeof(VAR15));
    }
    FUN10(VAR2);
    FUN14(VAR2);
    FUN12(VAR13);
    return 0;
}