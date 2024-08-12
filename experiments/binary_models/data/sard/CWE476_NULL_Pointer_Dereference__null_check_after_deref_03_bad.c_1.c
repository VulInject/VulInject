#VAR1 ""
void FUN1()
{
    if(5==5)
    {
        {
            int *VAR2 = NULL;
            VAR2 = (int *)malloc(sizeof(int));
            *VAR2 = 5;
            FUN2(*VAR2);
            if (VAR2 != NULL)
            {
                *VAR2 = 10;
            }
            FUN2(*VAR2);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}