int FUN1(unsigned int VAR1)
{
int VAR2 = 2;
while (VAR1 > 0xfff) {
VAR2++;
VAR1 >>= 2;
}

return FUN2(VAR1 << 20) << VAR2;
}