void
FUN1(int VAR1)
{
struct VAR2 *VAR3, *VAR4;

if (VAR5 & VAR6)
FUN2("");
VAR5 |= VAR6;
if (VAR1) {
for (VAR3 = FUN3(&VAR7); VAR3 != NULL;
VAR3 = VAR4) {
VAR4 = FUN4(VAR3, VAR8);
if (VAR3->VAR9 & VAR10)
FUN5(VAR3);
FUN6(&VAR7, VAR3, VAR8);
free(VAR3, VAR11, sizeof(*VAR3));
}
FUN7();	
}

FUN8(&VAR7);
VAR5 &= ~VAR6;
if (VAR5 & VAR12) {
VAR5 &= ~VAR12;
FUN9((VAR13)&VAR7);
}

FUN8(&VAR14);
VAR15 &= ~VAR16;

VAR17 =  malloc(sizeof(*VAR17), VAR11,
VAR18|VAR19);
FUN10(&VAR7, VAR17, VAR8);

if (!VAR1) {
FUN11(&VAR20, sizeof(struct VAR21),
0, VAR22, VAR23, "", NULL);
}
}