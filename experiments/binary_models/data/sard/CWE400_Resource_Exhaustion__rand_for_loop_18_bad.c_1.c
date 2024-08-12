#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    goto VAR3;
VAR3:
    VAR2 = FUN2();
    goto VAR4;
VAR4:
    {
        size_t VAR5 = 0;
        for (VAR5 = 0; VAR5 < (VAR6)VAR2; VAR5++)
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