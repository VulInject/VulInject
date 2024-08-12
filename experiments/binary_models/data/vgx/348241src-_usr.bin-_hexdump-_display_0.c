int
FUN1(char **argv)
{
static int VAR1;
int VAR2;

if (argv) {
VAR3 = argv;
return(1);
}
for (;;) {
if (*VAR3) {
if (!(FUN2(*VAR3, "", stdin))) {
FUN3("", *VAR3);
VAR4 = VAR1 = 1;
++VAR3;
continue;
}
VAR2 = VAR1 = 1;
} else {
if (VAR1++)
return(0);
VAR2 = 0;
}
if (VAR5 != NULL)
FUN4(stdin, VAR5, VAR6, VAR7);
if (VAR8)
FUN5(VAR2 ? *VAR3 : "", VAR2);
if (*VAR3)
++VAR3;
if (!VAR8)
return(1);
}

}