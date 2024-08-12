#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    twoIntsStruct VAR4[10];
    VAR3 = VAR4;
    if(VAR5)
    {
        {
            int VAR6;
            for(VAR6=0; VAR6<(10/2); VAR6++)
            {
                VAR3[VAR6].VAR7 = VAR6;
                VAR3[VAR6].VAR8 = VAR6;
            }
        }
    }
    if(VAR5)
    {
        {
            int VAR6;
            for(VAR6=0; VAR6<10; VAR6++)
            {
                FUN2(VAR3[VAR6].VAR7);
                FUN2(VAR3[VAR6].VAR8);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}