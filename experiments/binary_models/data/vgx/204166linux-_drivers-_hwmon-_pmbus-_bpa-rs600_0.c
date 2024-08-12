static int FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4, VAR5;

VAR3 = FUN2(VAR2, 0, 0xff, VAR6);
if (VAR3 < 0)
return VAR3;

if (VAR3 & FUN3(10)) {
VAR4 = VAR3 >> 11;
VAR5 = VAR3 & 0x7ff;

VAR4++;
VAR5 >>= 1;

VAR3 = (VAR4 << 11) | VAR5;
}

return VAR3;
}