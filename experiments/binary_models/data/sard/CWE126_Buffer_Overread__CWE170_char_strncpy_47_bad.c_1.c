#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(FUN2())
    {
        {
            char VAR4[150], VAR5[100];
            memset(VAR4, '', 149);
            VAR4[149] = '';
            strncpy(VAR5, VAR4, 99);
            FUN3(VAR5);
        }
    }
    else
    {
        {
            char VAR4[150], VAR5[100];
            memset(VAR4, '', 149);
            VAR4[149] = '';
            strncpy(VAR5, VAR4, 99);
            VAR5[99] = ''; 
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