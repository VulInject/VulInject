#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    if(5==5)
    {
        fscanf(stdin, "", &VAR2);
    }
    if(5==5)
    {
        {
            int VAR3;
            int VAR4[10] = { 0 };
            if (VAR2 >= 0)
            {
                VAR4[VAR2] = 1;
                for(VAR3 = 0; VAR3 < 10; VAR3++)
                {
                    FUN2(VAR4[VAR3]);
                }
            }
            else
            {
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