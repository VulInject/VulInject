#VAR1 ""
void FUN1()
{
    while(1)
    {
        {
            int *VAR2 = NULL;
            if (VAR2 == NULL)
            {
                FUN2(*VAR2);
            }
        }
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}