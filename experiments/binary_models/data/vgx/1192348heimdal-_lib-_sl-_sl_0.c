int
FUN1(VAR1 *VAR2, int argc, char **argv)
{
VAR1 *VAR3;
VAR3 = FUN2 (VAR2, argv[0], 0);
if (VAR3 == NULL)
return -1;
return (*VAR3->VAR4)(argc, argv);
}

struct VAR5 {
int VAR6;
char **VAR7;
};