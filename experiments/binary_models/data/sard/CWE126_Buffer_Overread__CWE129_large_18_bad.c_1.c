#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    goto VAR3;
VAR3:
    VAR2 = 10;
    goto VAR4;
VAR4:
    {
        int VAR5[10] = { 0 };
        if (VAR2 >= 0)
        {
            FUN2(VAR5[VAR2]);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}