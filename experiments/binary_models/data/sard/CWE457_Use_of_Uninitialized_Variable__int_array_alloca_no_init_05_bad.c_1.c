#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    int * VAR4;
    VAR4 = (int *)FUN2(10*sizeof(int));
    if(VAR2)
    {
        ; 
    }
    if(VAR2)
    {
        {
            int VAR5;
            for(VAR5=0; VAR5<10; VAR5++)
            {
                FUN3(VAR4[VAR5]);
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