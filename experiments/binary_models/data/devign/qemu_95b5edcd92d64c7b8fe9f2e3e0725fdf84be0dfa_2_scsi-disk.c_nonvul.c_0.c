static int FUN1(VAR1 *VAR2)
{
    SCSIDriveKind VAR3;
    VAR4 *VAR5;
    if (!VAR2->VAR6.VAR7)
    {
        VAR3 = VAR8;
    }
    else
    {
        VAR5 = FUN2(VAR2->VAR6.VAR7);
        VAR3 = VAR5->VAR9 ? VAR10 : VAR8;
    }
    return FUN3(VAR2, VAR3);
}