static int
FUN1(void)
{
char VAR1;
int VAR2;

int VAR3[2];
pid_t VAR4;

(void) close(0);
(void) FUN2(2, 1);		

if (FUN3(VAR3) < 0)
return (-1);

if ((VAR4 = FUN4()) < 0)
return (-1);

if (VAR4 != 0) {

struct sigaction VAR5;

VAR5.VAR6 = VAR7;
(void) FUN5(&VAR5.VAR8);
VAR5.VAR9 = 0;

(void) FUN6(VAR10, &VAR5, NULL);	

(void) close(VAR3[1]);
if (read(VAR3[0], &VAR1, 1) == 1) {

FUN7(VAR11);
}

VAR2 = -1;
(void) FUN8(VAR4, &VAR2, 0, NULL);
if (FUN9(VAR2))
FUN7(FUN10(VAR2));
else
FUN7(-1);
}


VAR12 = VAR3[1];
(void) close(VAR3[0]);


(void) FUN11();
(void) FUN12(0077);

return (0);
}