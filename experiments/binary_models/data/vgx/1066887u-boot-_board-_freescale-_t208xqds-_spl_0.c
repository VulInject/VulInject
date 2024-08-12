unsigned long FUN1(void)
{
u8 VAR1 = FUN2(VAR2[1]);

switch ((VAR1 & 0x30) >> 4) {
case VAR3:
return 100000000;
case VAR4:
return 125000000;
case VAR5:
return 133333333;
}
return 66666666;
}