double FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
double VAR5, VAR6;
integer VAR7;
unsigned long VAR8;

VAR5 = 1;
VAR6 = *VAR2;
VAR7 = *VAR4;

if(VAR7 != 0)
{
if(VAR7 < 0)
{
VAR7 = -VAR7;
VAR6 = 1/VAR6;
}
for(VAR8 = VAR7; ; )
{
if(VAR8 & 01)
VAR5 *= VAR6;
if(VAR8 >>= 1)
VAR6 *= VAR6;
else
break;
}
}
return(VAR5);
}