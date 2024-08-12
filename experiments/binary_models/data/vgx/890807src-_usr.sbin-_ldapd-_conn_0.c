int
FUN1(struct VAR1 *VAR1)
{
int			 class;
struct VAR2		*VAR3;
VAR4			*VAR5;

++VAR6.VAR7;

if ((VAR3 = calloc(1, sizeof(*VAR3))) == NULL) {
FUN2("");
FUN3(VAR1);
return -1;
}

VAR3->VAR1 = VAR1;
VAR5 = VAR1->VAR8.VAR9;	

if ((VAR3->VAR10 = FUN4(&VAR1->VAR8, NULL)) == NULL) {
if (VAR11 != VAR12) {
FUN5("");
FUN6(VAR5, VAR1->VAR8.VAR13 - VAR5,
"",
VAR1->VAR8.VAR13 - VAR5);
FUN3(VAR1);
}
FUN7(VAR3);
return -1;
}
FUN8("", VAR1->VAR8.VAR9 - VAR5);


if (FUN9(VAR3->VAR10, "",
&VAR3->VAR14, &class, &VAR3->VAR15, &VAR3->VAR16) != 0) {
FUN5("");
FUN10(VAR3->VAR10, -1,
"", VAR1->VAR17);
FUN3(VAR1);
FUN7(VAR3);
return -1;
}

FUN10(VAR3->VAR10, VAR3->VAR15,
"", VAR1->VAR17);

FUN8("", VAR3->VAR15, VAR3->VAR14);
FUN11(VAR3);
return 0;
}