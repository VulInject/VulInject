static struct VAR1 *FUN1(VAR2 *VAR3,
unsigned long VAR4,
struct VAR5 *VAR6)
{
struct VAR1 *VAR7 = FUN2(VAR6);
struct VAR8 *VAR9 = VAR6->VAR10;

if (VAR7->VAR11 != VAR12)
return VAR7;


VAR7->VAR11 = FUN3(VAR3);
FUN4(VAR7->VAR11 == -VAR13);
if (VAR9->VAR14)
FUN5(VAR7, VAR9);
else {

FUN6(VAR7->VAR11,
VAR9->VAR15->VAR16,
VAR4, 0);
}

return VAR7;
}