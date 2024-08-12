static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6)
{
    VAR7 *VAR8 = NULL;
    int VAR9;
    FUN2(&VAR8, "", VAR2->VAR10, 0);
    FUN2(&VAR8, "", VAR2->VAR11, 0);
    FUN2(&VAR8, "", VAR2->VAR12, 0);
    FUN2(&VAR8, "", VAR2->VAR13, 0);
    FUN2(&VAR8, "", "", 0);
    if (VAR6->VAR14 >= 0)
    {
        FUN3(&VAR8, "", VAR6->VAR15, 0);
        FUN3(&VAR8, "", VAR6->VAR15 + VAR6->VAR14, 0);
    }
    FUN4(VAR4->VAR16, VAR17, "" VAR18 "", VAR6->VAR19, VAR6->VAR15, VAR4->VAR20);
    if (VAR6->VAR21 == VAR22)
    {
        VAR9 = FUN5(VAR4->VAR16, &VAR4->VAR23, VAR6->VAR19, VAR2->VAR24, VAR8);
    }
    else if (VAR6->VAR21 == VAR25)
    {
        VAR7 *VAR26 = NULL;
        char VAR27[33], VAR28[33], VAR19[VAR29];
        if (strcmp(VAR6->VAR28, VAR4->VAR30))
        {
            VAR31 *VAR32;
            if (FUN5(VAR4->VAR16, &VAR32, VAR6->VAR28, VAR2->VAR24, VAR8) == 0)
            {
                VAR9 = FUN6(VAR32, VAR4->VAR28, sizeof(VAR4->VAR28));
                if (VAR9 != sizeof(VAR4->VAR28))
                {
                    FUN4(NULL, VAR33, "", VAR6->VAR28);
                }
                FUN7(VAR4->VAR16, &VAR32);
            }
            else
            {
                FUN4(NULL, VAR33, "", VAR6->VAR28);
            }
            FUN8(VAR4->VAR30, VAR6->VAR28, sizeof(VAR4->VAR30));
        }
        FUN9(VAR27, VAR6->VAR27, sizeof(VAR6->VAR27), 0);
        FUN9(VAR28, VAR4->VAR28, sizeof(VAR4->VAR28), 0);
        VAR27[32] = VAR28[32] = ''; if ( strstr ( VAR6 -> VAR19 , ""VAR34+%VAR35""VAR34:%VAR35""VAR28""VAR27""VAR36-AES encryption is not supported VAR37\VAR38""Unable to seek to VAR39 %"" of HLS VAR5 ''\VAR38" , VAR6 -> VAR15 , VAR6 -> VAR19 ) ; VAR9 = VAR40 ; FUN7 ( VAR4 -> VAR16 , & VAR4 -> VAR23 ) ; } } VAR41 : FUN10 ( & VAR8 ) ; VAR4 -> VAR42 = 0 ; return VAR9 ; }