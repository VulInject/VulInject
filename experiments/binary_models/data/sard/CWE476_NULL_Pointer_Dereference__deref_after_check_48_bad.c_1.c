#VAR1 ""
void FUN1()
{
    if(VAR2==5)
    {
        {
            int *VAR3 = NULL;
            if (VAR3 == NULL)
            {
                FUN2(*VAR3);
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