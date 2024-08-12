VAR1 FUN1(void *VAR2)
{
u16 VAR3;

asm("" VAR4 "" : ""(VAR3) : ""(*(VAR1 *)VAR2));
return VAR3;
}