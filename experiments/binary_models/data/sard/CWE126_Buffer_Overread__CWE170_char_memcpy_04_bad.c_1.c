#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    if(VAR4)
    {
        {
            char VAR6[150], VAR7[100];
            memset(VAR6, '', 149);
            VAR6[149] = '';
            memcpy(VAR7, VAR6, 99*sizeof(char));
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