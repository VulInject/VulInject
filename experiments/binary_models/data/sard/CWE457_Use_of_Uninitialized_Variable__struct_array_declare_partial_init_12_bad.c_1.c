#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    twoIntsStruct VAR4[10];
    VAR3 = VAR4;
    if(FUN2())
    {
        {
            int VAR5;
            for(VAR5=0; VAR5<(10/2); VAR5++)
            {
                VAR3[VAR5].VAR6 = VAR5;
                VAR3[VAR5].VAR7 = VAR5;
            }
        }
    }
    else
    {
        {
            int VAR5;
            for(VAR5=0; VAR5<10; VAR5++)
            {
                VAR3[VAR5].VAR6 = VAR5;
                VAR3[VAR5].VAR7 = VAR5;
            }
        }
    }
    if(FUN2())
    {
        {
            int VAR5;
            for(VAR5=0; VAR5<10; VAR5++)
            {
                FUN3(VAR3[VAR5].VAR6);
                FUN3(VAR3[VAR5].VAR7);
            }
        }
    }
    else
    {
        {
            int VAR5;
            for(VAR5=0; VAR5<10; VAR5++)
            {
                VAR3[VAR5].VAR6 = VAR5;
                VAR3[VAR5].VAR7 = VAR5;
            }
        }
        {
            int VAR5;
            for(VAR5=0; VAR5<10; VAR5++)
            {
                FUN3(VAR3[VAR5].VAR6);
                FUN3(VAR3[VAR5].VAR7);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}