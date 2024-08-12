int
main(int argc, char *argv[])
{
int			 VAR1;
struct VAR2	*VAR3;
int			 VAR4 = VAR5;

while ((VAR1 = getopt(argc, argv, "")) != -1)
switch (VAR1) {
default:
FUN1();
return (VAR6);
}
argc -= VAR7;
argv += VAR7;

if ((VAR3 = FUN2(argc, argv)) == NULL)
return (VAR6);

switch (VAR3->VAR8) {
case VAR9:
break;
case VAR10:
if (FUN3("", NULL) == -1)
FUN4(VAR6, "");
VAR4 = FUN5(VAR3);
break;
}

return (VAR4);
}

struct VAR11 {
const struct VAR2	*VAR12;
int				 VAR4;

VAR13			*VAR14;
int				 VAR15;
unsigned int			 VAR16;
struct event			 VAR17;
struct event			 VAR18;
struct event			 VAR19;
};