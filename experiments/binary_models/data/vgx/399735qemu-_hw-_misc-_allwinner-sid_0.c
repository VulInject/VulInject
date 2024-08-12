static VAR1 FUN1(void *VAR2, hwaddr VAR3,
unsigned VAR4)
{
const VAR5 *VAR6 = FUN2(VAR2);
uint64_t VAR7 = 0;

switch (VAR3) {
case VAR8:    
VAR7 = VAR6->VAR9;
break;
case VAR10:    
VAR7 = VAR6->VAR11;
break;
default:
FUN3(VAR12, "",
VAR13, (VAR14)VAR3);
return 0;
}

FUN4(VAR3, VAR7, VAR4);

return VAR7;
}