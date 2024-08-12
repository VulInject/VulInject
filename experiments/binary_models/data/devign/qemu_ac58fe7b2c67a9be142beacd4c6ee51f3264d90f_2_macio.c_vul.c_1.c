static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR1;
    VAR7 *VAR8 = FUN2(&VAR6->VAR9);
    int64_t VAR10;
    int VAR11, VAR12;
    int64_t VAR13;
    FUN3("");
    if (VAR2 < 0)
    {
        FUN3("");
        VAR6->VAR14 = NULL;
        FUN4(VAR8);
        VAR4->VAR15 = 0;
        goto VAR16;
    }
    if (!VAR6->VAR17)
    {
        FUN3("", VAR8->VAR11, VAR4->VAR18, VAR8->VAR19);
        VAR4->VAR20 = false;
        return;
    }
    if (VAR8->VAR21 <= 0)
    {
        FUN3("");
        VAR8->VAR19 = VAR22 | VAR23;
        FUN5(VAR8->VAR9);
        VAR6->VAR17 = false;
        goto VAR16;
    }
    if (VAR4->VAR18 == 0)
    {
        FUN3("");
        goto VAR16;
    }
    VAR10 = FUN6(VAR8) + (VAR8->VAR24 >> 9);
    VAR13 = (FUN6(VAR8) << 9) + VAR8->VAR24;
    VAR11 = (VAR4->VAR18 + 0x1ff) >> 9;
    VAR12 = VAR4->VAR18 & 0x1ff;
    VAR8->VAR11 -= VAR11;
    FUN3("", VAR11, VAR12);
    FUN3("" VAR25 "", VAR10, VAR11);
    switch (VAR8->VAR26)
    {
    case VAR27:
        FUN7(VAR8->VAR28, VAR13, VAR4->VAR18, VAR29, VAR4);
        break;
    case VAR30:
        FUN8(VAR8->VAR28, VAR10, VAR11, VAR29, VAR4);
        break;
    case VAR31:
        FUN3("");
        break;
    }
    return;
VAR16:
    if (VAR8->VAR26 == VAR27 || VAR8->VAR26 == VAR30)
    {
        FUN9(FUN10(VAR8->VAR28), &VAR8->VAR32);
    }
    VAR4->FUN11(VAR1);
}