static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR3 *VAR5;
    AVPicture VAR6;
    SDL_Rect VAR7;
    int VAR8;
    VAR4 = FUN2(&VAR2->VAR9);
    if (VAR4->VAR10)
    {
        if (VAR2->VAR11)
        {
            if (FUN3(&VAR2->VAR12) > 0)
            {
                VAR5 = FUN2(&VAR2->VAR12);
                if (VAR4->VAR13 >= VAR5->VAR13 + ((float)VAR5->VAR14.VAR15 / 1000))
                {
                    FUN4(VAR4->VAR10);
                    VAR6.VAR16[0] = VAR4->VAR10->VAR17[0];
                    VAR6.VAR16[1] = VAR4->VAR10->VAR17[2];
                    VAR6.VAR16[2] = VAR4->VAR10->VAR17[1];
                    VAR6.VAR18[0] = VAR4->VAR10->VAR19[0];
                    VAR6.VAR18[1] = VAR4->VAR10->VAR19[2];
                    VAR6.VAR18[2] = VAR4->VAR10->VAR19[1];
                    for (VAR8 = 0; VAR8 < VAR5->VAR14.VAR20; VAR8++)
                        FUN5(&VAR6, VAR5->VAR21[VAR8], VAR4->VAR10->VAR22, VAR4->VAR10->VAR23);
                    FUN6(VAR4->VAR10);
                }
            }
        }
        FUN7(&VAR7, VAR2->VAR24, VAR2->VAR25, VAR2->VAR26, VAR2->VAR27, VAR4->VAR26, VAR4->VAR27, VAR4->VAR28);
        FUN8(VAR4->VAR10, &VAR7);
        if (VAR7.VAR29 != VAR2->VAR30.VAR29 || VAR7.VAR31 != VAR2->VAR30.VAR31 || VAR7.VAR22 != VAR2->VAR30.VAR22 || VAR7.VAR23 != VAR2->VAR30.VAR23 || VAR2->VAR32)
        {
            int VAR33 = FUN9(VAR34->VAR35, 0x00, 0x00, 0x00);
            FUN10(VAR2->VAR24, VAR2->VAR25, VAR2->VAR26, VAR2->VAR27, VAR7.VAR29, VAR7.VAR31, VAR7.VAR22, VAR7.VAR23, VAR33, 1);
            VAR2->VAR30 = VAR7;
        }
    }
}