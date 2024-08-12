#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    while(1)
    {
        VAR2 = 10;
        break;
    }
    while(1)
    {
        {
            int VAR3[10] = { 0 };
            if (VAR2 >= 0)
            {
                FUN2(VAR3[VAR2]);
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