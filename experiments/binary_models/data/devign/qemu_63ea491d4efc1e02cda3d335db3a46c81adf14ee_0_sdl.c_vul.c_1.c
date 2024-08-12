static VAR1 *FUN1(int VAR2, int VAR3)
{
    VAR1 *VAR4 = (VAR1 *)FUN2(sizeof(VAR1));
    if (VAR4 == NULL)
    {
        fprintf(VAR5, "");
        FUN3(1);
    }
    VAR4->VAR2 = VAR2;
    VAR4->VAR3 = VAR3;
    if (VAR6)
    {
        int VAR7;
        PixelFormat VAR8;
        if (VAR9.VAR10 != 2 && VAR9.VAR10 != 4)
        {
            VAR7 = VAR2 * 4;
            VAR8 = FUN4(32);
        }
        else
        {
            VAR7 = VAR2 * VAR9.VAR10;
            VAR8 = FUN5(&VAR9);
        }
        FUN6(VAR4, VAR2, VAR3, VAR7, VAR8, 0);
        return VAR4;
    }
    if (VAR9.VAR11 == 16)
        FUN7(VAR2, VAR3, 16);
    else
        FUN7(VAR2, VAR3, 32);
    VAR4->VAR8 = FUN5(VAR12->VAR13);
    VAR4->VAR7 = VAR12->VAR14;
    VAR4->VAR15 = VAR12->VAR16;
    VAR4->VAR17 = VAR18 | VAR19;
    VAR4->VAR17 = VAR18;
    VAR20 = 1;
    return VAR4;
}