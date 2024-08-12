#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR3 = (VAR2 *)malloc(10*sizeof(VAR2));
    if (VAR3 == NULL) {FUN2(-1);}
    if(FUN3())
    {
        ; 
    }
    if(FUN3())
    {
        {
            int VAR4;
            for(VAR4=0; VAR4<10; VAR4++)
            {
                FUN4(VAR3[VAR4].VAR5);
                FUN4(VAR3[VAR4].VAR6);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}