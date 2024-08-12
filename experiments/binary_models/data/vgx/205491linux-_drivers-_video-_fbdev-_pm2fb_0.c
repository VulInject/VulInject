static VAR1 FUN1(u32 VAR2, int VAR3, int VAR4)
{
switch (VAR3) {
case 24:
VAR2 *= 3;
VAR5;
case 8:
VAR2 >>= 1;
VAR5;
case 16:
VAR2 >>= 1;
VAR5;
case 32:
break;
}
if (VAR4)
VAR2 >>= 1;
return VAR2;
}