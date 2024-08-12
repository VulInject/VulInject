#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    if(VAR4)
    {
        {
            wchar_t VAR6[150], VAR7[100];
            wmemset(VAR6, VAR8'', 149);
            VAR6[149] = VAR8'';
            memcpy(VAR7, VAR6, 99*sizeof(wchar_t));
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