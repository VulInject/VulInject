#VAR1 ""
void FUN1()
{
    double * VAR2;
    double VAR3[10];
    VAR2 = VAR3;
    goto VAR4;
VAR4:
    ; 
    goto VAR5;
VAR5:
    {
        int VAR6;
        for(VAR6=0; VAR6<10; VAR6++)
        {
            FUN2(VAR2[VAR6]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}