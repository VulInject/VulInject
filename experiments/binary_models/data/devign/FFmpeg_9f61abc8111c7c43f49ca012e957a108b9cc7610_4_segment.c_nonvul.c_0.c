static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7, VAR8 = 0;
    char VAR9[1024];
    if ((VAR8 = VAR2->FUN2(VAR2, &VAR5->VAR10, VAR5->VAR11, VAR12, NULL)) < 0)
        goto VAR13;
    FUN3(VAR5->VAR10, "");
    FUN3(VAR5->VAR10, "");
    FUN3(VAR5->VAR10, "", (int)VAR5->VAR14);
    FUN3(VAR5->VAR10, "", FUN4(0, VAR5->VAR15 - VAR5->VAR16));
    FUN5(VAR2, VAR17, "", FUN4(0, VAR5->VAR15 - VAR5->VAR16));
    for (VAR7 = FUN4(0, VAR5->VAR15 - VAR5->VAR16); VAR7 < VAR5->VAR15; VAR7++)
    {
        FUN3(VAR5->VAR10, "", (int)VAR5->VAR14);
        if (VAR5->VAR18)
        {
            FUN3(VAR5->VAR10, "", VAR5->VAR18);
        }
        VAR8 = FUN6(VAR9, sizeof(VAR9), VAR2->VAR19, VAR7);
        if (VAR8 < 0)
        {
            VAR8 = FUN7(VAR20);
            goto VAR13;
        }
        FUN3(VAR5->VAR10, "", VAR9);
    }
    if (VAR3)
        FUN3(VAR5->VAR10, "");
VAR13:
    FUN8(VAR2, &VAR5->VAR10);
    return VAR8;
}