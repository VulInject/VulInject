void
FUN1(int argc, char **argv)
{
int VAR1, VAR2, VAR3;
char *VAR4, *VAR5;
Tokenrow VAR6;
extern void FUN2(void);
VAR7 *VAR8[ VAR9 ] = { 0 };
int   VAR10 = 0;

FUN2();
while ((VAR1 = FUN3(argc, argv, "")) != -1)
switch (VAR1) {
case '':
for (VAR3=0; VAR3<VAR9; VAR3++)
if (VAR11[VAR3].VAR12==1)
VAR11[VAR3].VAR13 = 1;
break;
case '':
VAR8[ VAR10++ ] = FUN4( (VAR7 *)VAR14, strlen( VAR14 ), 0 );
break;
case '':
case '':
FUN5("", -1, VAR14);
FUN6(3, &VAR6);
FUN7(&VAR6, 1);
FUN8(&VAR6, VAR1);
FUN9();
break;
case '':
VAR15++;
break;
case '':
fprintf(VAR16, "", argv[0], VAR17);
break;
case '':
VAR18++;
break;
case '':
VAR19++;
break;
default:
break;
}
VAR5 = "";
VAR4 = "";
VAR2 = 0;
if (VAR20<argc) {
VAR5 = FUN10( argv[VAR20] );
VAR4 = (char*)FUN4((VAR7*)argv[VAR20], strlen(argv[VAR20]), 0);
if ((VAR2 = open(VAR4, 0)) <= 0)
FUN11(VAR21, "", VAR4);
}
if (VAR20+1<argc) {
int VAR22;
VAR22 = creat(argv[VAR20+1], VAR23 | VAR24);
VAR22 = creat(argv[VAR20+1], 0666);
if (VAR22<0)
FUN11(VAR21, "", argv[VAR20+1]);
FUN12(VAR22, 1);
}
if(VAR15)
FUN13(VAR4);
VAR11[VAR9-1].VAR12 = 0;
VAR11[VAR9-1].VAR25 = VAR5;

for( VAR3 = 0; VAR3 < VAR10; VAR3++ )
FUN14( (char *)VAR8[ VAR3 ] );

FUN5(VAR4, VAR2, NULL);
}