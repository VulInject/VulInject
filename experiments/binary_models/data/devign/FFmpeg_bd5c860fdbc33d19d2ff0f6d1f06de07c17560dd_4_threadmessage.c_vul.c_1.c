void FUN1(VAR1 **VAR2)
{
    if (*VAR2)
    {
        FUN2(*VAR2);
        FUN3(&(*VAR2)->VAR3);
        pthread_cond_destroy(&(*VAR2)->VAR4);
        pthread_mutex_destroy(&(*VAR2)->VAR5);
        FUN4(VAR2);
    }
}