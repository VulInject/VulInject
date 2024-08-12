#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    twoIntsStruct VAR4[10];
    VAR3 = VAR4;
    if(5==5)
    {
        ; 
    }
    if(5==5)
    {
        {
            int VAR5;
            for(VAR5=0; VAR5<10; VAR5++)
            {
                FUN2(VAR3[VAR5].VAR6);
                FUN2(VAR3[VAR5].VAR7);
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