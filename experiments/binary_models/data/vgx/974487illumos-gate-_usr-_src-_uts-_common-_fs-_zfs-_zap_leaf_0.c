static VAR1 *
FUN1(VAR2 *VAR3, uint16_t VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR3, VAR4);
struct VAR5 *VAR7;
VAR1 *VAR8;


for (VAR8 = FUN3(VAR3, VAR6->VAR9);
*VAR8 != VAR10; VAR8 = &VAR7->VAR11) {
VAR7 = FUN2(VAR3, *VAR8);
if (VAR7->VAR12 > VAR6->VAR12)
break;
}

VAR6->VAR11 = *VAR8;
*VAR8 = VAR4;
return (VAR8);
}