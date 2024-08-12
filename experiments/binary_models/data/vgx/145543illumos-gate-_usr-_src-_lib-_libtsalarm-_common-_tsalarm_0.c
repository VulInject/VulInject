int
FUN1(uint32_t VAR1, VAR2 *VAR3)
{
int		VAR4;
VAR5	*VAR6 = NULL;
VAR7	*VAR8 = NULL;
pcp_msg_t	VAR9;
pcp_msg_t	VAR10;
int		VAR11 = VAR12;
int		VAR13;


for (VAR13 = 1; VAR13 <= VAR14; VAR13++) {
if ((VAR4 = FUN2(VAR15)) < 0) {
if (VAR13 == VAR14) {
VAR11 = VAR16;
goto VAR17;
}
(void) sleep(VAR18);
} else
break;
}


VAR6 = malloc(sizeof (VAR5));
if (VAR6 == NULL) {
VAR11 = VAR19;
goto VAR17;
}
VAR6->VAR20 = VAR21;
VAR6->VAR22 = VAR1;

VAR9.VAR23 = VAR24;
VAR9.VAR25 = 0;
VAR9.VAR26 = sizeof (VAR5);
VAR9.VAR27 = (VAR28 *)VAR6;


if (FUN3(VAR4, &VAR9, &VAR10,
VAR18) < 0) {

(void) sleep(VAR18);

if (FUN3(VAR4, &VAR9, &VAR10,
VAR18) < 0) {
VAR11 = VAR29;
goto VAR17;
}
}


if ((VAR8 = (VAR7 *)VAR10.VAR27) == NULL)
goto VAR17;


if (VAR10.VAR23 != VAR30) {
VAR11 = VAR31;
goto VAR17;
}

if (VAR8->VAR32 == VAR33) {
VAR11 = VAR34;
goto VAR17;
}

if (VAR8->VAR3 == VAR35) {
VAR11 = VAR34;
goto VAR17;
}

*VAR3 = VAR8->VAR3;

VAR17:
if (VAR6 != NULL)
free(VAR6);


if (VAR8 != NULL)
free(VAR8);


(void) FUN4(VAR4);

return (VAR11);
}