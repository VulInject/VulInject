VAR1 FUN1(VAR2, VAR3)
char *VAR2;
int VAR3;
{
FUN2("");

if (VAR4.VAR5 == NULL)
return(NULL);

if (VAR2 == NULL)
FUN3(3);

return((VAR1) FUN4(VAR4.VAR5, VAR2, VAR3));


}

VAR1 FUN5(VAR2, VAR3, VAR6, VAR7)
char *VAR2;
int VAR3;
int     VAR6;
int (*VAR7)();
{
FUN2("");

if (VAR4.VAR5 == NULL)
return(NULL);

if (VAR2 == NULL)
FUN3(3);

return((VAR1) FUN6(VAR4.VAR5, VAR2, VAR3, VAR6, VAR7));


}

VAR1 FUN7(VAR3, VAR6)
int VAR3;
int     VAR6;
{
FUN2("");

if (VAR4.VAR5 == NULL)
return(NULL);


return((VAR1) FUN8(VAR4.VAR5, VAR3, VAR6));


}

void
FUN9(int VAR3)
{
FUN2("");

if (VAR4.VAR5 == NULL)
return;

VAR4.VAR5 = FUN10(VAR4.VAR5, VAR3);
}


void FUN11(void)
{

char VAR8[VAR9];
int VAR6; 
int VAR10;
int VAR11;
int VAR12; 

Np VAR13;

FUN2("");

strcpy(VAR8, "");
VAR6 = VAR14;
VAR10 = 1;
VAR11 = 0;
VAR12 = VAR15;



VAR13 = FUN12(VAR8, VAR6, VAR10, VAR11, VAR12);
FUN13(VAR13);
}

VAR1 FUN14(void)
{
FUN2("");

return(VAR4.VAR5);
}

void
FUN3(int VAR16)
{
if (VAR17 == NULL)
FUN3(7);

fprintf(VAR17, "");

if (VAR16 >= VAR18)
VAR16 = 0;

fprintf(VAR17, "", VAR19[VAR16]);

FUN15(1);
}