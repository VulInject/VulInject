#VAR1 ""
void FUN1()
{
    short VAR2;
    short *VAR3 = &VAR2;
    short *VAR4 = &VAR2;
    VAR2 = 0;
    {
        short VAR2 = *VAR3;
        VAR2 = (short)FUN2();
        *VAR3 = VAR2;
    }
    {
        short VAR2 = *VAR4;
        if(VAR2 > 0) 
        {
            short VAR5 = VAR2 * 2;
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}