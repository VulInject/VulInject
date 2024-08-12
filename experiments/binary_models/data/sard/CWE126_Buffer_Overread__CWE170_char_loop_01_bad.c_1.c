#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    {
        char VAR4[150], VAR5[100];
        int VAR6;
        memset(VAR4, '', 149);
        VAR4[149] = '';
        for(VAR6=0; VAR6 < 99; VAR6++)
        {
            VAR5[VAR6] = VAR4[VAR6];
        }
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}