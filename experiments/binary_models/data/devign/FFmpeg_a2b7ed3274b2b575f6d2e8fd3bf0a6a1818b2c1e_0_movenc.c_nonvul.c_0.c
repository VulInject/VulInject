static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR4->VAR6->VAR7;
    if (!VAR5 || (VAR4->VAR6->VAR8 >= VAR9 && (VAR4->VAR6->VAR10 == VAR11 || VAR4->VAR6->VAR10 == VAR12 || VAR4->VAR6->VAR10 == VAR13 || FUN2(VAR4->VAR6->VAR10))))
    {
        if (VAR4->VAR6->VAR10 == VAR11)
            VAR5 = FUN3(VAR2, VAR4);
        else if (VAR4->VAR6->VAR10 == VAR12)
            VAR5 = FUN4(VAR2, VAR4);
        else if (VAR4->VAR6->VAR14 == VAR15)
        {
            VAR5 = FUN5(VAR16, VAR4->VAR6->VAR10);
            if (!VAR5)
            {
                VAR5 = FUN5(VAR17, VAR4->VAR6->VAR10);
                if (VAR5)
                    FUN6(VAR2, VAR18, ""
                                           "");
            }
        }
        else if (VAR4->VAR6->VAR14 == VAR19)
        {
            VAR5 = FUN5(VAR20, VAR4->VAR6->VAR10);
            if (!VAR5)
            {
                int VAR21 = FUN5(VAR22, VAR4->VAR6->VAR10);
                if (VAR21)
                {
                    VAR5 = FUN7('', '', ((VAR21 >> 8) & 0xff), (VAR21 & 0xff));
                    FUN6(VAR2, VAR18, ""
                                           "");
                }
            }
        }
        else if (VAR4->VAR6->VAR14 == VAR23)
            VAR5 = FUN5(VAR24, VAR4->VAR6->VAR10);
    }
    return VAR5;
}