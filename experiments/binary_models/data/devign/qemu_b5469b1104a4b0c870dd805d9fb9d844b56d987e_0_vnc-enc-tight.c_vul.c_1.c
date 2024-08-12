void FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < FUN2(VAR2->VAR4.VAR5); VAR3++)
    {
        if (VAR2->VAR4.VAR5[VAR3].VAR6)
        {
            FUN3(&VAR2->VAR4.VAR5[VAR3]);
        }
    }
    FUN4(&VAR2->VAR4.VAR4);
    FUN4(&VAR2->VAR4.VAR7);
    FUN4(&VAR2->VAR4.VAR8);
    FUN4(&VAR2->VAR4.VAR9);