static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    VAR5 = &VAR3->VAR6[VAR3->VAR7];
    if (VAR5->VAR8)
        FUN2(VAR5->VAR8);
    if (VAR5->VAR9)
        FUN3(VAR5->VAR9);
    VAR5->VAR9 = NULL;
    VAR5->VAR10 = VAR3->VAR11->VAR12[0]->VAR13;
    VAR5->VAR14 = VAR3->VAR11->VAR12[0]->VAR15;
    VAR5->VAR16 = VAR3->VAR11->VAR12[0]->VAR17;
    VAR5->VAR10 = VAR3->VAR18->VAR19->VAR10;
    VAR5->VAR14 = VAR3->VAR18->VAR19->VAR14;
    VAR5->VAR16 = VAR3->VAR18->VAR19->VAR16;
    VAR5->VAR8 = FUN4(VAR5->VAR10, VAR5->VAR14, VAR20, VAR21);
    if (!VAR5->VAR8 || VAR5->VAR8->VAR22[0] < VAR5->VAR10)
    {
        fprintf(VAR23, ""
                        ""VAR24=VAR13:VAR15\""
                        "",
                VAR5->VAR10, VAR5->VAR14);
        FUN5(VAR3);
    }
    FUN6(VAR3->VAR25);
    VAR5->VAR26 = 1;
    FUN7(VAR3->VAR27);
    FUN8(VAR3->VAR25);
}