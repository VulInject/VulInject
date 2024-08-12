static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = NULL;
    VAR1 *VAR10;
    VAR11 *VAR12 = NULL;
    int VAR13;
    int VAR14 = FUN2(VAR6, VAR6->VAR15);
    VAR16 *VAR17;
    VAR6->VAR18 = calloc(VAR14, 1);
    FUN3(&(VAR6->VAR19), sizeof(VAR20));
    VAR6->VAR21 = FUN4(VAR22);
    VAR13 = FUN5(VAR6->VAR21, VAR22);
    if (VAR13 < 0)
    {
        FUN6(VAR4, -VAR13, "");
        goto VAR23;
    }
    VAR9 = FUN7("");
    if (!VAR9)
    {
        FUN8(VAR4, "");
        VAR13 = -VAR24;
        goto VAR23;
    }
    VAR12 = FUN9(VAR9->VAR25, NULL, 0, &VAR26);
    FUN10(VAR12, VAR27, VAR6->VAR15 * 512, &VAR26);
    FUN11(VAR12, VAR28, "", &VAR26);
    VAR13 = FUN12(VAR9, VAR6->VAR21, VAR12, VAR4);
    FUN13(VAR12);
    if (VAR13 < 0)
    {
        goto VAR23;
    }
    VAR17 = FUN14();
    FUN15(VAR17, "", FUN16(""));
    VAR6->VAR29 = FUN17(VAR6->VAR21, VAR17, "", VAR2, &VAR30, false, VAR4);
    FUN18(VAR17);
    if (!VAR6->VAR29)
    {
        VAR13 = -VAR31;
        goto VAR23;
    }
    unlink(VAR6->VAR21);
    VAR10 = FUN19();
    FUN20(VAR6->VAR2, VAR10);
    FUN21(VAR10);
    VAR6->VAR2->VAR10->VAR2->VAR32 = &VAR33;
    VAR6->VAR2->VAR10->VAR2->VAR7 = FUN22(void *, 1);
    *(void **)VAR6->VAR2->VAR10->VAR2->VAR7 = VAR6;
    return 0;
VAR23:
    FUN23(VAR6->VAR21);
    VAR6->VAR21 = NULL;
    return VAR13;
}