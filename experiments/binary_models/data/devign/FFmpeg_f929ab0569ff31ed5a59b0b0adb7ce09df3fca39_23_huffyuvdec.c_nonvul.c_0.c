static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    int VAR9[VAR10];
    if (!VAR2->VAR11->VAR12)
        return;
    VAR6 = VAR5 - VAR2->VAR13;
    VAR5 -= VAR6;
    if (VAR2->VAR14 == 12)
        VAR7 = VAR5 >> 1;
    else
        VAR7 = VAR5;
    VAR9[0] = VAR4->VAR15[0] * VAR5;
    VAR9[1] = VAR4->VAR15[1] * VAR7;
    VAR9[2] = VAR4->VAR15[2] * VAR7;
    for (VAR8 = 3; VAR8 < VAR10; VAR8++)
        VAR9[VAR8] = 0;
    FUN2();
    VAR2->VAR11->FUN3(VAR2->VAR11, VAR4, VAR9, VAR5, 3, VAR6);
    VAR2->VAR13 = VAR5 + VAR6;
}