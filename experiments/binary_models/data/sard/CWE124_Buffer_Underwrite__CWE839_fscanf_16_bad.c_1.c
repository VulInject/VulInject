#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    while(1)
    {
        fscanf(stdin, "", &VAR2);
        break;
    }
    while(1)
    {
        {
            int VAR3;
            int VAR4[10] = { 0 };
            if (VAR2 < 10)
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
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}