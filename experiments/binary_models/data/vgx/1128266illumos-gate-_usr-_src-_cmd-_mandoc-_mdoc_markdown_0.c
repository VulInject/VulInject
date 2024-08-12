static int
FUN1(struct VAR1 *VAR2)
{
const struct VAR1 *VAR3, *VAR4, *VAR5;

if ((VAR3 = VAR2->VAR6) == NULL)
return 0;


VAR5 = VAR2->VAR7;
while (VAR5 != VAR3 && VAR5->VAR8 & VAR9)
VAR5 = VAR5->VAR10;
VAR5 = VAR5->VAR11;


VAR4 = VAR3->VAR11;
if (VAR4 == VAR5)
VAR4 = VAR3;  
FUN2("");
VAR12 &= ~VAR13;
do {
FUN3(VAR4->VAR14);
VAR4 = VAR4->VAR11;
} while (VAR4 != VAR5);
VAR12 &= ~VAR13;


FUN2("");
FUN4(VAR3->VAR14);
VAR12 &= ~VAR13;
FUN2("");


while (VAR5 != NULL) {
FUN3(VAR5->VAR14);
VAR5 = VAR5->VAR11;
}
return 0;
}