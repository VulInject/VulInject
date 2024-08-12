static int
FUN1(void)
{
stmf_status_t			VAR1;
VAR2			*VAR3;
VAR4		*VAR5;
int				VAR6 = 0;

FUN2((FUN3(&VAR7->VAR8)) == 0);


VAR3 = FUN4(&VAR7->VAR9);

while (VAR3 != NULL) {
FUN5(&VAR3->VAR10, VAR11);

VAR5 = VAR3->VAR12;
if (VAR5 != NULL) {
VAR1 = FUN6(VAR5);
if (VAR1 == VAR13) {
VAR3->VAR12 = NULL;
(void) FUN7(VAR5);
} else {
VAR6 = VAR14;
break;
}
}

FUN8(&VAR3->VAR10);
VAR3 = FUN9(&VAR7->VAR9, VAR3);
}


if (VAR6 != 0) {
return (VAR6);
}


FUN10();


(void) FUN11(VAR7->VAR15);
FUN12(VAR7->VAR15);
VAR7->VAR15 = NULL;

return (0);
}