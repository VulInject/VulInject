static VAR1 *FUN1(const VAR2 *VAR3)
{
    VAR1 *VAR4 = FUN2(sizeof(*VAR4));
    int VAR5;
    FUN3(VAR3->VAR6 != NULL);
    if (FUN4(VAR3->VAR6) != NULL)
    {
        fprintf(VAR7, "", VAR3->VAR6);
        FUN5();
    }
    VAR4->VAR6 = FUN6(VAR3->VAR6);
    VAR4->VAR8 = FUN6(VAR3->VAR8);
    VAR4->VAR9 = VAR3->VAR9;
    VAR4->VAR10 = VAR3->VAR10;
    VAR4->VAR11 = VAR3->VAR11;
    VAR4->VAR12 = VAR3->VAR12;
    VAR4->VAR13 = VAR3->VAR13;
    VAR4->VAR14 = VAR3->VAR14;
    VAR4->VAR15 = VAR3->VAR15;
    VAR4->VAR16 = VAR3->VAR16;
    VAR4->VAR17 = VAR3->VAR17;
    VAR4->VAR18 = VAR3->VAR18;
    for (VAR5 = 0; VAR3->VAR19 && VAR3->VAR19[VAR5].VAR20; VAR5++)
    {
        VAR4->VAR19[VAR5].typename = FUN6(VAR3->VAR19[VAR5].VAR20);
    }
    VAR4->VAR21 = VAR5;
    FUN7(VAR4);
    return VAR4;
}