#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    if(VAR2==5)
    {
        {
            int *VAR3 = NULL;
            VAR3 = (int *)malloc(sizeof(int));
            *VAR3 = 5;
            FUN2(*VAR3);
            if (VAR3 != NULL)
            {
                *VAR3 = 10;
            }
            FUN2(*VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}