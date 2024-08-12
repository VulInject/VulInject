void
FUN1(VAR1 **VAR2)
{
int VAR3;
VAR1 *VAR4;

for (VAR3 = 0;  VAR3 < VAR5;  VAR3++)
for (VAR4 = VAR2[VAR3];  VAR4 != NULL;)
{
VAR1 *VAR6 = VAR4;
VAR4 = VAR4->VAR7;
free(VAR6->VAR8);
free(VAR6);
}

free(VAR2);
}

bool
FUN2(
VAR9  *VAR10,
const char       *VAR8,
VAR1      *VAR11,
unsigned          VAR12
)
{
VAR1 **VAR3, **VAR13 = NULL;
unsigned VAR14 = FUN3(VAR8, strlen(VAR8), 0);
VAR14 &= VAR5 - 1;
pthread_mutex_lock(&VAR10->VAR15);

for (VAR3 = &VAR10->VAR16[ VAR14 ];  *VAR3 != NULL;  VAR3 = &(*VAR3)->VAR7)
{
if (!strcmp((*VAR3)->VAR8, VAR8))
{
VAR13 = VAR3;
break;
}
}

if (VAR13 && VAR11)
{
memcpy(VAR11, *VAR13, sizeof(VAR1));
VAR11->VAR7  = NULL;
VAR11->VAR8 = NULL;
}

if (VAR13)
{
if (VAR12 & VAR17)
(*VAR13)->VAR18 = true;

if (VAR12 & VAR19)
(*VAR13)->VAR18 = false;

if (VAR12 & VAR20)
(*VAR13)->VAR21 = true;

if (VAR12 & VAR22)
{
VAR1 *VAR23 = *VAR13;
*VAR13 = (*VAR13)->VAR7;
free(VAR23->VAR8);
free(VAR23);
}
}

pthread_mutex_unlock(&VAR10->VAR15);

return VAR13 != NULL;
}


void
FUN4(
VAR9 *VAR10,
VAR1 *VAR23
)
{
unsigned VAR14 = FUN3(VAR23->VAR8, strlen(VAR23->VAR8), 0);
VAR14 &= VAR5 - 1;
pthread_mutex_lock(&VAR10->VAR15);
VAR23->VAR24     = VAR10->VAR25 ++;
VAR23->VAR7           = VAR10->VAR16[ VAR14 ];
VAR10->VAR16[ VAR14 ] = VAR23;
pthread_mutex_unlock(&VAR10->VAR15);
}


void
FUN5(VAR9 *VAR10, VAR26 *VAR3)
{
VAR3->VAR10    = VAR10;
VAR3->VAR27 = VAR5 - 1;
VAR3->VAR28 = & VAR10->VAR16[ VAR3->VAR27 ];
}


VAR1 *
FUN6(VAR26 *VAR3)
{
VAR1 *VAR11;

while (*(VAR3->VAR28) == NULL)
{
if (VAR3->VAR27 != 0)
VAR3->VAR28 = & VAR3->VAR10->VAR16[ --VAR3->VAR27 ];
else return NULL;
}

VAR11 = *(VAR3->VAR28);

VAR3->VAR28 = & (*VAR3->VAR28)->VAR7;
return VAR11;
}