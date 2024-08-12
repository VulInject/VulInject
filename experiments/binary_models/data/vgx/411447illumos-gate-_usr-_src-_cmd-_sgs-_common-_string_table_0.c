VAR1
FUN1(VAR2 *VAR3)
{
assert(VAR3->VAR4 > 0);

if ((VAR3->VAR5 & VAR6) == 0) {
VAR3->VAR5 |= VAR7;
return (VAR3->VAR4);
}

if ((VAR3->VAR5 & VAR7) == 0) {
VAR8		*VAR9;
void		*VAR10;

VAR3->VAR5 |= VAR7;

VAR3->VAR11 = FUN2(VAR3->VAR12);
if ((VAR3->VAR13 = calloc(VAR3->VAR11,
sizeof (*VAR3->VAR13))) == NULL)
return (0);


if ((VAR9 = FUN3(VAR3->VAR14)) == NULL) {

if (FUN4(VAR3->VAR14) == 0) {
assert(VAR3->VAR15 == 1);
return (VAR3->VAR15);
}
return (0);
}

while (VAR9) {
VAR16	*VAR17;


for (VAR17 = FUN3(VAR9->VAR18); VAR17;
VAR17 = FUN5(VAR9->VAR18, VAR17)) {
if (FUN6(VAR3, VAR17->VAR19,
VAR9->VAR20) == -1)
return (0);
}


VAR10 = NULL;
while ((VAR17 = FUN7(VAR9->VAR18,
&VAR10)) != NULL)
free(VAR17);
FUN8(VAR9->VAR18);
free(VAR9->VAR18);
VAR9->VAR18 = NULL;


VAR9 = FUN5(VAR3->VAR14, VAR9);
}


VAR10 = NULL;
while ((VAR9 = FUN7(VAR3->VAR14,
&VAR10)) != NULL)
free(VAR9);
FUN8(VAR3->VAR14);
free(VAR3->VAR14);
VAR3->VAR14 = 0;
}

assert(VAR3->VAR15 > 0);
assert(VAR3->VAR4 >= VAR3->VAR15);

return (VAR3->VAR15);
}