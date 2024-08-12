static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = &VAR3->VAR5;
    int VAR6;
    VAR6 = VAR7.VAR8 ? VAR5->VAR9 / VAR7.VAR8 : 0;
    if (FUN2(&VAR3->VAR10, VAR11))
    {
        return NULL;
    }
    for (;;)
    {
        int VAR12, VAR13, VAR14;
        for (;;)
        {
            if (VAR3->VAR15)
            {
                goto VAR16;
            }
            if (VAR3->VAR17 > VAR6)
            {
                break;
            }
            if (FUN3(&VAR3->VAR10, VAR11))
            {
                goto VAR16;
            }
        }
        VAR12 = VAR13 = VAR3->VAR17;
        VAR14 = VAR5->VAR14;
        if (FUN4(&VAR3->VAR10, VAR11))
        {
            return NULL;
        }
        while (VAR13)
        {
            ssize_t VAR18;
            int VAR19 = FUN5(VAR13, VAR5->VAR9 - VAR14);
            struct VAR20 *VAR21 = VAR5->VAR22 + VAR14;
            VAR5->FUN6(VAR3->VAR23, VAR21, VAR19);
        VAR24:
            VAR18 = write(VAR3->VAR25, VAR3->VAR23, VAR19 << VAR5->VAR26.VAR27);
            if (VAR18 == -1)
            {
                if (VAR28 == VAR29 || VAR28 == VAR30)
                {
                    goto VAR24;
                }
                FUN7(VAR28, "");
                return NULL;
            }
            if (VAR18 != VAR19 << VAR5->VAR26.VAR27)
            {
                int VAR31 = VAR18 >> VAR5->VAR26.VAR27;
                int VAR32 = VAR31 << VAR5->VAR26.VAR27;
                if (VAR32 != VAR18)
                {
                    FUN8(""
                          "",
                          VAR32, VAR18, VAR5->VAR26.VAR33 + 1);
                }
                VAR13 -= VAR31;
                VAR14 = (VAR14 + VAR31) % VAR5->VAR9;
                break;
            }
            VAR14 = (VAR14 + VAR19) % VAR5->VAR9;
            VAR13 -= VAR19;
        }
        if (FUN2(&VAR3->VAR10, VAR11))
        {
            return NULL;
        }
        VAR3->VAR14 = VAR14;
        VAR3->VAR17 -= VAR12;
        VAR3->VAR12 += VAR12;
    }
VAR16:
    FUN4(&VAR3->VAR10, VAR11);
    return NULL;
}