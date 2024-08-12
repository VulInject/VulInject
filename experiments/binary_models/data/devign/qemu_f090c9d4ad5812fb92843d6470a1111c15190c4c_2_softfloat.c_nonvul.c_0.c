VAR1 FUN1(int64 a VAR2)
{
    flag VAR3;
    uint64 VAR4;
    int8 VAR5;
    if (VAR6 == 0)
        return VAR7;
    VAR3 = (VAR6 < 0);
    VAR4 = VAR3 ? -VAR6 : VAR6;
    VAR5 = FUN2(VAR4) - 40;
    if (0 <= VAR5)
    {
        return FUN3(VAR3, 0x95 - VAR5, VAR4 << VAR5);
    }
    else
    {
        VAR5 += 7;
        if (VAR5 < 0)
        {
            FUN4(VAR4, -VAR5, &VAR4);
        }
        else
        {
            VAR4 <<= VAR5;
        }
        return FUN5(VAR3, 0x9C - VAR5, absA VAR8);
    }
}