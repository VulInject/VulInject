int FUN1(

VAR1 **VAR2)

{
int VAR3 = (*VAR2)->VAR4;

FUN2(*VAR2,VAR5, NULL, VAR6);
int VAR7 = FUN3(VAR3);
*VAR2 = FUN4(VAR3);
return VAR7;
} 


int FUN5(

int VAR3)

{
char  VAR8[VAR9];
char *VAR10 = strdup(VAR11.FUN6(VAR3));

snprintf(VAR8, sizeof(VAR8), "",
VAR10);
FUN7(VAR12, VAR13, VAR5, VAR8);


FUN8(NULL, VAR10);

return(VAR14);
} 



int FUN9(

unsigned int &VAR15)

{
VAR1                    *VAR2;
time_t                  VAR16 = FUN10(NULL);
char                    VAR8[VAR9];

if (VAR17 == true)
return(-1);

pthread_mutex_lock(VAR18);

for (; VAR15 < VAR19.FUN11(); VAR15++)
{
VAR20 &VAR21 = VAR19[VAR15];
if (VAR16 - VAR21.VAR22 > VAR23)
{ 
int VAR3 = VAR21.VAR3;
if (VAR3 != -1)
{
if (VAR21.VAR24 >= VAR25)
{

VAR21.VAR3 = -1;

pthread_mutex_unlock(VAR18);

if ((VAR2 = FUN4(VAR3)) != NULL)
{
snprintf(VAR8, sizeof(VAR8),
"",
VAR11.FUN6(VAR3), VAR25);
FUN7(VAR12, VAR13, VAR5, VAR8);

FUN12(VAR2);
}

pthread_mutex_lock(VAR18);
}
else
{
VAR21.VAR24++;
VAR21.VAR22 = VAR16;
pthread_mutex_unlock(VAR18);

return(VAR3);
}
}
}
}

pthread_mutex_unlock(VAR18);

return(-1);
} 




int FUN13()

{
unsigned int  VAR15 = 0;
int           VAR3;
VAR1          *VAR2;

while ((VAR3 = FUN9(VAR15)) != -1)
{
if ((VAR2 = FUN4(VAR3)) == NULL)
{
FUN3(VAR3);
}
else
{
mutex_mgr VAR26 = FUN14(VAR2->VAR27, true);

if (VAR2->VAR28.VAR29 == VAR30)
{
FUN3(VAR3);
}
else
{
VAR26.FUN15();


FUN5(VAR3);
}
}
} 

return(VAR14);
} 






void *FUN16(

void *VAR31)

{
while (1)
{
FUN13();

sleep(VAR32);
}

return(NULL);
}