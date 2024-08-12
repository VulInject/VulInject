int
FUN1(
const char *VAR1,
char *VAR2, size_t VAR3,
int *VAR4, VAR5 **VAR6,
int VAR7,
time_t VAR8,
char *VAR9, size_t VAR10
)
{

struct VAR11  *VAR12 = NULL;
VAR13 *VAR14       = NULL;
int VAR15                   = VAR16;
int              VAR17 = 0;
bool VAR18          = false;

FUN2(("", VAR1));
FUN3(VAR14);

if (!VAR15)
{

struct VAR11 *VAR19;
VAR19 = (struct VAR11*)calloc(2, sizeof(struct VAR11));

if (VAR19 != NULL)
{
VAR19[0].VAR20     = strdup("");
VAR19[0].VAR21 = &VAR19[1];
VAR19[1].VAR20     = strdup("");
VAR19[1].VAR21 = NULL;
VAR12 = VAR19;
}
else
FUN4(VAR15 = VAR22);
}

do
{

struct VAR23 *VAR24  = NULL;

struct VAR23 *VAR25  = NULL;
int                  VAR26 = 0;

if (!VAR15)
{
pthread_mutex_lock(&VAR14->VAR27);
FUN2(("",
VAR14->VAR28, VAR1, (void*)VAR12));
VAR24 = FUN5(VAR14->VAR28, (char*)VAR1, (struct VAR29*)VAR12, NULL);
pthread_mutex_unlock(&VAR14->VAR27);
}

if (VAR15)
break;

if (VAR1 != NULL)
{
VAR25 = VAR24;

if (!VAR15 && VAR25 && strcmp(VAR25->VAR20, VAR1) != 0)
FUN4(VAR15 = VAR30);

if (!VAR15 && VAR25)
VAR15 = FUN6(VAR25, &VAR18, &VAR26, VAR9, VAR10);

if (!VAR15)
{
unsigned VAR31 = 0;

if (VAR18)
VAR31 |= VAR32;

if ((VAR18 && VAR7)  ||  !VAR25)
VAR31 |= VAR33;

if (!FUN7(VAR14, VAR1, NULL, VAR31))
FUN4(VAR15 = VAR34);
}
}
else 
{
bool VAR35 = false;

struct VAR23 *VAR36;

for (VAR36 = VAR24;  !VAR15 && VAR36;  VAR36 = VAR36->VAR21)
{
unsigned VAR31 = 0;
VAR15 = FUN6(VAR36, &VAR18, &VAR26,
VAR9, VAR10);

if (VAR15)  break;

if (!VAR18  &&  VAR35)
continue;  

if (VAR18)
VAR31 |= VAR32;

if (VAR18 && VAR7)
VAR31 |= VAR33;

if (FUN7(VAR14, VAR36->VAR20, NULL, VAR31))
{
VAR25 = VAR36;
VAR35  = true;
}
else
VAR25 = NULL;

if (VAR25 && VAR18)
break;
}

if (!VAR15 && !VAR35)
{
FUN8(VAR14);
FUN4(VAR15 = VAR34);
}
} 

if (VAR25)
FUN2(("", VAR25->VAR20));

if (!VAR15 && !VAR25)
FUN4(VAR15 = VAR37);

if (!VAR15  &&  VAR18)
{
FUN9(VAR2, VAR25->VAR20, VAR3);

if (VAR4)
*VAR4 = VAR26;

if (VAR6)
{
VAR15 = FUN10(VAR14, VAR25->VAR20, VAR6, VAR9, VAR10);
*VAR6 = (VAR5*)malloc(sizeof(VAR5));
(*VAR6)->VAR38 = (*VAR6)->VAR39 = (char**)calloc(6, sizeof(char*));
asprintf(&(*VAR6)->VAR38[0], "", (long)FUN11(NULL));
asprintf(&(*VAR6)->VAR38[1], "", (long)FUN11(NULL));
asprintf(&(*VAR6)->VAR38[2], "", (long)FUN11(NULL));
asprintf(&(*VAR6)->VAR38[3], "", 0);
asprintf(&(*VAR6)->VAR38[4], "", 0);
(*VAR6)->VAR38[5] = NULL;
}


if (VAR7)
{
pthread_mutex_lock(&VAR14->VAR27);

FUN2(("", VAR25->VAR20));
FUN12(VAR14->VAR28, VAR25->VAR20, VAR40"");
pthread_mutex_unlock(&VAR14->VAR27);
}

}

if (VAR24 != NULL)
FUN13(VAR24);

if (!VAR15  &&  !VAR18)
{
if (FUN11(NULL) < VAR8)
sleep(1);    
else
FUN4(VAR15 = VAR41);
}
}
while (!(VAR15  ||  VAR18));

free(VAR12[0].VAR20);
free(VAR12[1].VAR20);
free(VAR12);

FUN14(VAR14);

FUN2(("", VAR15));

return VAR15;
}



bool
FUN8(VAR13 *VAR14)
{
drmaa_job_iter_t VAR42;
bool VAR43 = false;
VAR44 *VAR45;

pthread_mutex_lock(&VAR14->VAR46);
FUN15(VAR14, &VAR42);

while ((VAR45 = FUN16(&VAR42)) != NULL)
{
FUN2(("",
VAR45->VAR1, VAR45->VAR47));
VAR43 = true;
}

FUN17(VAR14->VAR48);

VAR14->VAR48 = (VAR44**)calloc(VAR49, sizeof(VAR44*));
pthread_mutex_unlock(&VAR14->VAR46);

assert(!VAR43);
return !VAR43;
}



int
FUN18(int *VAR50, int VAR4, char *VAR9, size_t VAR10)
{
*VAR50 = (VAR4 < 128);
return VAR16;
}

int
FUN19(int *VAR26, int VAR4, char *VAR9, size_t VAR10)
{
*VAR26 = VAR4 & 0x7f;
return VAR16;
}

int
FUN20(int *VAR51, int VAR4, char *VAR9, size_t VAR10)
{
*VAR51 = (VAR4 >= 128);
return VAR16;
}

int
FUN21(char *signal, size_t VAR52, int VAR4, char *VAR9, size_t VAR10)
{
int VAR53 = VAR4 & 0x7f; 
case VAR54:  FUN9( signal, #VAR54, VAR52 );  break;

switch (VAR53)
{

FUN22(VAR55)
FUN22(VAR56)
FUN22(VAR57)
FUN22(VAR58)
FUN22(VAR59)
FUN22(VAR60)
FUN22(VAR61)
FUN22(VAR62)
FUN22(VAR63)
FUN22(VAR64)
FUN22(VAR65)
FUN22(VAR66)
FUN22(VAR67)
FUN22(VAR68)
FUN22(VAR69)
FUN22(VAR70)
FUN22(VAR71)
FUN22(VAR72)
FUN22(VAR73)

FUN22(VAR74)
FUN22(VAR75)
FUN22(VAR76)
FUN22(VAR77)
FUN22(VAR78)
FUN22(VAR79)
FUN22(VAR80)
FUN22(VAR81)
FUN22(VAR82)

default:

FUN9(signal, VAR83[VAR53], VAR52);
snprintf(signal, VAR52, "", VAR53);
break;
}

return VAR16;
}


int
FUN23(int *VAR84, int VAR4, char *VAR9, size_t VAR10)
{

*VAR84 = 0;
return VAR16;
}