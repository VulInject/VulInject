#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    VAR5 * VAR6;
    VAR6 = NULL;
    if(VAR4==5)
    {
        VAR6 = (VAR5 *)malloc(100*sizeof(VAR5));
        if (VAR6 == NULL) {FUN2(-1);}
        {
            size_t VAR7;
            for(VAR7 = 0; VAR7 < 100; VAR7++)
            {
                VAR6[VAR7] = 5LL;
            }
        }
        free(VAR6);
    }
    if(VAR4==5)
    {
        FUN3(VAR6[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}