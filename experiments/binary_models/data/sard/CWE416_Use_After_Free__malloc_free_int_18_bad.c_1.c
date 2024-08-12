#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int * VAR4;
    VAR4 = NULL;
    goto VAR5;
VAR5:
    VAR4 = (int *)malloc(100*sizeof(int));
    if (VAR4 == NULL) {FUN2(-1);}
    {
        size_t VAR6;
        for(VAR6 = 0; VAR6 < 100; VAR6++)
        {
            VAR4[VAR6] = 5;
        }
    }
    free(VAR4);
    goto VAR7;
VAR7:
    FUN3(VAR4[0]);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}