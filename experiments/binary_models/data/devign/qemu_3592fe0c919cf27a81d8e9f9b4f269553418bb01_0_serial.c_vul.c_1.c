static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7;
    QEMUSerialSetParams VAR8;
    if (VAR2->VAR9 == 0)
        return;
    VAR7 = 1;
    if (VAR2->VAR10 & 0x08)
    {
        VAR7++;
        if (VAR2->VAR10 & 0x10)
            VAR4 = '';
        else
            VAR4 = '';
    }
    else
    {
        VAR4 = '';
    }
    if (VAR2->VAR10 & 0x04)
        VAR6 = 2;
    else
        VAR6 = 1;
    VAR5 = (VAR2->VAR10 & 0x03) + 5;
    VAR7 += VAR5 + VAR6;
    VAR3 = VAR2->VAR11 / VAR2->VAR9;
    VAR8.VAR3 = VAR3;
    VAR8.VAR4 = VAR4;
    VAR8.VAR5 = VAR5;
    VAR8.VAR6 = VAR6;
    VAR2->VAR12 = (VAR13 / VAR3) * VAR7;
    FUN2(VAR2->VAR14, VAR15, &VAR8);
    FUN3("", VAR3, VAR4, VAR5, VAR6);
}