static VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3);
    VAR1 *VAR8;
    VAR9 *VAR10;
    unsigned VAR11 = 0;
    unsigned VAR12 = 0;
    VAR8 = FUN3(VAR7, VAR5);
    if (!VAR8)
    {
        return NULL;
    }
    if (VAR3->VAR13)
    {
        VAR11 = VAR3->VAR11;
    }
    else if (VAR3->VAR14)
    {
        VAR11 = VAR3->VAR15 * VAR16;
    }
    if (VAR3->VAR17)
    {
        VAR12 = VAR3->VAR12;
    }
    else if (VAR3->VAR18)
    {
        VAR12 = VAR3->VAR19 * VAR20;
    }
    FUN4(VAR11, VAR12);
    if (VAR11 == 0 || VAR12 == 0)
    {
        VAR10 = FUN5(NULL, VAR21, 0);
    }
    else
    {
        VAR10 = FUN5(NULL, VAR22, 0);
        VAR10->VAR23 = FUN6(VAR11, VAR12);
    }
    if (!VAR10)
    {
        FUN7(VAR8);
        FUN8(VAR5, "");
        return NULL;
    }
    VAR10->VAR8 = VAR8;
    VAR8->VAR24 = VAR10;
    VAR8->VAR25 = VAR26;
    VAR8->VAR27 = true;
    if (VAR28)
    {
        FUN9(VAR8, VAR28);
    }
    return VAR8;
}