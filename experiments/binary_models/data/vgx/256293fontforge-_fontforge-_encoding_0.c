struct VAR1 *FUN1(char *VAR2,char *VAR3,char *VAR4,
int VAR5) {
struct VAR1 *VAR6 = malloc(sizeof(struct VAR1));
char *VAR7 = strrchr(VAR2,'');
VAR8 *VAR9;
int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
char VAR16[100];

while ( VAR7>VAR2 && FUN2(VAR7[-1]))
--VAR7;
VAR6->VAR5 = VAR6->VAR17 = FUN3(VAR7,NULL,10);
if ( VAR5>VAR6->VAR17 )
VAR6->VAR17 = VAR5;
VAR6->VAR3 = copy(VAR3);
VAR6->VAR4 = copy(VAR4);
VAR6->VAR18 = NULL;
VAR6->VAR19 = VAR6->VAR20 = 0;
VAR6->VAR21 = NULL; VAR6->VAR16 = NULL;
VAR6->VAR22 = VAR23;
VAR23 = VAR6;

VAR9 = fopen( VAR2,"" );
if ( VAR9==NULL ) {
FUN4(FUN5(""),FUN5(""), VAR2 );
} else if ( fscanf( VAR9, "", &VAR6->VAR19, &VAR6->VAR20 )!=2 ) {
FUN4(FUN5(""),FUN5("%s is not a cidmap VAR2, please VAR24\VAR25:
fprintf( VAR26, FUN5("%s is not a cidmap VAR2, please VAR24\VAR25:
fclose(VAR9);
} else {
VAR6->VAR21 = calloc(VAR6->VAR20+1,sizeof(VAR27));
VAR6->VAR16 = calloc(VAR6->VAR20+1,sizeof(char *));
while ( 1 ) {
VAR13=fscanf( VAR9, "", &VAR10, &VAR11, (unsigned *) &VAR12 );
if ( VAR13<=0 )
break;
if ( VAR10>VAR6->VAR20 )
continue;
if ( VAR13==3 ) {
if ( VAR11>VAR6->VAR20 ) VAR11 = VAR6->VAR20;
for ( VAR14=VAR10; VAR14<=VAR11; ++VAR14 )
VAR6->VAR21[VAR14] = VAR12++;
} else if ( VAR13==1 ) {
if ( fscanf(VAR9,"", (unsigned *) &VAR12 )==1 ) {
VAR6->VAR21[VAR10] = VAR12;
VAR15 = getc(VAR9);
while ( VAR15=='' ) {
if ( fscanf(VAR9,"", (unsigned *) &VAR12 )==1 ) {
struct VAR28 *VAR29 = FUN6(sizeof(struct VAR28));
VAR29->VAR22 = VAR6->VAR18;
VAR6->VAR18 = VAR29;
VAR29->VAR12 = VAR12;
VAR29->VAR30 = VAR10;
}
VAR15 = getc(VAR9);
}
FUN7(VAR15,VAR9);
} else if ( fscanf(VAR9,"", VAR16 )==1 )
VAR6->VAR16[VAR10] = copy(VAR16);
}
}
fclose(VAR9);
}
return( VAR6 );
}