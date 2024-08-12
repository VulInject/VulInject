#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    if(VAR3==5)
    {
        VAR2 = VAR4 / 2 + 2; 
    }
    {
        size_t VAR5;
        int *VAR6;
        VAR6 = (int*)malloc(VAR2 * sizeof(int));
        if (VAR6 == NULL) {FUN2(-1);}
        for (VAR5 = 0; VAR5 < (VAR7)VAR2; VAR5++)
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