#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            int *VAR2 = NULL;
            VAR2 = (int *)malloc(sizeof(int));
            *VAR2 = 5;
            FUN3(*VAR2);
            if (VAR2 != NULL)
            {
                *VAR2 = 10;
            }
            FUN3(*VAR2);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}