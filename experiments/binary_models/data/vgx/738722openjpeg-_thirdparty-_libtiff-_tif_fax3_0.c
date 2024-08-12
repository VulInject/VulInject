int
FUN1(VAR1* VAR2, int VAR3)
{
(void) VAR3;
if (FUN2(VAR2)) {		
VAR2->VAR4 = VAR5;
VAR2->VAR6 = VAR5;
VAR2->VAR7 = VAR5;

return FUN3(VAR2, VAR8,
VAR9|VAR10|VAR11);
} else
return (0);
}