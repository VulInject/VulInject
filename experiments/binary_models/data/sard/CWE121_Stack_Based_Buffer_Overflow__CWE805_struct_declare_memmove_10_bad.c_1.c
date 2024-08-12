#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    twoIntsStruct VAR4[50];
    twoIntsStruct VAR5[100];
    if(VAR6)
    {
        VAR3 = VAR4;
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
        memmove(VAR3, VAR7, 100*sizeof(VAR2));
        FUN2(&VAR3[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}