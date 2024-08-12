static int FUN1(struct VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    int VAR5;
    struct VAR6 *VAR7 = VAR2->VAR8[VAR2->VAR9 - VAR2->VAR10];
    FUN2(&VAR4, "", "", 0);
    if (VAR7->VAR11 == VAR12)
    {
        VAR5 = FUN3(&VAR2->VAR13, VAR7->VAR14, VAR15, &VAR2->VAR16->VAR17, &VAR4);
        goto VAR18;
    }
    else if (VAR7->VAR11 == VAR19)
    {
        char VAR20[33], VAR21[33], VAR14[VAR22];
        if (strcmp(VAR7->VAR21, VAR2->VAR23))
        {
            VAR24 *VAR25;
            if (FUN3(&VAR25, VAR7->VAR21, VAR15, &VAR2->VAR16->VAR17, &VAR4) == 0)
            {
                if (FUN4(VAR25, VAR2->VAR21, sizeof(VAR2->VAR21)) != sizeof(VAR2->VAR21))
                {
                    FUN5(NULL, VAR26, "", VAR7->VAR21);
                }
                FUN6(VAR25);
            }
            else
            {
                FUN5(NULL, VAR26, "", VAR7->VAR21);
            }
            FUN7(VAR2->VAR23, VAR7->VAR21, sizeof(VAR2->VAR23));
        }
        FUN8(VAR20, VAR7->VAR20, sizeof(VAR7->VAR20), 0);
        FUN8(VAR21, VAR2->VAR21, sizeof(VAR2->VAR21), 0);
        VAR20[32] = VAR21[32] = ''; if ( strstr ( VAR7 -> VAR14 , ""VAR27+%VAR28""VAR27:%VAR28""VAR21""VAR20" , VAR20 , 0 ) ; if ( ( VAR5 = FUN9 ( VAR2 -> VAR13 , & VAR4 ) ) < 0 ) { FUN6 ( VAR2 -> VAR13 ) ; VAR2 -> VAR13 = NULL ; goto VAR18 ; } VAR5 = 0 ; } else VAR5 = FUN10 ( VAR29 ) ; VAR18 : FUN11 ( & VAR4 ) ; return VAR5 ; }