static VAR1 *
FUN1(VAR1 *VAR2, int VAR3, int VAR4,
VAR5 *VAR6, VAR7 *VAR8)
{
struct VAR9 *VAR10, *VAR11 = NULL, *VAR12;

VAR10 = FUN2(sizeof (struct VAR9), VAR13);

VAR10->VAR14 = VAR3;
VAR10->VAR4 = VAR4;
VAR10->VAR15 = *VAR6;
VAR10->VAR16 = *VAR8;



if (VAR2 == NULL)
return (VAR10);


VAR12 = VAR2;


while (VAR2 != NULL && VAR2->VAR14 <= VAR3) {
VAR11 = VAR2;
VAR2 = VAR2->VAR17;
}

VAR10->VAR17 = VAR2;

if (VAR11 == NULL) { 
return (VAR10);
} else {
VAR11->VAR17 = VAR10;
return (VAR12);
}
}