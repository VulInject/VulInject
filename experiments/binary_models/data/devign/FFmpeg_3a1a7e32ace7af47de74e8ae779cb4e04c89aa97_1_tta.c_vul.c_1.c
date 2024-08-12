static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    VAR4->VAR2 = VAR2;
    if (VAR2->VAR7 < 30)
        FUN2(&VAR4->VAR8, VAR2->VAR9, VAR2->VAR7);
    if (FUN3(&VAR4->VAR8, 32) == FUN4(FUN5("")))
    {
        FUN6(&VAR4->VAR8, 32);
        VAR4->VAR10 = FUN7(&VAR4->VAR8);
        if (VAR4->VAR10 != 1 && VAR4->VAR10 != 3)
        {
            FUN8(VAR4->VAR2, VAR11, "");
            VAR4->VAR12 = (VAR4->VAR10 == VAR13);
            VAR2->VAR14 = VAR4->VAR14 = FUN7(&VAR4->VAR8);
            VAR2->VAR15 = FUN7(&VAR4->VAR8);
            VAR4->VAR16 = (VAR2->VAR15 + 7) / 8;
            VAR2->VAR17 = FUN9(&VAR4->VAR8);
            if (VAR2->VAR17 > 1000000)
            {
                FUN8(VAR2, VAR11, "");
                VAR4->VAR18 = FUN9(&VAR4->VAR8);
                FUN6(&VAR4->VAR8, 32);
                if (VAR4->VAR12)
                {
                    VAR2->VAR19 = VAR20;
                    FUN8(VAR4->VAR2, VAR11, "");
                    else switch (VAR4->VAR16)
                    {
                    case 2:
                        VAR2->VAR19 = VAR21;
                        break;
                    case 4:
                        VAR2->VAR19 = VAR22;
                        break;
                    default:
                        FUN8(VAR4->VAR2, VAR11, "");
                        VAR4->VAR23 = (int)(VAR24 * VAR2->VAR17);
                        VAR4->VAR25 = VAR4->VAR18 % VAR4->VAR23;
                        VAR4->VAR26 = VAR4->VAR18 / VAR4->VAR23 + (VAR4->VAR25 ? 1 : 0);
                        FUN8(VAR4->VAR2, VAR27, "", VAR4->VAR10, VAR2->VAR14, VAR2->VAR15, VAR2->VAR17, VAR2->VAR28);
                        FUN8(VAR4->VAR2, VAR27, "", VAR4->VAR18, VAR4->VAR23, VAR4->VAR25, VAR4->VAR26);
                        for (VAR6 = 0; VAR6 < VAR4->VAR26; VAR6++)
                            FUN6(&VAR4->VAR8, 32);
                        FUN6(&VAR4->VAR8, 32);
                        VAR4->VAR29 = FUN10(sizeof(VAR30) * VAR4->VAR23 * VAR4->VAR14);
                    }
                    else
                    {
                        FUN8(VAR2, VAR11, "");
                        return 0