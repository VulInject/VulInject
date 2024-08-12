#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    int VAR3;
    VAR3 = -1;
    if(VAR2==5)
    {
        fscanf(stdin, "", &VAR3);
    }
    {
        size_t VAR4;
        int *VAR5;
        VAR5 = (int*)malloc(VAR3 * sizeof(int));
        if (VAR5 == NULL) {FUN2(-1);}
        for (VAR4 = 0; VAR4 < (VAR6)VAR3; VAR4++)
        {
            VAR5[VAR4] = 0; 
        }
        FUN3(VAR5[0]);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}