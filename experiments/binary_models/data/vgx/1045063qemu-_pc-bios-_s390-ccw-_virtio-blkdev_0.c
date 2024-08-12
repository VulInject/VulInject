VAR1 FUN1(void)
{
VAR2 *VAR3 = FUN2();

switch (VAR3->VAR4.VAR5) {
case VAR6:
return VAR3->VAR7.VAR8.VAR9.VAR10;
case VAR11:
return VAR3->VAR12 == VAR13
? VAR3->VAR7.VAR8.VAR9.VAR10 : 255;
}
return 0;
}