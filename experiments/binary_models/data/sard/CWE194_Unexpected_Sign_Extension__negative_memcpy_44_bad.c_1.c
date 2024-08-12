#VAR1 ""
void FUN1(short VAR2)
{
    {
        char VAR3[100];
        char VAR4[100] = "";
        memset(VAR3, '', 100-1);
        VAR3[100-1] = '';
        if (VAR2 < 100)
        {
            memcpy(VAR4, VAR3, VAR2);
            VAR4[VAR2] = ''; 
        }
        FUN2(VAR4);
    }
}
void FUN3()
{
    short VAR2;
    void (*VAR5) (short) = VAR6;
    VAR2 = 0;
    VAR2 = -1;
    FUN4(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}