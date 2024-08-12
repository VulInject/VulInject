int
FUN1(void *VAR1, int VAR2)
{
struct VAR3 *VAR4 = VAR1;

FUN2("", VAR4->VAR5.VAR6);




if (VAR2 & VAR7) {
VAR4->VAR8 = FUN3(VAR4, 0 );
if (VAR4->VAR8 == NULL)
return (VAR9);


VAR4->VAR8->VAR10.VAR11 = VAR12;
}

if (VAR2 & VAR13) {
VAR4->VAR14 = FUN3(VAR4, VAR15);
if (VAR4->VAR14 == NULL) {
if (VAR2 & VAR7)
FUN4(VAR4->VAR8);
return (VAR9);
}
}

return (0);
}