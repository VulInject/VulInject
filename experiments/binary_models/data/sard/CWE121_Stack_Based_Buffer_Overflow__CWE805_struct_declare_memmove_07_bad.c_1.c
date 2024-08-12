#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    VAR3 * VAR4;
    twoIntsStruct VAR5[50];
    twoIntsStruct VAR6[100];
    if(VAR2==5)
    {
        VAR4 = VAR5;
    }
    {
        twoIntsStruct VAR7[100];
        {
            size_t VAR8;
            for (VAR8 = 0; VAR8 < 100; VAR8++)
            {
                VAR7[VAR8].VAR9 = 0;
                VAR7[VAR8].VAR10 = 0;
            }
        }
        memmove(VAR4, VAR7, 100*sizeof(VAR3));
        FUN2(&VAR4[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}