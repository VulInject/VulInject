static VAR1 FUN1(int VAR2, TCGArg VAR3, TCGArg VAR4)
{
    TCGArg VAR5 = FUN2(VAR2, VAR3, VAR4);
    if (FUN3(VAR2) == 32)
    {
        VAR5 &= 0xffffffff;
    }
    return VAR5;
}