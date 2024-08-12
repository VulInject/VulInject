#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    long * VAR5;
    VAR5 = NULL;
    if(VAR4==5)
    {
        VAR5 = (long *)malloc(100*sizeof(long));
        if (VAR5 == NULL) {FUN2(-1);}
        {
            size_t VAR6;
            for(VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR5[VAR6] = 5L;
            }
        }
        free(VAR5);
    }
    if(VAR4==5)
    {
        FUN3(VAR5[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}