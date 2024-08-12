#VAR1 ""
void FUN1()
{
    int * VAR2;
    int VAR3[10];
    VAR2 = VAR3;
    if(5==5)
    {
        ; 
    }
    if(5==5)
    {
        {
            int VAR4;
            for(VAR4=0; VAR4<10; VAR4++)
            {
                FUN2(VAR2[VAR4]);
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