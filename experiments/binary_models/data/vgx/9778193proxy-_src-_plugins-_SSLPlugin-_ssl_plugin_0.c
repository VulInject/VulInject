static struct VAR1 *FUN1(SOCKET VAR2){
struct VAR1 *VAR3 = NULL;

pthread_mutex_lock(&VAR4);
for(VAR3 = VAR5; VAR3; VAR3 = VAR3->VAR6)
if(VAR3->VAR2 == VAR2) break;
pthread_mutex_unlock(&VAR4);
return VAR3;
}