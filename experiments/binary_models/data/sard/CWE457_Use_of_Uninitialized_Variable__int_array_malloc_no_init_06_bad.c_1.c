#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    int * VAR3;
    VAR3 = (int *)malloc(10*sizeof(int));
    if (VAR3 == NULL) {FUN2(-1);}
    if(VAR2==5)
    {
        ; 
    }
    if(VAR2==5)
    {
        {
            int VAR4;
            for(VAR4=0; VAR4<10; VAR4++)
            {
                FUN3(VAR3[VAR4]);
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