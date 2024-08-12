#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    double * VAR4;
    double VAR5[10];
    VAR4 = VAR5;
    if(VAR2)
    {
        {
            int VAR6;
            for(VAR6=0; VAR6<(10/2); VAR6++)
            {
                VAR4[VAR6] = (double)VAR6;
            }
        }
    }
    if(VAR2)
    {
        {
            int VAR6;
            for(VAR6=0; VAR6<10; VAR6++)
            {
                FUN2(VAR4[VAR6]);
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