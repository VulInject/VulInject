static int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    unsigned char VAR6[VAR7];
    int VAR8, VAR9, VAR10;
    unsigned char VAR11[8];
    time_t VAR12 = FUN2(NULL);
    if (!VAR2->VAR13->VAR14)
    {
        FUN3("");
        goto VAR15;
    }
    if (VAR2->VAR13->VAR16 < VAR12)
    {
        FUN3("");
        goto VAR15;
    }
    memcpy(VAR6, VAR2->VAR17, VAR7);
    VAR10 = strlen(VAR2->VAR13->VAR14);
    for (VAR8 = 0; VAR8 < sizeof(VAR11); VAR8++)
        VAR11[VAR8] = VAR8 < VAR10 ? VAR2->VAR13->VAR14[VAR8] : 0;
    FUN4(VAR11, VAR18);
    for (VAR9 = 0; VAR9 < VAR7; VAR9 += 8)
        FUN5(VAR6 + VAR9, VAR6 + VAR9);
    if (memcmp(VAR6, VAR4, VAR7) != 0)
    {
        FUN3("");
        goto VAR15;
    }
    else
    {
        FUN3("");
        FUN6(VAR2, 0);
        FUN7(VAR2);
        FUN8(VAR2);
    }
    return 0;
VAR15:
    FUN6(VAR2, 1);
    if (VAR2->VAR19 >= 8)
    {
        static const char VAR20[] = "";
        FUN6(VAR2, sizeof(VAR20));
        FUN9(VAR2, VAR20, sizeof(VAR20));
    }
    FUN7(VAR2);
    FUN10(VAR2);
    return 0;
}