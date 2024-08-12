static enum VAR1 FUN1(DWORD VAR2, WORD VAR3)
{
    switch (VAR2)
    {
    case VAR4:
    case VAR5:
        switch (VAR3)
        {
        case 1:
            return VAR6;
        case 4:
            return VAR7;
        case 8:
            return VAR8;
        case 16:
            return VAR9;
        case 24:
            return VAR10;
        case 32:
            return VAR11;
        }
    }
    return FUN2(FUN3(), VAR2);
}