void FUN1(VAR1 *VAR2)
{
    int VAR3;
    FUN2(VAR2);
    for (VAR3 = 0; VAR3 < FUN3(VAR2->VAR4); VAR3++)
        FUN4(&VAR2->VAR4[VAR3]);
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
        FUN4(&VAR2->VAR6[VAR3]);
    FUN5(&VAR2->VAR6);
    FUN6(&VAR2->VAR7);
    FUN4(&VAR2->VAR8);
    FUN7(VAR2);