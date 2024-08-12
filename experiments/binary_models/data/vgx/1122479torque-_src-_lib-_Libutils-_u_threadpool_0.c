static void *FUN1(

void *VAR1)

{
VAR2     *VAR3 = (VAR2 *)VAR1;
int               VAR4 = VAR5;

void             *(*VAR6)(void *);
void             *VAR7;
VAR8        *VAR9;
tp_working_t      VAR10;

struct timespec   VAR11;

if (VAR3 == NULL)
{
FUN2(-1,VAR12, "");
return(NULL);
}

pthread_mutex_lock(&VAR3->VAR13);
FUN3(VAR14, VAR3);
VAR10.VAR15 = FUN4();


for (;;) 
{

FUN5(VAR16,&VAR17,NULL);
FUN6(VAR18,NULL);
FUN7(VAR19,NULL);

VAR3->VAR20++;


while (VAR3->VAR21 == VAR22)
{
pthread_mutex_unlock(&VAR3->VAR13);

sleep(1);

pthread_mutex_lock(&VAR3->VAR13);
}


while ((VAR3->VAR23 == NULL) &&
(!(VAR3->VAR24 & VAR25)))
{
if ((VAR3->VAR26 <= VAR3->VAR27) ||
(VAR3->VAR28 < 0))
{

FUN8(&VAR3->VAR29, &VAR3->VAR13);
}
else
{
FUN9(VAR30,&VAR11);
VAR11.VAR31 += VAR3->VAR28;
VAR4 = FUN10(&VAR3->VAR29, &VAR3->VAR13, &VAR11);

if (VAR4 == VAR32)
{
break;
}
}
}

if ((VAR4 == VAR32) && 
(VAR3->VAR26 > VAR3->VAR27) &&
(VAR3->VAR20 > 2))
{
VAR3->VAR20--;
break;
}

VAR3->VAR20--;


if (VAR3->VAR24 & VAR25)
break;

if ((VAR9 = VAR3->VAR23) != NULL)
{
VAR6 = VAR9->VAR33;
VAR7  = VAR9->VAR34;

VAR3->VAR23 = VAR9->VAR35;
if (VAR3->VAR36 == VAR9)
VAR3->VAR36 = NULL;

VAR10.VAR35 = VAR3->VAR37;
VAR3->VAR37 = &VAR10;

pthread_mutex_unlock(&VAR3->VAR13);
FUN3(VAR38,VAR3);
free(VAR9);


FUN11(VAR7);


FUN12(1); 
}
}


FUN12(1);


FUN13(0);
} 





int FUN14(

VAR2 **VAR39,           
int            VAR40,    
int            VAR41,    
int            VAR42)  

{
int           VAR43;
int           VAR4 = 0;
size_t        VAR44;

FUN15(&VAR17);

if ((VAR40 > VAR41) ||
(VAR41 < 1))
{

return(VAR45);
}

if ((*VAR39 = (VAR2 *)calloc(1, sizeof(VAR2))) == NULL)
{
return(VAR46);
}

memset(*VAR39,0,sizeof(VAR2));
pthread_mutex_init(&(*VAR39)->VAR13,NULL);
pthread_cond_init(&(*VAR39)->VAR29,NULL);
pthread_cond_init(&(*VAR39)->VAR47,NULL);
(*VAR39)->VAR27 = VAR40;
(*VAR39)->VAR48 = VAR41;
(*VAR39)->VAR28 = VAR42;
(*VAR39)->VAR21 = VAR22;


if ((VAR4 = pthread_attr_init(&(*VAR39)->VAR49)) != 0)
{
FUN16("");
FUN2(-1, VAR12, "");
return VAR4;
}

FUN17(&(*VAR39)->VAR49, &VAR44);
if (VAR44 < VAR50)
VAR44 = VAR50;
if (VAR44 > VAR51)
VAR44 = VAR51;

FUN18(&(*VAR39)->VAR49, VAR44);

FUN19(&(*VAR39)->VAR49,VAR52);


if ((*VAR39)->VAR28 < 0)
{
for (VAR43 = 0; VAR43 < (*VAR39)->VAR27; VAR43++)
{
if ((VAR4 = FUN20(*VAR39)) != 0)
{
return(VAR4);
}

(*VAR39)->VAR26++;
}
}

return(VAR4);
} 





int FUN21(

void         *(*VAR6)(void *),
void         *VAR7,
VAR2 *VAR3)

{
VAR8 *VAR53 = NULL;


if ((VAR53 = (VAR8 *)calloc(1, sizeof(VAR8))) == NULL)
{
return(VAR46);
}

VAR53->VAR35 = NULL;
VAR53->VAR33 = VAR6;
VAR53->VAR34  = VAR7;

pthread_mutex_lock(&VAR3->VAR13);

if (VAR3->VAR23 == NULL)
VAR3->VAR23 = VAR53;
else
VAR3->VAR36->VAR35 = VAR53;

VAR3->VAR36 = VAR53;

if (VAR3->VAR20 > 0)
FUN22(&VAR3->VAR29);
else if ((VAR3->VAR26 < VAR3->VAR48) &&
(FUN20(VAR3) == 0))
VAR3->VAR26++;

pthread_mutex_unlock(&VAR3->VAR13);

return(0);
} 



bool FUN23(

VAR2 *VAR3,
int           VAR54)

{
bool VAR55 = false;
int  VAR56;
bool VAR57 = ((VAR54 & VAR58) != 0);

pthread_mutex_lock(&VAR3->VAR13);

VAR56 = VAR3->VAR48 - VAR3->VAR26 + VAR3->VAR20;


if ((VAR57 == true) &&
(VAR56 < 3))
VAR55 = true;
else if (VAR57 == false)
{
if (VAR56 < 6)
VAR55 = true;
else
{
double VAR59 = VAR56;
VAR59 /= VAR3->VAR48;
if (VAR59 < 0.05)
VAR55 = true;
}
}

pthread_mutex_unlock(&VAR3->VAR13);

return(VAR55);
}