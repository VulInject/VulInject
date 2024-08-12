static bool FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
const struct VAR5 *VAR6)
{
bool VAR7;

if (!VAR4->VAR8)
return FUN2(VAR2, VAR4, VAR6);


if (VAR4->VAR9 == 0) {		
switch (VAR4->VAR10) {
default:		
case 0:			
VAR7 = true;
break;
case 1:			
case 2:			
VAR7 = false;
break;
}
} else {			
switch (VAR4->VAR11) {
default:		
case 5:			
VAR7 = true;
break;
case 6:			
case 7:			
VAR7 = false;
break;
}
}

FUN3(VAR2, VAR4->VAR12, VAR7);

return true;
}