#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = (VAR4 *)malloc(10*sizeof(VAR4));
    if (VAR5 == NULL) {FUN2(-1);}
    if(VAR2)
    {
        {
            int VAR6;
            for(VAR6=0; VAR6<(10/2); VAR6++)
            {
                VAR5[VAR6].VAR7 = VAR6;
                VAR5[VAR6].VAR8 = VAR6;
            }
        }
    }
    if(VAR2)
    {
        {
            int VAR6;
            for(VAR6=0; VAR6<10; VAR6++)
            {
                FUN3(VAR5[VAR6].VAR7);
                FUN3(VAR5[VAR6].VAR8);
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