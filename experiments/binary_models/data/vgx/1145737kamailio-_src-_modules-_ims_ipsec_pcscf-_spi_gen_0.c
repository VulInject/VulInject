int FUN1()
{
if(!VAR1) {
return 1;
}

FUN2();

int VAR2 = pthread_mutex_destroy(&VAR1->VAR3);
FUN3(VAR1);
return VAR2;
}