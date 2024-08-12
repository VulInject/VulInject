#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    int VAR3;
    VAR3 = -1;
    if(VAR2==5)
    {
        VAR3 = VAR4 / 2 + 2; 
    }
    {
        size_t VAR5;
        int *VAR6;
        VAR6 = (int*)malloc(VAR3 * sizeof(int));
        if (VAR6 == NULL) {FUN2(-1);}
        for (VAR5 = 0; VAR5 < (VAR7)VAR3; VAR5++)
        {
            VAR6[VAR5] = 0; 
        }
        FUN3(VAR6[0]);
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}