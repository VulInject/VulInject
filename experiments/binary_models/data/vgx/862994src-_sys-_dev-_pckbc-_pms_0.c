int
FUN1(struct VAR1 *VAR2, int VAR3)
{
if (FUN2(VAR2, 1) ||
FUN3(VAR2, (VAR3 >> 6) & 0x03) ||
FUN3(VAR2, (VAR3 >> 4) & 0x03) ||
FUN3(VAR2, (VAR3 >> 2) & 0x03) ||
FUN3(VAR2, (VAR3 >> 0) & 0x03))
return (-1);
return (0);
}