static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5;
    for (VAR5 = 0; VAR5 < FUN2(VAR4->VAR6); VAR5++)
    {
        unsigned long VAR7;
        VAR7 = FUN3(VAR2);
        VAR7 <<= 32;
        VAR7 |= FUN3(VAR2);
        VAR4->VAR6[VAR5] = VAR7;
    }
    FUN4(VAR2, &VAR4->VAR8);
    FUN4(VAR2, &VAR4->VAR9);
}