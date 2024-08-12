#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    twoIntsStruct VAR4[50];
    twoIntsStruct VAR5[100];
    goto VAR6;
VAR6:
    VAR3 = VAR4;
    {
        twoIntsStruct VAR6[100];
        {
            size_t VAR7;
            for (VAR7 = 0; VAR7 < 100; VAR7++)
            {
                VAR6[VAR7].VAR8 = 0;
                VAR6[VAR7].VAR9 = 0;
            }
        }
        memmove(VAR3, VAR6, 100*sizeof(VAR2));
        FUN2(&VAR3[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}