void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    unsigned char VAR6 = VAR3 & 0xff;
    FUN3(VAR5->VAR3);
    VAR5->VAR3 = VAR3;
    if (VAR5->VAR7)
    {
        FUN4(VAR5->VAR7, &VAR6, 1);
    }