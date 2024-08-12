int
main(int argc, char *argv[])
{
int	VAR1;
void	(*VAR2)();
extern int	VAR3;
int		VAR4;

(void) FUN1(VAR5, "");

(void) FUN2(VAR6);

(void) FUN3(argv[0]);

while ((VAR1 = getopt(argc, argv, "")) != VAR7) {
switch (VAR1) {
case '':
VAR8 |= VAR9;
break;

case '':
VAR8 |= VAR10;
break;

case '':
VAR8 |= VAR11;
break;

case '':
VAR8 |= VAR12;
break;

default:
FUN4();
return (1);
}
}
VAR2 = signal(VAR13, VAR14);
if (VAR2 != VAR15)
(void) signal(VAR13, VAR2);
(void) signal(VAR16, VAR14);
(void) signal(VAR17, VAR14);
(void) signal(VAR18, VAR14);
(void) signal(VAR19, VAR14);
(void) signal(VAR20, VAR14);

if ((argc-VAR3) < 2) {
FUN4();
return (1);
}

VAR4 = FUN5(FUN6(argv[VAR3], 1),
FUN6(argv[VAR3+1], 1), &argv[VAR3+2], VAR8);

FUN7(VAR4);

}