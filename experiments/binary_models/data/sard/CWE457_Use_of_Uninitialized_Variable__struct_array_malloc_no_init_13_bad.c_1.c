#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR3 = (VAR2 *)malloc(10*sizeof(VAR2));
    if (VAR3 == NULL) {FUN2(-1);}
    if(VAR4==5)
    {
        ; 
    }
    if(VAR4==5)
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
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}