#VAR1 ""
void FUN1()
{
    double * VAR2;
    double VAR3[10];
    VAR2 = VAR3;
    while(1)
    {
        ; 
        break;
    }
    while(1)
    {
        {
            int VAR4;
            for(VAR4=0; VAR4<10; VAR4++)
            {
                FUN2(VAR2[VAR4]);
            }
        }
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}