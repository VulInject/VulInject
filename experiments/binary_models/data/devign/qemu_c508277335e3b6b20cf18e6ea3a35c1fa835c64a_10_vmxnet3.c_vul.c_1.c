static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    FUN2(VAR2->VAR4, VAR5.VAR6.VAR7, VAR2->VAR8, sizeof(VAR2->VAR8));
    for (VAR3 = 0; VAR3 < FUN3(VAR2->VAR8); VAR3++)
    {
        VAR2->VAR8[VAR3] = FUN4(VAR2->VAR8[VAR3]);
    }
    FUN5("");
    for (VAR3 = 0; VAR3 < sizeof(VAR2->VAR8) * 8; VAR3++)
    {
        if (FUN6(VAR2->VAR8, VAR3))
        {
            FUN5("", VAR3);
        }
    }
}