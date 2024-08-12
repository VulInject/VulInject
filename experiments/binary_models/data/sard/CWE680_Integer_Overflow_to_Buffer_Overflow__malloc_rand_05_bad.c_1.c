#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    int VAR4;
    VAR4 = -1;
    if(VAR2)
    {
        VAR4 = FUN2();
    }
    {
        size_t VAR5;
        int *VAR6;
        VAR6 = (int*)malloc(VAR4 * sizeof(int));
        if (VAR6 == NULL) {FUN3(-1);}
        for (VAR5 = 0; VAR5 < (VAR7)VAR4; VAR5++)
        {
            VAR6[VAR5] = 0; 
        }
        FUN4(VAR6[0]);
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}