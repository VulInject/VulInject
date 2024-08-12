static void FUN1(void *VAR1, const VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR1;
    int VAR7, VAR8;
    int VAR9;
    long VAR10;
    if (FUN2(&VAR6->VAR11) && VAR4 == sizeof(VAR10))
    {
        memcpy(&VAR10, VAR3, VAR4);
    }
    else
    {
        const VAR2 *VAR12;
        uint32_t VAR13;
        FUN3("", VAR4);
        VAR13 = FUN4(VAR4, sizeof(long) - FUN5(&VAR6->VAR11));
        FUN6(&VAR6->VAR11, VAR3, VAR13);
        if (FUN5(&VAR6->VAR11) < sizeof(VAR10))
        {
            return;
        }
        VAR4 -= VAR13;
        VAR3 += VAR13;
        VAR12 = FUN7(&VAR6->VAR11, sizeof(VAR10), &VAR13);
        FUN8(VAR13 == sizeof(VAR10));
        memcpy(&VAR10, VAR12, sizeof(VAR10));
        if (VAR4 > 0)
        {
            FUN6(&VAR6->VAR11, VAR3, VAR4);
        }
    }
    if (VAR10 < -1)
    {
        FUN3("", VAR10);
        return;
    }
    VAR8 = FUN9(VAR6->VAR14);
    FUN3("", VAR10, VAR8);
    if (VAR10 >= VAR6->VAR15)
    {
        if (FUN10(VAR6, VAR10) < 0)
        {
            FUN11("");
            if (VAR8 != -1)
            {
            }
            return;
        }
    }
    if (VAR8 == -1)
    {
        if ((VAR10 >= 0) && (VAR6->VAR16[VAR10].VAR17 == NULL))
        {
            VAR6->VAR18 = VAR10;
            return;
        }
        else
        {
            FUN3("", VAR10);
            FUN12(VAR6, VAR10);
            return;
        }
    }
    VAR7 = FUN13(VAR8);
    if (VAR7 == -1)
    {
        fprintf(VAR19, "", strerror(VAR20));
        return;
    }
    if (VAR10 == -1)
    {
        void *VAR21;
        VAR6->VAR22 = 0;
        if (FUN14(VAR6, VAR7) == -1)
        {
            FUN15(-1);
        }
        VAR21 = FUN16(0, VAR6->VAR23, VAR24 | VAR25, VAR26, VAR7, 0);
        FUN17(&VAR6->VAR27, FUN18(VAR6), "", VAR6->VAR23, VAR21);
        FUN19(&VAR6->VAR27, FUN20(VAR6));
        FUN3("" VAR28 "", VAR21, VAR6->VAR23);
        FUN21(&VAR6->VAR29, 0, &VAR6->VAR27);
        VAR6->VAR30 = VAR7;
        return;
    }
    VAR9 = VAR6->VAR16[VAR10].VAR31;
    if (VAR9 == 0)
    {
        VAR6->VAR16[VAR10].VAR17 = FUN22(VAR32, VAR6->VAR33);
    }
    FUN3("", VAR10, VAR9, VAR7);
    FUN23(&VAR6->VAR16[VAR10].VAR17[VAR9], VAR7);
    VAR6->VAR16[VAR10].VAR31++;
    if (VAR10 > VAR6->VAR22)
    {
        VAR6->VAR22 = VAR10;
    }
    if (VAR10 == VAR6->VAR18)
    {
        VAR6->VAR34[VAR9] = FUN24(VAR6, &VAR6->VAR16[VAR6->VAR18].VAR17[VAR9], VAR9);
    }
    if (FUN25(VAR6, VAR35))
    {
        FUN26(VAR6, VAR10, VAR9);
    }