void
FUN1(void)
{
rscp_msg_t	VAR1;
struct timespec	VAR2;

int		VAR3;
ADM_state_t	VAR4;
int		VAR5 = 1;
char		VAR6[2];
char		VAR7[40];


FUN2();

VAR1.VAR8 = VAR9;
VAR1.VAR10  = 0;
VAR1.VAR11 = NULL;
FUN3(&VAR1);

VAR2.VAR12 = 0;
VAR2.VAR13  = VAR14;
FUN4(&VAR1, &VAR2, VAR15,
sizeof (VAR16));
if (*(int *)VAR1.VAR11 != VAR17) {
(void) fprintf(VAR18, "",
FUN5(""));
FUN6(-1);
}
FUN7(&VAR1);


(void) strcpy(VAR6, FUN8(""));



VAR19 = 1;
if (FUN9(&VAR20, NULL, VAR21, NULL) != 0) {
(void) fprintf(VAR18, "",
FUN5(""));
FUN6(-1);
}

if (signal(VAR22, VAR23) == VAR24) {
(void) fprintf(VAR18, "",
FUN5(""));
VAR19 = 0;
FUN6(-1);
}


(void) sprintf(VAR7, FUN5(""),
VAR6);
VAR3 = 0;
VAR4 = VAR25;
VAR26 = 1;
FUN10();
FUN11();
FUN12("", VAR7);

while (VAR5) {
while ((VAR3 = getch()) == VAR27)
;

if (VAR3 == 10) {
VAR4 = VAR25;
FUN13('');
FUN13('');
continue;
}

switch (VAR4) {
case VAR25:
if ((char)VAR3 == VAR6[0]) {
VAR4 = VAR28;
} else {
VAR4 = VAR29;
FUN13((char)VAR3);
}
break;

case VAR29:
FUN13((char)VAR3);
break;

case VAR28:
if ((char)VAR3 == '') {
FUN13('');
FUN13('');
VAR5 = 0;
} else {
VAR4 = VAR29;
FUN13((char)VAR3);
}
break;

default:
VAR4 = VAR29;
FUN13((char)VAR3);
}
}
FUN14();
VAR26 = 0;


VAR19 = 0;
(void) sleep(3);	


VAR1.VAR8 = VAR30;
VAR1.VAR10  = 0;
VAR1.VAR11 = NULL;
FUN3(&VAR1);

VAR2.VAR12 = 0;
VAR2.VAR13  = VAR14;
FUN4(&VAR1, &VAR2, VAR31,
sizeof (VAR32));
if (*(int *)VAR1.VAR11 != VAR17) {
(void) fprintf(VAR18, "",
FUN5(""));
VAR19 = 0;
FUN6(-1);
}
FUN7(&VAR1);

FUN15(VAR20, NULL);

}