struct VAR1 *FUN1(struct VAR2 *VAR2, long long VAR3, int VAR4)
{

int VAR5 = FUN2(VAR3);
struct VAR1 *VAR6;

pthread_mutex_lock(&VAR2->mutex);

for(VAR6 = VAR2->VAR7[VAR5]; VAR6; VAR6 = VAR6->VAR8)
if(VAR6->VAR3 == VAR3)
break;

if(VAR6) {

if(VAR6->VAR9 == 0) {
VAR2->VAR9 ++;
FUN3(VAR2, VAR6);
}
VAR6->VAR9 ++;
pthread_mutex_unlock(&VAR2->mutex);
} else {

if(VAR2->VAR10 < VAR2->VAR11) {
VAR6 = malloc(sizeof(struct VAR1));
if(VAR6 == NULL)
FUN4();

VAR6->VAR12 = malloc(VAR2->VAR13);
if(VAR6->VAR12 == NULL)
FUN4();

VAR6->VAR2 = VAR2;
VAR6->VAR14 = VAR6->VAR15 = NULL;
VAR2->VAR10 ++;
} else {

while(VAR2->VAR16 == NULL) {
VAR2->VAR17 = VAR18;
FUN5(&VAR2->VAR19,
&VAR2->mutex);
}
VAR6 = VAR2->VAR16;
FUN3(VAR2, VAR6);
FUN6(VAR2, VAR6);
}


VAR6->VAR3 = VAR3;
VAR6->VAR4 = VAR4;
VAR6->VAR9 = 1;
VAR6->VAR20 = VAR21;
VAR6->VAR22 = VAR18;
FUN7(VAR2, VAR6);
VAR2->VAR9 ++;


pthread_mutex_unlock(&VAR2->mutex);
FUN8(VAR23, VAR6);
}

return VAR6;
}