static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5;
    for (VAR5 = 0; VAR5 < FUN2(VAR4->VAR6); VAR5++)
    {
        FUN3(VAR2, (VAR7)VAR4->VAR6[VAR5]);
        FUN3(VAR2, (VAR7)(VAR4->VAR6[VAR5] >> 32));
    }
    FUN4(VAR2, &VAR4->VAR8);
    FUN4(VAR2, &VAR4->VAR9);
}