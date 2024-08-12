static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    char VAR8[1024];
    int VAR9;
    ByteIOContext VAR10, *VAR11;
    if (!VAR6->VAR12)
    {
        if (VAR13 && VAR6->VAR14 > VAR6->VAR15)
        {
            VAR6->VAR14 = VAR6->VAR16;
        }
        if (FUN2(VAR8, sizeof(VAR8), VAR6->VAR17, VAR6->VAR14) < 0)
            return -VAR18;
        VAR11 = &VAR10;
        if (FUN3(VAR11, VAR8, VAR19) < 0)
            return -VAR18;
    }
    else
    {
        VAR11 = &VAR2->VAR20;
        if (FUN4(VAR11))
            return -VAR18;
    }
    FUN5(VAR4, VAR6->VAR21);
    VAR4->VAR22 = 0;
    VAR6->VAR23 = VAR4->VAR24;
    VAR9 = FUN6(VAR11, VAR8, VAR6->VAR25, VAR26, VAR6);
    if (!VAR6->VAR12)
    {
        FUN7(VAR11);
    }
    if (VAR9 < 0)
    {
        FUN8(VAR4);
        return -VAR18;
    }
    else
    {
        VAR4->VAR27 = FUN9((VAR28)VAR6->VAR29 * VAR2->VAR30[0]->VAR31.VAR32, VAR2->VAR33, VAR2->VAR30[0]->VAR31.VAR34) / VAR2->VAR35;
        VAR6->VAR29++;
        VAR6->VAR14++;
        return 0;
    }
}