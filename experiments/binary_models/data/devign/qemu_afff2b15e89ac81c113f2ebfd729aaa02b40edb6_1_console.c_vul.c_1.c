static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    VAR5 *VAR6;
    unsigned VAR7 = 0;
    unsigned VAR8 = 0;
    VAR4 = FUN2(sizeof(VAR1));
    if (VAR3->VAR9)
    {
        VAR7 = VAR3->VAR7;
    }
    else if (VAR3->VAR10)
    {
        VAR7 = VAR3->VAR11 * VAR12;
    }
    if (VAR3->VAR13)
    {
        VAR8 = VAR3->VAR8;
    }
    else if (VAR3->VAR14)
    {
        VAR8 = VAR3->VAR15 * VAR16;
    }
    FUN3(VAR7, VAR8);
    if (VAR7 == 0 || VAR8 == 0)
    {
        VAR6 = FUN4(NULL, VAR17);
    }
    else
    {
        VAR6 = FUN4(NULL, VAR18);
        VAR6->VAR19 = FUN5(VAR7, VAR8);
    }
    if (!VAR6)
    {
        FUN6(VAR4);
        return NULL;
    }
    VAR6->VAR4 = VAR4;
    VAR4->VAR20 = VAR6;
    VAR4->VAR21 = VAR22;
    VAR4->VAR23 = true;
    if (VAR24)
    {
        FUN7(VAR4, VAR24);
    }
    return VAR4;
}