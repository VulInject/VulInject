#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    if(VAR2)
    {
        {
            int *VAR4 = NULL;
            VAR4 = (int *)malloc(sizeof(int));
            *VAR4 = 5;
            FUN2(*VAR4);
            if (VAR4 != NULL)
            {
                *VAR4 = 10;
            }
            FUN2(*VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}