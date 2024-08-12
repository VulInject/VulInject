static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[VAR4->VAR8];
    int VAR9, VAR10;
    if (!(VAR2->VAR11 & VAR12))
        return 1;
    if (VAR2->VAR13->VAR14)
    {
        if (!VAR6->VAR15->VAR16)
        {
            if ((VAR10 = VAR2->VAR13->FUN2(VAR2, VAR4)) < 0)
                return VAR10;
            else if (VAR10 == 1)
                VAR6->VAR15->VAR16 = 1;
        }
    }
    FF_DISABLE_DEPRECATION_WARNINGS if (VAR6->VAR15->VAR17)
    {
        VAR10 = FUN3(VAR4);
        if (VAR10 < 0)
            FUN4(VAR2, VAR18, "");
    }
    FF_ENABLE_DEPRECATION_WARNINGS for (VAR9 = 0; VAR9 < VAR6->VAR15->VAR17; VAR9++)
    {
        VAR19 *VAR20 = VAR6->VAR15->VAR21[VAR9];
        if ((VAR10 = FUN5(VAR20, VAR4)) < 0)
        {
            FUN4(VAR20, VAR22, "", VAR20->VAR23->VAR24, VAR4->VAR8);
            return VAR10;
        }
        if ((VAR10 = FUN6(VAR20, VAR4)) < 0)
        {
            if (VAR10 == FUN7(VAR25) || VAR10 == VAR26)
                return 0;
            FUN4(VAR20, VAR22, "", VAR20->VAR23->VAR24, VAR4->VAR8);
            return VAR10;
        }
    }
    return 1;
}