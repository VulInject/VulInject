static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    int VAR5, VAR6, VAR7, VAR8;
    int VAR9;
    VAR10 *VAR11;
    struct VAR12 *VAR13;
    struct audio_buf_info VAR14;
    struct count_info VAR15;
    int VAR16;
    VAR7 = FUN2(VAR2);
    if (!VAR7)
    {
        return 0;
    }
    VAR16 = VAR2->VAR9 << VAR2->VAR17.VAR18;
    if (VAR4->VAR19)
    {
        int VAR20;
        VAR5 = FUN3(VAR4->VAR21, VAR22, &VAR15);
        if (VAR5 < 0)
        {
            FUN4(VAR23, "");
            return 0;
        }
        if (VAR15.VAR24 == VAR4->VAR25)
        {
            if (FUN5(VAR2->VAR9 - VAR7) < 64)
            {
                FUN6("");
            }
            return 0;
        }
        if (VAR15.VAR24 > VAR4->VAR25)
        {
            VAR20 = VAR15.VAR24 - VAR4->VAR25;
        }
        else
        {
            VAR20 = VAR16 + VAR15.VAR24 - VAR4->VAR25;
        }
        VAR8 = FUN7(VAR20 >> VAR2->VAR17.VAR18, VAR7);
    }
    else
    {
        VAR5 = FUN3(VAR4->VAR21, VAR26, &VAR14);
        if (VAR5 < 0)
        {
            FUN4(VAR23, "");
            return 0;
        }
        if (VAR14.VAR20 > VAR16)
        {
            if (VAR27.VAR28)
            {
                FUN6(""
                      "",
                      VAR14.VAR20, VAR16);
            }
            VAR14.VAR20 = VAR16;
        }
        if (VAR14.VAR20 < 0)
        {
            if (VAR27.VAR28)
            {
                FUN6("", VAR14.VAR20, VAR16);
            }
            return 0;
        }
        VAR8 = FUN7(VAR14.VAR20 >> VAR2->VAR17.VAR18, VAR7);
        if (!VAR8)
        {
            return 0;
        }
    }
    VAR9 = VAR8;
    VAR6 = VAR2->VAR6;
    while (VAR9)
    {
        int VAR29 = VAR2->VAR9 - VAR6;
        int VAR30 = FUN7(VAR9, VAR29);
        VAR13 = VAR2->VAR31 + VAR6;
        VAR11 = FUN8(VAR4->VAR32, VAR6 << VAR2->VAR17.VAR18);
        VAR2->FUN9(VAR11, VAR13, VAR30);
        if (!VAR4->VAR19)
        {
            int VAR33;
            VAR33 = write(VAR4->VAR21, VAR11, VAR30 << VAR2->VAR17.VAR18);
            if (VAR33 == -1)
            {
                FUN4(VAR23, "", VAR30 << VAR2->VAR17.VAR18, VAR11);
                continue;
            }
            if (VAR33 != VAR30 << VAR2->VAR17.VAR18)
            {
                int VAR34 = VAR33 >> VAR2->VAR17.VAR18;
                int VAR35 = VAR34 << VAR2->VAR17.VAR18;
                if (VAR35 != VAR33)
                {
                    FUN6(""
                          "",
                          VAR35, VAR33, VAR2->VAR17.VAR36 + 1);
                }
                VAR8 -= VAR34;
                VAR6 = (VAR6 + VAR34) % VAR2->VAR9;
                break;
            }
        }
        VAR6 = (VAR6 + VAR30) % VAR2->VAR9;
        VAR9 -= VAR30;
    }
    if (VAR4->VAR19)
    {
        VAR4->VAR25 = VAR15.VAR24;
    }
    VAR2->VAR6 = VAR6;
    return VAR8;
}