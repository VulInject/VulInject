#VAR1 ""
typedef union
{
    int VAR2;
    int VAR3;
} VAR4;
void FUN1()
{
    int VAR5;
    CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_34_unionType VAR6;
    VAR5 = -1;
    fscanf(stdin, "", &VAR5);
    VAR6.VAR2 = VAR5;
    {
        int VAR5 = VAR6.VAR3;
        {
            size_t VAR7;
            int *VAR8;
            VAR8 = (int*)malloc(VAR5 * sizeof(int));
            if (VAR8 == NULL) {FUN2(-1);}
            for (VAR7 = 0; VAR7 < (VAR9)VAR5; VAR7++)
            {
                VAR8[VAR7] = 0; 
            }
            FUN3(VAR8[0]);
            free(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}