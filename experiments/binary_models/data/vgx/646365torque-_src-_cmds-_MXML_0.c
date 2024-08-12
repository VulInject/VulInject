int FUN1(

VAR1  *VAR2,     
char    *VAR3, 
VAR1 **VAR4)    

{
if (VAR4 == NULL)
return(VAR5);

if (VAR4 != NULL)
*VAR4 = NULL;

if ((VAR2 == NULL) || (VAR3 == NULL))
{
return(VAR5);
}

if (FUN2(VAR2, VAR3, NULL, VAR4) == VAR6)
{


return(VAR6);
}



if ((*VAR4 = (VAR1 *)calloc(1, sizeof(VAR1))) == NULL)
{
return(VAR5);
}

FUN3(VAR2, *VAR4);

if (VAR3 != NULL)
{
(*VAR4)->VAR7 = strdup(VAR3);

if ((*VAR4)->VAR7 == NULL)
{
return(VAR5);
}
}

return(VAR6);
}  




int FUN4(

VAR1 **VAR2,    
const char    *VAR7) 

{


if (VAR2 == NULL)
{
return(VAR5);
}

if ((*VAR2 = (VAR1 *)calloc(1, sizeof(VAR1))) == NULL)
{
return(VAR5);
}

if ((VAR7 != NULL) && (VAR7[0] != ''))
{
(*VAR2)->VAR7 = strdup(VAR7);

if ((*VAR2)->VAR7 == NULL)
{
return(VAR5);
}
}

return(VAR6);
}  




int FUN5(

VAR1 **VAR8)  

{
int VAR9;

VAR1 *VAR2;

if (VAR8 == NULL)
{
return(VAR5);
}

VAR2 = *VAR8;

if (VAR2 == NULL)
{
return(VAR6);
}

if (VAR2->VAR10 != NULL)
{


for (VAR9 = 0;VAR9 < VAR2->VAR11;VAR9++)
{
if (VAR2->VAR10[VAR9] == NULL)
continue;

FUN5(&VAR2->VAR10[VAR9]);
}  

free(VAR2->VAR10);
}  



if (VAR2->VAR12 != NULL)
{
for (VAR9 = 0;VAR9 < VAR2->VAR13;VAR9++)
{
if (VAR2->VAR12[VAR9] == NULL)
break;

free(VAR2->VAR12[VAR9]);

if ((VAR2->VAR14 != NULL) && (VAR2->VAR14[VAR9] != NULL))
free(VAR2->VAR14[VAR9]);
}  

if (VAR2->VAR14 != NULL)
{
free(VAR2->VAR14);
}

if (VAR2->VAR12 != NULL)
{
free(VAR2->VAR12);
}
}    



if (VAR2->VAR7 != NULL)
free(VAR2->VAR7);

if (VAR2->VAR15 != NULL)
free(VAR2->VAR15);

free(VAR2);

*VAR8 = NULL;

return(VAR6);
}  





int FUN6(

VAR1 *VAR2,       
char   *VAR16,       
void   *VAR17,       
enum MDataFormatEnum VAR18)  

{
int  VAR19;
int  VAR20;

int  VAR21;

char VAR22[VAR23];

char *VAR24;



if ((VAR2 == NULL) || (VAR16 == NULL) || (VAR17 == NULL))
{
return(VAR5);
}

switch (VAR18)
{

case VAR25:

default:

VAR24 = (char *)VAR17;

break;

case VAR26:

sprintf(VAR22, "",
*(int *)VAR17);

VAR24 = VAR22;

break;

case VAR27:

sprintf(VAR22, "",
*(long *)VAR17);

VAR24 = VAR22;

break;

case VAR28:

sprintf(VAR22, "",
*(double *)VAR17);

VAR24 = VAR22;

break;
}  



if (VAR2->VAR12 == NULL)
{
if ((VAR2->VAR12 = (char **)calloc(1, sizeof(char *) * VAR29)) == NULL)
{
fprintf(VAR30,"");

return(VAR5);
}

if ((VAR2->VAR14  = (char **)calloc(1, sizeof(char *) * VAR29)) == NULL)
{
fprintf(VAR30,"");

return(VAR5);
}

VAR2->VAR31 = VAR29;
VAR2->VAR13 = 0;
}  





VAR20 = 0;

VAR21     = 0;

for (VAR19 = 0;VAR19 < VAR2->VAR13;VAR19++)
{
VAR21 = strcmp(VAR2->VAR12[VAR19], VAR16);

if (VAR21 > 0)
break;

if (VAR21 == 0)
{
VAR20 = VAR19;

break;
}

VAR20 = VAR19 + 1;
}  

if (VAR19 >= VAR2->VAR13)
{
VAR20 = VAR19;

if (VAR19 >= VAR2->VAR31)
{
char **VAR32;
char **VAR33;



VAR32 = (char **)realloc(VAR2->VAR12,sizeof(char *) * FUN7(16,VAR2->VAR31 << 1));

if (VAR32 == NULL)
{


return(VAR5);
}

VAR2->VAR12 = VAR32;

VAR33 = (char **)realloc(VAR2->VAR14,sizeof(char *) * FUN7(16,VAR2->VAR31 << 1));

if (VAR33 == NULL)
{


return(VAR5);
}

VAR2->VAR14 = VAR33;


VAR2->VAR31 <<= 1;
}  
}    

if (VAR19 >= VAR2->VAR13)
{


return(VAR6);
}



if (VAR21 != 0)
{
for (VAR19 = VAR2->VAR13 - 1;VAR19 >= VAR20;VAR19--)
{
VAR2->VAR14[VAR19 + 1]  = VAR2->VAR14[VAR19];
VAR2->VAR12[VAR19 + 1] = VAR2->VAR12[VAR19];
}  

VAR2->VAR14[VAR19 + 1]  = NULL;

VAR2->VAR12[VAR19 + 1] = NULL;
}  

if (VAR2->VAR14[VAR20] != NULL)
free(VAR2->VAR14[VAR20]);

VAR2->VAR14[VAR20] = strdup(VAR24);

if (VAR2->VAR14[VAR20] == NULL)
{


return(VAR5);
}

if ((VAR21 != 0) || (VAR2->VAR12[VAR20] == NULL))
{
VAR2->VAR12[VAR20] = strdup(VAR16);

if (VAR2->VAR12[VAR20] == NULL)
{


return(VAR5);
}

VAR2->VAR13++;
}

return(VAR6);
}  




int FUN8(

VAR1 *VAR2,      
char   *VAR12,  
char   *VAR14,   
char    VAR34)  

{
int   VAR35;
int   VAR36;

char  VAR37[VAR23];

if ((VAR2 == NULL) || (VAR12 == NULL) || (VAR14 == NULL))
{
return(VAR5);
}

VAR35 = -1;

if (FUN9(VAR2, VAR12, &VAR35, VAR37, sizeof(VAR37)) == VAR6)
{
char VAR38[2];

char *VAR33;

VAR36 = strlen(VAR2->VAR14[VAR35]) + strlen(VAR14) + 2;

VAR33 = (char *)realloc(VAR2->VAR14[VAR35], VAR36);

if (VAR33 == NULL)
{
return(VAR5);
}