}
FUN1(VAR1);


unsigned int FUN2(struct VAR2 *VAR3,
void *VAR4, unsigned int VAR5)
{
unsigned int VAR6;
unsigned int VAR7;


VAR6 = FUN3(VAR3,
FUN4(VAR3));
if (VAR5 > VAR6)
VAR5 = VAR6;

if (VAR5 == 0)
return 0;

VAR7 = FUN5(VAR3,
FUN6(VAR3, VAR5));
FUN7(VAR3, VAR4, VAR7);
FUN8(VAR3, VAR7);
FUN9(VAR3, VAR7);
VAR3->VAR8->VAR9 |= VAR10;

return VAR7;
}