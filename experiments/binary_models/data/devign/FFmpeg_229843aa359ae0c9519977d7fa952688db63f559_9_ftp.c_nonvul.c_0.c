static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int read, VAR8, VAR9 = 0;
    FUN2(VAR2, "", VAR4);
VAR10:
    if (VAR6->VAR11 == VAR12)
    {
        if (VAR6->VAR13 >= VAR6->VAR14)
            return 0;
        if ((VAR8 = FUN3(VAR2)) < 0)
            return VAR8;
    }
    if (VAR6->VAR11 == VAR15)
    {
        if (VAR6->VAR13 >= VAR6->VAR14)
            return 0;
        if ((VAR8 = FUN4(VAR6)) < 0)
            return VAR8;
    }
    if (VAR6->VAR16 && VAR6->VAR11 == VAR17)
    {
        read = FUN5(VAR6->VAR16, VAR3, VAR4);
        if (read >= 0)
        {
            VAR6->VAR13 += read;
            if (VAR6->VAR13 >= VAR6->VAR14)
            {
                int64_t VAR18 = VAR6->VAR13;
                if (FUN6(VAR2) < 0)
                {
                    VAR6->VAR13 = VAR18;
                    return FUN7(VAR19);
                }
                VAR6->VAR13 = VAR18;
            }
        }
        if (read <= 0 && VAR6->VAR13 < VAR6->VAR14 && !VAR2->VAR20)
        {
            int64_t VAR18 = VAR6->VAR13;
            FUN8(VAR2, VAR21, "");
            if ((VAR8 = FUN6(VAR2)) < 0)
                return VAR8;
            if ((VAR8 = FUN9(VAR2, VAR18, VAR22)) < 0)
            {
                FUN8(VAR2, VAR23, "");
                return VAR8;
            }
            if (!VAR9)
            {
                VAR9 = 1;
                goto VAR10;
            }
        }
        return read;
    }
    FUN8(VAR2, VAR24, "");
    return FUN7(VAR19);
}