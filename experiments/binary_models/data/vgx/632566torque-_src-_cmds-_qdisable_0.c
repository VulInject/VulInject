int
main(int argc, char **argv)
{


int VAR1;  
char *VAR2; 
char *VAR3; 

if (argc == 1)
{
fprintf(VAR4, "");
FUN1(1);
}
else if (argc > 1 && argv[1][0] == '')
{

fprintf(VAR4, "");
FUN1(1);
}

for (VAR1 = 1; VAR1 < argc; VAR1++)
if (FUN2(argv[VAR1], &VAR2, &VAR3) == 0)
FUN3(VAR2, VAR3);
else
{
fprintf(VAR4, "",
argv[VAR1]);
VAR5 = 1;
}