#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    int VAR4;
    VAR4 = -1;
    if(VAR2)
    {
        VAR4 = VAR5 / 2 + 2; 
    }
    {
        size_t VAR6;
        int *VAR7;
        VAR7 = (int*)malloc(VAR4 * sizeof(int));
        if (VAR7 == NULL) {FUN2(-1);}
        for (VAR6 = 0; VAR6 < (VAR8)VAR4; VAR6++)
        {
            VAR7[VAR6] = 0; 
        }
        FUN3(VAR7[0]);
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}