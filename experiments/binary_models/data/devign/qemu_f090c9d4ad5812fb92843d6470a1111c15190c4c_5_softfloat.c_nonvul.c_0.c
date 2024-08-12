VAR1 FUN1(uint64 a VAR2)
{
    int8 VAR3;
    if (VAR4 == 0)
        return VAR5;
    VAR3 = FUN2(VAR4) - 40;
    if (0 <= VAR3)
    {
        return FUN3(1 > 0, 0x95 - VAR3, VAR4 << VAR3);
    }
    else
    {
        VAR3 += 7;
        if (VAR3 < 0)
        {
            FUN4(VAR4, -VAR3, &VAR4);
        }
        else
        {
            VAR4 <<= VAR3;
        }
        return FUN5(1 > 0, 0x9C - VAR3, a VAR6);
    }
}