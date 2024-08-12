static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8;
    const char *VAR9;
    if (VAR4 & VAR10)
        return FUN2(VAR11);
    VAR6 = FUN3(sizeof(VAR5));
    if (!VAR6)
        return FUN2(VAR12);
    VAR2->VAR13 = VAR6;
    VAR2->VAR14 = 1;
    if (FUN4(VAR3, "", &VAR9))
    {
        FUN5(VAR6->VAR15, VAR9, sizeof(VAR6->VAR15));
    } else if ( FUN4 ( VAR3 , ""VAR16: FUN6 ( VAR6 -> VAR15 , VAR9 , sizeof ( VAR6 -> VAR15 ) ) ;
}
else
{
    FUN7(VAR2, VAR17, "", VAR3);
    VAR7 = FUN2(VAR18);
    goto VAR19;
}
if ((VAR7 = FUN8(VAR2, VAR6->VAR15)) < 0)
    goto VAR19;
if (VAR6->VAR20 == 0 && VAR6->VAR21 > 0)
{
    int VAR22 = 0, VAR23 = -1;
    for (VAR8 = 0; VAR8 < VAR6->VAR21; VAR8++)
    {
        if (VAR6->VAR24[VAR8]->VAR25 > VAR22 || VAR8 == 0)
        {
            VAR22 = VAR6->VAR24[VAR8]->VAR25;
            VAR23 = VAR8;
        }
    }
    FUN5(VAR6->VAR15, VAR6->VAR24[VAR23]->VAR26, sizeof(VAR6->VAR15));
    if ((VAR7 = FUN8(VAR2, VAR6->VAR15)) < 0)
        goto VAR19;
}
if (VAR6->VAR20 == 0)
{
    FUN7(VAR2, VAR27, "");
    VAR7 = FUN2(VAR28);
    goto VAR19;
}
VAR6->VAR29 = VAR6->VAR30;
if (!VAR6->VAR31 && VAR6->VAR20 >= 3)
    VAR6->VAR29 = VAR6->VAR30 + VAR6->VAR20 - 3;
return 0;
VAR19 : FUN9(VAR6);
return VAR7;
}