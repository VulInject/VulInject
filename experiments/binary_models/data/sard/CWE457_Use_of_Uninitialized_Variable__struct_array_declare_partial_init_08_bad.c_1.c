#VAR1 ""
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    VAR2 * VAR3;
    twoIntsStruct VAR4[10];
    VAR3 = VAR4;
    if(FUN1())
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
    if(FUN1())
    {
        {
            int VAR5;
            for(VAR5=0; VAR5<10; VAR5++)
            {
                FUN4(VAR3[VAR5].VAR6);
                FUN4(VAR3[VAR5].VAR7);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}