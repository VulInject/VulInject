#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    VAR4 * VAR5;
    twoIntsStruct VAR6[50];
    twoIntsStruct VAR7[100];
    if(VAR2)
    {
        VAR5 = VAR6;
    }
    {
        twoIntsStruct VAR8[100];
        {
            size_t VAR9;
            for (VAR9 = 0; VAR9 < 100; VAR9++)
            {
                VAR8[VAR9].VAR10 = 0;
                VAR8[VAR9].VAR11 = 0;
            }
        }
        memcpy(VAR5, VAR8, 100*sizeof(VAR4));
        FUN2(&VAR5[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}