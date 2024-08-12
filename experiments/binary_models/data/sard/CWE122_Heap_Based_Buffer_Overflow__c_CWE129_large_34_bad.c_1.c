#VAR1 ""
typedef union
{
    int VAR2;
    int VAR3;
} VAR4;
void FUN1()
{
    int VAR5;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_unionType VAR6;
    VAR5 = -1;
    VAR5 = 10;
    VAR6.VAR2 = VAR5;
    {
        int VAR5 = VAR6.VAR3;
        {
            int VAR7;
            int * VAR8 = (int *)malloc(10 * sizeof(int));
            if (VAR8 == NULL) {FUN2(-1);}
            for (VAR7 = 0; VAR7 < 10; VAR7++)
            {
                VAR8[VAR7] = 0;
            }
            if (VAR5 >= 0)
            {
                VAR8[VAR5] = 1;
                for(VAR7 = 0; VAR7 < 10; VAR7++)
                {
                    FUN3(VAR8[VAR7]);
                }
            }
            else
            {
            }
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