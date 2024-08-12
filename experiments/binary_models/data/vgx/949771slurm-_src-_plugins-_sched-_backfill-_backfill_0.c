static VAR1 FUN1(VAR2 *VAR3,
uint32_t VAR4)
{
ListIterator VAR5;
VAR6 *VAR7;
time_t VAR8 = VAR3->VAR9;

VAR5 = FUN2(VAR3->VAR10);
while ((VAR7 = FUN3(VAR5))) {
if (VAR7->VAR11 == VAR4)
continue;
VAR8 = FUN4(VAR8, VAR7->VAR8);
}
FUN5(VAR5);

return VAR8;
}