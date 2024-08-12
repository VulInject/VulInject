static int FUN1(VAR1 *VAR2)			
{
const char *VAR3 = FUN2(VAR2, 1);
int VAR4,VAR5=FUN3(VAR2);
char **argv;

if (!VAR6)
return FUN4(VAR2, "");

FUN5();

argv = malloc((VAR5+1)*sizeof(char*));
if (argv==NULL) return FUN4(VAR2,"");
argv[0] = (char*)VAR3;
for (VAR4=1; VAR4<VAR5; VAR4++) argv[VAR4] = (char*)FUN2(VAR2, VAR4+1);
argv[VAR4] = NULL;
execvp(VAR3,argv);
free(argv);
return FUN6(VAR2, VAR3);
}