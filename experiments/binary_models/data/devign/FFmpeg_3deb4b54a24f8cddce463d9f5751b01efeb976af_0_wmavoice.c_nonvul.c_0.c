static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    unsigned int VAR5, VAR6 = 0;
    FUN2(VAR4, 4);
    VAR2->VAR7 = FUN3(VAR4);
    do
    {
        VAR5 = FUN4(VAR4, 6);
        VAR6 += VAR5;
    } while (VAR5 == 0x3F);
    VAR2->VAR8 = FUN4(VAR4, VAR2->VAR9);
    return FUN5(VAR4) >= 0 ? VAR6 : VAR10;
}