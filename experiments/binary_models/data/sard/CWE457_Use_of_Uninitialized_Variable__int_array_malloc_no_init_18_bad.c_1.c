#VAR1 ""
void FUN1()
{
    int * VAR2;
    VAR2 = (int *)malloc(10*sizeof(int));
    if (VAR2 == NULL) {FUN2(-1);}
    goto VAR3;
VAR3:
    ; 
    goto VAR4;
VAR4:
    {
        int VAR5;
        for(VAR5=0; VAR5<10; VAR5++)
        {
            FUN3(VAR2[VAR5]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}