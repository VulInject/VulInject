static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR1;
    VAR7 *VAR8 = FUN2(&VAR6->VAR9);
    int64_t VAR10;
    FUN3("");
    if (VAR2 < 0)
    {
        FUN3("", VAR2);
        FUN4(VAR8, VAR2);
        goto VAR11;
    }
    if (!VAR6->VAR12)
    {
        FUN3("", VAR8->VAR13, VAR4->VAR14, VAR8->VAR15);
        VAR4->VAR16 = false;
        return;
    }
    if (VAR8->VAR17 <= 0)
    {
        FUN3("");
        FUN5(VAR8);
        VAR6->VAR12 = false;
        goto VAR11;
    }
    if (VAR4->VAR14 == 0)
    {
        FUN3("");
        goto VAR11;
    }
    if (VAR8->VAR18 == -1)
    {
        VAR8->VAR17 = FUN6(VAR8->VAR17, VAR4->VAR14);
        FUN7(VAR4->VAR19, VAR8->VAR20, VAR8->VAR17);
        FUN5(VAR8);
        VAR6->VAR12 = false;
        goto VAR11;
    }
    VAR10 = (VAR21)(VAR8->VAR18 << 11) + VAR8->VAR22;
    FUN8(VAR8->VAR23, VAR10, VAR4->VAR14, VAR24, VAR4);
    return;
VAR11:
    if (VAR2 < 0)
    {
        FUN9(FUN10(VAR8->VAR23), &VAR8->VAR25);
    }
    else
    {
        FUN11(FUN10(VAR8->VAR23), &VAR8->VAR25);
    }
    VAR4->FUN12(VAR1);
}