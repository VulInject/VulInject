static void		FUN1();
static void		FUN2(int);
static void		FUN3();
static void		FUN4();
static void		FUN5();
static void		FUN6();



int
main(int argc, char *argv[])
{
int		VAR1;
extern char	*VAR2;
extern int	VAR3;
extern int	VAR4;
char *	VAR5;
struct rlimit VAR6;
int VAR7 = 4096;

(void) FUN7(VAR8, "");
if ((VAR5 = strrchr(argv[0], '')) == NULL)
VAR5 = argv[0];
else
VAR5++;


FUN8(VAR5, VAR9|VAR10|VAR11, VAR12);

VAR13 = VAR14;

VAR4 = 0;
while((VAR1 = getopt(argc, (char * const *)argv, "")) != VAR15)
switch(VAR1)
{
case '':
VAR16 = VAR17;
syslog(VAR18, "");
break;

case '':
VAR19++;
break;

case '':
if ((VAR20 = FUN9(VAR2)) < 1)
VAR20 = 1;
syslog(VAR18, "", VAR20);
break;

case '':
if ((VAR21 = FUN9(VAR2)) < 1)
VAR21 = 1;
syslog(VAR18, "", VAR21);
break;

case '':
if ((VAR22 = FUN9(VAR2)) < 0)
VAR22 = 0;
syslog(VAR18, "", VAR22);
break;

case '':
if ((VAR7 = FUN9(VAR2)) < 16)
VAR7 = 4096;
syslog(VAR18, "", VAR7);
break;

case '':
if (VAR3 == '') {
FUN4 ();
FUN10 (0);
} else
FUN11 ("", argv[0], VAR3);
}


VAR6.VAR23 = VAR6.VAR24 = VAR7;
FUN12(VAR25, &VAR6);
FUN13(VAR25, &VAR6);
(void) FUN14(-1, -1);
syslog(VAR18, "",
VAR6.VAR24, (VAR6.VAR24 - 12)/ 2);

VAR26 = VAR27;

FUN15();

FUN1();

FUN16(1);	

return (0);
}