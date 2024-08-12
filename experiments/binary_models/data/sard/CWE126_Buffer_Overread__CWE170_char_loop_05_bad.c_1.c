#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    if(VAR4)
    {
        {
            char VAR6[150], VAR7[100];
            int VAR8;
            memset(VAR6, '', 149);
            VAR6[149] = '';
            for(VAR8=0; VAR8 < 99; VAR8++)
            {
                VAR7[VAR8] = VAR6[VAR8];
            }
            FUN2(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}