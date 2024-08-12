#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(5==5)
    {
        {
            char VAR4[150], VAR5[100];
            memset(VAR4, '', 149);
            VAR4[149] = '';
            strncpy(VAR5, VAR4, 99);
            FUN2(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}