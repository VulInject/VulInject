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

FUN1(VAR5);
}



static void FUN3(

char *VAR2,
char *VAR3)

{
int VAR6 = 0;
int VAR7;         
int VAR8;       
char *VAR9;   


static struct attropl VAR10 =
{
NULL, (char *)"", NULL, (char *)"", VAR11
};

if ((VAR7 = FUN4(VAR3)) > 0)
{
VAR8 = FUN5(VAR7, VAR12, VAR13, VAR2, &VAR10, NULL, &VAR6);

if (VAR8 != 0)
{
VAR9 = FUN6(VAR7);

if (VAR9 != NULL)
{
fprintf(VAR4, "", VAR9);
free(VAR9);
}
else
{
fprintf(VAR4, "",
VAR6,
FUN7(VAR6));
}

if (FUN8(VAR2))
fprintf(VAR4, "", VAR2);

if (FUN8(VAR3))
fprintf(VAR4, "", VAR3);

fprintf(VAR4, "");

VAR5 = 2;
}