#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            int *VAR2 = NULL;
            if (VAR2 == NULL)
            {
                FUN3(*VAR2);
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