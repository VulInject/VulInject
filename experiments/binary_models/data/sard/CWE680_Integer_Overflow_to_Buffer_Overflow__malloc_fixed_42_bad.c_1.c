#VAR1 ""
int FUN1(int VAR2)
{
    VAR2 = VAR3 / 2 + 2; 
    return VAR2;
}
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = FUN1(VAR2);
    {
        size_t VAR4;
        int *VAR5;
        VAR5 = (int*)malloc(VAR2 * sizeof(int));
        if (VAR5 == NULL) {FUN3(-1);}
        for (VAR4 = 0; VAR4 < (VAR6)VAR2; VAR4++)
        {
            VAR5[VAR4] = 0; 
        }
        FUN4(VAR5[0]);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}